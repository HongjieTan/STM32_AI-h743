/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
#include "main.h"
#include "crc.h"
#include "dcmi.h"
#include "lcd.h"
#include "fmc.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "ov5640.h"
#include "stdio.h"
#include "delay.h"
#include <math.h>
#include <stdint.h>
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */
CLASSES_TABLE;
uint8_t *NN_InputImage_Buffer=NULL;
uint8_t *NN_OutputData_Buffer=NULL;
char const* nn_class_name;
float nn_class_proba;
const char** nn_output_labels = classes_table;
int ai_ranking[AI_NET_OUTPUT_SIZE];
__attribute__((section(".NN_Activation_Buffer")))
__attribute__ ((aligned (32)))
  uint8_t NN_Activation_Buffer[AI_NETWORK_DATA_ACTIVATIONS_SIZE + 32 - (AI_ACTIVATION_SIZE_BYTES%32)];
/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MPU_Config(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
void Network_Postprocess(void) {
    Output_Dequantize(NN_OutputData_Buffer);
    for (int i = 0; i < AI_NET_OUTPUT_SIZE; i++)
    {
        ai_ranking[i] = i;
    }

    Utility_Bubblesort((float*)(NN_OutputData_Buffer), ai_ranking, AI_NET_OUTPUT_SIZE);

    nn_class_name=nn_output_labels[ai_ranking[0]];
    nn_class_proba=*((float*)(NN_OutputData_Buffer)+0);
    nn_class_proba = nn_class_proba*100;
}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
    /* USER CODE BEGIN 1 */
    uint16_t* framebuf;
    void *input_data_ptr, *output_data_ptr;
    char msg[100] = " ";
    uint16_t num = 5;
    float_t max_prob = 0;
    /* USER CODE END 1 */

    /* Enable I-Cache---------------------------------------------------------*/
    SCB_EnableICache();

    /* Enable D-Cache---------------------------------------------------------*/
    SCB_EnableDCache();

    SCB->CACR |= 1 << 2;
    /* MCU Configuration--------------------------------------------------------*/

    /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
    HAL_Init();

    /* MPU Configuration--------------------------------------------------------*/
    MPU_Config();

    /* USER CODE BEGIN Init */

    /* USER CODE END Init */

    /* Configure the system clock */
    SystemClock_Config();
    delay_init(400);
    /* USER CODE BEGIN SysInit */

    /* USER CODE END SysInit */

    /* Initialize all configured peripherals */
    MX_FMC_Init();
    lcd_init();
    MX_CRC_Init();
    MX_DCMI_Init();
    delay_ms(1000);
    while (ov5640_init());
    dcmi_start();
    ai_init((void*)(NN_Activation_Buffer), &input_data_ptr, &output_data_ptr);

    if(input_data_ptr != NULL)
      NN_InputImage_Buffer = input_data_ptr;

    if(output_data_ptr != NULL)
      NN_OutputData_Buffer = output_data_ptr;

    if (NN_InputImage_Buffer == NULL || NN_OutputData_Buffer == NULL)
    {
      Error_Handler();
    }
    /* USER CODE BEGIN 2 */
    lcd_display_dir(1);
    (void)get_frame_buf();
    /* USER CODE END 2 */
    
    /* Infinite loop */
    while (1)
    {
        framebuf = get_frame_buf();
        if(framebuf!=NULL){
            lcd_color_fill(0, 0, IMAGE_WIDTH - 1, IMAGE_HEIGHT - 1, framebuf);
            Network_Preprocess((uint8_t*)framebuf, NN_InputImage_Buffer);
            ai_run(NN_InputImage_Buffer, NN_OutputData_Buffer);
            Network_Postprocess();
            sprintf(msg, "%s %d%%", nn_output_labels[ai_ranking[0]], (int)nn_class_proba);
            lcd_show_string(230, 5, 80, 200, 16, msg, BLACK);
            start_new_frame();           
        }
        delay_ms(10);
    }
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
    RCC_OscInitTypeDef RCC_OscInitStruct = {0};
    RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

    MODIFY_REG(PWR->CR3, PWR_CR3_SCUEN, 0);
    __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
    while ((PWR->D3CR & (PWR_D3CR_VOSRDY)) != PWR_D3CR_VOSRDY);
    /** Initializes the RCC Oscillators according to the specified parameters
    * in the RCC_OscInitTypeDef structure.
    */
    RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE | RCC_OSCILLATORTYPE_HSI48;
    RCC_OscInitStruct.HSEState       = RCC_HSE_ON;
    RCC_OscInitStruct.HSIState       = RCC_HSI_OFF;
    RCC_OscInitStruct.CSIState       = RCC_CSI_OFF;
    RCC_OscInitStruct.HSI48State     = RCC_HSI48_ON;
    RCC_OscInitStruct.PLL.PLLState   = RCC_PLL_ON;
    RCC_OscInitStruct.PLL.PLLSource  = RCC_PLLSOURCE_HSE;
    RCC_OscInitStruct.PLL.PLLM       = 5;
    RCC_OscInitStruct.PLL.PLLN       = 160;
    RCC_OscInitStruct.PLL.PLLP       = 2;
    RCC_OscInitStruct.PLL.PLLQ       = 4;
    RCC_OscInitStruct.PLL.PLLRGE     = RCC_PLL1VCIRANGE_2;
    RCC_OscInitStruct.PLL.PLLVCOSEL  = RCC_PLL1VCOWIDE;
    RCC_OscInitStruct.PLL.PLLFRACN   = 0;
    if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
    {
      Error_Handler();
    }

    /** Initializes the CPU, AHB and APB buses clocks
    */
    RCC_ClkInitStruct.ClockType      = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                                     |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2
                                   |RCC_CLOCKTYPE_D3PCLK1|RCC_CLOCKTYPE_D1PCLK1;
    RCC_ClkInitStruct.SYSCLKSource   = RCC_SYSCLKSOURCE_PLLCLK;
    RCC_ClkInitStruct.SYSCLKDivider  = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.AHBCLKDivider  = RCC_HCLK_DIV2;
    RCC_ClkInitStruct.APB3CLKDivider = RCC_APB3_DIV2;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_APB1_DIV2;
    RCC_ClkInitStruct.APB2CLKDivider = RCC_APB2_DIV2;
    RCC_ClkInitStruct.APB4CLKDivider = RCC_APB4_DIV2;

    if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
    {
      Error_Handler();
    }
    HAL_PWREx_EnableUSBVoltageDetector();
    __HAL_RCC_CSI_ENABLE() ;
    __HAL_RCC_SYSCFG_CLK_ENABLE() ;
    HAL_EnableCompensationCell();
}

