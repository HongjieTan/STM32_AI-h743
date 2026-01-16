/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    ltdc.c
  * @brief   This file provides code for the configuration
  *          of the LTDC instances.
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
#include "ltdc.h"
#include "delay.h"
#include "lcdfont.h"
/* USER CODE BEGIN 0 */
_ltdc_dev ltdc;
__attribute__((section(".ltdc_framebuf")))
__attribute__ ((aligned (32)))
 uint16_t ltdc_framebuf[800*480];
/* USER CODE END 0 */

LTDC_HandleTypeDef hltdc;

/* LTDC init function */
void ltdc_layer_window_config(uint8_t layerx, uint16_t sx, uint16_t sy, uint16_t width, uint16_t height)
{
    HAL_LTDC_SetWindowPosition(&hltdc, sx, sy, layerx);     /* 设置窗口的位置 */
    HAL_LTDC_SetWindowSize(&hltdc, width, height, layerx);  /* 设置窗口大小 */
}

uint8_t ltdc_clk_set(uint32_t pll3n, uint32_t pll3m, uint32_t pll3r)
{
    RCC_PeriphCLKInitTypeDef periphclk_initure;

    /* LTDC输出像素时钟，需要根据自己所使用的LCD数据手册来配置！ */
    periphclk_initure.PeriphClockSelection = RCC_PERIPHCLK_LTDC;     /* LTDC时钟 */
    periphclk_initure.PLL3.PLL3M = pll3m;
    periphclk_initure.PLL3.PLL3N = pll3n;
    periphclk_initure.PLL3.PLL3P = 2;
    periphclk_initure.PLL3.PLL3Q = 2;
    periphclk_initure.PLL3.PLL3R = pll3r;

    if (HAL_RCCEx_PeriphCLKConfig(&periphclk_initure) == HAL_OK)     /* 配置像素时钟 */
    {
        return 0;                                                    /* 成功 */
    }
    else
    {
        return 1;                                                    /* 失败 */
    }
}

uint16_t ltdc_panelid_read(void)
{
    uint8_t idx = 0;

    GPIO_InitTypeDef gpio_init_struct;

    __HAL_RCC_GPIOG_CLK_ENABLE();                               /* 使能GPIOG时钟 */
    __HAL_RCC_GPIOI_CLK_ENABLE();                               /* 使能GPIOI时钟 */

    gpio_init_struct.Pin = GPIO_PIN_6;                          /* PG6 */
    gpio_init_struct.Mode = GPIO_MODE_INPUT;                    /* 输入 */
    gpio_init_struct.Pull = GPIO_PULLUP;                        /* 上拉 */
    gpio_init_struct.Speed = GPIO_SPEED_HIGH;                   /* 高速 */
    HAL_GPIO_Init(GPIOG, &gpio_init_struct);                    /* 初始化 */

    gpio_init_struct.Pin = GPIO_PIN_2 | GPIO_PIN_7;             /* PI2,7 */
    HAL_GPIO_Init(GPIOI, &gpio_init_struct);                    /* 初始化 */

    delay_us(2);
    idx = (uint8_t)HAL_GPIO_ReadPin(GPIOG, GPIO_PIN_6);         /* 读取M0 */
    idx|= (uint8_t)HAL_GPIO_ReadPin(GPIOI, GPIO_PIN_2) << 1;    /* 读取M1 */
    idx|= (uint8_t)HAL_GPIO_ReadPin(GPIOI, GPIO_PIN_7) << 2;    /* 读取M2 */

    switch (idx)
    {
        case 0 :
            return 0X4342;                    /* 4.3寸屏,480*272分辨率 */

        case 1 :
            return 0X7084;                    /* 7  寸屏,800*480分辨率 */

        case 2 :
            return 0X7016;                    /* 7  寸屏,1024*600分辨率 */

        case 3 :
            return 0X7018;                    /* 7  寸屏,1280*800分辨率 */

        case 4 :
            return 0X4384;                    /* 4.3寸屏,800*480分辨率 */

        case 5 :
            return 0X1018;                    /* 10.1寸屏,1280*800分辨率 */

        default :
            return 0;
    }
}

