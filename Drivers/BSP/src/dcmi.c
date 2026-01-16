/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    dcmi.c
  * @brief   This file provides code for the configuration
  *          of the DCMI instances.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "dcmi.h"
#include "ltdc.h"
/* USER CODE BEGIN 0 */
uint32_t curline = 0;
uint8_t image_frame_ready = 0;
#define jpeg_line_size IMAGE_WIDTH   
__attribute__((section(".dcmi_line_buf")))
__attribute__ ((aligned (32)))
 uint16_t dcmi_line_buf[2][jpeg_line_size+64];
__attribute__((section(".dcmi_frame_buf")))
__attribute__ ((aligned (32)))
 uint16_t dcmi_frame_buf[IMAGE_HEIGHT*IMAGE_WIDTH];
/* USER CODE END 0 */

DCMI_HandleTypeDef hdcmi;
DMA_HandleTypeDef hdma_dcmi;

/* DCMI init function */
void MX_DCMI_Init(void)
{

    /* USER CODE BEGIN DCMI_Init 0 */

    /* USER CODE END DCMI_Init 0 */

    /* USER CODE BEGIN DCMI_Init 1 */

    /* USER CODE END DCMI_Init 1 */
    hdcmi.Instance = DCMI;
    hdcmi.Init.SynchroMode = DCMI_SYNCHRO_HARDWARE;
    hdcmi.Init.PCKPolarity = DCMI_PCKPOLARITY_RISING;
    hdcmi.Init.VSPolarity = DCMI_VSPOLARITY_LOW;
    hdcmi.Init.HSPolarity = DCMI_HSPOLARITY_LOW;
    hdcmi.Init.CaptureRate = DCMI_CR_ALL_FRAME;
    hdcmi.Init.ExtendedDataMode = DCMI_EXTEND_DATA_8B;
    if (HAL_DCMI_Init(&hdcmi) != HAL_OK)
    {
      Error_Handler();
    }
    /* USER CODE BEGIN DCMI_Init 2 */
    __HAL_DCMI_ENABLE_IT(&hdcmi, DCMI_IT_FRAME);
    __HAL_DCMI_ENABLE(&hdcmi);
    __HAL_DCMI_DISABLE_IT(&hdcmi, DCMI_IT_LINE | DCMI_IT_VSYNC | DCMI_IT_ERR | DCMI_IT_OVR);
    HAL_NVIC_SetPriority(DCMI_IRQn, 2, 2);
    HAL_NVIC_EnableIRQ(DCMI_IRQn);
    /* USER CODE END DCMI_Init 2 */

}

