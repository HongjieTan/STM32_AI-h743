#include "ov5640.h"
#include "ov5640cfg.h"
#include "ov5640af.h"
#include "delay.h"
#include "sccb.h"
#include "pcf8574.h"
#include "ltdc.h"

uint8_t ov5640_read_reg(uint16_t reg)
{
    uint8_t data = 0;

    sccb_start();
    sccb_send_byte(OV5640_ADDR);
    sccb_send_byte(reg >> 8);
    sccb_send_byte(reg);
    sccb_stop();

    sccb_start();
    sccb_send_byte(OV5640_ADDR | 0X01);
    data = sccb_read_byte();
    sccb_nack();
    sccb_stop();

    return data;
}

uint8_t ov5640_write_reg(uint16_t reg, uint8_t data)
{
    uint8_t res = 0;

    sccb_start();

    if (sccb_send_byte(OV5640_ADDR))res = 1;

    if (sccb_send_byte(reg >> 8))res = 1;

    if (sccb_send_byte(reg))res = 1;

    if (sccb_send_byte(data))res = 1;

    sccb_stop();
    return    res;
}

void ov5640_pwdn_set(uint8_t sta)
{
    pcf8574_write_bit(DCMI_PWDN_IO, sta);
}

uint8_t ov5640_init(void)
{
    uint16_t i = 0;
    uint16_t reg;

    GPIO_InitTypeDef gpio_init_struct;
    OV_RESET_GPIO_CLK_ENABLE();

    gpio_init_struct.Pin = OV_RESET_GPIO_PIN;
    gpio_init_struct.Mode = GPIO_MODE_OUTPUT_PP;
    gpio_init_struct.Pull = GPIO_PULLUP;
    gpio_init_struct.Speed = GPIO_SPEED_HIGH;
    HAL_GPIO_Init(OV_RESET_GPIO_PORT, &gpio_init_struct);

    pcf8574_init();
    OV5640_RST(0);
    delay_ms(20);

    ov5640_pwdn_set(0);

    delay_ms(5);
    OV5640_RST(1);
    delay_ms(20);
    sccb_init();
    delay_ms(5);

    reg = ov5640_read_reg(OV5640_CHIPIDH);
    reg <<= 8;
    reg |= ov5640_read_reg(OV5640_CHIPIDL);

    if (reg != OV5640_ID)
    {

        return 1;
    }

    ov5640_write_reg(0x3103, 0X11);
    ov5640_write_reg(0X3008, 0X82);
    delay_ms(10);

    for (i = 0; i < sizeof(ov5640_init_reg_tbl) / 4 ;i++)
    {
        ov5640_write_reg(ov5640_init_reg_tbl[i][0], ov5640_init_reg_tbl[i][1]);
    }
    ov5640_rgb565_mode();
    ov5640_focus_init();

    ov5640_light_mode(0);
    ov5640_color_saturation(3);
    ov5640_brightness(4);
    ov5640_contrast(3);
    ov5640_sharpness(33);
    ov5640_focus_constant();

    ov5640_outsize_set(4, 0, IMAGE_WIDTH, IMAGE_HEIGHT*2);

//    ov5640_write_reg(0x3035,  0x21);
    ov5640_write_reg(0x3036,  0xc0);
    return 0x00;
}


void ov5640_jpeg_mode(void)
{
    uint16_t i = 0;


    for (i = 0; i < (sizeof(OV5640_jpeg_reg_tbl) / 4); i++)
    {
        ov5640_write_reg(OV5640_jpeg_reg_tbl[i][0], OV5640_jpeg_reg_tbl[i][1]);
    }
}

void ov5640_rgb565_mode(void)
{
    uint16_t i = 0;

    for (i = 0; i < (sizeof(ov5640_rgb565_reg_tbl) / 4); i++)
    {
        ov5640_write_reg(ov5640_rgb565_reg_tbl[i][0], ov5640_rgb565_reg_tbl[i][1]);
    }
    if (ltdc.pwidth != 0)
    {
//        ov5640_write_reg(0X3821, 0X06);
    }
}