void ltdc_layer_parameter_config(uint8_t layerx, uint32_t bufaddr, uint8_t pixformat, uint8_t alpha, uint8_t alpha0, uint8_t bfac1, uint8_t bfac2, uint32_t bkcolor)
{
    LTDC_LayerCfgTypeDef playercfg;

    playercfg.WindowX0 = 0;
    playercfg.WindowY0 = 0;
    playercfg.WindowX1 = ltdc.pwidth;
    playercfg.WindowY1 = ltdc.pheight;
    playercfg.PixelFormat = pixformat;
    playercfg.Alpha = alpha;
    playercfg.Alpha0 = alpha0;
    playercfg.BlendingFactor1 = (uint32_t)bfac1 << 8;
    playercfg.BlendingFactor2 = (uint32_t)bfac2;
    playercfg.FBStartAdress = bufaddr;
    playercfg.ImageWidth = ltdc.pwidth;
    playercfg.ImageHeight = ltdc.pheight;
    playercfg.Backcolor.Red = (uint8_t)(bkcolor & 0X00FF0000) >> 16;
    playercfg.Backcolor.Green = (uint8_t)(bkcolor & 0X0000FF00) >> 8;
    playercfg.Backcolor.Blue = (uint8_t)bkcolor & 0X000000FF;
    HAL_LTDC_ConfigLayer(&hltdc, &playercfg, layerx);
}

void ltdc_layer_switch(uint8_t layerx, uint8_t sw)
{
    if (sw)
    {
        __HAL_LTDC_LAYER_ENABLE(&hltdc, layerx);
    }
    else
    {
        __HAL_LTDC_LAYER_DISABLE(&hltdc, layerx);
    }

    __HAL_LTDC_RELOAD_CONFIG(&hltdc);
}

void ltdc_select_layer(uint8_t layerx)
{
    ltdc.activelayer = layerx;
}

void ltdc_display_dir(uint8_t dir)
{
    ltdc.dir = dir;    /* 显示方向 */

    if (dir == 0)         /* 竖屏 */
    {
        ltdc.width = ltdc.pheight;
        ltdc.height = ltdc.pwidth;
    }
    else if (dir == 1)    /* 横屏 */
    {
        ltdc.width = ltdc.pwidth;
        ltdc.height = ltdc.pheight;
    }
}

void ltdc_draw_point(uint16_t x, uint16_t y, uint32_t color)
{
    if (ltdc.dir)   /* 横屏 */
    {
        *(uint16_t *)((uint32_t)ltdc_framebuf + ltdc.pixsize * (ltdc.pwidth * y + x)) = color;
    }
    else              /* 竖屏 */
    {
        *(uint16_t *)((uint32_t)ltdc_framebuf + ltdc.pixsize * (ltdc.pwidth * (ltdc.pheight - x - 1) + y)) = color;
    }
}

uint32_t ltdc_read_point(uint16_t x, uint16_t y)
{
    if (ltdc.dir)   /* 横屏 */
    {
        return *(uint16_t *)((uint32_t)ltdc_framebuf + ltdc.pixsize * (ltdc.pwidth * y + x));
    }
    else               /* 竖屏 */
    {
        return *(uint16_t *)((uint32_t)ltdc_framebuf + ltdc.pixsize * (ltdc.pwidth * (ltdc.pheight - x - 1) + y));
    }
}

void ltdc_fill(uint16_t sx, uint16_t sy, uint16_t ex, uint16_t ey, uint32_t color)
{
    uint32_t psx, psy, pex, pey;
    uint32_t timeout = 0;
    uint16_t offline;
    uint32_t addr;


    if (ltdc.dir)
    {
        psx = sx;
        psy = sy;
        pex = ex;
        pey = ey;
    }
    else
    {
        if (ex >= ltdc.pheight)
        {
            ex = ltdc.pheight - 1;
        }

        if (sx >= ltdc.pheight)
        {
            sx = ltdc.pheight - 1;
        }
        psx = sy;
        psy = ltdc.pheight - ex - 1;
        pex = ey;
        pey = ltdc.pheight - sx - 1;
    }

    offline = ltdc.pwidth - (pex - psx + 1);
    addr = ((uint32_t)ltdc_framebuf + ltdc.pixsize * (ltdc.pwidth * psy + psx));

    __HAL_RCC_DMA2D_CLK_ENABLE();

    DMA2D->CR &= ~(DMA2D_CR_START);
    DMA2D->CR = DMA2D_R2M;
    DMA2D->OPFCCR = LTDC_PIXEL_FORMAT_RGB565;
    DMA2D->OOR = offline;

    DMA2D->OMAR = addr;
    DMA2D->NLR = (pey - psy + 1) | ((pex - psx + 1) << 16);
    DMA2D->OCOLR = color;
    DMA2D->CR |= DMA2D_CR_START;

    while ((DMA2D->ISR & (DMA2D_FLAG_TC)) == 0)
    {
        timeout++;
        if (timeout > 0X1FFFFF)break;
    }
    DMA2D->IFCR |= DMA2D_FLAG_TC;
}

