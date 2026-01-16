/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    ltdc.h
  * @brief   This file contains all the function prototypes for
  *          the ltdc.c file
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
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __LTDC_H__
#define __LTDC_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

extern LTDC_HandleTypeDef hltdc;

/* USER CODE BEGIN Private defines */
typedef struct
{
    uint32_t pwidth;      /* LTDC面板的宽度,固定参数,不随显示方向改变,如果为0,说明没有任何RGB屏接入 */
    uint32_t pheight;     /* LTDC面板的高度,固定参数,不随显示方向改变 */
    uint16_t hsw;         /* 水平同步宽度 */
    uint16_t vsw;         /* 垂直同步宽度 */
    uint16_t hbp;         /* 水平后廊 */
    uint16_t vbp;         /* 垂直后廊 */
    uint16_t hfp;         /* 水平前廊 */
    uint16_t vfp;         /* 垂直前廊  */
    uint8_t activelayer;  /* 当前层编号:0/1 */
    uint8_t dir;          /* 0,竖屏;1,横屏; */
    uint16_t width;       /* LTDC宽度 */
    uint16_t height;      /* LTDC高度 */
    uint32_t pixsize;     /* 每个像素所占字节数 */
}_ltdc_dev;
extern _ltdc_dev ltdc;


/* 常用画笔颜色 */
#define WHITE           0xFFFF      /* 白色 */
#define BLACK           0x0000      /* 黑色 */
#define RED             0xF800      /* 红色 */
#define GREEN           0x07E0      /* 绿色 */
#define BLUE            0x001F      /* 蓝色 */
#define MAGENTA         0xF81F      /* 品红色/紫红色 = BLUE + RED */
#define YELLOW          0xFFE0      /* 黄色 = GREEN + RED */
#define CYAN            0x07FF      /* 青色 = GREEN + BLUE */

/* 非常用颜色 */
#define BROWN           0xBC40      /* 棕色 */
#define BRRED           0xFC07      /* 棕红色 */
#define GRAY            0x8430      /* 灰色 */
#define DARKBLUE        0x01CF      /* 深蓝色 */
#define LIGHTBLUE       0x7D7C      /* 浅蓝色 */
#define GRAYBLUE        0x5458      /* 灰蓝色 */
#define LIGHTGREEN      0x841F      /* 浅绿色 */
#define LGRAY           0xC618      /* 浅灰色(PANNEL),窗体背景色 */
#define LGRAYBLUE       0xA651      /* 浅灰蓝色(中间层颜色) */
#define LBBLUE          0x2B12      /* 浅棕蓝色(选择条目的反色) */


#define LTDC_BL_GPIO_PORT               GPIOB
#define LTDC_BL_GPIO_PIN                GPIO_PIN_5
#define LTDC_BL_GPIO_CLK_ENABLE()       do{ __HAL_RCC_GPIOB_CLK_ENABLE(); }while(0)

#define LTDC_BL(x)   do{ x ? \
                      HAL_GPIO_WritePin(LTDC_BL_GPIO_PORT, LTDC_BL_GPIO_PIN, GPIO_PIN_SET) : \
                      HAL_GPIO_WritePin(LTDC_BL_GPIO_PORT, LTDC_BL_GPIO_PIN, GPIO_PIN_RESET); \
                     }while(0)
/* USER CODE END Private defines */

void MX_LTDC_Init(void);

/* USER CODE BEGIN Prototypes */
void ltdc_fill(uint16_t sx, uint16_t sy, uint16_t ex, uint16_t ey, uint32_t color);
void ltdc_color_fill(uint16_t sx, uint16_t sy, uint16_t ex, uint16_t ey, uint16_t *color);
void ltdc_show_string(uint16_t x, uint16_t y, uint16_t width, uint16_t height, uint8_t size, char *p, uint16_t color);
void ltdc_clear(uint32_t color);
void ltdc_display_dir(uint8_t dir);
void ltdc_fill(uint16_t sx, uint16_t sy, uint16_t ex, uint16_t ey, uint32_t color);
/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __LTDC_H__ */