/* USER CODE BEGIN 4 */
uint8_t mpu_set_protection(uint32_t baseaddr, uint32_t size, uint32_t rnum, uint8_t de, uint8_t ap, uint8_t sen, uint8_t cen, uint8_t ben)
{
    MPU_Region_InitTypeDef mpu_region_init_handle;

    HAL_MPU_Disable();

    mpu_region_init_handle.Enable           = MPU_REGION_ENABLE;
    mpu_region_init_handle.Number           = rnum;
    mpu_region_init_handle.BaseAddress      = baseaddr;
    mpu_region_init_handle.DisableExec      = de;
    mpu_region_init_handle.Size             = size;
    mpu_region_init_handle.SubRegionDisable = 0X00;
    mpu_region_init_handle.TypeExtField     = MPU_TEX_LEVEL0;
    mpu_region_init_handle.AccessPermission = (uint8_t)ap;
    mpu_region_init_handle.IsShareable      = sen;
    mpu_region_init_handle.IsCacheable      = cen;
    mpu_region_init_handle.IsBufferable     = ben;
    HAL_MPU_ConfigRegion(&mpu_region_init_handle);
    HAL_MPU_Enable(MPU_PRIVILEGED_DEFAULT);
    return 0;
}


/* USER CODE END 4 */

/* MPU Configuration */

void MPU_Config(void)
{
  mpu_set_protection( 0x20000000,
                        MPU_REGION_SIZE_128KB,
                        MPU_REGION_NUMBER1, 0,
                        MPU_REGION_FULL_ACCESS,
                        MPU_ACCESS_NOT_SHAREABLE,
                        MPU_ACCESS_CACHEABLE,
                        MPU_ACCESS_BUFFERABLE);

    mpu_set_protection( 0x24000000,
                        MPU_REGION_SIZE_512KB,
                        MPU_REGION_NUMBER2, 0,
                        MPU_REGION_FULL_ACCESS,
                        MPU_ACCESS_SHAREABLE,
                        MPU_ACCESS_CACHEABLE,
                        MPU_ACCESS_NOT_BUFFERABLE);

    mpu_set_protection( 0x30000000,
                        MPU_REGION_SIZE_512KB,
                        MPU_REGION_NUMBER3, 0,
                        MPU_REGION_FULL_ACCESS,
                        MPU_ACCESS_NOT_SHAREABLE,
                        MPU_ACCESS_CACHEABLE,
                        MPU_ACCESS_BUFFERABLE);

    mpu_set_protection( 0x38000000,
                        MPU_REGION_SIZE_64KB,
                        MPU_REGION_NUMBER4, 0,
                        MPU_REGION_FULL_ACCESS,
                        MPU_ACCESS_NOT_SHAREABLE,
                        MPU_ACCESS_CACHEABLE,
                        MPU_ACCESS_BUFFERABLE);

    mpu_set_protection( 0x60000000,
                        MPU_REGION_SIZE_64MB,
                        MPU_REGION_NUMBER5, 0,
                        MPU_REGION_FULL_ACCESS,
                        MPU_ACCESS_NOT_SHAREABLE,
                        MPU_ACCESS_NOT_CACHEABLE,
                        MPU_ACCESS_NOT_BUFFERABLE);

    mpu_set_protection( 0xC0000000,
                        MPU_REGION_SIZE_32MB,
                        MPU_REGION_NUMBER6, 0,
                        MPU_REGION_FULL_ACCESS,
                        MPU_ACCESS_NOT_SHAREABLE,
                        MPU_ACCESS_CACHEABLE,
                        MPU_ACCESS_BUFFERABLE);

    mpu_set_protection( 0x80000000,
                        MPU_REGION_SIZE_256MB,
                        MPU_REGION_NUMBER7, 1,
                        MPU_REGION_FULL_ACCESS,
                        MPU_ACCESS_NOT_SHAREABLE,
                        MPU_ACCESS_NOT_CACHEABLE,
                        MPU_ACCESS_NOT_BUFFERABLE);

}

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