void ltdc_color_fill(uint16_t sx, uint16_t sy, uint16_t ex, uint16_t ey, uint16_t *color)
{
    uint32_t psx, psy, pex, pey;   /* 以LCD面板为基准的坐标系,不随横竖屏变化而变化 */
    uint32_t timeout = 0;
    uint16_t offline;
    uint32_t addr;

    /* 坐标系转换 */
    if (ltdc.dir)               /* 横屏 */
    {
        psx = sx;
        psy = sy;
        pex = ex;
        pey = ey;
    }
    else                          /* 竖屏 */
    {
        psx = sy;
        psy = ltdc.pheight - ex - 1;
        pex = ey;
        pey = ltdc.pheight - sx - 1;
    }

    offline = ltdc.pwidth - (pex - psx + 1);
    addr = ((uint32_t)ltdc_framebuf + ltdc.pixsize * (ltdc.pwidth * psy + psx));

    __HAL_RCC_DMA2D_CLK_ENABLE();                             /* 使能DM2D时钟 */

    DMA2D->CR &= ~(DMA2D_CR_START);                           /* 先停止DMA2D */
    DMA2D->CR = DMA2D_M2M;                                    /* 存储器到存储器模式 */
    DMA2D->FGPFCCR = LTDC_PIXEL_FORMAT_RGB565;                /* 设置颜色格式 */
    DMA2D->FGOR = 0;                                          /* 前景层行偏移为0 */
    DMA2D->OOR = offline;                                     /* 设置行偏移 */

    DMA2D->FGMAR = (uint32_t)color;                           /* 源地址 */
    DMA2D->OMAR = addr;                                       /* 输出存储器地址 */
    DMA2D->NLR = (pey - psy + 1) | ((pex - psx + 1) << 16);   /* 设定行数寄存器 */
    DMA2D->CR |= DMA2D_CR_START;                              /* 启动DMA2D */

    while((DMA2D->ISR & (DMA2D_FLAG_TC)) == 0)                /* 等待传输完成 */
    {
        timeout++;
        if (timeout > 0X1FFFFF)break;                         /* 超时退出 */
    }
    DMA2D->IFCR |= DMA2D_FLAG_TC;                             /* 清除传输完成标志 */
}

void ltdc_clear(uint32_t color)
{
    ltdc_fill(0, 0, ltdc.width - 1, ltdc.height - 1, color);
}

