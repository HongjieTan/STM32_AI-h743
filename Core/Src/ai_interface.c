/**
 ******************************************************************************
 * @file    ai_interface.c
 * @author  MDG Application Team
 * @brief   Abstraction interface to AI generated code
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

/* Includes ------------------------------------------------------------------*/
#include "ai_interface.h"
#include <string.h>
#include "ai_datatypes_defines.h"
#include "main.h"
/* Private typedef -----------------------------------------------------------*/
/* Private defines -----------------------------------------------------------*/
/* Private macros ------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
static ai_handle network_handle;

/* Array of pointer to manage the model's input/output tensors */
static ai_buffer *ai_input;
static ai_buffer *ai_output;

/* Global variables ----------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Functions Definition ------------------------------------------------------*/

/**
 * @brief Returns the input format type
 * @retval ai_size Input format type: quantized (AI_BUFFER_FMT_TYPE_Q) or float (AI_BUFFER_FMT_TYPE_FLOAT)
 */
ai_size ai_get_input_format(void)
{
  ai_buffer_format fmt = AI_BUFFER_FORMAT(&ai_input[0]);
  return AI_BUFFER_FMT_GET_TYPE(fmt);
}

/**
 * @brief Returns the output format type
 * @retval ai_size Output format type: quantized (AI_BUFFER_FMT_TYPE_Q) or float (AI_BUFFER_FMT_TYPE_FLOAT)
 */
ai_size ai_get_output_format(void)
{
  ai_buffer_format fmt = AI_BUFFER_FORMAT(&ai_output[0]);
  return AI_BUFFER_FMT_GET_TYPE(fmt);
}

/**
 * @brief Returns value of the input quantized format
 * @retval ai_size Input quantized format
 */
ai_size ai_get_input_quantized_format(void)
{
  ai_buffer_format fmt = AI_BUFFER_FORMAT(&ai_input[0]);
  return (AI_BUFFER_FMT_GET_BITS(fmt) - AI_BUFFER_FMT_GET_SIGN(fmt) - AI_BUFFER_FMT_GET_FBITS(fmt));
}

/**
 * @brief Returns the quantization scheme used to quantize the input layer of the neural network
 * @retval ai_size Quantization scheme: AI_FXP_Q, AI_UINT_Q, AI_SINT_Q
 */
uint32_t ai_get_input_quantization_scheme(void)
{
  ai_float scale=ai_get_input_scale();

  ai_buffer_format fmt=AI_BUFFER_FORMAT(&ai_input[0]);
  ai_size sign = AI_BUFFER_FMT_GET_SIGN(fmt);

  if(scale==0)
  {
    return AI_FXP_Q;
  }
  else
  {
    if(sign==0)
    {
      return AI_UINT_Q;
    }
    else
    {
      return AI_SINT_Q;
    }
  }
}

/**
 * @brief Returns the quantization scheme used to quantize the output layer of the neural network
 * @retval ai_size Quantization scheme: AI_FXP_Q, AI_UINT_Q, AI_SINT_Q
 */
uint32_t ai_get_output_quantization_scheme(void)
{
  ai_float scale=ai_get_output_scale();

  ai_buffer_format fmt=AI_BUFFER_FORMAT(&ai_output[0]);
  ai_size sign = AI_BUFFER_FMT_GET_SIGN(fmt);

  if(scale==0)
  {
    return AI_FXP_Q;
  }
  else
  {
    if(sign==0)
    {
      return AI_UINT_Q;
    }
    else
    {
      return AI_SINT_Q;
    }
  }
}

/**
 * @brief Returns value of the scale for the output quantized format
 * @retval ai_size Scale for output quantized format
 */
ai_float ai_get_output_fxp_scale(void)
{
  float scale;
  ai_buffer_format fmt_1;

  /* Retrieve format of the output tensor - index 0 */
  fmt_1 = AI_BUFFER_FORMAT(&ai_output[0]);

  /* Build the scale factor for conversion */
  scale = 1.0f / (0x1U << AI_BUFFER_FMT_GET_FBITS(fmt_1));

  return scale;
}