const static uint8_t OV5640_EXPOSURE_TBL[7][6]=
{
    {0x10, 0x08, 0x10, 0x08, 0x20, 0x10}, /* -3 */
    {0x20, 0x18, 0x41, 0x20, 0x18, 0x10}, /* - */
    {0x30, 0x28, 0x61, 0x30, 0x28, 0x10}, /* -1 */
    {0x38, 0x30, 0x61, 0x38, 0x30, 0x10}, /* 0 */
    {0x40, 0x38, 0x71, 0x40, 0x38, 0x10}, /* +1 */
    {0x50, 0x48, 0x90, 0x50, 0x48, 0x20}, /* +2 */
    {0x60, 0x58, 0xa0, 0x60, 0x58, 0x20}, /* +3 */
};


void ov5640_exposure(uint8_t exposure)
{
    ov5640_write_reg(0x3212, 0x03);    /* start group 3 */
    ov5640_write_reg(0x3a0f, OV5640_EXPOSURE_TBL[exposure][0]);
    ov5640_write_reg(0x3a10, OV5640_EXPOSURE_TBL[exposure][1]);
    ov5640_write_reg(0x3a1b, OV5640_EXPOSURE_TBL[exposure][2]);
    ov5640_write_reg(0x3a1e, OV5640_EXPOSURE_TBL[exposure][3]);
    ov5640_write_reg(0x3a11, OV5640_EXPOSURE_TBL[exposure][4]);
    ov5640_write_reg(0x3a1f, OV5640_EXPOSURE_TBL[exposure][5]);
    ov5640_write_reg(0x3212, 0x13);   /* end group 3 */
    ov5640_write_reg(0x3212, 0xa3);   /* launch group 3 */
}


const static uint8_t OV5640_LIGHTMODE_TBL[5][7]=
{
    {0x04, 0X00, 0X04, 0X00, 0X04, 0X00, 0X00},   /* Auto*/
    {0x06, 0X1C, 0X04, 0X00, 0X04, 0XF3, 0X01},   /* Sunny*/
    {0x05, 0X48, 0X04, 0X00, 0X07, 0XCF, 0X01},   /* Office*/
    {0x06, 0X48, 0X04, 0X00, 0X04, 0XD3, 0X01},   /* Cloudy*/
    {0x04, 0X10, 0X04, 0X00, 0X08, 0X40, 0X01},   /* Home*/
};


void ov5640_light_mode(uint8_t mode)
{
    uint8_t i;
    ov5640_write_reg(0x3212, 0x03);                                  /* start group 3 */

    for (i = 0; i < 7; i++)
    {
        ov5640_write_reg(0x3400 + i, OV5640_LIGHTMODE_TBL[mode][i]);
    }

    ov5640_write_reg(0x3212, 0x13);                                  /* end group 3 */
    ov5640_write_reg(0x3212, 0xa3);                                  /* launch group 3 */
}


const static uint8_t OV5640_SATURATION_TBL[7][6]=
{
    {0X0C, 0x30, 0X3D, 0X3E, 0X3D, 0X01}, /* -3 */
    {0X10, 0x3D, 0X4D, 0X4E, 0X4D, 0X01}, /* -2 */
    {0X15, 0x52, 0X66, 0X68, 0X66, 0X02}, /* -1 */
    {0X1A, 0x66, 0X80, 0X82, 0X80, 0X02}, /* +0 */
    {0X1F, 0x7A, 0X9A, 0X9C, 0X9A, 0X02}, /* +1 */
    {0X24, 0x8F, 0XB3, 0XB6, 0XB3, 0X03}, /* +2 */
    {0X2B, 0xAB, 0XD6, 0XDA, 0XD6, 0X04}, /* +3 */
};


void ov5640_color_saturation(uint8_t sat)
{
    uint8_t i;

    ov5640_write_reg(0x3212, 0x03);     /* start group 3 */
    ov5640_write_reg(0x5381, 0x1c);
    ov5640_write_reg(0x5382, 0x5a);
    ov5640_write_reg(0x5383, 0x06);

    for (i = 0; i < 6; i++)
    {
        ov5640_write_reg(0x5384 + i, OV5640_SATURATION_TBL[sat][i]);
    }
    ov5640_write_reg(0x538b, 0x98);
    ov5640_write_reg(0x538a, 0x01);
    ov5640_write_reg(0x3212, 0x13);     /* end group 3 */
    ov5640_write_reg(0x3212, 0xa3);     /* launch group 3 */
}