void MX_LTDC_Init(void)
{

    /* USER CODE BEGIN LTDC_Init 0 */
    uint16_t lcdid = 0;

    lcdid = ltdc_panelid_read();
    if (lcdid == 0X4342)
    {
        ltdc.pwidth = 480;
        ltdc.pheight = 272;
        ltdc.hsw = 1;
        ltdc.vsw = 1;
        ltdc.hbp = 40;
        ltdc.vbp = 8;
        ltdc.hfp = 5;
        ltdc.vfp = 8;
        ltdc_clk_set(300, 25, 33);
        /* 其他参数待定. */
    }
    else if (lcdid == 0X7084)
    {
        ltdc.pwidth = 800;
        ltdc.pheight = 480;
        ltdc.hsw = 1;
        ltdc.vsw = 1;
        ltdc.hbp = 46;
        ltdc.vbp = 23;
        ltdc.hfp = 210;
        ltdc.vfp = 22;
        ltdc_clk_set(300, 25, 9);
    }
    else if (lcdid == 0X7016)
    {
        ltdc.pwidth = 1024;
        ltdc.pheight = 600;
        ltdc.hsw = 20;
        ltdc.vsw = 3;
        ltdc.hbp = 140;
        ltdc.vbp = 20;
        ltdc.hfp = 160;
        ltdc.vfp = 12;
        ltdc_clk_set(300, 25, 6);
    }
    else if (lcdid == 0X7018)
    {
        ltdc.pwidth = 1280;
        ltdc.pheight = 800;
    }
    else if (lcdid == 0X4384)
    {
        ltdc.pwidth = 800;
        ltdc.pheight = 480;
        ltdc.hbp = 88;
        ltdc.hfp = 40;
        ltdc.hsw = 48;
        ltdc.vbp = 32;
        ltdc.vfp = 13;
        ltdc.vsw = 3;
        ltdc_clk_set(300, 25, 9);
    }
    else if (lcdid == 0X1018)
    {
        ltdc.pwidth = 1280;
        ltdc.pheight = 800;
        ltdc.hbp = 140;
        ltdc.hfp = 10;
        ltdc.hsw = 10;
        ltdc.vbp = 10;
        ltdc.vfp = 10;
        ltdc.vsw = 3;
        ltdc_clk_set(300, 25, 6);
    }
    ltdc.pixsize = 2;
    /* USER CODE END LTDC_Init 0 */

    /* USER CODE BEGIN LTDC_Init 1 */

    /* USER CODE END LTDC_Init 1 */
    hltdc.Instance = LTDC;
    hltdc.Init.HSPolarity = LTDC_HSPOLARITY_AL;
    hltdc.Init.VSPolarity = LTDC_VSPOLARITY_AL;
    hltdc.Init.DEPolarity = LTDC_DEPOLARITY_AL;
    hltdc.State = HAL_LTDC_STATE_RESET;
    hltdc.Init.PCPolarity = LTDC_PCPOLARITY_IPC;
    hltdc.Init.HorizontalSync = ltdc.hsw - 1;
    hltdc.Init.VerticalSync = ltdc.vsw - 1;
    hltdc.Init.AccumulatedHBP = ltdc.hsw + ltdc.hbp - 1;
    hltdc.Init.AccumulatedVBP = ltdc.vsw + ltdc.vbp - 1;
    hltdc.Init.AccumulatedActiveW = ltdc.hsw + ltdc.hbp + ltdc.pwidth - 1;
    hltdc.Init.AccumulatedActiveH = ltdc.vsw + ltdc.vbp + ltdc.pheight - 1;
    hltdc.Init.TotalWidth = ltdc.hsw + ltdc.hbp + ltdc.pwidth + ltdc.hfp - 1;
    hltdc.Init.TotalHeigh = ltdc.vsw + ltdc.vbp + ltdc.pheight + ltdc.vfp - 1;
    hltdc.Init.Backcolor.Red = 0;
    hltdc.Init.Backcolor.Green = 0;
    hltdc.Init.Backcolor.Blue = 0;

    HAL_LTDC_Init(&hltdc);

    ltdc_layer_parameter_config(0, (uint32_t)ltdc_framebuf, LTDC_PIXEL_FORMAT_RGB565, 255, 0, 6, 7, 0X000000);
    ltdc_layer_window_config(0, 0, 0, ltdc.pwidth, ltdc.pheight);

    ltdc_display_dir(0);
    LTDC_BL(1);
    ltdc_clear(0XFFFFFFFF);
    /* USER CODE BEGIN LTDC_Init 2 */

    /* USER CODE END LTDC_Init 2 */

}