/**
 * @brief Returns value of the scale for the input quantized format
 * @retval ai_size Scale for input quantized format
 */
ai_float ai_get_input_scale(void)
{
  return AI_BUFFER_META_INFO_INTQ_GET_SCALE(ai_input[0].meta_info, 0);
}

/**
 * @brief Returns value of the zero point for the input quantized format
 * @retval ai_size Zero point for input quantized format
 */
ai_i32 ai_get_input_zero_point(void)
{
  return AI_BUFFER_META_INFO_INTQ_GET_ZEROPOINT(ai_input[0].meta_info, 0);
}

/**
 * @brief Returns value of the scale for the output quantized format
 * @retval ai_size Scale for output quantized format
 */
ai_float ai_get_output_scale(void)
{
  return AI_BUFFER_META_INFO_INTQ_GET_SCALE(ai_output[0].meta_info, 0);
}

/**
 * @brief Returns value of the zero point for the output quantized format
 * @retval ai_size Zero point for output quantized format
 */
ai_i32 ai_get_output_zero_point(void)
{
  return AI_BUFFER_META_INFO_INTQ_GET_ZEROPOINT(ai_output[0].meta_info, 0);
}


/**
 * @brief Initializes the generated C model for a neural network
 * @param  activation_buffer Pointer to the activation buffer (i.e. working buffer used during NN inference)
 * @retval ai_handle
 */
void ai_init(void* activation_buffer, ai_handle* inputs_buff_Ptr, ai_handle* outputs_buff_Ptr)
{
  network_handle = AI_HANDLE_NULL;

  /* Create and initialize the c-model */
  const ai_handle acts[] = { activation_buffer };
  ai_network_create_and_init(&network_handle, acts, NULL);

  /* Retrieve pointers to the model's input/output tensors */
  ai_input = ai_network_inputs_get(network_handle, NULL);
  ai_output = ai_network_outputs_get(network_handle, NULL);

  /*Initialize the input and output buffer pointers*/
  *inputs_buff_Ptr=ai_input[0].data;
  *outputs_buff_Ptr=ai_output[0].data;
}

/**
 * @brief De-initializes the generated C model for a neural network
 */
void ai_deinit(void) { ai_network_destroy(network_handle); }

/**
 * @brief  Run an inference of the generated C model for a neural network
 * @param  input   Pointer to the buffer containing the inference input data
 * @param  output  Pointer to the buffer for the inference output data
 */
void ai_run(void* input, void* output)
{
  ai_i32 nbatch;

  ai_input[0].data = AI_HANDLE_PTR(input);
  ai_output[0].data = AI_HANDLE_PTR(output);

  nbatch = ai_network_run(network_handle, &ai_input[0], &ai_output[0]);

  if (nbatch != 1) {
        Error_Handler();
  }
}

void Network_Init(uint8_t* activation_buffer, uint8_t* nn_input_buffer, uint8_t* nn_output_buffer)
{
  void *input_data_ptr, *output_data_ptr;

  ai_init((void*)(activation_buffer), &input_data_ptr, &output_data_ptr);

  if(input_data_ptr!= NULL)
    nn_input_buffer=input_data_ptr;

  if(output_data_ptr!= NULL)
    nn_output_buffer=output_data_ptr;

  if (nn_input_buffer == NULL || nn_output_buffer == NULL)
  {
    Error_Handler();
  }
}

DMA2D_HandleTypeDef hlcd_dma2d;

static uint32_t GetBytesPerPixel(uint32_t dma2d_color)
{
  switch (dma2d_color)
  {
    case DMA2D_OUTPUT_ARGB8888:
      return 4;
    case DMA2D_OUTPUT_RGB888:
      return 3;
    case DMA2D_OUTPUT_RGB565:
    case DMA2D_OUTPUT_ARGB1555:
    case DMA2D_OUTPUT_ARGB4444:
      return 2;
    default:
      return 0;
  }
}