void ov5640_brightness(uint8_t bright)
{
    uint8_t brtval;

    if (bright < 4)
    {
        brtval = 4 - bright;
    }
    else
    {
        brtval = bright - 4;
    }

    ov5640_write_reg(0x3212, 0x03);      /* start group 3 */
    ov5640_write_reg(0x5587, brtval << 4);

    if (bright < 4)
    {
        ov5640_write_reg(0x5588, 0x09);
    }
    else
    {
        ov5640_write_reg(0x5588, 0x01);
    }
    ov5640_write_reg(0x3212, 0x13);      /* end group 3 */
    ov5640_write_reg(0x3212, 0xa3);      /* launch group 3 */
}


void ov5640_contrast(uint8_t contrast)
{
    uint8_t reg0val = 0X00;
    uint8_t reg1val = 0X20;

    switch (contrast)
    {
        case 0:/* -3 */
            reg1val = reg0val = 0X14;
            break;

        case 1:/* -2 */
            reg1val = reg0val = 0X18;
            break;

        case 2:/* -1 */
            reg1val = reg0val = 0X1C;
            break;

        case 4:/* 1 */
            reg0val = 0X10;
            reg1val = 0X24;
            break;

        case 5:/* 2 */
            reg0val = 0X18;
            reg1val = 0X28;
            break;

        case 6:/* 3 */
            reg0val = 0X1C;
            reg1val = 0X2C;
            break;
    }
    ov5640_write_reg(0x3212, 0x03);   /* start group 3 */
    ov5640_write_reg(0x5585, reg0val);
    ov5640_write_reg(0x5586, reg1val);
    ov5640_write_reg(0x3212, 0x13);   /* end group 3 */
    ov5640_write_reg(0x3212, 0xa3);   /* launch group 3 */
}


void ov5640_sharpness(uint8_t sharp)
{
    if (sharp < 33) /* 閿熸枻鎷烽敓鏂ゆ嫹閿熸枻鎷烽敓琛楋拷 */
    {
        ov5640_write_reg(0x5308, 0x65);
        ov5640_write_reg(0x5302, sharp);
    }
    else
    {
        ov5640_write_reg(0x5308, 0x25);
        ov5640_write_reg(0x5300, 0x08);
        ov5640_write_reg(0x5301, 0x30);
        ov5640_write_reg(0x5302, 0x10);
        ov5640_write_reg(0x5303, 0x00);
        ov5640_write_reg(0x5309, 0x08);
        ov5640_write_reg(0x530a, 0x30);
        ov5640_write_reg(0x530b, 0x04);
        ov5640_write_reg(0x530c, 0x06);
    }
}


const static uint8_t OV5640_EFFECTS_TBL[7][3]=
{
    {0X06, 0x40, 0X10},
    {0X1E, 0xA0, 0X40},
    {0X1E, 0x80, 0XC0},
    {0X1E, 0x80, 0X80},
    {0X1E, 0x40, 0XA0},
    {0X40, 0x40, 0X10},
    {0X1E, 0x60, 0X60},
};


void ov5640_special_effects(uint8_t eft)
{
    ov5640_write_reg(0x3212, 0x03); /* start group 3 */
    ov5640_write_reg(0x5580, OV5640_EFFECTS_TBL[eft][0]);
    ov5640_write_reg(0x5583, OV5640_EFFECTS_TBL[eft][1]);/* sat U */
    ov5640_write_reg(0x5584, OV5640_EFFECTS_TBL[eft][2]);/* sat V */
    ov5640_write_reg(0x5003, 0x08);
    ov5640_write_reg(0x3212, 0x13); /* end group 3 */
    ov5640_write_reg(0x3212, 0xa3); /* launch group 3 */
}

void ov5640_test_pattern(uint8_t mode)
{
    if (mode == 0)
    {
        ov5640_write_reg(0X503D, 0X00);
    }
    else if (mode == 1)
    {
        ov5640_write_reg(0X503D, 0X80);
    }
    else if (mode == 2)
    {
        ov5640_write_reg(0X503D, 0X82);
    }
}

void ov5640_flash_ctrl(uint8_t sw)
{
    ov5640_write_reg(0x3016, 0X02);
    ov5640_write_reg(0x301C, 0X02);

    if (sw)
    {
        ov5640_write_reg(0X3019, 0X02);
    }
    else
    {
        ov5640_write_reg(0X3019, 0X00);
    }
}