void HAL_LTDC_MspInit(LTDC_HandleTypeDef* ltdcHandle)
{

    GPIO_InitTypeDef GPIO_InitStruct = {0};
    /* LTDC clock enable */
    __HAL_RCC_LTDC_CLK_ENABLE();
    __HAL_RCC_DMA2D_CLK_ENABLE();


    LTDC_BL_GPIO_CLK_ENABLE();
    __HAL_RCC_GPIOF_CLK_ENABLE();
    __HAL_RCC_GPIOI_CLK_ENABLE();
    __HAL_RCC_GPIOI_CLK_ENABLE();
    __HAL_RCC_GPIOG_CLK_ENABLE();
    __HAL_RCC_GPIOH_CLK_ENABLE();

    GPIO_InitStruct.Pin = LTDC_BL_GPIO_PIN;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_PULLUP;
    GPIO_InitStruct.Speed = GPIO_SPEED_HIGH;
    HAL_GPIO_Init(LTDC_BL_GPIO_PORT, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_10;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_HIGH;
    GPIO_InitStruct.Alternate = GPIO_AF14_LTDC;
    HAL_GPIO_Init(GPIOF, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_9;
    HAL_GPIO_Init(GPIOI, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_10;
    HAL_GPIO_Init(GPIOI, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_7;
    HAL_GPIO_Init(GPIOG, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_6 | GPIO_PIN_11;
    HAL_GPIO_Init(GPIOG, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_9 | GPIO_PIN_10 | GPIO_PIN_11 | \
                     GPIO_PIN_12 | GPIO_PIN_13 | GPIO_PIN_14 | GPIO_PIN_15;
    HAL_GPIO_Init(GPIOH, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_4 | GPIO_PIN_5| \
                     GPIO_PIN_6 | GPIO_PIN_7;
    HAL_GPIO_Init(GPIOI, &GPIO_InitStruct);

    /* USER CODE BEGIN LTDC_MspInit 1 */

    /* USER CODE END LTDC_MspInit 1 */

}

/* USER CODE BEGIN 1 */
void ltdc_show_char(uint16_t x, uint16_t y, char chr, uint8_t size, uint8_t mode, uint16_t color)
{
    uint8_t temp, t1, t;
    uint16_t y0 = y;
    uint8_t csize = 0;
    uint8_t *pfont = 0;
    uint32_t chr_n = 0;
    csize = (size / 8 + ((size % 8) ? 1 : 0)) * (size / 2);
    chr_n = chr - ' ';

    switch (size)
    {
        case 12:
            pfont = (uint8_t *)asc2_1206[chr_n];  /* 调用1206字体 */
            break;

        case 16:
            pfont = (uint8_t *)asc2_1608[chr_n];  /* 调用1608字体 */
            break;

        case 24:
            pfont = (uint8_t *)asc2_2412[chr_n];  /* 调用2412字体 */
            break;

        case 32:
            pfont = (uint8_t *)asc2_3216[chr_n];  /* 调用3216字体 */
            break;

        default:
            return ;
    }

    for (t = 0; t < csize; t++)
    {
        temp = pfont[t];                            /* 获取字符的点阵数据 */

        for (t1 = 0; t1 < 8; t1++)                  /* 一个字节8个点 */
        {
            if (temp & 0x80)                        /* 有效点,需要显示 */
            {
                ltdc_draw_point(x, y, color);        /* 画点出来,要显示这个点 */
            }
            else if (mode == 0)                     /* 无效点,不显示 */
            {
                ltdc_draw_point(x, y, 0XFFFF); /* 画背景色,相当于这个点不显示(注意背景色由全局变量控制) */
            }

            temp <<= 1;                             /* 移位, 以便获取下一个位的状态 */
            y++;

            if (y >= ltdc.height)return;          /* 超区域了 */

            if ((y - y0) == size)                   /* 显示完一列了? */
            {
                y = y0;                             /* y坐标复位 */
                x++;                                /* x坐标递增 */

                if (x >= ltdc.width)
                {
                    return;                         /* x坐标超区域了 */
                }

                break;
            }
        }
    }
}

void ltdc_show_string(uint16_t x, uint16_t y, uint16_t width, uint16_t height, uint8_t size, char *p, uint16_t color)
{
    uint8_t x0 = x;

    width += x;
    height += y;

    while ((*p <= '~') && (*p >= ' '))   /* 判断是不是非法字符! */
    {
        if (x >= width)
        {
            x = x0;
            y += size;
        }

        if (y >= height)
        {
            break;                      /* 退出 */
        }

        ltdc_show_char(x, y, *p, size, 0, color);
        x += size / 2;
        p++;
    }
}
/* USER CODE END 1 */