void Utility_Dma2d_Memcpy(uint32_t *pSrc, uint32_t *pDst, uint16_t x, uint16_t y, uint16_t xsize, uint16_t ysize,
                        uint32_t rowStride, uint32_t input_color_format, uint32_t output_color_format, int pfc,
                        int red_blue_swap)
{
  uint32_t bytepp = GetBytesPerPixel(output_color_format);

  uint32_t destination = (uint32_t)pDst + (y * rowStride + x) * bytepp;
  uint32_t source = (uint32_t)pSrc;

  HAL_DMA2D_DeInit(&hlcd_dma2d);

  /*##-1- Configure the DMA2D Mode, Color Mode and output offset #############*/
  hlcd_dma2d.Init.Mode = pfc ? DMA2D_M2M_PFC : DMA2D_M2M;
  hlcd_dma2d.Init.ColorMode = output_color_format;

  /* Output offset in pixels == nb of pixels to be added at end of line to come to the  */
  /* first pixel of the next line : on the output side of the DMA2D computation         */
  hlcd_dma2d.Init.OutputOffset = rowStride - xsize;

  /*##-2- DMA2D Callbacks Configuration ######################################*/
  hlcd_dma2d.XferCpltCallback = NULL;

  /*##-3- Foreground Configuration ###########################################*/
  hlcd_dma2d.LayerCfg[1].AlphaMode = DMA2D_REPLACE_ALPHA;
  hlcd_dma2d.LayerCfg[1].InputAlpha = 0xFF;
  hlcd_dma2d.LayerCfg[1].InputColorMode = input_color_format;
  hlcd_dma2d.LayerCfg[1].InputOffset = 0;
  hlcd_dma2d.LayerCfg[1].RedBlueSwap = red_blue_swap ? DMA2D_RB_SWAP : DMA2D_RB_REGULAR;

  /* DMA2D Initialization */
  if (HAL_DMA2D_Init(&hlcd_dma2d) == HAL_OK)
  {
    if (HAL_DMA2D_ConfigLayer(&hlcd_dma2d, 1) == HAL_OK)
    {
      if (HAL_DMA2D_Start(&hlcd_dma2d, source, destination, xsize, ysize) == HAL_OK)
      {
        /* Polling For DMA transfer */
        HAL_DMA2D_PollForTransfer(&hlcd_dma2d, 30);
      }
    }
  }
}

static void Pixel_RB_Swap(void *pSrc, void *pDst, uint32_t pixels)
{
  struct rgb_Src
  {
    uint8_t r, g, b;
  };
  
  struct rgb_Dst
  {
    uint8_t r, g, b;
  };
  
  uint8_t tmp_r;
  
  struct rgb_Src *pivot = (struct rgb_Src *) pSrc;
  struct rgb_Dst *dest = (struct rgb_Dst *) pDst;
  
  for (int i = pixels-1; i >= 0; i--)
  {
    tmp_r=pivot[i].r;
    
    dest[i].r = pivot[i].b;
    dest[i].b = tmp_r;
    dest[i].g = pivot[i].g;
  }
}

static void PixelFormatConversion(image_t *src, image_t *dst)
{
  image_t *src_img = src;
  image_t *dst_img = dst;
#if PP_COLOR_MODE == RGB_FORMAT
  uint32_t rb_swap = 1;
#else
  uint32_t rb_swap = 0;
#endif
    if (rb_swap != 0)
    {
      uint32_t nb_pixels = dst_img->w * dst_img->h;
      Pixel_RB_Swap(src_img->data, dst_img->data, nb_pixels);
    }
    if (STM32Ipl_ConvertRev(src_img, dst_img, 0) != stm32ipl_err_Ok)
    {
      Error_Handler();
    }
}