uint8_t ov5640_outsize_set(uint16_t offx, uint16_t offy, uint16_t width, uint16_t height)
{
    ov5640_write_reg(0X3212, 0X03);
    ov5640_write_reg(0x3808, width >> 8);
    ov5640_write_reg(0x3809, width & 0xff);
    ov5640_write_reg(0x380a, height >> 8);
    ov5640_write_reg(0x380b, height & 0xff);

    ov5640_write_reg(0x3810,offx >> 8);
    ov5640_write_reg(0x3811,offx & 0xff);

    ov5640_write_reg(0x3812,offy >> 8);
    ov5640_write_reg(0x3813,offy & 0xff);

    ov5640_write_reg(0X3212, 0X13);
    ov5640_write_reg(0X3212, 0Xa3);

    return 0;
}

uint8_t ov5640_image_window_set(uint16_t offx, uint16_t offy, uint16_t width, uint16_t height)
{
    uint16_t xst, yst, xend, yend;
    xst = offx;
    yst = offy;
    xend = offx + width - 1;
    yend = offy + height - 1;

    ov5640_write_reg(0X3212, 0X03);
    ov5640_write_reg(0X3800, xst >> 8);
    ov5640_write_reg(0X3801, xst & 0XFF);
    ov5640_write_reg(0X3802, yst >> 8);
    ov5640_write_reg(0X3803, yst & 0XFF);
    ov5640_write_reg(0X3804, xend >> 8);
    ov5640_write_reg(0X3805, xend & 0XFF);
    ov5640_write_reg(0X3806, yend >> 8);
    ov5640_write_reg(0X3807, yend & 0XFF);
    ov5640_write_reg(0X3212, 0X13);
    ov5640_write_reg(0X3212, 0Xa3);

    return 0;
}

uint8_t ov5640_focus_init(void)
{
    uint16_t i;
    uint16_t addr = 0x8000;
    uint8_t state = 0x8F;
    ov5640_write_reg(0x3000, 0x20);                 /* reset MCU */

    for (i = 0; i < sizeof(OV5640_AF_Config); i++)
    {
        ov5640_write_reg(addr, OV5640_AF_Config[i]);
        addr++;
    }
    ov5640_write_reg(0x3022, 0x00);
    ov5640_write_reg(0x3023, 0x00);
    ov5640_write_reg(0x3024, 0x00);
    ov5640_write_reg(0x3025, 0x00);
    ov5640_write_reg(0x3026, 0x00);
    ov5640_write_reg(0x3027, 0x00);
    ov5640_write_reg(0x3028, 0x00);
    ov5640_write_reg(0x3029, 0x7f);
    ov5640_write_reg(0x3000, 0x00);
    i = 0;
    do
    {
        state = ov5640_read_reg(0x3029);
        delay_ms(5);
        i++;
        if (i > 1000)
        {
            return 1;
        }
    }
    while (state != 0x70);

    return 0;
}


uint8_t ov5640_focus_single(void)
{
    uint8_t temp;
    uint16_t retry = 0;

    ov5640_write_reg(0x3022, 0x03);

    while (1)
    {
        retry++;
        temp = ov5640_read_reg(0x3029);
        if (temp == 0x10)
        {
            break;
        }
        delay_ms(5);
        if (retry > 1000)
        {
            return 1;
        }
    }

    return 0;
}


uint8_t ov5640_focus_constant(void)
{
    uint8_t temp = 0;
    uint16_t retry = 0;

    ov5640_write_reg(0x3023, 0x01);
    ov5640_write_reg(0x3022, 0x08);

    do
    {
        temp = ov5640_read_reg(0x3023);
        retry++;
        if (retry > 1000)
        {
            return 2;
        }
        delay_ms(5);
    }
    while (temp != 0x00);
    ov5640_write_reg(0x3023, 0x01);
    ov5640_write_reg(0x3022, 0x04);
    retry = 0;

    do
    {
        temp = ov5640_read_reg(0x3023);
        retry++;
        if (retry > 1000)
        {
            return 2;
        }
        delay_ms(5);
    }
    while (temp != 0x00);

    return 0;
}