void HAL_DCMI_MspInit(DCMI_HandleTypeDef* dcmiHandle)
{

    GPIO_InitTypeDef GPIO_InitStruct = {0};
    if(dcmiHandle->Instance==DCMI)
    {
        /* USER CODE BEGIN DCMI_MspInit 0 */

        /* USER CODE END DCMI_MspInit 0 */
        /* DCMI clock enable */
        __HAL_RCC_DMA1_CLK_ENABLE();
        __HAL_RCC_DCMI_CLK_ENABLE();
        __HAL_RCC_GPIOA_CLK_ENABLE();
        __HAL_RCC_GPIOB_CLK_ENABLE();
        __HAL_RCC_GPIOC_CLK_ENABLE();
        __HAL_RCC_GPIOD_CLK_ENABLE();
        __HAL_RCC_GPIOH_CLK_ENABLE();

        GPIO_InitStruct.Pin = GPIO_PIN_6;
        GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
        GPIO_InitStruct.Pull = GPIO_PULLUP;
        GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
        GPIO_InitStruct.Alternate = GPIO_AF13_DCMI;
        HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

        GPIO_InitStruct.Pin = GPIO_PIN_7 | GPIO_PIN_8 | GPIO_PIN_9;
        HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

        GPIO_InitStruct.Pin = GPIO_PIN_6 | GPIO_PIN_7 | GPIO_PIN_8 | GPIO_PIN_9 | GPIO_PIN_11;
        HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

        GPIO_InitStruct.Pin = GPIO_PIN_3;
        HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);
        GPIO_InitStruct.Pin = GPIO_PIN_8;
        HAL_GPIO_Init(GPIOH, &GPIO_InitStruct);
        /* DCMI DMA Init */
        /* DCMI Init */
        __HAL_LINKDMA(&hdcmi,DMA_Handle,hdma_dcmi);
        __HAL_DMA_DISABLE_IT(&hdma_dcmi, DMA_IT_TC);
        hdma_dcmi.Instance = DMA1_Stream1;
        hdma_dcmi.Init.Request = DMA_REQUEST_DCMI;
        hdma_dcmi.Init.Direction = DMA_PERIPH_TO_MEMORY;
        hdma_dcmi.Init.PeriphInc = DMA_PINC_DISABLE;
        hdma_dcmi.Init.MemInc = DMA_MINC_ENABLE;
        hdma_dcmi.Init.PeriphDataAlignment = DMA_PDATAALIGN_WORD;
        hdma_dcmi.Init.MemDataAlignment = DMA_MDATAALIGN_HALFWORD;
        hdma_dcmi.Init.Mode = DMA_CIRCULAR;
        hdma_dcmi.Init.Priority = DMA_PRIORITY_HIGH;
        hdma_dcmi.Init.FIFOMode = DMA_FIFOMODE_ENABLE;
        hdma_dcmi.Init.FIFOThreshold = DMA_FIFO_THRESHOLD_FULL;
        hdma_dcmi.Init.MemBurst = DMA_MBURST_SINGLE;
        hdma_dcmi.Init.PeriphBurst = DMA_PBURST_SINGLE;
        if (HAL_DMA_Init(&hdma_dcmi) != HAL_OK)
        {
          Error_Handler();
        }

        /* USER CODE BEGIN DCMI_MspInit 1 */
        __HAL_UNLOCK(&hdma_dcmi);
        HAL_DMAEx_MultiBufferStart(&hdma_dcmi, (uint32_t)&DCMI->DR, (uint32_t)dcmi_line_buf[0], (uint32_t)dcmi_line_buf[1], jpeg_line_size);
        __HAL_DMA_ENABLE_IT(&hdma_dcmi, DMA_IT_TC);
        HAL_NVIC_SetPriority(DMA1_Stream1_IRQn, 2, 3);
        HAL_NVIC_EnableIRQ(DMA1_Stream1_IRQn);
        /* USER CODE END DCMI_MspInit 1 */
    }
}

void dcmi_start(void)
{
    __HAL_DMA_ENABLE(&hdma_dcmi);
    DCMI->CR |= DCMI_CR_CAPTURE;
}

void HAL_DCMI_FrameEventCallback(DCMI_HandleTypeDef *hdcmi)
{
    __HAL_DCMI_CLEAR_FLAG(hdcmi, DCMI_FLAG_FRAMERI);
    if (image_frame_ready == 0){
        __HAL_DMA_DISABLE(&hdma_dcmi);
        image_frame_ready = 1;
    } else if(image_frame_ready == 2){
        __HAL_DMA_ENABLE(&hdma_dcmi);
        image_frame_ready = 0;
        curline = 0;
    }
    __HAL_DCMI_ENABLE_IT(hdcmi, DCMI_IT_FRAME);
}

uint16_t* get_frame_buf(void) {
    while(1 != image_frame_ready);
    return (uint16_t*)dcmi_frame_buf;
}

void start_new_frame(void) {
    image_frame_ready = 2;
}

void dcmi_rx_callback(void) {
    uint16_t *fbuf;
    uint32_t i = 0;
    uint16_t delay = 15;

    fbuf = dcmi_frame_buf + curline;

    if (DMA1_Stream1 -> CR & (1 << 19))
    {
        for (i = 0; i < delay; i++) {
            fbuf[jpeg_line_size-delay+i] = dcmi_line_buf[0][i];
        }
        for (i = delay; i < jpeg_line_size; i++) {
            fbuf[i-delay] = dcmi_line_buf[0][i];
        }
        curline += i;
    }
    else
    {
        for (i = 0; i < delay; i++) {
            fbuf[jpeg_line_size-delay+i] = dcmi_line_buf[1][i];
        }
        for (i = delay; i < jpeg_line_size; i++) {
            fbuf[i-delay] = dcmi_line_buf[1][i];
        }
        curline += i;
    }
}
/* USER CODE BEGIN 1 */

/* USER CODE END 1 */