void Network_Preprocess(uint8_t* camera_capture_buffer,  uint8_t* nn_input_buffer)
{
  image_t src_img;
  image_t dst_img;  

  src_img.data=camera_capture_buffer;
  src_img.w=AI_NETWORK_WIDTH;
  src_img.h=AI_NETWORK_HEIGHT;
  src_img.bpp=IMAGE_BPP_RGB565;
  dst_img.data=nn_input_buffer;
  dst_img.w=AI_NETWORK_WIDTH;
  dst_img.h=AI_NETWORK_HEIGHT;

#if PP_COLOR_MODE == RGB_FORMAT  || PP_COLOR_MODE == BGR_FORMAT
  dst_img.bpp = IMAGE_BPP_RGB888;
#elif PP_COLOR_MODE == GRAYSCALE_FORMAT
  dst_img.bpp = IMAGE_BPP_GRAYSCALE;
#else
 #error Color format no supported
#endif

  /*************************************/
  /****Image Pixel Format Conversion****/
  /*************************************/
  PixelFormatConversion(&src_img, &dst_img);
}

void Output_Dequantize(uint8_t* nn_output_buffer)
{
  /**Check format of the output and convert to float if required**/
  if(ai_get_output_format() == AI_BUFFER_FMT_TYPE_Q)
  {
    float scale;
    int32_t zero_point;
    ai_i8 *nn_output_i8;
    ai_u8 *nn_output_u8;
    float *nn_output_f32;

    /*Check what type of quantization scheme is used for the output*/
    switch(ai_get_output_quantization_scheme())
    {
    case AI_FXP_Q:

      scale=ai_get_output_fxp_scale();

      /* Dequantize NN output - in-place 8-bit to float conversion */
      nn_output_i8 = (ai_i8 *) nn_output_buffer;
      nn_output_f32 = (float *) nn_output_buffer;
      for(int32_t i = AI_NET_OUTPUT_SIZE - 1; i >= 0; i--)
      {
        float q_value = (float) *(nn_output_i8 + i);
        *(nn_output_f32 + i) = scale * q_value;
      }
      break;

    case AI_UINT_Q:

      scale = ai_get_output_scale();
      zero_point = ai_get_output_zero_point();

      /* Dequantize NN output - in-place 8-bit to float conversion */
      nn_output_u8 = (ai_u8 *) nn_output_buffer;
      nn_output_f32 = (float *) nn_output_buffer;
      for(int32_t i = AI_NET_OUTPUT_SIZE - 1; i >= 0; i--)
      {
        int32_t q_value = (int32_t) *(nn_output_u8 + i);
        *(nn_output_f32 + i) = scale * (q_value - zero_point);
      }
      break;

    case AI_SINT_Q:

      scale = ai_get_output_scale();
      zero_point = ai_get_output_zero_point();

      /* Dequantize NN output - in-place 8-bit to float conversion */
      nn_output_i8 = (ai_i8 *) nn_output_buffer;
      nn_output_f32 = (float *) nn_output_buffer;
      for(int32_t i = AI_NET_OUTPUT_SIZE - 1; i >= 0; i--)
      {
        int32_t q_value = (int32_t) *(nn_output_i8 + i);
        *(nn_output_f32 + i) = scale * (q_value - zero_point);
      }
      break;

    default:
      break;
    }
  }
}

void Utility_Bubblesort(float *prob, int *classes, int size)
{
  float p;
  int c;

  for (int i = 0; i < size; i++)
  {
    for (int ii = 0; ii < size - i - 1; ii++)
    {
      if (prob[ii] < prob[ii + 1])
      {
        p = prob[ii];
        prob[ii] = prob[ii + 1];
        prob[ii + 1] = p;
        c = classes[ii];
        classes[ii] = classes[ii + 1];
        classes[ii + 1] = c;
      }
    }
  }
}