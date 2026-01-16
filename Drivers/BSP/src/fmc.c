/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : FMC.c
  * Description        : This file provides code for the configuration
  *                      of the FMC peripheral.
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
#include "fmc.h"
#include "main.h"
#include "delay.h"
/* USER CODE BEGIN 0 */
uint8_t sdram_send_cmd(uint8_t bankx, uint8_t cmd, uint8_t refresh, uint16_t regval)
{
    uint32_t target_bank = 0;
    FMC_SDRAM_CommandTypeDef command;

    if (bankx == 0)
    {
        target_bank = FMC_SDRAM_CMD_TARGET_BANK1;
    }
    else if (bankx == 1)
    {
        target_bank = FMC_SDRAM_CMD_TARGET_BANK2;
    }

    command.CommandMode = cmd;                                              /* 命令 */
    command.CommandTarget = target_bank;                                    /* 目标SDRAM存储区域 */
    command.AutoRefreshNumber = refresh;                                    /* 自刷新次数 */
    command.ModeRegisterDefinition = regval;                                /* 要写入模式寄存器的值 */

    if (HAL_SDRAM_SendCommand(&hsdram1, &command, 0X1000) == HAL_OK) /* 向SDRAM发送命令 */
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void sdram_initialization_sequence(void)
{
    uint32_t temp = 0;

   
    sdram_send_cmd(0, FMC_SDRAM_CMD_CLK_ENABLE, 1, 0);
    delay_us(500);
    sdram_send_cmd(0, FMC_SDRAM_CMD_PALL, 1, 0);
    sdram_send_cmd(0, FMC_SDRAM_CMD_AUTOREFRESH_MODE, 8, 0);

    temp = (uint32_t)SDRAM_MODEREG_BURST_LENGTH_1  |
              SDRAM_MODEREG_BURST_TYPE_SEQUENTIAL  |
              SDRAM_MODEREG_CAS_LATENCY_2          |
              SDRAM_MODEREG_OPERATING_MODE_STANDARD|
              SDRAM_MODEREG_WRITEBURST_MODE_SINGLE;
    sdram_send_cmd(0, FMC_SDRAM_CMD_LOAD_MODE, 1, temp);
}
/* USER CODE END 0 */

SDRAM_HandleTypeDef hsdram1;

/* FMC initialization function */
void MX_FMC_Init(void)
{
    /* USER CODE BEGIN FMC_Init 0 */

    /* USER CODE END FMC_Init 0 */

    FMC_SDRAM_TimingTypeDef SdramTiming = {0};

    /* USER CODE BEGIN FMC_Init 1 */

    /* USER CODE END FMC_Init 1 */

    /** Perform the SDRAM1 memory initialization sequence
    */
    hsdram1.Instance                = FMC_SDRAM_DEVICE;
    hsdram1.Init.SDBank             = FMC_SDRAM_BANK1;
    hsdram1.Init.ColumnBitsNumber   = FMC_SDRAM_COLUMN_BITS_NUM_9;
    hsdram1.Init.RowBitsNumber      = FMC_SDRAM_ROW_BITS_NUM_13;
    hsdram1.Init.MemoryDataWidth    = FMC_SDRAM_MEM_BUS_WIDTH_16;
    hsdram1.Init.InternalBankNumber = FMC_SDRAM_INTERN_BANKS_NUM_4;
    hsdram1.Init.CASLatency         = FMC_SDRAM_CAS_LATENCY_2;
    hsdram1.Init.WriteProtection    = FMC_SDRAM_WRITE_PROTECTION_DISABLE;
    hsdram1.Init.SDClockPeriod      = FMC_SDRAM_CLOCK_PERIOD_2;
    hsdram1.Init.ReadBurst          = FMC_SDRAM_RBURST_ENABLE;
    hsdram1.Init.ReadPipeDelay      = FMC_SDRAM_RPIPE_DELAY_1;
    /* SdramTiming */
    SdramTiming.LoadToActiveDelay    = 2;
    SdramTiming.ExitSelfRefreshDelay = 8;
    SdramTiming.SelfRefreshTime      = 7;
    SdramTiming.RowCycleDelay        = 7;
    SdramTiming.WriteRecoveryTime    = 2;
    SdramTiming.RPDelay              = 2;
    SdramTiming.RCDDelay             = 2;

    if (HAL_SDRAM_Init(&hsdram1, &SdramTiming) != HAL_OK)
    {
      Error_Handler( );
    }

    /* USER CODE BEGIN FMC_Init 2 */
    sdram_initialization_sequence();
    HAL_SDRAM_ProgramRefreshRate(&hsdram1, 839);
    /* USER CODE END FMC_Init 2 */
}

static uint32_t FMC_Initialized = 0;

static void HAL_FMC_MspInit(void){
    /* USER CODE BEGIN FMC_MspInit 0 */

    /* USER CODE END FMC_MspInit 0 */
    GPIO_InitTypeDef GPIO_InitStruct = {0};
    if (FMC_Initialized) {
      return;
    }
    FMC_Initialized = 1;

    /* Peripheral clock enable */
    __HAL_RCC_FMC_CLK_ENABLE();
    __HAL_RCC_GPIOC_CLK_ENABLE();
    __HAL_RCC_GPIOD_CLK_ENABLE();
    __HAL_RCC_GPIOE_CLK_ENABLE();
    __HAL_RCC_GPIOF_CLK_ENABLE();
    __HAL_RCC_GPIOG_CLK_ENABLE();


    GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_2|GPIO_PIN_3;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;     /* 推挽复用 */
    GPIO_InitStruct.Pull = GPIO_PULLUP;         /* 上拉 */
    GPIO_InitStruct.Speed = GPIO_SPEED_HIGH;    /* 高速 */
    GPIO_InitStruct.Alternate = GPIO_AF12_FMC;  /* 复用为FMC */
    HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);     /* 初始化PC0,2,3 */

    GPIO_InitStruct.Pin = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_8 | GPIO_PIN_9 | GPIO_PIN_10 | GPIO_PIN_14 | GPIO_PIN_15;
    HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);     /* 初始化PD0,1,8,9,10,14,15 */

    GPIO_InitStruct.Pin = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_7 | GPIO_PIN_8 | GPIO_PIN_9 | GPIO_PIN_10 | GPIO_PIN_11 | GPIO_PIN_12 | GPIO_PIN_13 | GPIO_PIN_14 | GPIO_PIN_15;
    HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);     /* 初始化PE0,1,7,8,9,10,11,12,13,14,15 */

    GPIO_InitStruct.Pin = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_11 | GPIO_PIN_12 | GPIO_PIN_13 | GPIO_PIN_14 | GPIO_PIN_15;
    HAL_GPIO_Init(GPIOF, &GPIO_InitStruct);     /* 初始化PF0,1,2,3,4,5,11,12,13,14,15 */

    GPIO_InitStruct.Pin = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_8 | GPIO_PIN_15;
    HAL_GPIO_Init(GPIOG, &GPIO_InitStruct);     /* 初始化PG0,1,2,4,5,8,15 */

    /* USER CODE BEGIN FMC_MspInit 1 */

    /* USER CODE END FMC_MspInit 1 */
}

void HAL_SDRAM_MspInit(SDRAM_HandleTypeDef* sdramHandle){
  /* USER CODE BEGIN SDRAM_MspInit 0 */

  /* USER CODE END SDRAM_MspInit 0 */
  HAL_FMC_MspInit();
  /* USER CODE BEGIN SDRAM_MspInit 1 */

  /* USER CODE END SDRAM_MspInit 1 */
}


/**
  * @}
  */

/**
  * @}
  */
