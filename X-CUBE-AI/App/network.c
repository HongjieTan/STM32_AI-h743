<<<<<<< HEAD
/**
  ******************************************************************************
  * @file    network.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Tue Jul 22 14:54:15 2025
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */


#include "network.h"
#include "network_data.h"

#include "ai_platform.h"
#include "ai_platform_interface.h"
#include "ai_math_helpers.h"

#include "core_common.h"
#include "core_convert.h"

#include "layers.h"



#undef AI_NET_OBJ_INSTANCE
#define AI_NET_OBJ_INSTANCE g_network
 
#undef AI_NETWORK_MODEL_SIGNATURE
#define AI_NETWORK_MODEL_SIGNATURE     "c287274618a83933cfe1e1850d88f567"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Tue Jul 22 14:54:15 2025"

#undef AI_TOOLS_COMPILE_TIME
#define AI_TOOLS_COMPILE_TIME    __DATE__ " " __TIME__

#undef AI_NETWORK_N_BATCHES
#define AI_NETWORK_N_BATCHES         (1)

static ai_ptr g_network_activations_map[1] = AI_C_ARRAY_INIT;
static ai_ptr g_network_weights_map[1] = AI_C_ARRAY_INIT;



/**  Array declarations section  **********************************************/
/* Array#0 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 936, AI_STATIC)
/* Array#1 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_71_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1584, AI_STATIC)
/* Array#2 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_75_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1056, AI_STATIC)
/* Array#3 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3072, AI_STATIC)
/* Array#4 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#5 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_77_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 24481, AI_STATIC)
/* Array#6 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_77_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#7 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1872, AI_STATIC)
/* Array#8 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#9 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_80_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3168, AI_STATIC)
/* Array#10 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_84_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1632, AI_STATIC)
/* Array#11 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_86_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3072, AI_STATIC)
/* Array#12 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_86_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#13 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_87_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 24481, AI_STATIC)
/* Array#14 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_87_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#15 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_89_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1872, AI_STATIC)
/* Array#16 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_89_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#17 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_90_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3168, AI_STATIC)
/* Array#18 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_94_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1632, AI_STATIC)
/* Array#19 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_96_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3072, AI_STATIC)
/* Array#20 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_96_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#21 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13952, AI_STATIC)
/* Array#22 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1280, AI_STATIC)
/* Array#23 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_99_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5510, AI_STATIC)
/* Array#24 */
AI_ARRAY_OBJ_DECLARE(
  nl_101_scratch0_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 39, AI_STATIC)
/* Array#25 */
AI_ARRAY_OBJ_DECLARE(
  serving_default_input_10_output_array, AI_ARRAY_FORMAT_U8|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 150528, AI_STATIC)
/* Array#26 */
AI_ARRAY_OBJ_DECLARE(
  conversion_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 150529, AI_STATIC)
/* Array#27 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#28 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#29 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 103968, AI_STATIC)
/* Array#30 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#31 */
AI_ARRAY_OBJ_DECLARE(
  pool_4_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 8, AI_STATIC)
/* Array#32 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2, AI_STATIC)
/* Array#33 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 8, AI_STATIC)
/* Array#34 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_7_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 8, AI_STATIC)
/* Array#35 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_9_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#36 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#37 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 125440, AI_STATIC)
/* Array#38 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 134560, AI_STATIC)
/* Array#39 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 31360, AI_STATIC)
/* Array#40 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#41 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#42 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 43200, AI_STATIC)
/* Array#43 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#44 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#45 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_17_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#46 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#47 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9408, AI_STATIC)
/* Array#48 */
AI_ARRAY_OBJ_DECLARE(
  pool_20_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#49 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12, AI_STATIC)
/* Array#50 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#51 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_23_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#52 */
AI_ARRAY_OBJ_DECLARE(
  nl_24_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#53 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_25_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9408, AI_STATIC)
/* Array#54 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#55 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#56 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#57 */
AI_ARRAY_OBJ_DECLARE(
  pool_29_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#58 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 30, AI_STATIC)
/* Array#59 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#60 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_32_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#61 */
AI_ARRAY_OBJ_DECLARE(
  nl_33_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#62 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_34_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#63 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#64 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_36_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#65 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#66 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#67 */
AI_ARRAY_OBJ_DECLARE(
  pool_39_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#68 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 30, AI_STATIC)
/* Array#69 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#70 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_42_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#71 */
AI_ARRAY_OBJ_DECLARE(
  nl_43_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#72 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_44_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#73 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#74 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_46_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#75 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#76 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#77 */
AI_ARRAY_OBJ_DECLARE(
  pool_49_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#78 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#79 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#80 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_52_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#81 */
AI_ARRAY_OBJ_DECLARE(
  nl_53_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#82 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_54_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#83 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#84 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_56_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#85 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#86 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#87 */
AI_ARRAY_OBJ_DECLARE(
  pool_59_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#88 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18, AI_STATIC)
/* Array#89 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#90 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_62_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#91 */
AI_ARRAY_OBJ_DECLARE(
  nl_63_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#92 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_64_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#93 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#94 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_66_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#95 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)
/* Array#96 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7056, AI_STATIC)
/* Array#97 */
AI_ARRAY_OBJ_DECLARE(
  pool_69_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#98 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 36, AI_STATIC)
/* Array#99 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_71_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#100 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_72_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#101 */
AI_ARRAY_OBJ_DECLARE(
  nl_73_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#102 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_74_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7056, AI_STATIC)
/* Array#103 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_75_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#104 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#105 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_77_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#106 */
AI_ARRAY_OBJ_DECLARE(
  pool_78_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#107 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#108 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_80_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#109 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_81_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#110 */
AI_ARRAY_OBJ_DECLARE(
  nl_82_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#111 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_83_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#112 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_84_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#113 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_85_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#114 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_86_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#115 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_87_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#116 */
AI_ARRAY_OBJ_DECLARE(
  pool_88_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#117 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_89_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#118 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_90_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#119 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_91_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#120 */
AI_ARRAY_OBJ_DECLARE(
  nl_92_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#121 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_93_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#122 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_94_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#123 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_95_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#124 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_96_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#125 */
AI_ARRAY_OBJ_DECLARE(
  pool_97_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#126 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1280, AI_STATIC)
/* Array#127 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_99_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 39, AI_STATIC)
/* Array#128 */
AI_ARRAY_OBJ_DECLARE(
  nl_101_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 39, AI_STATIC)
/* Array#129 */
AI_ARRAY_OBJ_DECLARE(
  conversion_102_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 39, AI_STATIC)
/* Array#130 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#131 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#132 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#133 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#134 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#135 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#136 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#137 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#138 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#139 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 216, AI_STATIC)
/* Array#140 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#141 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#142 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#143 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#144 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#145 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#146 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 2, AI_STATIC)
/* Array#147 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#148 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#149 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#150 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#151 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 320, AI_STATIC)
/* Array#152 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#153 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 360, AI_STATIC)
/* Array#154 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#155 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 640, AI_STATIC)
/* Array#156 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#157 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 768, AI_STATIC)
/* Array#158 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#159 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 432, AI_STATIC)
/* Array#160 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#161 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 768, AI_STATIC)
/* Array#162 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#163 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 768, AI_STATIC)
/* Array#164 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#165 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1200, AI_STATIC)
/* Array#166 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#167 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 576, AI_STATIC)
/* Array#168 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 12, AI_STATIC)
/* Array#169 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 576, AI_STATIC)
/* Array#170 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#171 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1152, AI_STATIC)
/* Array#172 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#173 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#174 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#175 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3000, AI_STATIC)
/* Array#176 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#177 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#178 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 30, AI_STATIC)
/* Array#179 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#180 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#181 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#182 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#183 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#184 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#185 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3000, AI_STATIC)
/* Array#186 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#187 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#188 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 30, AI_STATIC)
/* Array#189 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#190 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#191 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#192 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#193 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#194 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#195 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1600, AI_STATIC)
/* Array#196 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#197 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#198 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#199 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#200 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#201 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#202 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#203 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1728, AI_STATIC)
/* Array#204 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#205 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1800, AI_STATIC)
/* Array#206 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#207 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)
/* Array#208 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 18, AI_STATIC)
/* Array#209 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)
/* Array#210 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#211 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1728, AI_STATIC)
/* Array#212 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#213 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3456, AI_STATIC)
/* Array#214 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)
/* Array#215 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#216 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)
/* Array#217 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5184, AI_STATIC)
/* Array#218 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 36, AI_STATIC)
/* Array#219 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_71_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5184, AI_STATIC)
/* Array#220 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_71_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)
/* Array#221 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_75_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6912, AI_STATIC)
/* Array#222 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_75_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#223 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#224 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#225 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_77_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7200, AI_STATIC)
/* Array#226 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_77_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#227 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20736, AI_STATIC)
/* Array#228 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#229 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_80_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20736, AI_STATIC)
/* Array#230 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_80_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#231 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_84_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#232 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_84_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#233 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_86_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#234 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_86_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#235 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_87_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7200, AI_STATIC)
/* Array#236 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_87_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#237 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_89_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20736, AI_STATIC)
/* Array#238 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_89_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#239 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_90_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20736, AI_STATIC)
/* Array#240 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_90_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#241 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_94_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#242 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_94_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#243 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_96_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#244 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_96_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#245 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 368640, AI_STATIC)
/* Array#246 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 1280, AI_STATIC)
/* Array#247 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_99_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 49920, AI_STATIC)
/* Array#248 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_99_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 39, AI_STATIC)
/* Array#249 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 652, AI_STATIC)
/* Array#250 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#251 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 112, AI_STATIC)
/* Array#252 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#253 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 297, AI_STATIC)
/* Array#254 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#255 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 52, AI_STATIC)
/* Array#256 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 88, AI_STATIC)
/* Array#257 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 112, AI_STATIC)
/* Array#258 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 432, AI_STATIC)
/* Array#259 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 125440, AI_STATIC)
/* Array#260 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1481, AI_STATIC)
/* Array#261 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 31360, AI_STATIC)
/* Array#262 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 320, AI_STATIC)
/* Array#263 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 544, AI_STATIC)
/* Array#264 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#265 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1777, AI_STATIC)
/* Array#266 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#267 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 352, AI_STATIC)
/* Array#268 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 544, AI_STATIC)
/* Array#269 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#270 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4081, AI_STATIC)
/* Array#271 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9408, AI_STATIC)
/* Array#272 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 312, AI_STATIC)
/* Array#273 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12, AI_STATIC)
/* Array#274 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 528, AI_STATIC)
/* Array#275 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 432, AI_STATIC)
/* Array#276 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)
/* Array#277 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#278 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 10201, AI_STATIC)
/* Array#279 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#280 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 780, AI_STATIC)
/* Array#281 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 30, AI_STATIC)
/* Array#282 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1320, AI_STATIC)
/* Array#283 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 720, AI_STATIC)
/* Array#284 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)
/* Array#285 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#286 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 10201, AI_STATIC)
/* Array#287 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#288 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 780, AI_STATIC)
/* Array#289 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 30, AI_STATIC)
/* Array#290 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1320, AI_STATIC)
/* Array#291 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 720, AI_STATIC)
/* Array#292 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 736, AI_STATIC)
/* Array#293 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#294 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5441, AI_STATIC)
/* Array#295 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#296 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 416, AI_STATIC)
/* Array#297 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 704, AI_STATIC)
/* Array#298 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 496, AI_STATIC)
/* Array#299 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 816, AI_STATIC)
/* Array#300 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#301 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6121, AI_STATIC)
/* Array#302 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#303 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 468, AI_STATIC)
/* Array#304 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 792, AI_STATIC)
/* Array#305 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 528, AI_STATIC)
/* Array#306 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#307 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)
/* Array#308 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12241, AI_STATIC)
/* Array#309 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7056, AI_STATIC)
/**  Array metadata declarations section  *************************************/
/* Int quant #0 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #1 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_77_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #2 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_79_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #3 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_86_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #4 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_87_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #5 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_89_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #6 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_96_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #7 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_98_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #8 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(serving_default_input_10_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_U8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007843137718737125f),
    AI_PACK_UINTQ_ZP(127)))

/* Int quant #9 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conversion_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007843137718737125f),
    AI_PACK_INTQ_ZP(-1)))

/* Int quant #10 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #11 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #12 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #13 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #14 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_4_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #15 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.009516200050711632f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #16 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_6_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0031124306842684746f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #17 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_7_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0031124306842684746f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #18 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_9_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.014954746700823307f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #19 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.10332554578781128f),
    AI_PACK_INTQ_ZP(2)))

/* Int quant #20 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #21 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #22 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #23 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08427556604146957f),
    AI_PACK_INTQ_ZP(-9)))

/* Int quant #24 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #25 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #26 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #27 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.06807182729244232f),
    AI_PACK_INTQ_ZP(5)))

/* Int quant #28 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_17_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.1034516990184784f),
    AI_PACK_INTQ_ZP(-4)))

/* Int quant #29 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #30 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #31 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_20_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #32 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #33 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00526403496041894f),
    AI_PACK_INTQ_ZP(-63)))

/* Int quant #34 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_23_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00526403496041894f),
    AI_PACK_INTQ_ZP(-63)))

/* Int quant #35 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_24_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #36 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_25_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0218984242528677f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #37 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.09420520067214966f),
    AI_PACK_INTQ_ZP(-14)))

/* Int quant #38 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #39 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #40 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_29_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #41 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #42 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_31_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007316198665648699f),
    AI_PACK_INTQ_ZP(-10)))

/* Int quant #43 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_32_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007316198665648699f),
    AI_PACK_INTQ_ZP(-10)))

/* Int quant #44 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_33_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #45 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_34_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #46 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_35_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08340273052453995f),
    AI_PACK_INTQ_ZP(-14)))

/* Int quant #47 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_36_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.1424964815378189f),
    AI_PACK_INTQ_ZP(-2)))

/* Int quant #48 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #49 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #50 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_39_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #51 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #52 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.012257272377610207f),
    AI_PACK_INTQ_ZP(45)))

/* Int quant #53 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_42_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.012257272377610207f),
    AI_PACK_INTQ_ZP(45)))

/* Int quant #54 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_43_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #55 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_44_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #56 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_45_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.07309067249298096f),
    AI_PACK_INTQ_ZP(2)))

/* Int quant #57 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_46_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.17490433156490326f),
    AI_PACK_INTQ_ZP(9)))

/* Int quant #58 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #59 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #60 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_49_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #61 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.02084592543542385f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #62 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_51_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006727815140038729f),
    AI_PACK_INTQ_ZP(-22)))

/* Int quant #63 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_52_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006727815140038729f),
    AI_PACK_INTQ_ZP(-22)))

/* Int quant #64 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_53_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #65 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_54_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #66 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0673380121588707f),
    AI_PACK_INTQ_ZP(19)))

/* Int quant #67 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_56_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.20240196585655212f),
    AI_PACK_INTQ_ZP(5)))

/* Int quant #68 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #69 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_58_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #70 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_59_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #71 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01719767227768898f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #72 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_61_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006357946898788214f),
    AI_PACK_INTQ_ZP(-30)))

/* Int quant #73 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_62_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006357946898788214f),
    AI_PACK_INTQ_ZP(-30)))

/* Int quant #74 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_63_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #75 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_64_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #76 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_65_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.07611342519521713f),
    AI_PACK_INTQ_ZP(-16)))

/* Int quant #77 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_66_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.22713306546211243f),
    AI_PACK_INTQ_ZP(-8)))

/* Int quant #78 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #79 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_68_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #80 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_69_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #81 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_70_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.022326180711388588f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #82 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_71_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007171421777456999f),
    AI_PACK_INTQ_ZP(-12)))

/* Int quant #83 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_72_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007171421777456999f),
    AI_PACK_INTQ_ZP(-12)))

/* Int quant #84 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_73_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #85 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_74_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #86 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_75_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08375091850757599f),
    AI_PACK_INTQ_ZP(-4)))

/* Int quant #87 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #88 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_77_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #89 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_78_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #90 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_79_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #91 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_80_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.011855513788759708f),
    AI_PACK_INTQ_ZP(43)))

/* Int quant #92 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_81_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.011855513788759708f),
    AI_PACK_INTQ_ZP(43)))

/* Int quant #93 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_82_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #94 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_83_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #95 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_84_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.06937107443809509f),
    AI_PACK_INTQ_ZP(4)))

/* Int quant #96 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_85_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.11802709847688675f),
    AI_PACK_INTQ_ZP(21)))

/* Int quant #97 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_86_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #98 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_87_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #99 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_88_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #100 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_89_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #101 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_90_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.015465336851775646f),
    AI_PACK_INTQ_ZP(62)))

/* Int quant #102 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_91_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.015465336851775646f),
    AI_PACK_INTQ_ZP(62)))

/* Int quant #103 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_92_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #104 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_93_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #105 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_94_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08162485808134079f),
    AI_PACK_INTQ_ZP(-1)))

/* Int quant #106 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_95_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.14292466640472412f),
    AI_PACK_INTQ_ZP(6)))

/* Int quant #107 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_96_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #108 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_97_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.014633315615355968f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #109 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_98_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #110 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_99_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.39035916328430176f),
    AI_PACK_INTQ_ZP(59)))

/* Int quant #111 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_101_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00390625f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #112 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.015465336851775646f),
    AI_PACK_INTQ_ZP(62)))

/* Int quant #113 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.011855513788759708f),
    AI_PACK_INTQ_ZP(43)))

/* Int quant #114 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007171421777456999f),
    AI_PACK_INTQ_ZP(-12)))

/* Int quant #115 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006357946898788214f),
    AI_PACK_INTQ_ZP(-30)))

/* Int quant #116 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006727815140038729f),
    AI_PACK_INTQ_ZP(-22)))

/* Int quant #117 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.012257272377610207f),
    AI_PACK_INTQ_ZP(45)))

/* Int quant #118 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007316198665648699f),
    AI_PACK_INTQ_ZP(-10)))

/* Int quant #119 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00526403496041894f),
    AI_PACK_INTQ_ZP(-63)))

/* Int quant #120 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0031124306842684746f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #121 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01118295919150114f, 0.008753325790166855f, 0.008631238713860512f, 0.005268042907118797f, 0.007194590289145708f, 0.009219306521117687f, 0.007873729802668095f, 0.006087170913815498f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #122 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004305631387978792f, 0.0030547131318598986f, 0.005220004357397556f, 0.004804220050573349f, 0.007399693597108126f, 0.002775711240246892f, 0.007609773427248001f, 0.00929138995707035f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #123 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0041474271565675735f, 0.012005417607724667f, 0.00778148602694273f, 0.010538630187511444f, 0.010073419660329819f, 0.02335343509912491f, 0.002650143578648567f, 0.00860107596963644f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #124 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 2,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005060416646301746f, 0.006031143479049206f),
    AI_PACK_INTQ_ZP(0, 0)))

/* Int quant #125 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_6_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0014592972584068775f, 0.0008485227590426803f, 0.0009324002894572914f, 0.0010489339474588633f, 0.0011330799898132682f, 0.0005537584656849504f, 0.0010058884508907795f, 0.0011815008474513888f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #126 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.013192808255553246f, 0.021107451990246773f, 0.016571981832385063f, 0.020852774381637573f, 0.01746571622788906f, 0.022294312715530396f, 0.017326397821307182f, 0.018320821225643158f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #127 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0043599954806268215f, 0.0035523076076060534f, 0.004461220465600491f, 0.002127958694472909f, 0.002170521765947342f, 0.004885260947048664f, 0.004533338826149702f, 0.004419063217937946f, 0.006688897032290697f, 0.004881509114056826f, 0.003653343301266432f, 0.004035378340631723f, 0.003972338046878576f, 0.0035387249663472176f, 0.004658181685954332f, 0.004411053843796253f, 0.008500476367771626f, 0.0027068699710071087f, 0.0029178885743021965f, 0.008419652469456196f, 0.004685815889388323f, 0.003967515658587217f, 0.0033224006183445454f, 0.0031243956182152033f, 0.003503723768517375f, 0.0029631732031702995f, 0.004468347877264023f, 0.0026863832026720047f, 0.00432465597987175f, 0.005254649091511965f, 0.0017836230108514428f, 0.007343448232859373f, 0.0043928362429142f, 0.003978360909968615f, 0.003173291450366378f, 0.003095229621976614f, 0.004357429686933756f, 0.005006080958992243f, 0.0028197509236633778f, 0.008868798613548279f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #128 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007767641916871071f, 0.004546359181404114f, 0.013212001882493496f, 0.023797787725925446f, 0.008097581565380096f, 0.017093002796173096f, 0.003542564809322357f, 0.00857746135443449f, 0.007945341989398003f, 0.010323825292289257f, 0.007358484901487827f, 0.013941636309027672f, 0.005242584273219109f, 0.003153052879497409f, 0.0036847300361841917f, 0.003886803751811385f, 0.008254645392298698f, 0.014180110767483711f, 0.017922764644026756f, 0.009615489281713963f, 0.005871511995792389f, 0.004874902777373791f, 0.006710702553391457f, 0.01990339905023575f, 0.007503410801291466f, 0.0033014947548508644f, 0.012800420634448528f, 0.008151357062160969f, 0.010752110742032528f, 0.008597375825047493f, 0.0073792459443211555f, 0.007026338018476963f, 0.006663356442004442f, 0.009672245010733604f, 0.008859825320541859f, 0.01659395359456539f, 0.01063497643917799f, 0.005018414929509163f, 0.008132717572152615f, 0.004993845243006945f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #129 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003529139794409275f, 0.004593033343553543f, 0.00384613242931664f, 0.0038348031230270863f, 0.005004492588341236f, 0.0038563066627830267f, 0.004414799623191357f, 0.0033316765911877155f, 0.0037441905587911606f, 0.004005192779004574f, 0.003791850758716464f, 0.0031118574552237988f, 0.0033968305215239525f, 0.0036045475862920284f, 0.003933401312679052f, 0.003155832877382636f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #130 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003580791177228093f, 0.0026047148276120424f, 0.001777328667230904f, 0.0012626745738089085f, 0.002238609129562974f, 0.002878814470022917f, 0.0033942058216780424f, 0.0031179434154182673f, 0.0016605192795395851f, 0.00397735508158803f, 0.002863203873857856f, 0.0017278911545872688f, 0.0021949945949018f, 0.0025045268703252077f, 0.0034017583820968866f, 0.0019905492663383484f, 0.0035504871048033237f, 0.003407986368983984f, 0.003157556289806962f, 0.0028964602388441563f, 0.002962761092931032f, 0.002071151277050376f, 0.002638857811689377f, 0.004379738122224808f, 0.0020280492026358843f, 0.0024124004412442446f, 0.003809145651757717f, 0.0015685767866671085f, 0.0031708350870758295f, 0.0025342623703181744f, 0.002799159614369273f, 0.002991355024278164f, 0.00201504398137331f, 0.004700685851275921f, 0.0019062345381826162f, 0.004079355392605066f, 0.0025820829905569553f, 0.0022114396560937166f, 0.003966822754591703f, 0.004522187169641256f, 0.0034522737842053175f, 0.0038045288529247046f, 0.0017083875136449933f, 0.002550884149968624f, 0.003942579496651888f, 0.003476670477539301f, 0.004158816300332546f, 0.0021463779266923666f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #131 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.02408357709646225f, 0.01146015990525484f, 0.011992021463811398f, 0.011005285196006298f, 0.004753153771162033f, 0.010097207501530647f, 0.008655015379190445f, 0.016195032745599747f, 0.007053134497255087f, 0.01002016756683588f, 0.015274743549525738f, 0.017808396369218826f, 0.009865444153547287f, 0.010414172895252705f, 0.006438651122152805f, 0.007025871891528368f, 0.013318290933966637f, 0.005738366860896349f, 0.00958981178700924f, 0.0078949686139822f, 0.01352236233651638f, 0.016537917777895927f, 0.00964596588164568f, 0.01561004389077425f, 0.012477170675992966f, 0.007786410395056009f, 0.005727862473577261f, 0.022886907681822777f, 0.023547306656837463f, 0.015623313374817371f, 0.024933142587542534f, 0.005001583136618137f, 0.0077378153800964355f, 0.009227743372321129f, 0.004358344245702028f, 0.00870787724852562f, 0.01282502245157957f, 0.012887576594948769f, 0.009455892257392406f, 0.007757304236292839f, 0.011119435541331768f, 0.02736647240817547f, 0.00689869187772274f, 0.016284173354506493f, 0.0074537391774356365f, 0.02330273762345314f, 0.003429171396419406f, 0.009656472131609917f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #132 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0022024286445230246f, 0.0018758262740448117f, 0.0031589101999998093f, 0.002467937069013715f, 0.0022350104991346598f, 0.002304909285157919f, 0.002788884099572897f, 0.001709898468106985f, 0.002034175908192992f, 0.0022129237186163664f, 0.0023127454333007336f, 0.0027592130936682224f, 0.002058925572782755f, 0.002163739874958992f, 0.0037552667781710625f, 0.0022433444391936064f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #133 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0021952870301902294f, 0.0013662195997312665f, 0.0021067182533442974f, 0.0024581251200288534f, 0.0018638524925336242f, 0.0015888083726167679f, 0.0026945373974740505f, 0.0024563795886933804f, 0.001473633456043899f, 0.0026111977640539408f, 0.0019703891593962908f, 0.0010872107231989503f, 0.002182621043175459f, 0.00267750583589077f, 0.0013868353562429547f, 0.0024478351697325706f, 0.003767105285078287f, 0.0010206224396824837f, 0.0016486761160194874f, 0.0023833434097468853f, 0.0021567032672464848f, 0.0028152333106845617f, 0.0025728153996169567f, 0.0026796895544975996f, 0.0018474931130185723f, 0.0019235124345868826f, 0.0026728049851953983f, 0.0011584300082176924f, 0.002177887363359332f, 0.0023083712439984083f, 0.0017506286967545748f, 0.001940627465955913f, 0.001505666645243764f, 0.001111832563765347f, 0.002121271565556526f, 0.002619367791339755f, 0.001472873380407691f, 0.0028521318454295397f, 0.002118242671713233f, 0.0017317448509857059f, 0.0019300658022984862f, 0.0042690010741353035f, 0.0020381563808768988f, 0.001745045417919755f, 0.0027755468618124723f, 0.002122520934790373f, 0.002770036458969116f, 0.0014827809063717723f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #134 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00488170376047492f, 0.006247553043067455f, 0.00424984423443675f, 0.0030047898180782795f, 0.006068806629627943f, 0.00466509722173214f, 0.00495742866769433f, 0.005687486380338669f, 0.0042120967991650105f, 0.003870465327054262f, 0.00496263662353158f, 0.006882926449179649f, 0.005142948590219021f, 0.007133351173251867f, 0.008874591439962387f, 0.002587567549198866f, 0.0033829722087830305f, 0.005496657453477383f, 0.004447004292160273f, 0.006489632651209831f, 0.003388446057215333f, 0.0024535914417356253f, 0.004559314344078302f, 0.0034153577871620655f, 0.004313777666538954f, 0.005607905797660351f, 0.0031319560948759317f, 0.014912890270352364f, 0.004224514123052359f, 0.0056091779842972755f, 0.004815889522433281f, 0.0041084131225943565f, 0.006880076602101326f, 0.0064245425164699554f, 0.003100114641711116f, 0.0020617542322725058f, 0.004385064356029034f, 0.0042276643216609955f, 0.0026932084001600742f, 0.0037885087076574564f, 0.0042131817899644375f, 0.002798394300043583f, 0.005296588875353336f, 0.0042945281602442265f, 0.0024041112046688795f, 0.003921139054000378f, 0.0027034771628677845f, 0.005465199705213308f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #135 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 12,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003424070542678237f, 0.003995741717517376f, 0.005613165441900492f, 0.0030847885645926f, 0.004037051927298307f, 0.007340555544942617f, 0.003151303855702281f, 0.002846810268238187f, 0.004169146995991468f, 0.004299654625356197f, 0.003271255875006318f, 0.0032063093967735767f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #136 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0006036048289388418f, 0.0007159805973060429f, 0.0007668527541682124f, 0.00100660917814821f, 0.0007585130515508354f, 0.0008850517333485186f, 0.0005992387305013835f, 0.0007729296339675784f, 0.0008128602639771998f, 0.0005578435375355184f, 0.0007456941530108452f, 0.0005852883332408965f, 0.0007926230318844318f, 0.000991336302831769f, 0.0006347580929286778f, 0.0006726693245582283f, 0.0006803472642786801f, 0.000656255055218935f, 0.00077793252421543f, 0.0012855144450441003f, 0.001008200808428228f, 0.0008969979244284332f, 0.0008793871966190636f, 0.0009893785463646054f, 0.0009605557424947619f, 0.0003526213113218546f, 0.0006711807800456882f, 0.0007193271303549409f, 0.0007741854642517865f, 0.000905072083696723f, 0.0007704300805926323f, 0.0008846502751111984f, 0.0007130121230147779f, 0.0005907599115744233f, 0.0007944993558339775f, 0.0007432824932038784f, 0.0008775400929152966f, 0.0007396199507638812f, 0.000983127043582499f, 0.00046188151463866234f, 0.0003210176946595311f, 0.00041322887409478426f, 0.00044925222755409777f, 0.0009095670538954437f, 0.0006811836501583457f, 0.0006949910311959684f, 0.0007851963164284825f, 0.0008894652128219604f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #137 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006014474201947451f, 0.0061318539083004f, 0.009965572506189346f, 0.0075094676576554775f, 0.006681062281131744f, 0.007699072826653719f, 0.007494821213185787f, 0.006812996231019497f, 0.007205004338175058f, 0.006680989172309637f, 0.009072541259229183f, 0.00809368584305048f, 0.006036687176674604f, 0.009298942051827908f, 0.006507929414510727f, 0.008165734820067883f, 0.010836443863809109f, 0.009607442654669285f, 0.0070429593324661255f, 0.006622533779591322f, 0.006785772740840912f, 0.01047099381685257f, 0.007332163862884045f, 0.007453763857483864f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #138 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0024098658468574286f, 0.0017006758134812117f, 0.0014792602742090821f, 0.0013563628308475018f, 0.002558477222919464f, 0.001994453137740493f, 0.0025320113636553288f, 0.0017385538667440414f, 0.0015302429674193263f, 0.0024352935142815113f, 0.0017392791341990232f, 0.002166429301723838f, 0.0019259239779785275f, 0.0028442684561014175f, 0.0012313908664509654f, 0.002019076608121395f, 0.0017704417696222663f, 0.0017270040698349476f, 0.0017227017087861896f, 0.0018225092208012938f, 0.001586590544320643f, 0.00265602208673954f, 0.001957884756848216f, 0.0031527213286608458f, 0.0016707159811630845f, 0.0017264721682295203f, 0.0019696736708283424f, 0.0021415119990706444f, 0.0023390112910419703f, 0.0014562271535396576f, 0.003647752571851015f, 0.0019922128412872553f, 0.0021705974359065294f, 0.0013242487329989672f, 0.001275897491723299f, 0.0018394938670098782f, 0.002008056500926614f, 0.0019284514710307121f, 0.0037914146669209003f, 0.002479830291122198f, 0.0024839146062731743f, 0.0016662501730024815f, 0.0016693472862243652f, 0.002928329398855567f, 0.0013183216797187924f, 0.002499539637938142f, 0.002171338303014636f, 0.0016430221730843186f, 0.0012837339891120791f, 0.0016199304955080152f, 0.002445915248245001f, 0.0019223958952352405f, 0.0017426616977900267f, 0.0023535429500043392f, 0.0010692226933315396f, 0.001877641654573381f, 0.0016982125816866755f, 0.0027134958654642105f, 0.0019407705403864384f, 0.0017332196002826095f, 0.0017424890538677573f, 0.0013808750081807375f, 0.0011017128126695752f, 0.0010954828467220068f, 0.0014244102640077472f, 0.0021739003714174032f, 0.0014572609215974808f, 0.001991234952583909f, 0.0017005633562803268f, 0.0020492267794907093f, 0.0013221475528553128f, 0.0015998699236661196f, 0.0027984343469142914f, 0.003578240517526865f, 0.0021724235266447067f, 0.002102808328345418f, 0.0027967998757958412f, 0.0017563026631250978f, 0.0016338623827323318f, 0.0025366502813994884f, 0.003506717272102833f, 0.00182798330206424f, 0.001486578956246376f, 0.0011194403050467372f, 0.0015003073494881392f, 0.0014172687660902739f, 0.0018608085811138153f, 0.0021906704641878605f, 0.0029645992908626795f, 0.002019603503867984f, 0.0014387421542778611f, 0.0017739549512043595f, 0.0016204430721700191f, 0.002842487534508109f, 0.0017294002464041114f, 0.0036603566259145737f, 0.0028344348538666964f, 0.0025223142001777887f, 0.0021753069013357162f, 0.0012221010401844978f, 0.001958622597157955f, 0.0018286359263584018f, 0.0022332186345010996f, 0.0018944760086014867f, 0.002696175826713443f, 0.002076484262943268f, 0.002760314615443349f, 0.0018505366751924157f, 0.0021411862690001726f, 0.002559680724516511f, 0.0023216132540255785f, 0.002251503523439169f, 0.0012666549300774932f, 0.001346195233054459f, 0.0013910034904256463f, 0.0011935965158045292f, 0.0015553781995549798f, 0.002584666945040226f, 0.0013670531334355474f, 0.002375552896410227f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #139 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004255871754139662f, 0.012058138847351074f, 0.0025545060634613037f, 0.012462332844734192f, 0.005313343368470669f, 0.010673213750123978f, 0.011388872750103474f, 0.003233251627534628f, 0.008863751776516438f, 0.00933602824807167f, 0.0020570119377225637f, 0.007482236251235008f, 0.006240001879632473f, 0.017712512984871864f, 0.0063048009760677814f, 0.004963383078575134f, 0.0035129711031913757f, 0.005846761167049408f, 0.00403137132525444f, 0.008857307024300098f, 0.01600368693470955f, 0.002352518728002906f, 0.01273905485868454f, 0.0040237088687717915f, 0.003037631744518876f, 0.01082701701670885f, 0.010171985253691673f, 0.005817991215735674f, 0.001832497538998723f, 0.017041558399796486f, 0.01007760874927044f, 0.004608271177858114f, 0.004146450664848089f, 0.009103544056415558f, 0.007390051614493132f, 0.00232704752124846f, 0.011722528375685215f, 0.007625477388501167f, 0.0058579822070896626f, 0.012050184421241283f, 0.003800349310040474f, 0.004815759137272835f, 0.00654652900993824f, 0.008471698500216007f, 0.003088670317083597f, 0.003191953292116523f, 0.002084731590002775f, 0.01021448615938425f, 0.01504090428352356f, 0.011693909764289856f, 0.009493420831859112f, 0.005939028691500425f, 0.0030950154177844524f, 0.00942845456302166f, 0.007013176567852497f, 0.00449352664873004f, 0.004362101200968027f, 0.004269500263035297f, 0.00603522127494216f, 0.0031974392477422953f, 0.007168878801167011f, 0.014145215041935444f, 0.016571559011936188f, 0.006961153820157051f, 0.007133707404136658f, 0.006827137898653746f, 0.019865503534674644f, 0.0019785123877227306f, 0.007016678806394339f, 0.006235102191567421f, 0.005161693785339594f, 0.01663932017982006f, 0.007082951720803976f, 0.009227189235389233f, 0.004291323013603687f, 0.005615468602627516f, 0.008063101209700108f, 0.008685726672410965f, 0.010202327743172646f, 0.003709755139425397f, 0.00495649641379714f, 0.017462337389588356f, 0.019459376111626625f, 0.002406666288152337f, 0.005489675793796778f, 0.0066251130774617195f, 0.006609571631997824f, 0.0037978985346853733f, 0.003155988873913884f, 0.004905503708869219f, 0.007181908003985882f, 0.004199958872050047f, 0.0027404441498219967f, 0.002407805062830448f, 0.01276418101042509f, 0.003232836490496993f, 0.003932228311896324f, 0.004612901713699102f, 0.0047843120992183685f, 0.014904292300343513f, 0.013470546342432499f, 0.0031178402714431286f, 0.006221095100045204f, 0.006163271609693766f, 0.007499323692172766f, 0.0074454681016504765f, 0.008367196656763554f, 0.0033253629226237535f, 0.003380581270903349f, 0.002245507435873151f, 0.004311500582844019f, 0.002563935238867998f, 0.006129438988864422f, 0.01219006534665823f, 0.008244873955845833f, 0.019771680235862732f, 0.006597047671675682f, 0.002395487856119871f, 0.005488218739628792f, 0.0031283407006412745f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #140 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 30,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003920228686183691f, 0.004198124166578054f, 0.0015747231664136052f, 0.004610780626535416f, 0.002042659092694521f, 0.003549546469002962f, 0.001864283811300993f, 0.003667844459414482f, 0.004769920837134123f, 0.0037837601266801357f, 0.004687408450990915f, 0.0018469836795702577f, 0.0020513490308076143f, 0.002151462947949767f, 0.004874702543020248f, 0.002224375493824482f, 0.0019167629070580006f, 0.001954435370862484f, 0.00483195623382926f, 0.0020176570396870375f, 0.002212527673691511f, 0.0037626686971634626f, 0.004979195538908243f, 0.004071229603141546f, 0.003453632118180394f, 0.005739549174904823f, 0.007266816683113575f, 0.004129806067794561f, 0.0018210376147180796f, 0.0038142038974910975f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #141 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_31_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0009705669363029301f, 0.000988681335002184f, 0.0007046153768897057f, 0.0005191805539652705f, 0.0007261062855832279f, 0.0005732544232159853f, 0.0008822660893201828f, 0.0006610480486415327f, 0.0006451894878409803f, 0.000806560623459518f, 0.0008893298800103366f, 0.0006167340907268226f, 0.0009307739092037082f, 0.0007119147339835763f, 0.0008411263697780669f, 0.0009945003548637033f, 0.0006187987746670842f, 0.0006729480228386819f, 0.0007534838514402509f, 0.0006651465664617717f, 0.0007313659298233688f, 0.0007747606141492724f, 0.0007976664346642792f, 0.0005812733434140682f, 0.0008402513340115547f, 0.0008649431983940303f, 0.0005959445261396468f, 0.000659823592286557f, 0.0007296054973267019f, 0.0005217032157815993f, 0.0006341777625493705f, 0.0006094644195400178f, 0.0006450598011724651f, 0.0006657036137767136f, 0.00045361791853792965f, 0.0009655322064645588f, 0.0010125909466296434f, 0.0009102672338485718f, 0.00058416259707883f, 0.0005048480234108865f, 0.0006045274785719812f, 0.0003995913139078766f, 0.0004991477471776307f, 0.0006894576945342124f, 0.0005148989730514586f, 0.00035023887176066637f, 0.0007121461676433682f, 0.000584346940740943f, 0.0006148054380901158f, 0.0010167235741391778f, 0.0007697720429860055f, 0.00046552118146792054f, 0.000810303958132863f, 0.0005374803440645337f, 0.0007147003198042512f, 0.0006585853407159448f, 0.0007092310697771609f, 0.0005744442460127175f, 0.0007218124228529632f, 0.0007157953805290163f, 0.0007341184536926448f, 0.0006371817435137928f, 0.0007311519584618509f, 0.0007052079308778048f, 0.0005678055458702147f, 0.00044195755617693067f, 0.000725733523722738f, 0.0008725473890081048f, 0.0006614325102418661f, 0.00037404615432024f, 0.0008776540053077042f, 0.0005474580102600157f, 0.0006424853345379233f, 0.0005903458222746849f, 0.0007271749200299382f, 0.0006494541885331273f, 0.0007070481078699231f, 0.0007725972100161016f, 0.00046548355021514f, 0.0006676852935925126f, 0.0008721864433027804f, 0.0008233722764998674f, 0.0005197847494855523f, 0.0005807611742056906f, 0.0006730483146384358f, 0.0008093810174614191f, 0.0007671978091821074f, 0.0006533616688102484f, 0.0008549441117793322f, 0.0004306066839490086f, 0.0005131377256475389f, 0.0007167232688516378f, 0.000613745185546577f, 0.0007325560436584055f, 0.0007102309027686715f, 0.0005757982726208866f, 0.0007544135442003608f, 0.0004997649812139571f, 0.0006842793081887066f, 0.0007461879285983741f, 0.0008489089086651802f, 0.0009764058631844819f, 0.0005825475673191249f, 0.0006901107262820005f, 0.00042974602547474205f, 0.0006302305846475065f, 0.0007229226175695658f, 0.0005719743203371763f, 0.0008462092955596745f, 0.0008609298965893686f, 0.0009607772808521986f, 0.0005895054782740772f, 0.0009223963716067374f, 0.000771805236581713f, 0.0007023315411061049f, 0.0005835245829075575f, 0.0008091920171864331f, 0.0005340512725524604f, 0.0005437310901470482f, 0.0008720234036445618f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #142 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_35_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004848525393754244f, 0.00493264477699995f, 0.003192116506397724f, 0.0031897067092359066f, 0.004059604834765196f, 0.0040462142787873745f, 0.003228419926017523f, 0.003707281546667218f, 0.004033765755593777f, 0.004983692429959774f, 0.0033496925607323647f, 0.003080186666920781f, 0.004405318293720484f, 0.0046544671058654785f, 0.004011520184576511f, 0.003690871875733137f, 0.0030973427928984165f, 0.00467033963650465f, 0.003223883453756571f, 0.0030724508687853813f, 0.004569577053189278f, 0.004173769149929285f, 0.0034917909651994705f, 0.002572542754933238f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #143 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0012724008411169052f, 0.0011723260395228863f, 0.0019735482055693865f, 0.0014307344099506736f, 0.0021222250070422888f, 0.002007102593779564f, 0.0011671704705804586f, 0.0013967970153316855f, 0.0012354584177955985f, 0.0020663458853960037f, 0.0015916210832074285f, 0.002051631221547723f, 0.002662095008417964f, 0.000696924515068531f, 0.0020138267427682877f, 0.0015573665732517838f, 0.0017883299151435494f, 0.0013199528912082314f, 0.0015724177937954664f, 0.0018452949589118361f, 0.0012963474728167057f, 0.0027151857502758503f, 0.0018406723393127322f, 0.0013198214583098888f, 0.0013866473454982042f, 0.001576326321810484f, 0.0018364947754889727f, 0.0016556953778490424f, 0.0023014217149466276f, 0.0007222599815577269f, 0.0012920395238325f, 0.0010855485452339053f, 0.001057197107002139f, 0.0011865185806527734f, 0.0009979206370189786f, 0.0011735367588698864f, 0.0015687172999605536f, 0.0012338835513219237f, 0.0013237391831353307f, 0.0023709333036094904f, 0.0012697878992184997f, 0.0005883533740416169f, 0.0017820546636357903f, 0.0016207186272367835f, 0.0020621749572455883f, 0.0017650608206167817f, 0.0012926026247441769f, 0.0018504324834793806f, 0.0014523073332384229f, 0.0019305540481582284f, 0.0016953570302575827f, 0.0017624101601541042f, 0.0012479058932512999f, 0.0017797218170017004f, 0.002023499459028244f, 0.0025994442403316498f, 0.0013610530877485871f, 0.0015618408797308803f, 0.0013685575686395168f, 0.0012515902053564787f, 0.0009190387791022658f, 0.0011402403470128775f, 0.003042857628315687f, 0.0012652187142521143f, 0.002456342102959752f, 0.0025591226294636726f, 0.0011883380357176065f, 0.0013300630962476134f, 0.001411110395565629f, 0.0011048645246773958f, 0.001193318865261972f, 0.0013723315205425024f, 0.0021377939265221357f, 0.002868012059479952f, 0.0012370258336886764f, 0.0021909349597990513f, 0.0016005287179723382f, 0.00133665488101542f, 0.0013624748680740595f, 0.002168816514313221f, 0.0013003387721255422f, 0.001960668247193098f, 0.0015454253880307078f, 0.0012647825060412288f, 0.0017870712326839566f, 0.0017345916712656617f, 0.0017656614072620869f, 0.0007586625288240612f, 0.001750959432683885f, 0.0015980188036337495f, 0.0016186656430363655f, 0.001589540159329772f, 0.0012832237407565117f, 0.0013184384442865849f, 0.001668207929469645f, 0.0021791860926896334f, 0.0020463592372834682f, 0.0011117412941530347f, 0.002076241886243224f, 0.0011827190173789859f, 0.0020467196591198444f, 0.0011321294587105513f, 0.00282741105183959f, 0.0022641746327281f, 0.0017724598292261362f, 0.002488519065082073f, 0.0010547478450462222f, 0.0012751152971759439f, 0.0016519067576155066f, 0.0012753905029967427f, 0.0028192640747874975f, 0.0013665443984791636f, 0.0022880176547914743f, 0.001466722460463643f, 0.0012097362196072936f, 0.0016335508553311229f, 0.0016716242535039783f, 0.0014189219800755382f, 0.0020583823788911104f, 0.0019543843809515238f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #144 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0036325552500784397f, 0.010907014831900597f, 0.00587467523291707f, 0.004913173150271177f, 0.0019037039019167423f, 0.002129538916051388f, 0.0064463852904737f, 0.004829806741327047f, 0.009547479450702667f, 0.014420523308217525f, 0.004406686872243881f, 0.009806239046156406f, 0.003098492044955492f, 0.009722787886857986f, 0.0041603464633226395f, 0.002709962660446763f, 0.007711883634328842f, 0.006917697377502918f, 0.00919446349143982f, 0.0016756155528128147f, 0.013985944911837578f, 0.002212752588093281f, 0.003945108037441969f, 0.002766250167042017f, 0.008399475365877151f, 0.004726088605821133f, 0.005899062845855951f, 0.007622115314006805f, 0.00453555304557085f, 0.029005253687500954f, 0.004248719196766615f, 0.006134293973445892f, 0.01578572206199169f, 0.009249008260667324f, 0.03552228957414627f, 0.007188387215137482f, 0.007406288757920265f, 0.010168482549488544f, 0.008273742161691189f, 0.002769539598375559f, 0.0065845041535794735f, 0.028076140210032463f, 0.004094667267054319f, 0.008722135797142982f, 0.00669555738568306f, 0.0034378368873149157f, 0.006881379522383213f, 0.005233265459537506f, 0.01061429176479578f, 0.005966340657323599f, 0.004370676353573799f, 0.002308838302269578f, 0.003513588337227702f, 0.002112428657710552f, 0.0031137221958488226f, 0.0015475178370252252f, 0.010428841225802898f, 0.007041321601718664f, 0.014960035681724548f, 0.0024230426643043756f, 0.011268091388046741f, 0.004000961314886808f, 0.0035758635494858027f, 0.0034473873674869537f, 0.0023185675963759422f, 0.0023836398031562567f, 0.009117720648646355f, 0.006955390330404043f, 0.012274663895368576f, 0.0339740552008152f, 0.006207400467246771f, 0.0031140130013227463f, 0.003622346790507436f, 0.002144169993698597f, 0.0064515117555856705f, 0.009322430938482285f, 0.012785958126187325f, 0.0031208444852381945f, 0.002592971781268716f, 0.0036754861939698458f, 0.010628599673509598f, 0.0023969653993844986f, 0.004641330800950527f, 0.0047342367470264435f, 0.0033482450526207685f, 0.0020324180368334055f, 0.0024059247225522995f, 0.018358685076236725f, 0.009154715575277805f, 0.010538795962929726f, 0.012798932380974293f, 0.002064715139567852f, 0.010875350795686245f, 0.0035179443657398224f, 0.0034872391261160374f, 0.0019124264363199472f, 0.004902729764580727f, 0.005217335652559996f, 0.0034772187937051058f, 0.0024377391673624516f, 0.004648404661566019f, 0.007561422418802977f, 0.0022632135078310966f, 0.0025112424045801163f, 0.005364379845559597f, 0.004715226124972105f, 0.00874126236885786f, 0.0045319898054003716f, 0.003909256774932146f, 0.006049570627510548f, 0.0035718707367777824f, 0.0018537541618570685f, 0.007073719520121813f, 0.0023409940768033266f, 0.0075668408535420895f, 0.005790729075670242f, 0.011585804633796215f, 0.003790259826928377f, 0.006295406725257635f, 0.01901456154882908f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #145 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 30,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00507028354331851f, 0.002050373936071992f, 0.0037822818849235773f, 0.005758586805313826f, 0.0034898745361715555f, 0.003753348020836711f, 0.001932642888277769f, 0.001962577225640416f, 0.0020442684181034565f, 0.0018075683619827032f, 0.0035826005041599274f, 0.004712203983217478f, 0.0044309403747320175f, 0.004925336688756943f, 0.0020214098040014505f, 0.0042512379586696625f, 0.0035353198181837797f, 0.0038285679183900356f, 0.0017116301460191607f, 0.00184318155515939f, 0.0019486453384160995f, 0.005164030473679304f, 0.0038507075514644384f, 0.0016444082139059901f, 0.0039059447590261698f, 0.0038843152578920126f, 0.001862388220615685f, 0.003899239469319582f, 0.0035833099391311407f, 0.003939254209399223f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #146 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0009956673020496964f, 0.0005702920607291162f, 0.0005821008235216141f, 0.0007656647940166295f, 0.0007152194157242775f, 0.0005987028125673532f, 0.0008665177738294005f, 0.000672787893563509f, 0.0006178879411891103f, 0.0004655108496081084f, 0.0006236162735149264f, 0.0006646679248660803f, 0.0007039523916319013f, 0.0007216960075311363f, 0.0009087044163607061f, 0.0006499693263322115f, 0.0007570458692498505f, 0.0007317744311876595f, 0.0004627649032045156f, 0.0007957118796184659f, 0.0006195811438374221f, 0.0007618397939950228f, 0.0007623857236467302f, 0.0005331572028808296f, 0.0008254216518253088f, 0.0005252168048173189f, 0.0006131876143626869f, 0.0007196408114396036f, 0.0005828473367728293f, 0.0009219638304784894f, 0.0006178666953928769f, 0.0008402222883887589f, 0.0006917170831002295f, 0.0007012303685769439f, 0.000662313133943826f, 0.0006608067196793854f, 0.0007370656239800155f, 0.0006918369326740503f, 0.0008985265740193427f, 0.0004392438568174839f, 0.0007274316740222275f, 0.000803702394478023f, 0.0008059785468503833f, 0.0007202962879091501f, 0.0008432457107119262f, 0.0007149031152948737f, 0.0005360990762710571f, 0.0008254683925770223f, 0.0008565395255573094f, 0.0008100729319266975f, 0.0006185693782754242f, 0.0010300700087100267f, 0.0010174672352150083f, 0.0005582362064160407f, 0.00047118079965002835f, 0.0007870456902310252f, 0.0005905639263801277f, 0.0007081592921167612f, 0.0007637426606379449f, 0.0006121325423009694f, 0.0006139472825452685f, 0.0007529057911597192f, 0.000916635908652097f, 0.0005206115311011672f, 0.0007020933553576469f, 0.0007080569048412144f, 0.00067053985549137f, 0.0005695819272659719f, 0.0005571505753323436f, 0.0006038194405846298f, 0.0007474164594896138f, 0.0007123854593373835f, 0.0005093893851153553f, 0.0008326281677000225f, 0.0006905909394845366f, 0.000591277435887605f, 0.0006307290168479085f, 0.0003885910555254668f, 0.0008165556355379522f, 0.0006831789505667984f, 0.0005968836485408247f, 0.0007617968949489295f, 0.0005305404192768037f, 0.0007660826086066663f, 0.00040291488403454423f, 0.0008061943226493895f, 0.00047376632574014366f, 0.0005191742675378919f, 0.0011709480313584208f, 0.000710165302734822f, 0.0009287354769185185f, 0.0009598435717634857f, 0.0006547703524120152f, 0.0008488415041938424f, 0.0005321017233654857f, 0.0007179921376518905f, 0.000563514418900013f, 0.0008186943014152348f, 0.0007285414612852037f, 0.0008380000945180655f, 0.0005148191121406853f, 0.0007210220792330801f, 0.00042691591079346836f, 0.0007942044758237898f, 0.00045896609663031995f, 0.0003948724188376218f, 0.0005753354053013027f, 0.0005894888890907168f, 0.0007511567673645914f, 0.0006755731883458793f, 0.0008103924337774515f, 0.0008711589616723359f, 0.0005576320108957589f, 0.0003912012907676399f, 0.00042740674689412117f, 0.0007003493374213576f, 0.0006771638290956616f, 0.0005319459014572203f, 0.0006452537490986288f, 0.0005727119278162718f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #147 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_45_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003023552242666483f, 0.003494339995086193f, 0.003784443251788616f, 0.0034559103660285473f, 0.0034709558822214603f, 0.005329139530658722f, 0.004265515599399805f, 0.003559540957212448f, 0.0032517414074391127f, 0.005914716515690088f, 0.004671705421060324f, 0.0028189634904265404f, 0.003910689149051905f, 0.0043862066231667995f, 0.0044075921177864075f, 0.004503889009356499f, 0.0045430101454257965f, 0.005088417790830135f, 0.00449995556846261f, 0.005672505125403404f, 0.0039034574292600155f, 0.004126096144318581f, 0.004125694744288921f, 0.002121583092957735f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #148 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0011107739992439747f, 0.0011383389355614781f, 0.0010170371970161796f, 0.000826883246190846f, 0.0012668614508584142f, 0.002219965448603034f, 0.0018417479004710913f, 0.0014140275306999683f, 0.0017952470807358623f, 0.001132256700657308f, 0.001103860791772604f, 0.0016754649113863707f, 0.0014488424640148878f, 0.001641957787796855f, 0.0021871558856219053f, 0.0009467577910982072f, 0.0009077588329091668f, 0.0014891019091010094f, 0.001662033493630588f, 0.0010893361177295446f, 0.0007616448565386236f, 0.0016836350550875068f, 0.0012204350205138326f, 0.0020482842810451984f, 0.0020611241925507784f, 0.0012214217567816377f, 0.0010314900428056717f, 0.0008190524531528354f, 0.0016940947389230132f, 0.0023015858605504036f, 0.002383464714512229f, 0.0012375389924272895f, 0.0010583925759419799f, 0.0009156144224107265f, 0.0010012636194005609f, 0.0008941128035075963f, 0.0013400667812675238f, 0.0014928416348993778f, 0.0011875195195898414f, 0.0009029091452248394f, 0.0016763184685260057f, 0.0013034725561738014f, 0.001755038509145379f, 0.0019435652066022158f, 0.0008978939149528742f, 0.0019295482197776437f, 0.0010730577632784843f, 0.0018937949789687991f, 0.0012126123765483499f, 0.0018664175877347589f, 0.0011938742827624083f, 0.0016908193938434124f, 0.0010837478330358863f, 0.0019717852119356394f, 0.0019205526914447546f, 0.001727737719193101f, 0.0028506822418421507f, 0.0019382609752938151f, 0.0014533879002556205f, 0.0015894862590357661f, 0.0010433541610836983f, 0.0015920520527288318f, 0.0009794937213882804f, 0.0010232727508991957f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #149 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003094769548624754f, 0.002368989633396268f, 0.004113353788852692f, 0.004646499175578356f, 0.0028322706930339336f, 0.003993700258433819f, 0.004438306204974651f, 0.003590113716199994f, 0.004262404516339302f, 0.004278081003576517f, 0.005052709020674229f, 0.007708326447755098f, 0.003884453559294343f, 0.010769626125693321f, 0.0041107055731117725f, 0.004424892831593752f, 0.011044193990528584f, 0.004889387637376785f, 0.008263460360467434f, 0.002821407513692975f, 0.010649758391082287f, 0.00797661580145359f, 0.01402838435024023f, 0.002641223603859544f, 0.0035790528636425734f, 0.0025497297756373882f, 0.004958027042448521f, 0.0107789421454072f, 0.00811778660863638f, 0.009678376838564873f, 0.010398007929325104f, 0.011375187896192074f, 0.003590152831748128f, 0.013778415508568287f, 0.005664785858243704f, 0.004320000763982534f, 0.005471290089190006f, 0.0031856114510446787f, 0.006386436987668276f, 0.005370497703552246f, 0.003611265914514661f, 0.002265127142891288f, 0.003513581119477749f, 0.004042779095470905f, 0.005954388994723558f, 0.0028372297529131174f, 0.004397493787109852f, 0.0021100782323628664f, 0.009909851476550102f, 0.0031452265102416277f, 0.004809683188796043f, 0.0019598498474806547f, 0.005286430008709431f, 0.0024514636024832726f, 0.0026927334256470203f, 0.001998061081394553f, 0.0049996706657111645f, 0.004586575087159872f, 0.004815081600099802f, 0.007974361069500446f, 0.007065196055918932f, 0.00578833743929863f, 0.015206720679998398f, 0.004099556244909763f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #150 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005571912508457899f, 0.0061052534729242325f, 0.004041338339447975f, 0.0031684949062764645f, 0.0039169685915112495f, 0.004540990572422743f, 0.004490871913731098f, 0.005568715278059244f, 0.0038581672124564648f, 0.004794414155185223f, 0.003433386329561472f, 0.004138106945902109f, 0.00419581076130271f, 0.0032723648473620415f, 0.004770718980580568f, 0.005010776687413454f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #151 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_51_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.000559563166461885f, 0.0006622449145652354f, 0.0007338155410252512f, 0.001010123873129487f, 0.0006621459615416825f, 0.0008519440307281911f, 0.0009393843356519938f, 0.0008515208610333502f, 0.0007959200302138925f, 0.0009186046663671732f, 0.0008629197254776955f, 0.0007671553757973015f, 0.0006058992585167289f, 0.0007257585530169308f, 0.0007772733806632459f, 0.0005506050656549633f, 0.0013660683762282133f, 0.0009809876792132854f, 0.0009632648434489965f, 0.0006636555190198123f, 0.0007790779345668852f, 0.0005569185013882816f, 0.0006567172240465879f, 0.000682707701344043f, 0.000542497611604631f, 0.0006446815677918494f, 0.000578553881496191f, 0.0005171045777387917f, 0.0009308129083365202f, 0.0005351711879484355f, 0.0006939684972167015f, 0.0007054185261949897f, 0.000877183920238167f, 0.0005855534691363573f, 0.0008157432312145829f, 0.0005706369993276894f, 0.0010592836188152432f, 0.0008970614871941507f, 0.0005436658975668252f, 0.000728124170564115f, 0.0005371987936086953f, 0.0006823759176768363f, 0.0009271741146221757f, 0.0006176008610054851f, 0.0006221036310307682f, 0.00092951615806669f, 0.0005994057864882052f, 0.0007130017038434744f, 0.0006854540552012622f, 0.0010844195494428277f, 0.0007136196363717318f, 0.000757140398491174f, 0.0007916377508081496f, 0.0008012181497178972f, 0.0007060338393785059f, 0.0007716479594819248f, 0.000547514297068119f, 0.0011016385396942496f, 0.0011268146336078644f, 0.0006257161730900407f, 0.0006988386157900095f, 0.0007442165515385568f, 0.000826633651740849f, 0.000754323264118284f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #152 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0044324672780931f, 0.006456178613007069f, 0.0035336629953235388f, 0.005428322125226259f, 0.003605755278840661f, 0.005890936125069857f, 0.005776928272098303f, 0.00435236282646656f, 0.004383591935038567f, 0.003725930582731962f, 0.004767733160406351f, 0.0039212522096931934f, 0.005763338413089514f, 0.00587355624884367f, 0.003689534030854702f, 0.0031104518566280603f, 0.005702737718820572f, 0.004173319321125746f, 0.006417210679501295f, 0.0045479414984583855f, 0.0066230506636202335f, 0.005548529326915741f, 0.004747177939862013f, 0.0038624033331871033f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #153 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0022093032021075487f, 0.0006262456299737096f, 0.0011659347219392657f, 0.001037385081872344f, 0.0008576489053666592f, 0.0010408839443698525f, 0.0018118361476808786f, 0.0007224371656775475f, 0.0010869527468457818f, 0.0007515859906561673f, 0.0007400722242891788f, 0.0007588462322019041f, 0.0013641841942444444f, 0.0020391952712088823f, 0.0024628913961350918f, 0.0012164725922048092f, 0.0013288871850818396f, 0.0016982934903353453f, 0.0010021445341408253f, 0.000665247265715152f, 0.0009916627313941717f, 0.0007302620215341449f, 0.0017260410822927952f, 0.0009008256020024419f, 0.0011787577532231808f, 0.0013394199777394533f, 0.0006957984296604991f, 0.001565943588502705f, 0.0009689152357168496f, 0.0013989655999466777f, 0.0008787772385403514f, 0.0012642481597140431f, 0.0012767781736329198f, 0.0024267463013529778f, 0.0011810919968411326f, 0.0007903638179413974f, 0.0013984699035063386f, 0.001307933940552175f, 0.001182081177830696f, 0.0008197964052669704f, 0.001060214824974537f, 0.0012249863939359784f, 0.0005666967481374741f, 0.0010415698634460568f, 0.0016462159110233188f, 0.0011842944659292698f, 0.0007698242552578449f, 0.0017775068990886211f, 0.0015067296335473657f, 0.0015554869314655662f, 0.0009091057581827044f, 0.0011986438184976578f, 0.002081079874187708f, 0.0011319752084091306f, 0.0010773686226457357f, 0.0013654642971232533f, 0.0006805076263844967f, 0.001496718730777502f, 0.0012422194704413414f, 0.0015904498286545277f, 0.0017364063533023f, 0.0020691670943051577f, 0.001039779861457646f, 0.0013026006054133177f, 0.0018839178374037147f, 0.0008690417744219303f, 0.000782001472543925f, 0.0015490292571485043f, 0.0013145203702151775f, 0.0008019186207093298f, 0.002071127062663436f, 0.000752798339817673f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #154 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_58_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0024083552416414022f, 0.021219002082943916f, 0.009418247267603874f, 0.0049836281687021255f, 0.02676149643957615f, 0.0053360071033239365f, 0.005125993397086859f, 0.005145159084349871f, 0.002617029706016183f, 0.01454917062073946f, 0.010161950252950191f, 0.011882182210683823f, 0.004825285170227289f, 0.003390988800674677f, 0.0022708685137331486f, 0.004046538379043341f, 0.00362061383202672f, 0.010159862227737904f, 0.005365655291825533f, 0.010530025698244572f, 0.005407255608588457f, 0.006955210119485855f, 0.0039052844513207674f, 0.011437598615884781f, 0.004039066378027201f, 0.0021030332427471876f, 0.009419023059308529f, 0.002103096805512905f, 0.010568431578576565f, 0.00957397185266018f, 0.00774971442297101f, 0.007458799984306097f, 0.004634100943803787f, 0.004190112929791212f, 0.002432572888210416f, 0.011908022686839104f, 0.00794140063226223f, 0.006151970475912094f, 0.004582858644425869f, 0.005625717807561159f, 0.004466544836759567f, 0.008072469383478165f, 0.03466745465993881f, 0.005665868055075407f, 0.002410098211839795f, 0.0032134170178323984f, 0.0055856588296592236f, 0.004372540395706892f, 0.007849994115531445f, 0.003448289819061756f, 0.003986685071140528f, 0.007285640574991703f, 0.0030957337003201246f, 0.00475857499986887f, 0.008777793496847153f, 0.002743013435974717f, 0.03073163516819477f, 0.0019389399094507098f, 0.0047113304026424885f, 0.0057776207104325294f, 0.004241712857037783f, 0.0020304927602410316f, 0.012877900153398514f, 0.005820301361382008f, 0.0019145358819514513f, 0.008707690052688122f, 0.007098452188074589f, 0.00691650714725256f, 0.0028162398375570774f, 0.01344417966902256f, 0.0015702457167208195f, 0.0039775981567800045f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #155 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 18,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002393443137407303f, 0.004717829171568155f, 0.004468818660825491f, 0.005595893133431673f, 0.003971780650317669f, 0.0036353047471493483f, 0.003796346252784133f, 0.004197333939373493f, 0.004412473179399967f, 0.005136051215231419f, 0.00567003944888711f, 0.005132248625159264f, 0.006392745301127434f, 0.004978562239557505f, 0.0022801803424954414f, 0.00557681592181325f, 0.0047433157451450825f, 0.004438244272023439f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #156 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_61_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0010341842425987124f, 0.0005714542930945754f, 0.0006411257782019675f, 0.0010068925330415368f, 0.0004956955090165138f, 0.0008727480890229344f, 0.0007714617531746626f, 0.0008363262168131769f, 0.000729378021787852f, 0.0008891636389307678f, 0.0007246072636917233f, 0.0005544795421883464f, 0.0006606731913052499f, 0.0009811389027163386f, 0.000634450581856072f, 0.001283265883103013f, 0.0007320664008148015f, 0.0009834645316004753f, 0.0007337267743423581f, 0.001137189450673759f, 0.0010916247265413404f, 0.0006393201183527708f, 0.0008678306476213038f, 0.0007814497221261263f, 0.0007832376286387444f, 0.001071952166967094f, 0.0009410390048287809f, 0.0009163788636215031f, 0.000589849310927093f, 0.0011125848395749927f, 0.0011124189477413893f, 0.0006782767595723271f, 0.0007029026164673269f, 0.0008653094409964979f, 0.000615379773080349f, 0.0010362152243033051f, 0.0009826282039284706f, 0.0007528301794081926f, 0.0009036877891048789f, 0.0009626656537875533f, 0.000693179783411324f, 0.001039594761095941f, 0.001196733908727765f, 0.0008304198854602873f, 0.0006007366464473307f, 0.0010403204942122102f, 0.0010123536922037601f, 0.0006150564877316356f, 0.0006418255507014692f, 0.0006805345765314996f, 0.0006779246614314616f, 0.0007929099374450743f, 0.0006352855707518756f, 0.0005283667123876512f, 0.0008171770023182034f, 0.0006061654421500862f, 0.0008125592721626163f, 0.0006125516956672072f, 0.0006446191109716892f, 0.0008083180291578174f, 0.0006679039215669036f, 0.0010496634058654308f, 0.0008834960171952844f, 0.0007743907626718283f, 0.0008155185496434569f, 0.0006039345753379166f, 0.0008109984337352216f, 0.001003761077299714f, 0.0009168817778117955f, 0.0008489995962008834f, 0.001065058633685112f, 0.0007354577537626028f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #157 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_65_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004718595650047064f, 0.0053677973337471485f, 0.0034215725027024746f, 0.0034088988322764635f, 0.0042946492321789265f, 0.004481861833482981f, 0.0059328931383788586f, 0.005191649775952101f, 0.00447078887373209f, 0.007102120667695999f, 0.0033421313855797052f, 0.0031450344249606133f, 0.00585164176300168f, 0.006280794739723206f, 0.004529873374849558f, 0.005286177154630423f, 0.004988483618944883f, 0.0050037698820233345f, 0.004809313919395208f, 0.005680019501596689f, 0.003237062832340598f, 0.006385693326592445f, 0.0033348812721669674f, 0.0033948912750929594f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #158 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0009942188626155257f, 0.0015632681315764785f, 0.0007170123280957341f, 0.0011603415478020906f, 0.001378892920911312f, 0.0010353302350267768f, 0.0010051717981696129f, 0.000930328038521111f, 0.0008126009488478303f, 0.0005009275628253818f, 0.001228156965225935f, 0.0011197070125490427f, 0.0009194021113216877f, 0.0012168436078354716f, 0.0012455638498067856f, 0.0009914655238389969f, 0.0014794067246839404f, 0.00046156696043908596f, 0.0011895968345925212f, 0.0006265050615184009f, 0.0009603087091818452f, 0.0008838538778945804f, 0.0007322396268136799f, 0.0009619713528081775f, 0.0003179485211148858f, 0.0006649782881140709f, 0.0010935134487226605f, 0.000683616497553885f, 0.0012155105359852314f, 0.0021352125331759453f, 0.0011008050059899688f, 0.0008252823608927429f, 0.0012923796894028783f, 0.0010208102175965905f, 0.000993872876279056f, 0.0006266328855417669f, 0.0011424162657931447f, 0.0008833686006255448f, 0.0017154780216515064f, 0.0011045390274375677f, 0.0009404737502336502f, 0.0010711157228797674f, 0.0006115736323408782f, 0.001330093713477254f, 0.0009014623356051743f, 0.0009569743415340781f, 0.0007566838758066297f, 0.0013879762263968587f, 0.0006903220200911164f, 0.0014943673741072416f, 0.0012763726990669966f, 0.0008897687657736242f, 0.0015070185763761401f, 0.0011348676634952426f, 0.0011903858976438642f, 0.0010259808041155338f, 0.0009270745795220137f, 0.0008539420668967068f, 0.0011595034739002585f, 0.000682263751514256f, 0.0007906996179372072f, 0.000904779473785311f, 0.001155090401880443f, 0.00124946772120893f, 0.001564153004437685f, 0.0008521093404851854f, 0.0012941107852384448f, 0.0006446424522437155f, 0.0008798867929726839f, 0.0014223901089280844f, 0.0015310888411477208f, 0.0007947321864776313f, 0.0019181082025170326f, 0.0015155842993408442f, 0.001175052602775395f, 0.00085231609409675f, 0.00039495329838246107f, 0.001227839384227991f, 0.0013063335791230202f, 0.0010734295938163996f, 0.0007785200141370296f, 0.0007880350458435714f, 0.0008961218409240246f, 0.001371087389998138f, 0.0009834382217377424f, 0.0010788417421281338f, 0.0006100698956288397f, 0.0019178695511072874f, 0.0009937460999935865f, 0.0009944781195372343f, 0.0012013972736895084f, 0.0011007152497768402f, 0.001238409779034555f, 0.0008929514442570508f, 0.0009027296910062432f, 0.0008070687763392925f, 0.0015845715533941984f, 0.000983458710834384f, 0.0007018651813268661f, 0.00038787556695751846f, 0.001338586094789207f, 0.0015646505635231733f, 0.0009318660013377666f, 0.0012718356447294354f, 0.0006344933644868433f, 0.0011053439229726791f, 0.000918692210689187f, 0.0012398542603477836f, 0.0009328768355771899f, 0.0008015176863409579f, 0.002266368130221963f, 0.001010308274999261f, 0.0007700839778408408f, 0.0009441229631192982f, 0.0005411778693087399f, 0.000694474671036005f, 0.0008979817503131926f, 0.0005210716626606882f, 0.0004490126157179475f, 0.0017068375600501895f, 0.000791805621702224f, 0.0009327101288363338f, 0.0014647614443674684f, 0.0009320556418970227f, 0.002095090691000223f, 0.000677016272675246f, 0.0008927634335123003f, 0.0007819631136953831f, 0.0009581050253473222f, 0.0009352197521366179f, 0.00049626111285761f, 0.0009987478842958808f, 0.0008622085442766547f, 0.0005973584484308958f, 0.0014242719626054168f, 0.00086985994130373f, 0.0007145635900087655f, 0.0007747228373773396f, 0.0005685688811354339f, 0.001044762902893126f, 0.0010799814481288195f, 0.0013324731262400746f, 0.0018831004854291677f, 0.0010633025085553527f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #159 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_68_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002081185346469283f, 0.0020430865697562695f, 0.0057772183790802956f, 0.002515869215130806f, 0.0024811471812427044f, 0.0022538851480931044f, 0.006063665729016066f, 0.004074463155120611f, 0.005153481848537922f, 0.014480892568826675f, 0.002970897825434804f, 0.002289431169629097f, 0.0034392662346363068f, 0.002715913811698556f, 0.006382799241691828f, 0.005385641939938068f, 0.0021245162934064865f, 0.015542563050985336f, 0.005765690468251705f, 0.0083737438544631f, 0.002594876801595092f, 0.0033422205597162247f, 0.015609377063810825f, 0.004124237224459648f, 0.02351275645196438f, 0.006997617892920971f, 0.002767670899629593f, 0.006253044120967388f, 0.002413996960967779f, 0.0018462500302121043f, 0.0037800208665430546f, 0.006820788607001305f, 0.002006943104788661f, 0.003937361761927605f, 0.003566220635548234f, 0.011044636368751526f, 0.0025642598047852516f, 0.002604007488116622f, 0.0020884263794869184f, 0.002610373543575406f, 0.004270770121365786f, 0.002793925581499934f, 0.01193333137780428f, 0.0019345949403941631f, 0.0034836637787520885f, 0.003443519352003932f, 0.003318431321531534f, 0.0025719136465340853f, 0.0073617445304989815f, 0.0017572654178366065f, 0.0026313236448913813f, 0.004976614378392696f, 0.0023249471560120583f, 0.0042925248853862286f, 0.005414800718426704f, 0.005420876666903496f, 0.005202368833124638f, 0.006613770965486765f, 0.006562266033142805f, 0.006481883581727743f, 0.0022697176318615675f, 0.00460107671096921f, 0.002499290741980076f, 0.002816702937707305f, 0.0027635800652205944f, 0.012826004065573215f, 0.005428587552160025f, 0.008099853061139584f, 0.004901175387203693f, 0.001968907658010721f, 0.0024328173603862524f, 0.0030734792817384005f, 0.0013728694757446647f, 0.0023558156099170446f, 0.002417281735688448f, 0.004009555093944073f, 0.016270194202661514f, 0.0030889343470335007f, 0.0018318772781640291f, 0.003023582510650158f, 0.006950996816158295f, 0.006986395921558142f, 0.0017348568653687835f, 0.0030275441240519285f, 0.005244423169642687f, 0.0037360540591180325f, 0.011869163252413273f, 0.0025721166748553514f, 0.002804557792842388f, 0.0016306702746078372f, 0.0020091659389436245f, 0.003178089391440153f, 0.0021083462052047253f, 0.005036723334342241f, 0.0058954074047505856f, 0.0036150978412479162f, 0.0027310207951813936f, 0.007217818405479193f, 0.005986719857901335f, 0.02767864242196083f, 0.003384529845789075f, 0.0028684737626463175f, 0.0034375477116554976f, 0.0031141601502895355f, 0.005275979172438383f, 0.006300827953964472f, 0.004534055478870869f, 0.0027966441120952368f, 0.004157233517616987f, 0.0043784575536847115f, 0.002256709383800626f, 0.0027665593661367893f, 0.004221009090542793f, 0.009977266192436218f, 0.02003435604274273f, 0.004073672462254763f, 0.005421485751867294f, 0.003239148296415806f, 0.012741093523800373f, 0.0019011144759133458f, 0.005617061629891396f, 0.008574847131967545f, 0.002282648114487529f, 0.004535623360425234f, 0.0031119859777390957f, 0.0037987246178090572f, 0.004616824444383383f, 0.003098510205745697f, 0.005677402019500732f, 0.0035006420221179724f, 0.010522416792809963f, 0.0025323168374598026f, 0.00638765562325716f, 0.006707743275910616f, 0.0032437255140393972f, 0.00295120757073164f, 0.0032850299030542374f, 0.004675996024161577f, 0.009100206196308136f, 0.004688887391239405f, 0.0037645010743290186f, 0.002788478508591652f, 0.0017832955345511436f, 0.002130627166479826f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #160 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_70_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 36,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003154308535158634f, 0.006469273939728737f, 0.003845870029181242f, 0.0035913658794015646f, 0.003126859199255705f, 0.002512549515813589f, 0.0016860230825841427f, 0.0016192778712138534f, 0.0029805528465658426f, 0.0015576665755361319f, 0.0041944719851017f, 0.0032327452208846807f, 0.004716275259852409f, 0.0018628635443747044f, 0.0042561418376863f, 0.004220537841320038f, 0.002265573712065816f, 0.0015465631149709225f, 0.0016469041584059596f, 0.0034808404743671417f, 0.0017446305137127638f, 0.0033581657335162163f, 0.0048672109842300415f, 0.0023569795303046703f, 0.0018338679801672697f, 0.00164823851082474f, 0.003992343787103891f, 0.0046071214601397514f, 0.005285306833684444f, 0.0025839570444077253f, 0.004492081701755524f, 0.003585552331060171f, 0.004549889359623194f, 0.0036360255908221006f, 0.00429178960621357f, 0.0049352399073541164f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #161 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_71_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0007627750746905804f, 0.0006761871627531946f, 0.0005455211503431201f, 0.0005901530385017395f, 0.0005589818465523422f, 0.0005652192048728466f, 0.0005464109126478434f, 0.0007679012487642467f, 0.0006718497606925666f, 0.000595567689742893f, 0.0006654362077824771f, 0.0005302641075104475f, 0.0006651955191046f, 0.0007117054774425924f, 0.0007230106857605278f, 0.0013375728158280253f, 0.0005839884397573769f, 0.0008250110549852252f, 0.0007681347778998315f, 0.0007955525070428848f, 0.000976817449554801f, 0.0005864000413566828f, 0.0009443099261261523f, 0.0006270838202908635f, 0.0006576540763489902f, 0.0007229947950690985f, 0.0006347355083562434f, 0.0007760013686493039f, 0.0005593942478299141f, 0.0005869354354217649f, 0.0005262912018224597f, 0.0007689440972171724f, 0.0007086066179908812f, 0.00092076207511127f, 0.0006032763631083071f, 0.0006324881687760353f, 0.0009914017282426357f, 0.0005378419882617891f, 0.0004792341496795416f, 0.00046074294368736446f, 0.000704293604940176f, 0.0009155095322057605f, 0.0007883819052949548f, 0.0007222346612252295f, 0.0007449164404533803f, 0.000789052399341017f, 0.0008299868204630911f, 0.0007314034155569971f, 0.0007956190383993089f, 0.000840882072225213f, 0.0006311910692602396f, 0.0007235564407892525f, 0.000488829507958144f, 0.0006522976327687502f, 0.0006622197688557208f, 0.0005456461803987622f, 0.0008878110093064606f, 0.0008008948643691838f, 0.0007837501470930874f, 0.0007630859618075192f, 0.0008919257088564336f, 0.0008777236216701567f, 0.0005446207942441106f, 0.0005935615045018494f, 0.0005734556470997632f, 0.0006457187118940055f, 0.0008123278967104852f, 0.0011312345741316676f, 0.0006573976133950055f, 0.0007966798730194569f, 0.0007406080258078873f, 0.0006520319147966802f, 0.0006632201257161796f, 0.0006304139387793839f, 0.0008897787192836404f, 0.0010724756866693497f, 0.0007599795935675502f, 0.0006645041867159307f, 0.0006018000422045588f, 0.000598306127358228f, 0.000645055144559592f, 0.0005197986611165106f, 0.0007012828718870878f, 0.00034994882298633456f, 0.0006333408528007567f, 0.0006998221506364644f, 0.0006961071630939841f, 0.0007721501169726253f, 0.0009890943765640259f, 0.0006568534299731255f, 0.0007148253498598933f, 0.0009261031518690288f, 0.0008126015309244394f, 0.000637244840618223f, 0.0006491598323918879f, 0.0006274167681112885f, 0.0004428638785611838f, 0.0007249336340464652f, 0.0011132516665384173f, 0.0008658863371238112f, 0.0006349941249936819f, 0.0004754308902192861f, 0.0005255818250589073f, 0.0005556963733397424f, 0.00044571893522515893f, 0.0008750247652642429f, 0.0008705364307388663f, 0.00047622030251659453f, 0.0005211436655372381f, 0.0010485014645382762f, 0.0008953441865742207f, 0.0007536154007539153f, 0.000516283034812659f, 0.0006576473242603242f, 0.0006120739271864295f, 0.0008324591326527297f, 0.0005065079894848168f, 0.0007180050015449524f, 0.0010196284856647253f, 0.0005270953406579792f, 0.0006247232668101788f, 0.0009894173126667738f, 0.001068471698090434f, 0.00045168367796577513f, 0.0006091889808885753f, 0.0007146778516471386f, 0.0005256605218164623f, 0.0007859478937461972f, 0.0008042691042646766f, 0.0007392812403850257f, 0.0006624644156545401f, 0.0007299940916709602f, 0.0005131502402946353f, 0.0005902166594751179f, 0.000716573849786073f, 0.000517494510859251f, 0.00047209105105139315f, 0.0007842016639187932f, 0.0007021900964900851f, 0.0008784396341070533f, 0.0006873799138702452f, 0.0005852111498825252f, 0.0006021119770593941f, 0.0006959867314435542f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #162 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_75_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004511890467256308f, 0.004496361594647169f, 0.004093752708286047f, 0.005498853512108326f, 0.00440299091860652f, 0.0040673306211829185f, 0.005100676324218512f, 0.0047130705788731575f, 0.003463195404037833f, 0.004690024070441723f, 0.004824670497328043f, 0.003043884877115488f, 0.003252622904255986f, 0.005049517378211021f, 0.005420450586825609f, 0.0033264998346567154f, 0.004204206634312868f, 0.0043025086633861065f, 0.0037607618141919374f, 0.005095597356557846f, 0.003729293355718255f, 0.005008470267057419f, 0.004907574970275164f, 0.0041902451775968075f, 0.004476913716644049f, 0.003627898870036006f, 0.003932928200811148f, 0.004872863180935383f, 0.0048406170681118965f, 0.005125920753926039f, 0.004179793410003185f, 0.00442497106269002f, 0.006089579779654741f, 0.006686707958579063f, 0.0035333794075995684f, 0.003388462122529745f, 0.004235489293932915f, 0.004835666157305241f, 0.0038285795599222183f, 0.004297635518014431f, 0.004660886246711016f, 0.004479619674384594f, 0.003523863386362791f, 0.004262979608029127f, 0.00432400219142437f, 0.004199726972728968f, 0.005956556182354689f, 0.0035036380868405104f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #163 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0017029644222930074f, 0.0013502450892701745f, 0.0030134667176753283f, 0.0024183723144233227f, 0.000707528437487781f, 0.0018521302845329046f, 0.000854122918099165f, 0.001460914732888341f, 0.0017324459040537477f, 0.0021383396815508604f, 0.0010660648113116622f, 0.0015314461197704077f, 0.0022965497337281704f, 0.0016042059287428856f, 0.001348692923784256f, 0.001660195761360228f, 0.001279208343476057f, 0.0014418329810723662f, 0.002059681573882699f, 0.0018370370380580425f, 0.0013662176206707954f, 0.002540554152801633f, 0.0018830780172720551f, 0.0010378084843978286f, 0.0010755106341093779f, 0.001548664877191186f, 0.001973094418644905f, 0.003358375048264861f, 0.0013644545106217265f, 0.0009090063977055252f, 0.001604230608791113f, 0.0018790540052577853f, 0.0016688869800418615f, 0.001984085189178586f, 0.002689422806724906f, 0.001551907160319388f, 0.0013502069050446153f, 0.0021074851974844933f, 0.0008052618359215558f, 0.0022426762152463198f, 0.0012234074529260397f, 0.0017277759034186602f, 0.0012038934510201216f, 0.001747590838931501f, 0.0025978905614465475f, 0.0019339557038620114f, 0.001289471285417676f, 0.0018187252571806312f, 0.001478311838582158f, 0.0015391022898256779f, 0.003159812418743968f, 0.0024052683729678392f, 0.001306273858062923f, 0.0018710196018218994f, 0.0011469280580058694f, 0.0019186704885214567f, 0.0015275743789970875f, 0.0017685632919892669f, 0.002438655821606517f, 0.0016429848037660122f, 0.0026456716004759073f, 0.0011871909955516458f, 0.0021087077911943197f, 0.0014010814484208822f, 0.0012577149318531156f, 0.0008985161548480392f, 0.0018525527557358146f, 0.0012383995344862342f, 0.0010665933368727565f, 0.0015096368733793497f, 0.002676286967471242f, 0.0017244417686015368f, 0.0012032497907057405f, 0.002152607776224613f, 0.0015892552910372615f, 0.0017847040435299277f, 0.0017565716989338398f, 0.00100320007186383f, 0.002354190219193697f, 0.002277241786941886f, 0.0013607178116217256f, 0.001179922721348703f, 0.0012038092827424407f, 0.00192058680113405f, 0.0017225724877789617f, 0.0013108891434967518f, 0.0014969210606068373f, 0.0008774783345870674f, 0.0011871109018102288f, 0.0018203954678028822f, 0.0009577054297551513f, 0.0014939161483198404f, 0.0017428116407245398f, 0.0018533424008637667f, 0.0011682107578963041f, 0.0016598686343058944f, 0.00136978377122432f, 0.0012531486572697759f, 0.0021158233284950256f, 0.0019219419918954372f, 0.0017569856718182564f, 0.002164719859138131f, 0.0020875504706054926f, 0.0008081847918219864f, 0.002155289286747575f, 0.0017692431574687362f, 0.001478123595006764f, 0.001603787182830274f, 0.0016073136357590556f, 0.0018085226183757186f, 0.0020289854146540165f, 0.0014109978219494224f, 0.002565056085586548f, 0.0022980847861617804f, 0.0015911320224404335f, 0.0017534405924379826f, 0.001743805012665689f, 0.0012205790262669325f, 0.002072972245514393f, 0.001313570886850357f, 0.0018223526421934366f, 0.002565668197348714f, 0.001504941494204104f, 0.001735503552481532f, 0.0014694961719214916f, 0.0012175468727946281f, 0.0014377342304214835f, 0.001260816934518516f, 0.000892575248144567f, 0.001279248739592731f, 0.0015962495235726237f, 0.0012642608489841223f, 0.0009346855222247541f, 0.0019348796922713518f, 0.0015077654970809817f, 0.0016748711932450533f, 0.0016099868807941675f, 0.0017591275973245502f, 0.0013957420596852899f, 0.003572558518499136f, 0.001129032694734633f, 0.002766115590929985f, 0.0012361593544483185f, 0.0010061562061309814f, 0.002939667087048292f, 0.0014241000171750784f, 0.0009187854593619704f, 0.0013374582631513476f, 0.0015360835241153836f, 0.0015577804297208786f, 0.0012247372651472688f, 0.001138410996645689f, 0.001344777294434607f, 0.0024589886888861656f, 0.0006104715866968036f, 0.002058819169178605f, 0.0017859613290056586f, 0.001980751985684037f, 0.0021215423475950956f, 0.0012461217120289803f, 0.001794783165678382f, 0.001776523538865149f, 0.002173296408727765f, 0.0012014198582619429f, 0.001729247160255909f, 0.0019498384790495038f, 0.0016168584115803242f, 0.002306663431227207f, 0.002445558551698923f, 0.0008267460507340729f, 0.001459379680454731f, 0.0011022668331861496f, 0.0010160291567444801f, 0.0015699132345616817f, 0.0017770434496924281f, 0.0014999251579865813f, 0.0012337099760770798f, 0.0017417693743482232f, 0.0009209205745719373f, 0.0009388587786816061f, 0.0009618618641979992f, 0.0011396626941859722f, 0.0013882933417335153f, 0.0010101586813107133f, 0.0016095617320388556f, 0.0012962165055796504f, 0.0016579688526690006f, 0.001168656861409545f, 0.0013116056798025966f, 0.0010604960843920708f, 0.0012434573145583272f, 0.002022914821282029f, 0.0014556938549503684f, 0.0012136788573116064f, 0.0018934198888018727f, 0.0014716812875121832f, 0.001580505515448749f, 0.0010554797481745481f, 0.0011524837464094162f, 0.0010456900345161557f, 0.0012297951616346836f, 0.0015607241075485945f, 0.0019064293010160327f, 0.0024542633909732103f, 0.0016992693999782205f, 0.0009652693988755345f, 0.0012711531016975641f, 0.0020531965419650078f, 0.0012319518718868494f, 0.001975112594664097f, 0.0014324829680845141f, 0.0019132047891616821f, 0.0009354188805446029f, 0.001607553451322019f, 0.0018574041314423084f, 0.0014366016257554293f, 0.0016734928358346224f, 0.0016454524593427777f, 0.0019268244504928589f, 0.001560752629302442f, 0.001268064952455461f, 0.0016194877680391073f, 0.0015127237420529127f, 0.0020825413521379232f, 0.0017860046355053782f, 0.0008320694323629141f, 0.0012926259078085423f, 0.0012309656012803316f, 0.0019758979324251413f, 0.0017444465775042772f, 0.0017195154214277864f, 0.001453522709198296f, 0.0022883154451847076f, 0.0014523712452501059f, 0.0013752392260357738f, 0.0006337887607514858f, 0.0015252464218065143f, 0.0020897816866636276f, 0.0008608122589066625f, 0.0007831098046153784f, 0.001844095764681697f, 0.0014079216634854674f, 0.0023540216498076916f, 0.0013443954521790147f, 0.0012491726083680987f, 0.0016510201385244727f, 0.0009361387928947806f, 0.0009451644727960229f, 0.000632862385828048f, 0.001811535912565887f, 0.001658171764574945f, 0.0014293041313067079f, 0.00193112064152956f, 0.0020333079155534506f, 0.0013663952704519033f, 0.0010021368507295847f, 0.001966806361451745f, 0.002134711714461446f, 0.0011776864994317293f, 0.0011698667658492923f, 0.002088825451210141f, 0.0009284402476623654f, 0.0018988787196576595f, 0.0015735401539132f, 0.0013408539816737175f, 0.0007385580684058368f, 0.0014362353831529617f, 0.0011911791516467929f, 0.0008943098364397883f, 0.0019156306516379118f, 0.001334252068772912f, 0.0018487212946638465f, 0.0010909531265497208f, 0.0018095305422320962f, 0.001287958468310535f, 0.0012716109631583095f, 0.001153790159150958f, 0.0013342980528250337f, 0.0020724432542920113f, 0.0010950281284749508f, 0.001490956055931747f, 0.0011777565814554691f, 0.0015833136858418584f, 0.001241428079083562f, 0.001248638960532844f, 0.0017359692137688398f, 0.0011674374109134078f, 0.0013951065484434366f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #164 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_77_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0025146189145743847f, 0.011372177861630917f, 0.0031826929189264774f, 0.0024837360251694918f, 0.03336106240749359f, 0.005385747179389f, 0.0500858798623085f, 0.0072843353264033794f, 0.006367439404129982f, 0.004022668581455946f, 0.018562346696853638f, 0.0035082080867141485f, 0.0022260481491684914f, 0.004832966718822718f, 0.006289862096309662f, 0.005778331775218248f, 0.003501585451886058f, 0.019279420375823975f, 0.0022004737984389067f, 0.003795494558289647f, 0.005544754676520824f, 0.002652506111189723f, 0.0028264678549021482f, 0.0076720393262803555f, 0.00506910216063261f, 0.009225417859852314f, 0.008499961346387863f, 0.003592195687815547f, 0.007230042014271021f, 0.01336059533059597f, 0.00442324485629797f, 0.0066801621578633785f, 0.003316268092021346f, 0.006674385163933039f, 0.0023298216983675957f, 0.010648852214217186f, 0.0031450155656784773f, 0.004054232966154814f, 0.025121452286839485f, 0.004182744305580854f, 0.004311105236411095f, 0.0035944769624620676f, 0.005108526907861233f, 0.005970415659248829f, 0.004844935145229101f, 0.0015939950244501233f, 0.008441472426056862f, 0.002874833531677723f, 0.00789720006287098f, 0.0021844469010829926f, 0.002181554678827524f, 0.0018650875426828861f, 0.0034628526773303747f, 0.0036199355963617563f, 0.016647445037961006f, 0.0029345310758799314f, 0.005058987531810999f, 0.003902595257386565f, 0.002031003125011921f, 0.00397068727761507f, 0.0020683929324150085f, 0.007976277731359005f, 0.0031175510957837105f, 0.0029547717422246933f, 0.009260167367756367f, 0.02316177263855934f, 0.0024770197924226522f, 0.007762654218822718f, 0.01035995688289404f, 0.01218104362487793f, 0.00406223488971591f, 0.004206734709441662f, 0.005151237826794386f, 0.004920927807688713f, 0.0019664668943732977f, 0.0032989662140607834f, 0.0025765823666006327f, 0.01130792684853077f, 0.0018582900520414114f, 0.00587084935978055f, 0.003645462216809392f, 0.00394321046769619f, 0.01145675964653492f, 0.0022691816557198763f, 0.004132292233407497f, 0.006222007796168327f, 0.005499179009348154f, 0.01608649455010891f, 0.004273292142897844f, 0.0030137617141008377f, 0.018841799348592758f, 0.015793057158589363f, 0.004234218969941139f, 0.003947366029024124f, 0.009232909418642521f, 0.0031178228091448545f, 0.006332045421004295f, 0.003176589496433735f, 0.0039793336763978004f, 0.003935815300792456f, 0.0041284458711743355f, 0.007434310391545296f, 0.0034915716387331486f, 0.013939084485173225f, 0.007952556014060974f, 0.003858396550640464f, 0.006595694925636053f, 0.0046331631019711494f, 0.00318648642860353f, 0.021691923961043358f, 0.003503065789118409f, 0.008395875804126263f, 0.002334045246243477f, 0.0037864409387111664f, 0.003039070637896657f, 0.004490583669394255f, 0.003830311121419072f, 0.012346272356808186f, 0.00370126124471426f, 0.005887666717171669f, 0.0023090222384780645f, 0.002899328013882041f, 0.0045010303147137165f, 0.004970919340848923f, 0.009434078820049763f, 0.0036659915931522846f, 0.005197151564061642f, 0.011300085112452507f, 0.01934780925512314f, 0.005571656860411167f, 0.010094141587615013f, 0.007313526701182127f, 0.013589218258857727f, 0.003458168590441346f, 0.004344278480857611f, 0.0024473750963807106f, 0.009388308972120285f, 0.00712484959512949f, 0.006098542362451553f, 0.00195230299141258f, 0.007699173875153065f, 0.002948409179225564f, 0.006505571771413088f, 0.010009248740971088f, 0.0022061390336602926f, 0.0025505092926323414f, 0.015532574616372585f, 0.005378771107643843f, 0.0029663201421499252f, 0.0027888501062989235f, 0.005885242950171232f, 0.008968058042228222f, 0.004225151613354683f, 0.0030799300875514746f, 0.014763046987354755f, 0.002732153981924057f, 0.003331500804051757f, 0.008483029901981354f, 0.0030201836489140987f, 0.005527752451598644f, 0.003917713183909655f, 0.002684293081983924f, 0.003106137039139867f, 0.005424940958619118f, 0.0029291643295437098f, 0.008836680091917515f, 0.0038946361746639013f, 0.0016314329113811255f, 0.0021071366500109434f, 0.029509741812944412f, 0.008374425582587719f, 0.00751303369179368f, 0.009281489998102188f, 0.006221516989171505f, 0.0031443354673683643f, 0.0051819332875311375f, 0.0038353032432496548f, 0.0059851184487342834f, 0.021375291049480438f, 0.013440518639981747f, 0.006306338589638472f, 0.013071775436401367f, 0.002381392288953066f, 0.011622206307947636f, 0.004099664278328419f, 0.008604446426033974f, 0.0031129587441682816f, 0.0056100040674209595f, 0.004365522414445877f, 0.019017430022358894f, 0.008863517083227634f, 0.003076707711443305f, 0.003839797107502818f, 0.007747912313789129f, 0.003139154054224491f, 0.002875040052458644f, 0.00786069966852665f, 0.007114210166037083f, 0.0038039549253880978f, 0.008604771457612514f, 0.010727095417678356f, 0.007647810038179159f, 0.002577984007075429f, 0.0026345085352659225f, 0.0040484522469341755f, 0.00825701653957367f, 0.009867105633020401f, 0.0029084691777825356f, 0.011121117509901524f, 0.00259329192340374f, 0.009569901041686535f, 0.0034525995142757893f, 0.014060856774449348f, 0.007856599055230618f, 0.007437544409185648f, 0.008516749367117882f, 0.003631970612332225f, 0.003895273432135582f, 0.003947780933231115f, 0.008397619239985943f, 0.006819895002990961f, 0.004214357119053602f, 0.004044533707201481f, 0.003800997044891119f, 0.008056609891355038f, 0.014165693894028664f, 0.008516627363860607f, 0.01983564905822277f, 0.002749202074483037f, 0.0038969351444393396f, 0.005891661625355482f, 0.014652756042778492f, 0.0023198069538921118f, 0.00462963106110692f, 0.005764163099229336f, 0.023851705715060234f, 0.0066259815357625484f, 0.0047129252925515175f, 0.01203075610101223f, 0.02096589468419552f, 0.004360193386673927f, 0.0031853558029979467f, 0.002386248204857111f, 0.0064973304979503155f, 0.008940537460148335f, 0.004440329037606716f, 0.017238767817616463f, 0.012784712016582489f, 0.03775264322757721f, 0.0026232926174998283f, 0.010787366889417171f, 0.004839065484702587f, 0.002219822956249118f, 0.0021971212700009346f, 0.0063447109423577785f, 0.008450761437416077f, 0.005617623683065176f, 0.00533420080319047f, 0.0072947354055941105f, 0.010729287751019001f, 0.002787757897749543f, 0.011947534047067165f, 0.003661121940240264f, 0.004592584911733866f, 0.00519405584782362f, 0.03294084966182709f, 0.010419996455311775f, 0.005086067598313093f, 0.022276543080806732f, 0.0044077676720917225f, 0.004266035743057728f, 0.002914851065725088f, 0.003394859842956066f, 0.004057396203279495f, 0.004688671790063381f, 0.007618957664817572f, 0.023767584934830666f, 0.006928880233317614f, 0.0023232826497405767f, 0.011546680703759193f, 0.0038731934037059546f, 0.006987473927438259f, 0.004448185209184885f, 0.01280253753066063f, 0.02820654958486557f, 0.003254263661801815f, 0.019668543711304665f, 0.004071804694831371f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #165 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_79_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005603468976914883f, 0.00132456433493644f, 0.0016183557454496622f, 0.005982538219541311f, 0.0014089863980188966f, 0.004428580868989229f, 0.002379290759563446f, 0.001210764516144991f, 0.001881929812952876f, 0.004110497888177633f, 0.0012328150914981961f, 0.0017623368185013533f, 0.0016225201543420553f, 0.004643050953745842f, 0.003921136260032654f, 0.001639542169868946f, 0.0013494717422872782f, 0.006896937731653452f, 0.003582957200706005f, 0.0012399519328027964f, 0.0012626362731680274f, 0.004304239060729742f, 0.0013117576017975807f, 0.004267009440809488f, 0.001176008372567594f, 0.005938631482422352f, 0.0011635860428214073f, 0.0016641548136249185f, 0.0011851834133267403f, 0.0013091062428429723f, 0.0015629484551027417f, 0.0012624285882338881f, 0.0038607416208833456f, 0.004507198464125395f, 0.005377625580877066f, 0.0014421058585867286f, 0.0013738804263994098f, 0.004594146739691496f, 0.0013200759422034025f, 0.004263829905539751f, 0.001509387162514031f, 0.0041123670525848866f, 0.0015433046501129866f, 0.0013425841461867094f, 0.0012375764781609178f, 0.0059266709722578526f, 0.001525916624814272f, 0.004664652049541473f, 0.0012539953459054232f, 0.0042193555273115635f, 0.005620819982141256f, 0.0017589040799066424f, 0.0013267581816762686f, 0.0013077040202915668f, 0.001335205975919962f, 0.0012944428017362952f, 0.005483875051140785f, 0.0013080294011160731f, 0.0037272991612553596f, 0.0014540147967636585f, 0.0013052400900050998f, 0.001357471221126616f, 0.0017746079247444868f, 0.001470470684580505f, 0.0018013016087934375f, 0.002000299282371998f, 0.00471601914614439f, 0.0013375640846788883f, 0.005508056841790676f, 0.004325819201767445f, 0.006267881486564875f, 0.005294013302773237f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #166 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_80_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0006482647731900215f, 0.0006920486339367926f, 0.0007293342496268451f, 0.001120838220231235f, 0.0007025789236649871f, 0.0005413633189164102f, 0.0006851456710137427f, 0.00090353301493451f, 0.000995511538349092f, 0.0010045778471976519f, 0.0008145149331539869f, 0.0005535895470529795f, 0.0005468418239615858f, 0.00045530431088991463f, 0.0006313133053481579f, 0.0010203055571764708f, 0.0006331185577437282f, 0.000595977995544672f, 0.0006096772267483175f, 0.0008678550366312265f, 0.0004864870570600033f, 0.0005179399158805609f, 0.0005539855337701738f, 0.0010717840632423759f, 0.000931084796320647f, 0.000847695569973439f, 0.0007332560489885509f, 0.00038297564606182277f, 0.0008121937280520797f, 0.0005681788898073137f, 0.0005274607101455331f, 0.0005791688454337418f, 0.0006271887104958296f, 0.0005761618376709521f, 0.0005630776286125183f, 0.0010355939157307148f, 0.0006072422256693244f, 0.000571609300095588f, 0.0007800134480930865f, 0.0007049854611977935f, 0.0006958943558856845f, 0.0008944557630456984f, 0.0005835355841554701f, 0.0009330335888080299f, 0.0006022363668307662f, 0.0007917917682789266f, 0.0008312403806485236f, 0.0007892334833741188f, 0.0006268156575970352f, 0.0008612460806034505f, 0.0007460123160853982f, 0.0007354923873208463f, 0.0005971245700493455f, 0.0007168211159296334f, 0.0005902860430069268f, 0.00044013920705765486f, 0.0006160358316265047f, 0.0008165238541550934f, 0.0005268366076052189f, 0.0007362052565440536f, 0.0008818200440146029f, 0.0007573232869617641f, 0.0005622136523015797f, 0.0005273281713016331f, 0.0007065496174618602f, 0.0009631101274862885f, 0.0005812520976178348f, 0.0007513173623010516f, 0.000747697486076504f, 0.0007465801318176091f, 0.0008334490703418851f, 0.0006458304706029594f, 0.0008588797645643353f, 0.0005518365651369095f, 0.000426767481258139f, 0.0009475645492784679f, 0.0008613004465587437f, 0.0007102621020749211f, 0.0006408834597095847f, 0.0005619848379865289f, 0.0005037806695327163f, 0.0007380577153526247f, 0.0007504062377847731f, 0.0009925573831424117f, 0.0006049609510228038f, 0.0009140911279246211f, 0.0007890175911597908f, 0.0007074859458953142f, 0.000720225740224123f, 0.0006380103877745569f, 0.0008128567133098841f, 0.0009059807052835822f, 0.0007488574483431876f, 0.0007138945511542261f, 0.0009886507177725434f, 0.0006467794300988317f, 0.0005920557305216789f, 0.0004872163408435881f, 0.0006195426103658974f, 0.0007660989067517221f, 0.0005775018944405019f, 0.000850493204779923f, 0.0008052835473790765f, 0.0007565056439489126f, 0.0006587363895960152f, 0.0006057177088223398f, 0.0005863982951268554f, 0.0006908688228577375f, 0.000606637739110738f, 0.0010830811224877834f, 0.000629103509709239f, 0.0007721511065028608f, 0.0007555476040579379f, 0.0005855461349710822f, 0.0005709466058760881f, 0.0010117249330505729f, 0.0008157782140187919f, 0.0006900716107338667f, 0.0004782924661412835f, 0.0006021813023835421f, 0.00041073260945267975f, 0.0005923152202740312f, 0.0006457525887526572f, 0.0007357002468779683f, 0.0007244902080856264f, 0.0006766954902559519f, 0.0007571805035695434f, 0.00045772313023917377f, 0.0007583008846268058f, 0.00046033685794100165f, 0.0006495679845102131f, 0.0006528268568217754f, 0.0009604252991266549f, 0.0006231978186406195f, 0.0006836573593318462f, 0.000577933038584888f, 0.000585647823754698f, 0.0010534352622926235f, 0.0005811724695377052f, 0.0006559476023539901f, 0.0005556105170398951f, 0.0006955406279303133f, 0.0007337444694712758f, 0.0005970164202153683f, 0.00048176158452406526f, 0.000541622401215136f, 0.000841600529383868f, 0.0009308474254794419f, 0.0005543410661630332f, 0.0006713341572321951f, 0.0009159237379208207f, 0.0006562932976521552f, 0.0006098098237998784f, 0.0006969405221752822f, 0.0007728726486675441f, 0.0008226784993894398f, 0.0006997942691668868f, 0.0008948029135353863f, 0.0007111440063454211f, 0.0006120241014286876f, 0.0006218535709194839f, 0.0006994772702455521f, 0.0005830798763781786f, 0.0008344760863110423f, 0.0006492042448371649f, 0.0009523282060399652f, 0.0006668198620900512f, 0.0006619147025048733f, 0.0007295021205209196f, 0.0009466747287660837f, 0.0007947167032398283f, 0.0006995579460635781f, 0.0008462268742732704f, 0.0006541096372529864f, 0.0005937988171353936f, 0.0010315249674022198f, 0.0006547787925228477f, 0.0005391457816585898f, 0.0005748068797402084f, 0.0006247988203540444f, 0.0006210214924067259f, 0.0006901062442921102f, 0.0012670551659539342f, 0.0006093675037845969f, 0.0007170724566094577f, 0.0006835993845015764f, 0.0007463307701982558f, 0.0006481701857410371f, 0.0007573832990601659f, 0.0006298468797467649f, 0.0011138104600831866f, 0.0008916236693039536f, 0.0009492544922977686f, 0.0004805972275789827f, 0.0006262404494918883f, 0.0005328498664312065f, 0.0007205450674518943f, 0.0007045951206237078f, 0.0006830708007328212f, 0.000778169312980026f, 0.0006083895568735898f, 0.0005870777531526983f, 0.0007765745976939797f, 0.0006547805387526751f, 0.0007442242349497974f, 0.0006676716147921979f, 0.0008571823127567768f, 0.0006374851218424737f, 0.0006170127890072763f, 0.0004968215944245458f, 0.0006440572324208915f, 0.0005674805724993348f, 0.00036605619243346155f, 0.000830340082757175f, 0.0005737091996707022f, 0.0005742528010159731f, 0.0006077775615267456f, 0.000787306809797883f, 0.0005797776393592358f, 0.0008365309913642704f, 0.0008431061287410557f, 0.0008512939093634486f, 0.00046599723282270133f, 0.0006317213410511613f, 0.0007658046088181436f, 0.000571012613363564f, 0.000894186261575669f, 0.0007381023024208844f, 0.000833032769151032f, 0.0007710310746915638f, 0.0007418374880217016f, 0.0007548286812379956f, 0.0005766271497122943f, 0.0006871727528050542f, 0.0009555196738801897f, 0.0008743028156459332f, 0.0006946510984562337f, 0.0009834397351369262f, 0.0006986885564401746f, 0.0005119299166835845f, 0.0004982278915122151f, 0.0008546312456019223f, 0.000557940686121583f, 0.0007139134686440229f, 0.0006946416688151658f, 0.0005403432296589017f, 0.000476178276585415f, 0.0007109345751814544f, 0.0005707393866032362f, 0.00047885876847431064f, 0.0007784295012243092f, 0.000716162147000432f, 0.0006117798038758337f, 0.000630703812930733f, 0.0005817330675199628f, 0.000571263546589762f, 0.0005472092307172716f, 0.0007378078298643231f, 0.0004935089382342994f, 0.0008478402160108089f, 0.0005887135630473495f, 0.000743924523703754f, 0.0007210744661279023f, 0.0007488794508390129f, 0.0006588312098756433f, 0.0006563915521837771f, 0.0006898817955516279f, 0.0007566126296296716f, 0.0006079132435843349f, 0.0007778936414979398f, 0.0006962145562283695f, 0.0008121124701574445f, 0.0005502165295183659f, 0.0007296420517377555f, 0.0006957799778319895f, 0.0007867253734730184f, 0.0005547597538679838f, 0.0006988925742916763f, 0.0011280759936198592f, 0.0005415878840722144f, 0.0005730849807150662f, 0.0006657418562099338f, 0.0006348883616738021f, 0.0010610141325742006f, 0.0008389036520384252f, 0.0005890103639103472f, 0.0006071706884540617f, 0.0008694747230038047f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #167 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_84_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0035585814621299505f, 0.003517715260386467f, 0.00417935149744153f, 0.0030736159533262253f, 0.003594632726162672f, 0.00430168816819787f, 0.0035033852327615023f, 0.003081286558881402f, 0.003906519617885351f, 0.0032634702511131763f, 0.0037968833930790424f, 0.0042813243344426155f, 0.0032024062238633633f, 0.004907501395791769f, 0.0036626379005610943f, 0.0027384976856410503f, 0.0026058261282742023f, 0.004751487635076046f, 0.0031410977244377136f, 0.004931133706122637f, 0.002944587729871273f, 0.002181961666792631f, 0.004012742079794407f, 0.002844835864380002f, 0.003079855814576149f, 0.003466559574007988f, 0.003911267500370741f, 0.004217064939439297f, 0.004786239471286535f, 0.003210759721696377f, 0.003745145397260785f, 0.00394023722037673f, 0.0031609151046723127f, 0.003443973371759057f, 0.003248738357797265f, 0.004296408500522375f, 0.0035954322665929794f, 0.002812048653140664f, 0.003152653109282255f, 0.003500481601804495f, 0.003692688187584281f, 0.003505932167172432f, 0.004556120838969946f, 0.004510965663939714f, 0.003770169336348772f, 0.004007892683148384f, 0.0035033230669796467f, 0.0030592684634029865f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #168 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_86_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0008305956143885851f, 0.0015282371314242482f, 0.0018981792964041233f, 0.0015364690916612744f, 0.0006902681780047715f, 0.0023403579834848642f, 0.000861187931150198f, 0.0012131212279200554f, 0.0007626880542375147f, 0.0016463322099298239f, 0.0010033748112618923f, 0.0009509160881862044f, 0.0015336847864091396f, 0.00045442054397426546f, 0.0007872951682657003f, 0.0011185681214556098f, 0.0019253556383773685f, 0.0009887110209092498f, 0.0017223396571353078f, 0.0009616284514777362f, 0.0010418945457786322f, 0.0012102441396564245f, 0.0016695348313078284f, 0.0015987347578629851f, 0.0011919094249606133f, 0.0008129272609949112f, 0.0008792761364020407f, 0.0008994710515253246f, 0.0011851638555526733f, 0.000928468129131943f, 0.001033054431900382f, 0.0009336436633020639f, 0.0015757716028019786f, 0.001391101162880659f, 0.0009577965247444808f, 0.0015013535739853978f, 0.0008051428012549877f, 0.0006428463384509087f, 0.0010665225563570857f, 0.0022851324174553156f, 0.0012597489403560758f, 0.001080718357115984f, 0.0011948755709454417f, 0.0019015289144590497f, 0.0014180631842464209f, 0.0012139141326770186f, 0.000964509672485292f, 0.001258169417269528f, 0.001181077677756548f, 0.0021152172703295946f, 0.000814082333818078f, 0.0012859445996582508f, 0.0006717114592902362f, 0.0011394015746191144f, 0.0011967028258368373f, 0.001064819865860045f, 0.0012140913167968392f, 0.0011677138973027468f, 0.0012430464848876f, 0.0014638227876275778f, 0.0017982663121074438f, 0.0010312962112948298f, 0.0006828810437582433f, 0.0008287234813906252f, 0.0017355548916384578f, 0.0010314916726201773f, 0.001854207250289619f, 0.0018854468362405896f, 0.0010837127920240164f, 0.0016987016424536705f, 0.001206513261422515f, 0.0016633315244689584f, 0.0006565699586644769f, 0.0010755734983831644f, 0.0009500260348431766f, 0.002063025953248143f, 0.0013653411297127604f, 0.0006465413025580347f, 0.0009139556204900146f, 0.0007927859551273286f, 0.0007471423596143723f, 0.0013129679718986154f, 0.001315143657848239f, 0.0012695309706032276f, 0.0010168693261221051f, 0.0009502340690232813f, 0.0011237537255510688f, 0.0014819527277722955f, 0.0010340941371396184f, 0.0008434804622083902f, 0.001918191323056817f, 0.0013414548011496663f, 0.001096798456273973f, 0.0013421833282336593f, 0.0009031193912960589f, 0.0013858479214832187f, 0.000780231726821512f, 0.0008186292252503335f, 0.0011030614841729403f, 0.0010903833899646997f, 0.000824292073957622f, 0.0011104652658104897f, 0.001496291602961719f, 0.0015702202217653394f, 0.0015314803458750248f, 0.0009679672657512128f, 0.001620258204638958f, 0.0012771663023158908f, 0.0012130988761782646f, 0.001777826575562358f, 0.0012911445228382945f, 0.001162854372523725f, 0.001050648046657443f, 0.000841731030959636f, 0.0012639305787160993f, 0.0011054816422984004f, 0.0017324169166386127f, 0.000694568152539432f, 0.001110363402403891f, 0.0014687206130474806f, 0.0015299568185582757f, 0.0010917969048023224f, 0.0008893893100321293f, 0.0010104505345225334f, 0.0013633237686008215f, 0.0008289385004900396f, 0.0013016427401453257f, 0.0009866626933217049f, 0.0005716995219700038f, 0.0012317385990172625f, 0.0014832199085503817f, 0.0015265368856489658f, 0.0016641005640849471f, 0.0022915478330105543f, 0.0011808406561613083f, 0.0016001748153939843f, 0.0017256444552913308f, 0.001228598295710981f, 0.0009038093267008662f, 0.001011264743283391f, 0.002358989091590047f, 0.0024802980478852987f, 0.0010386818321421742f, 0.0007917869952507317f, 0.0009782473789528012f, 0.001506955362856388f, 0.0014441509265452623f, 0.0010422957129776478f, 0.0018409374170005322f, 0.0020555949304252863f, 0.001352893654257059f, 0.0019120246870443225f, 0.0006324750138446689f, 0.000770881655625999f, 0.0011626440100371838f, 0.0006817520479671657f, 0.001152676297351718f, 0.0008313959697261453f, 0.0005737269530072808f, 0.0008433600887656212f, 0.0010374730918556452f, 0.0012266186531633139f, 0.001495805219747126f, 0.0012094990815967321f, 0.0010546220000833273f, 0.0007429750985465944f, 0.0016443670028820634f, 0.0015056502306833863f, 0.0015403268625959754f, 0.0012371198972687125f, 0.0009479987784288824f, 0.0015353307826444507f, 0.0009529827511869371f, 0.0010498465271666646f, 0.0013677155366167426f, 0.0008678312879055738f, 0.0018014726229012012f, 0.000722189957741648f, 0.0007638928364031017f, 0.0011553434887900949f, 0.0014539852272719145f, 0.001117246807552874f, 0.001835176721215248f, 0.0008875548373907804f, 0.001045741024427116f, 0.0014968873001635075f, 0.0015658553456887603f, 0.0007007646490819752f, 0.0013190099271014333f, 0.0009170108241960406f, 0.001362791284918785f, 0.0008174679824151099f, 0.0021355266217142344f, 0.0006226398982107639f, 0.0011826488189399242f, 0.001913657644763589f, 0.0008925473084673285f, 0.0010024841176345944f, 0.0012838206021115184f, 0.0016927177784964442f, 0.0015028839698061347f, 0.0008458354859612882f, 0.0013156994245946407f, 0.001502623432315886f, 0.0008017863146960735f, 0.0012518190778791904f, 0.0009821823332458735f, 0.0014359946362674236f, 0.0009564216597937047f, 0.0009576567099429667f, 0.0018821738194674253f, 0.0006540666217915714f, 0.0011402430245652795f, 0.0021261796355247498f, 0.0012620323104783893f, 0.0010904574301093817f, 0.00119025819003582f, 0.000731038220692426f, 0.0013923199148848653f, 0.0010383037151768804f, 0.0009347975719720125f, 0.0014318294124677777f, 0.0011578052071854472f, 0.0007531538140028715f, 0.0011737302411347628f, 0.0011607548221945763f, 0.0016773331444710493f, 0.0011047247098758817f, 0.0013605932472273707f, 0.0008956808014772832f, 0.0015138147864490747f, 0.001294327201321721f, 0.0014503792626783252f, 0.001124137663282454f, 0.001187587738968432f, 0.0009735988569445908f, 0.000762917276006192f, 0.0008536840905435383f, 0.0012325751595199108f, 0.0014785357052460313f, 0.0014391931472346187f, 0.0010866193333640695f, 0.0009771956829354167f, 0.0007753146346658468f, 0.0008240681490860879f, 0.0010070136049762368f, 0.0011047151638194919f, 0.0012913208920508623f, 0.0011962123680859804f, 0.0012643241789191961f, 0.0009553312556818128f, 0.0019835359416902065f, 0.0007123227114789188f, 0.0021499632857739925f, 0.0015640095807611942f, 0.0010200644610449672f, 0.0014751056442037225f, 0.0011344385566189885f, 0.0009946427308022976f, 0.0009764292626641691f, 0.0015814972575753927f, 0.0015063179889693856f, 0.0018422711873427033f, 0.0006240044021978974f, 0.0014520514523610473f, 0.0018704237882047892f, 0.0013357530115172267f, 0.0009012982482090592f, 0.0012542563490569592f, 0.0014127575559541583f, 0.0023123619612306356f, 0.0009514710400253534f, 0.0019196404609829187f, 0.001538351527415216f, 0.0012872866354882717f, 0.0007972050807438791f, 0.0006749724852852523f, 0.001680314657278359f, 0.0017777447355911136f, 0.0010862257331609726f, 0.0010458967881277204f, 0.0017560552805662155f, 0.0017871635500341654f, 0.0007553127943538129f, 0.001647086930461228f, 0.0012368012685328722f, 0.001092847203835845f, 0.0008640136802569032f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #169 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_87_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008211186155676842f, 0.004275540355592966f, 0.0018207639222964644f, 0.0024086679331958294f, 0.015770860016345978f, 0.002234771614894271f, 0.007253914140164852f, 0.0028810594230890274f, 0.012123806402087212f, 0.005614072550088167f, 0.014311815612018108f, 0.004279486835002899f, 0.004257652442902327f, 0.03929612785577774f, 0.019091203808784485f, 0.0036914474330842495f, 0.003647641511633992f, 0.01037516351789236f, 0.0030936526600271463f, 0.0035382029600441456f, 0.005759885534644127f, 0.0036440915428102016f, 0.002774953143671155f, 0.0034958035685122013f, 0.01703621633350849f, 0.006059808656573296f, 0.00828506425023079f, 0.006197019945830107f, 0.003916492220014334f, 0.0122221102938056f, 0.017241619527339935f, 0.006340092048048973f, 0.0022907659877091646f, 0.005714318715035915f, 0.005089535377919674f, 0.003842482343316078f, 0.013165943324565887f, 0.013093732297420502f, 0.004156860988587141f, 0.0023420366924256086f, 0.004554804880172014f, 0.0049182395450770855f, 0.006953217554837465f, 0.0013996644411236048f, 0.005786282010376453f, 0.0031041735783219337f, 0.017294902354478836f, 0.0028532359283417463f, 0.00489985104650259f, 0.003200808074325323f, 0.007883720099925995f, 0.007507767528295517f, 0.014553583227097988f, 0.006150713190436363f, 0.009063460864126682f, 0.0051115332171320915f, 0.004660551901906729f, 0.003109459998086095f, 0.0031215923372656107f, 0.0034376876428723335f, 0.0039736866019666195f, 0.005665522068738937f, 0.012261929921805859f, 0.0072650304064154625f, 0.0032628204207867384f, 0.007392471190541983f, 0.0033959527499973774f, 0.0028261730913072824f, 0.004879810847342014f, 0.004490471910685301f, 0.005312902387231588f, 0.0022366438060998917f, 0.03182115778326988f, 0.005474638193845749f, 0.011332637630403042f, 0.0033915608655661345f, 0.0038592491764575243f, 0.014595383778214455f, 0.007027816493064165f, 0.005778569262474775f, 0.015407569706439972f, 0.004371848423033953f, 0.009340680204331875f, 0.003153619123622775f, 0.009192523546516895f, 0.00822389405220747f, 0.013482591137290001f, 0.0024849101901054382f, 0.008363787084817886f, 0.009190122596919537f, 0.002947354456409812f, 0.014161420054733753f, 0.006076004821807146f, 0.008471416309475899f, 0.004923772998154163f, 0.0028674989007413387f, 0.00454682158306241f, 0.009427303448319435f, 0.007665492128580809f, 0.004357262048870325f, 0.016898615285754204f, 0.010112856514751911f, 0.002190230879932642f, 0.0026775903534144163f, 0.005295883864164352f, 0.006797769106924534f, 0.0025898453313857317f, 0.0033481919672340155f, 0.0028644318226724863f, 0.0023387994151562452f, 0.006302114576101303f, 0.00350127462297678f, 0.006003000307828188f, 0.006217107642441988f, 0.0038181659765541553f, 0.0029018123168498278f, 0.003965439740568399f, 0.013656587339937687f, 0.009195167571306229f, 0.0024870596826076508f, 0.004387518856674433f, 0.008599103428423405f, 0.009509310126304626f, 0.008058683946728706f, 0.006535770371556282f, 0.007562925573438406f, 0.008435037918388844f, 0.0069036600179970264f, 0.010607807897031307f, 0.003888234728947282f, 0.002551521174609661f, 0.002546785632148385f, 0.004976384807378054f, 0.0022436135914176702f, 0.006799678318202496f, 0.0028914534486830235f, 0.002039813669398427f, 0.004833947401493788f, 0.004818908870220184f, 0.005092832259833813f, 0.0015986523358151317f, 0.00288185803219676f, 0.007108117453753948f, 0.017024634405970573f, 0.01127554476261139f, 0.005158829502761364f, 0.002968964632600546f, 0.009359440766274929f, 0.006316415499895811f, 0.002959862817078829f, 0.003548088949173689f, 0.0025428123772144318f, 0.014141181483864784f, 0.017973294481635094f, 0.008233437314629555f, 0.015851445496082306f, 0.002614906756207347f, 0.0066533624194562435f, 0.013681338168680668f, 0.010470472276210785f, 0.0030503973830491304f, 0.005321876145899296f, 0.0031581036746501923f, 0.00661046989262104f, 0.0026343832723796368f, 0.013579001650214195f, 0.00431653019040823f, 0.004062444902956486f, 0.0020428968127816916f, 0.0032438416965305805f, 0.010293536819517612f, 0.001538203447125852f, 0.010634792037308216f, 0.009325004182755947f, 0.005094748456031084f, 0.011010534130036831f, 0.0032118314411491156f, 0.030008452013134956f, 0.01767924427986145f, 0.007831383496522903f, 0.0022642314434051514f, 0.004962413106113672f, 0.0032238345593214035f, 0.009883185848593712f, 0.002158093499019742f, 0.010635985992848873f, 0.0038298387080430984f, 0.01027593668550253f, 0.0029729828238487244f, 0.005668640602380037f, 0.004137759562581778f, 0.01536023709923029f, 0.0030816614162176847f, 0.012443401850759983f, 0.007455803919583559f, 0.001959998859092593f, 0.01420239545404911f, 0.005513953510671854f, 0.005647876299917698f, 0.005318454932421446f, 0.008350175805389881f, 0.007713181432336569f, 0.005101770628243685f, 0.004027196206152439f, 0.01467028260231018f, 0.0028054562862962484f, 0.0048531717620790005f, 0.0053263441659510136f, 0.016845934092998505f, 0.015802063047885895f, 0.00279601919464767f, 0.016463376581668854f, 0.007327493745833635f, 0.0024623924400657415f, 0.0018475878750905395f, 0.003025405341759324f, 0.0026073853950947523f, 0.011301598511636257f, 0.00313606858253479f, 0.00888163410127163f, 0.012974281795322895f, 0.0020434935577213764f, 0.005311919376254082f, 0.020789839327335358f, 0.008446798659861088f, 0.00791576411575079f, 0.004615563899278641f, 0.009091969579458237f, 0.005549559369683266f, 0.02286158688366413f, 0.005140341352671385f, 0.0035521662794053555f, 0.0031274540815502405f, 0.012264134362339973f, 0.004787631332874298f, 0.009525674395263195f, 0.010961554013192654f, 0.010575709864497185f, 0.004546493757516146f, 0.0028008343651890755f, 0.0026642961893230677f, 0.004214781802147627f, 0.00968219619244337f, 0.01990407146513462f, 0.016925456002354622f, 0.007745538372546434f, 0.003122960217297077f, 0.004784052260220051f, 0.0024175187572836876f, 0.007522482890635729f, 0.0037724985741078854f, 0.0016791083617135882f, 0.045393094420433044f, 0.003083816496655345f, 0.002966419095173478f, 0.005294661037623882f, 0.0022413674741983414f, 0.004951779264956713f, 0.008126175962388515f, 0.004259041044861078f, 0.002542997943237424f, 0.0033723879605531693f, 0.0030949709471315145f, 0.014108030125498772f, 0.0027205822989344597f, 0.0018152354750782251f, 0.011308039538562298f, 0.013507216237485409f, 0.01428295113146305f, 0.0030662803910672665f, 0.0024217069149017334f, 0.005267022177577019f, 0.003247080137953162f, 0.004484160337597132f, 0.0044760555028915405f, 0.006193820387125015f, 0.014146866276860237f, 0.00319519336335361f, 0.0028415590059012175f, 0.007113410159945488f, 0.006354101467877626f, 0.0019454550929367542f, 0.0023327001836150885f, 0.012073462828993797f, 0.0026140823028981686f, 0.0063268267549574375f, 0.006293411832302809f, 0.009032064117491245f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #170 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_89_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0012308511650189757f, 0.005384733434766531f, 0.00394466845318675f, 0.0013992355670779943f, 0.005037535447627306f, 0.004758656490594149f, 0.001895882305689156f, 0.0014211045345291495f, 0.001489928923547268f, 0.0012837834656238556f, 0.001541393343359232f, 0.004063611384481192f, 0.004032982047647238f, 0.001479840138927102f, 0.0014364358503371477f, 0.001304048579186201f, 0.004699765704572201f, 0.005803359672427177f, 0.001205254695378244f, 0.00626025814563036f, 0.0018912770319730043f, 0.0014998387778177857f, 0.006050053518265486f, 0.004431029781699181f, 0.0012789819156751037f, 0.004634465090930462f, 0.00501939095556736f, 0.0014148651389405131f, 0.001312601612880826f, 0.0015369206666946411f, 0.004160897806286812f, 0.001848720945417881f, 0.004557840526103973f, 0.0012755072675645351f, 0.00520916236564517f, 0.004584756214171648f, 0.004805184900760651f, 0.006737909745424986f, 0.00588072557002306f, 0.0054030949249863625f, 0.004352190997451544f, 0.001604979857802391f, 0.0053981589153409f, 0.001256183022633195f, 0.0018859737319871783f, 0.0015503980685025454f, 0.0012752916663885117f, 0.0037316111847758293f, 0.0013055062154307961f, 0.0015192099381238222f, 0.0014353293227031827f, 0.004386733286082745f, 0.00432266341522336f, 0.001368350931443274f, 0.0013325911713764071f, 0.004868679214268923f, 0.001529281260445714f, 0.006067564710974693f, 0.0013370158849284053f, 0.0015584385255351663f, 0.0012056806590408087f, 0.004873176105320454f, 0.0014078132808208466f, 0.004687414970248938f, 0.0017386020626872778f, 0.0016864659264683723f, 0.0013023745268583298f, 0.005186458583921194f, 0.001365938689559698f, 0.0015878049889579415f, 0.003972584381699562f, 0.0015264214016497135f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #171 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_90_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0010516246547922492f, 0.0009240955696441233f, 0.0005478837410919368f, 0.0009132262202911079f, 0.0006023457972332835f, 0.0009568601381033659f, 0.0006865347386337817f, 0.0008899339009076357f, 0.0008321701316162944f, 0.0006443917518481612f, 0.0004674276860896498f, 0.0007885210798121989f, 0.0014732572017237544f, 0.0007168682059273124f, 0.0006940833409316838f, 0.0009614403825253248f, 0.0010405757930129766f, 0.0009316714713349938f, 0.0010349095100536942f, 0.0008081204141490161f, 0.0007579490193165839f, 0.0009269820293411613f, 0.0007714065141044557f, 0.000846642127726227f, 0.0007251075003296137f, 0.0006216879119165242f, 0.0010052525904029608f, 0.0009327030275017023f, 0.0008272567647509277f, 0.0006899077561683953f, 0.0008249054662883282f, 0.0007406409131363034f, 0.0006263539544306695f, 0.000800830137450248f, 0.0010090816067531705f, 0.0007763669127598405f, 0.0005816694465465844f, 0.0006987066008150578f, 0.0011379763018339872f, 0.0006684519466944039f, 0.0005844643455930054f, 0.0006279941881075501f, 0.0008841925882734358f, 0.0008422819664701819f, 0.0007148776203393936f, 0.0008862179238349199f, 0.0005633963737636805f, 0.0008416975033469498f, 0.0011969367042183876f, 0.000778916641138494f, 0.0004941648221574724f, 0.0008362524094991386f, 0.0005716817104257643f, 0.0008660665480419993f, 0.0007255795644596219f, 0.0007587196887470782f, 0.0010187645675614476f, 0.000863105000462383f, 0.0006382919382303953f, 0.0007086196565069258f, 0.0006043799803592265f, 0.0008096142555586994f, 0.0005251989350654185f, 0.0006907695787958801f, 0.0008201450691558421f, 0.0011157034896314144f, 0.00043883081525564194f, 0.0007532733725383878f, 0.000924241088796407f, 0.0006140192272141576f, 0.0007611137116327882f, 0.0007462666253559291f, 0.0005002148100174963f, 0.0007001626072451472f, 0.0005639813025481999f, 0.0006423095474019647f, 0.0005595271941274405f, 0.0007238752441480756f, 0.0006869730423204601f, 0.0011988312471657991f, 0.0008394136093556881f, 0.0010109086288139224f, 0.0007399041205644608f, 0.0005906690494157374f, 0.0009440073044970632f, 0.0010756723349913955f, 0.0009099110029637814f, 0.0008808854618109763f, 0.0008489199681207538f, 0.0007867568056099117f, 0.0006158381002023816f, 0.0005637364229187369f, 0.0009963788324967027f, 0.0006975942524150014f, 0.0007988776196725667f, 0.0006265493575483561f, 0.0006896842969581485f, 0.000630296126473695f, 0.0008081721607595682f, 0.0005894827772863209f, 0.0009408744517713785f, 0.0008096512174233794f, 0.0008708859677426517f, 0.0006635110476054251f, 0.0008264784701168537f, 0.0005521897110156715f, 0.0007751570083200932f, 0.0005996082327328622f, 0.0005793148884549737f, 0.0006398661062121391f, 0.0006252494640648365f, 0.001346832257695496f, 0.0005913859349675477f, 0.0005560749559663236f, 0.0008047919254750013f, 0.0005973729421384633f, 0.0007814739947207272f, 0.0007408007513731718f, 0.0006457165000028908f, 0.0008848332217894495f, 0.0005131029756739736f, 0.0010610289173200727f, 0.0005512619973160326f, 0.0008000197703950107f, 0.0009963251650333405f, 0.0007084044045768678f, 0.0007880589691922069f, 0.00060752296121791f, 0.0007843895582482219f, 0.0008288170793093741f, 0.0006521701579913497f, 0.0007131019374355674f, 0.0008791542495600879f, 0.0008211893145926297f, 0.0006814746302552521f, 0.0008666940848343074f, 0.0006200203206390142f, 0.00045411675819195807f, 0.0009014926617965102f, 0.0006395301898010075f, 0.000914927979465574f, 0.0008735883166082203f, 0.000626965134870261f, 0.0009882914600893855f, 0.0007424067007377744f, 0.0006690232548862696f, 0.0006166909588500857f, 0.0007874537841416895f, 0.0005935699446126819f, 0.0007401574985124171f, 0.0005210542003624141f, 0.0003917936410289258f, 0.0005857727956026793f, 0.0008153912494890392f, 0.0006257487693801522f, 0.0007435730658471584f, 0.0008965943125076592f, 0.0007790165254846215f, 0.0011228303192183375f, 0.0006990912952460349f, 0.0008291901904158294f, 0.0007434540893882513f, 0.0007904136436991394f, 0.0010967793641611934f, 0.0005388472927734256f, 0.0009679767535999417f, 0.0007266652537509799f, 0.0006656217155978084f, 0.0005944931181147695f, 0.0009094830602407455f, 0.0007044028025120497f, 0.0008227408980019391f, 0.0005552583606913686f, 0.001246980857104063f, 0.0006945289205759764f, 0.0004420424229465425f, 0.0010832707630470395f, 0.0008716571028344333f, 0.000829557713586837f, 0.0007033600704744458f, 0.0007772634271532297f, 0.0009438577690161765f, 0.0006899583386257291f, 0.0006197526236064732f, 0.0007574339979328215f, 0.0009433112572878599f, 0.0007026256062090397f, 0.0005265326471999288f, 0.0007961070514284074f, 0.0010662570130079985f, 0.0009092038962990046f, 0.0008315509767271578f, 0.000581387139391154f, 0.0006962371408008039f, 0.0007440642802976072f, 0.0004456659662537277f, 0.000877054815646261f, 0.0010095612378790975f, 0.0007239098777063191f, 0.0007112842868082225f, 0.0009496768470853567f, 0.0008027554722502828f, 0.0006277195643633604f, 0.0007240457343868911f, 0.0006331330514512956f, 0.0011288286186754704f, 0.0006038036663085222f, 0.0005278731696307659f, 0.000963935861364007f, 0.0006623738445341587f, 0.0007202459964901209f, 0.0005620274459943175f, 0.0005166334449313581f, 0.0008035125792957842f, 0.0008640420855954289f, 0.000495866930577904f, 0.001081177149899304f, 0.000580453546717763f, 0.00046005030162632465f, 0.0005576204275712371f, 0.0006937935249879956f, 0.0006506106583401561f, 0.0009127420489676297f, 0.0008594777900725603f, 0.0006908042123541236f, 0.0010120195802301168f, 0.0009087680373340845f, 0.0007334800320677459f, 0.0007302150479517877f, 0.0006280523957684636f, 0.0008281661430373788f, 0.0010379598243162036f, 0.0008709015673957765f, 0.0007553770556114614f, 0.0007649029139429331f, 0.0006550131947733462f, 0.0006864981260150671f, 0.0008423051331192255f, 0.0007045209058560431f, 0.0008607835043221712f, 0.0006295752245932817f, 0.0006563946953974664f, 0.0008889266173355281f, 0.0006663331296294928f, 0.000607430178206414f, 0.001246635103598237f, 0.0005663000629283488f, 0.0005436002975329757f, 0.0007163570844568312f, 0.0005916144582442939f, 0.0005408347933553159f, 0.0007205695146694779f, 0.0008518145186826587f, 0.0006867379997856915f, 0.0007898914627730846f, 0.0007356028654612601f, 0.0008436801144853234f, 0.0007484554662369192f, 0.0007210909971036017f, 0.0007315605762414634f, 0.0005224270862527192f, 0.0007756748236715794f, 0.0007169369491748512f, 0.0008927785675041378f, 0.0004107342101633549f, 0.000626766006462276f, 0.0008393768221139908f, 0.0006450937362387776f, 0.0007027651881799102f, 0.0007574110059067607f, 0.0007204499561339617f, 0.000663177517708391f, 0.0008665987988933921f, 0.000648888002615422f, 0.0009032004163600504f, 0.0007717905100435019f, 0.0007172718760557473f, 0.0004722908779513091f, 0.000848693773150444f, 0.0005412715254351497f, 0.0007510097348131239f, 0.000671030196826905f, 0.0008149157511070371f, 0.0008753154543228447f, 0.001008390448987484f, 0.0007296765106730163f, 0.0007943414384499192f, 0.0010998795041814446f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #172 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_94_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0051414077170193195f, 0.0037161982618272305f, 0.0054646204225718975f, 0.0031559166964143515f, 0.0033794883638620377f, 0.004297977313399315f, 0.004062297288328409f, 0.003659408073872328f, 0.0035750330425798893f, 0.0030970843508839607f, 0.004501966293901205f, 0.005787128582596779f, 0.003761419327929616f, 0.004704745952039957f, 0.004066071473062038f, 0.004064532928168774f, 0.0031569236889481544f, 0.00440153619274497f, 0.0030171528924256563f, 0.003933427855372429f, 0.0038221057038754225f, 0.0027465170715004206f, 0.004917724058032036f, 0.0040376437827944756f, 0.004173018038272858f, 0.004097347613424063f, 0.004647042136639357f, 0.0034838446881622076f, 0.00478843878954649f, 0.003070826642215252f, 0.003689819248393178f, 0.0050573209300637245f, 0.004568517208099365f, 0.004365317057818174f, 0.0031174211762845516f, 0.005580291152000427f, 0.004836237523704767f, 0.0038872358854860067f, 0.004079804755747318f, 0.006866435520350933f, 0.0044820248149335384f, 0.0038523036055266857f, 0.004600783344358206f, 0.0036575139965862036f, 0.0037369788624346256f, 0.0059151845052838326f, 0.005711622070521116f, 0.0037334354128688574f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #173 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_96_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0012522733304649591f, 0.0014498918317258358f, 0.0018847736064344645f, 0.0012051069643348455f, 0.0009421574068255723f, 0.0013819349696859717f, 0.0011360604548826814f, 0.0014352640137076378f, 0.0013215573271736503f, 0.0008148142951540649f, 0.0012829266488552094f, 0.0007563015096820891f, 0.0010951998410746455f, 0.0009841974824666977f, 0.0009877075208351016f, 0.001235358533449471f, 0.0011351072462275624f, 0.0010587440337985754f, 0.0010203397832810879f, 0.0011353939771652222f, 0.0013200967805460095f, 0.0011284813517704606f, 0.0014355735620483756f, 0.0010563990799710155f, 0.0011031352914869785f, 0.0008465222781524062f, 0.00116067286580801f, 0.0016263889847323298f, 0.0010250684572383761f, 0.0010151120368391275f, 0.0010102526284754276f, 0.001540772384032607f, 0.0007356107817031443f, 0.0007798732258379459f, 0.0008258639718405902f, 0.0010446802480146289f, 0.0010113026946783066f, 0.001019553397782147f, 0.0009650253923609853f, 0.001153362332843244f, 0.0010487401159480214f, 0.001201783656142652f, 0.001511532929725945f, 0.0012621640926226974f, 0.0016991576412692666f, 0.0008911587647162378f, 0.0013618391240015626f, 0.0012012983206659555f, 0.000896434357855469f, 0.0011896784417331219f, 0.001227345783263445f, 0.001320361508987844f, 0.001448492519557476f, 0.0010326537303626537f, 0.0012402381980791688f, 0.0009992552222684026f, 0.0010969237191602588f, 0.0011572520015761256f, 0.0008702509221620858f, 0.0011505050351843238f, 0.0012215962633490562f, 0.0009613583679310977f, 0.001175169600173831f, 0.0007018768810667098f, 0.0011073836358264089f, 0.0010500436183065176f, 0.0011888269800692797f, 0.0009546930086798966f, 0.0010670579504221678f, 0.0009423735900782049f, 0.0014669183874502778f, 0.0011683059856295586f, 0.0013185999123379588f, 0.0013112741289660335f, 0.0012534646084532142f, 0.0011594031238928437f, 0.0012439616257324815f, 0.0012459642020985484f, 0.001298384042456746f, 0.0009019405697472394f, 0.0010126082925125957f, 0.0009908791398629546f, 0.0016831967514008284f, 0.0012622042559087276f, 0.0013589563313871622f, 0.0009369846084155142f, 0.0013246749294921756f, 0.0013791073579341173f, 0.0009452488739043474f, 0.0007904364611022174f, 0.0008465074351988733f, 0.0012643085792660713f, 0.0015357000520452857f, 0.0012581038754433393f, 0.0010030866833403707f, 0.0007215284858830273f, 0.0014148076297715306f, 0.001183152780868113f, 0.001074487343430519f, 0.0012755758361890912f, 0.00093083392130211f, 0.0012055495753884315f, 0.0013765377225354314f, 0.0008720802725292742f, 0.0012751162284985185f, 0.0014011380262672901f, 0.0012292867759242654f, 0.001078497152775526f, 0.0012836101232096553f, 0.00105441699270159f, 0.0013842012267559767f, 0.0008614882826805115f, 0.0009859458077698946f, 0.0013682243879884481f, 0.001360500929877162f, 0.001100292312912643f, 0.0013829729286953807f, 0.0013445662334561348f, 0.001761488150805235f, 0.0010214702924713492f, 0.0010131041053682566f, 0.0013227013405412436f, 0.00131645193323493f, 0.001209871843457222f, 0.0009977853624150157f, 0.0012724515981972218f, 0.0011739431647583842f, 0.0010547632118687034f, 0.0012503383914008737f, 0.0012765167048200965f, 0.0017890563467517495f, 0.0014360630884766579f, 0.001192081137560308f, 0.0009723958792164922f, 0.0013151649618521333f, 0.0010563342366367579f, 0.0011278962483629584f, 0.0010418470483273268f, 0.0016160276718437672f, 0.0012537774164229631f, 0.0012285365955904126f, 0.0011457044165581465f, 0.0009963334305211902f, 0.0015402224380522966f, 0.0013581259408965707f, 0.0008968814508989453f, 0.0007796916179358959f, 0.0009480179287493229f, 0.0009022680460475385f, 0.0010838228045031428f, 0.0015477566048502922f, 0.0011966557940468192f, 0.0011483961716294289f, 0.0010164373088628054f, 0.0012123386841267347f, 0.0012259188806638122f, 0.0011731580598279834f, 0.0009704236290417612f, 0.0011104370933026075f, 0.0011521578999236226f, 0.0010322463931515813f, 0.0014262342592701316f, 0.0014027577126398683f, 0.0016271923668682575f, 0.0016515498282387853f, 0.001112393569201231f, 0.0007976890774443746f, 0.0007597393705509603f, 0.001222645165398717f, 0.0011733981082215905f, 0.0012555642751976848f, 0.0012111545074731112f, 0.0012350662145763636f, 0.0010120151564478874f, 0.00113055226393044f, 0.0012613438302651048f, 0.0009492236422374845f, 0.0012463659513741732f, 0.001674186554737389f, 0.000987313804216683f, 0.0008859551744535565f, 0.001142216264270246f, 0.0016428108792752028f, 0.0011492329649627209f, 0.0009447277407161891f, 0.0014128107577562332f, 0.0012446899199858308f, 0.0012485848274081945f, 0.001180689549073577f, 0.0009859454585239291f, 0.0014011095045134425f, 0.0008717472082935274f, 0.0010938821360468864f, 0.001055877422913909f, 0.0011234679259359837f, 0.0008740320918150246f, 0.0011878755176439881f, 0.0013962819939479232f, 0.0013044480001553893f, 0.0012213261798024178f, 0.0013507145922631025f, 0.0012987673981115222f, 0.0012456810800358653f, 0.0011778745101764798f, 0.0012543190969154239f, 0.0012581722112372518f, 0.0011062691919505596f, 0.0015295181656256318f, 0.0011132803047075868f, 0.001241448218934238f, 0.001703970949165523f, 0.0009146122611127794f, 0.00124824745580554f, 0.0009995467262342572f, 0.0011678483569994569f, 0.0008903029374778271f, 0.0009408874902874231f, 0.0009158535394817591f, 0.0008876941283233464f, 0.001241279998794198f, 0.0013274623779579997f, 0.0011531845666468143f, 0.0010776127455756068f, 0.0010943522211164236f, 0.001018036506138742f, 0.000961806217674166f, 0.0011726400116458535f, 0.0014244912890717387f, 0.0008937816019169986f, 0.0010218358365818858f, 0.0008705925429239869f, 0.0011685789795592427f, 0.0012623879592865705f, 0.0011933071073144674f, 0.0012366777518764138f, 0.0009828218026086688f, 0.0009314133785665035f, 0.001058999914675951f, 0.0012822835706174374f, 0.0011169406352564692f, 0.0013221903936937451f, 0.0011609088396653533f, 0.0009299012017436326f, 0.0013117336202412844f, 0.0009703475516289473f, 0.001493460382334888f, 0.0010912714060395956f, 0.0009680968360044062f, 0.0014618136920034885f, 0.0009607519023120403f, 0.0012093075783923268f, 0.0020307060331106186f, 0.0012407763861119747f, 0.0011882880935445428f, 0.0012816450325772166f, 0.0012983821798115969f, 0.001066177268512547f, 0.0014388439012691379f, 0.0011029313318431377f, 0.0012890065554529428f, 0.0010423355270177126f, 0.000847337010782212f, 0.0011121651623398066f, 0.0010414774296805263f, 0.0010262681171298027f, 0.0010203124256804585f, 0.0008578431443311274f, 0.0009676124318502843f, 0.0012742832768708467f, 0.001159957959316671f, 0.0013254440855234861f, 0.0011428744764998555f, 0.001134276739321649f, 0.0009187574032694101f, 0.0013493295991793275f, 0.001209123875014484f, 0.0010628364980220795f, 0.0011851676972582936f, 0.0011807960690930486f, 0.0010732628870755434f, 0.0011559115955606103f, 0.001426667906343937f, 0.001322520081885159f, 0.001056195585988462f, 0.001127430354245007f, 0.0012003597803413868f, 0.0009540403843857348f, 0.0010537608759477735f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #174 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_98_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1280,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0008706789813004434f, 0.0037268484011292458f, 0.0035605242010205984f, 0.0007837964803911746f, 0.000718184164725244f, 0.003563098143786192f, 0.0005875368951819837f, 0.00398789020255208f, 0.0011078332317993045f, 0.005044975783675909f, 0.004291597753763199f, 0.003944491967558861f, 0.0039369710721075535f, 0.0008157530683092773f, 0.000762224430218339f, 0.005134417675435543f, 0.005503409542143345f, 0.0007692412473261356f, 0.0007329460349865258f, 0.004433820955455303f, 0.0005824801046401262f, 0.0008368719136342406f, 0.0008313467260450125f, 0.0049653067253530025f, 0.0009978699963539839f, 0.000814512197393924f, 0.004362554755061865f, 0.0010345270857214928f, 0.0006293152691796422f, 0.0007501097279600799f, 0.001544299302622676f, 0.003512444207444787f, 0.0020466570276767015f, 0.0036370172165334225f, 0.0006563370116055012f, 0.0031816945411264896f, 0.0007743304595351219f, 0.0038961947429925203f, 0.004157070070505142f, 0.0037146585527807474f, 0.0013043377548456192f, 0.0012309504672884941f, 0.003943217918276787f, 0.0039872704073786736f, 0.0007201306871138513f, 0.0008510533953085542f, 0.0007841016631573439f, 0.0007917000912129879f, 0.0007118828943930566f, 0.0037531666457653046f, 0.0046110800467431545f, 0.0007478652405552566f, 0.0006328758900053799f, 0.0007873198483139277f, 0.0008867884171195328f, 0.005493279546499252f, 0.0008648274233564734f, 0.004045572131872177f, 0.001358265639282763f, 0.000753675471059978f, 0.00484808161854744f, 0.0035214952658861876f, 0.0008737901225686073f, 0.00481505086645484f, 0.0036420829128473997f, 0.0042530810460448265f, 0.0005682984483428299f, 0.0008312218124046922f, 0.004701984580606222f, 0.0006298016523942351f, 0.0013845731737092137f, 0.0008656413992866874f, 0.0037612877786159515f, 0.0005335922469384968f, 0.0007999890949577093f, 0.0016736171673983335f, 0.0021092265378683805f, 0.0009580748155713081f, 0.004036055877804756f, 0.004157578572630882f, 0.0008195365662686527f, 0.0038938582874834538f, 0.004258125554770231f, 0.0007838733145035803f, 0.00359169184230268f, 0.0006503051263280213f, 0.0031779627315700054f, 0.0037017904687672853f, 0.004399749916046858f, 0.0028917447198182344f, 0.004397270735353231f, 0.0036892888601869345f, 0.004841613583266735f, 0.0010618494125083089f, 0.003572858637198806f, 0.0007720431312918663f, 0.004477245733141899f, 0.004257659427821636f, 0.001375306281261146f, 0.004036736208945513f, 0.0006044050096534193f, 0.0006233796593733132f, 0.00425803754478693f, 0.0010312156518921256f, 0.0009346948936581612f, 0.004785323049873114f, 0.0042732590809464455f, 0.0032831632997840643f, 0.0011828633723780513f, 0.0007142799440771341f, 0.004443678539246321f, 0.004598811734467745f, 0.004410146735608578f, 0.0036086139734834433f, 0.0010258416878059506f, 0.0038091710302978754f, 0.00371989025734365f, 0.004377562087029219f, 0.0006572067504748702f, 0.0005516497185453773f, 0.004721555858850479f, 0.0047826762311160564f, 0.004554435145109892f, 0.0006614566082134843f, 0.0007107250858098269f, 0.004043874330818653f, 0.00527301337569952f, 0.0007597403600811958f, 0.005397275555878878f, 0.000773751875385642f, 0.003727781120687723f, 0.0013386898208409548f, 0.004741557873785496f, 0.004037810023874044f, 0.0031743585132062435f, 0.0007602230180054903f, 0.0007890172419138253f, 0.0007849927642382681f, 0.004242877941578627f, 0.0008507993770763278f, 0.003970460966229439f, 0.0038988380692899227f, 0.005074594169855118f, 0.0006835110834799707f, 0.0008968862239271402f, 0.0013418967137113214f, 0.0010213544592261314f, 0.004312414675951004f, 0.0008060859399847686f, 0.004793550819158554f, 0.0006186356185935438f, 0.0009748587617650628f, 0.0035223113372921944f, 0.001048215082846582f, 0.004139126278460026f, 0.000762915937229991f, 0.0007034455775283277f, 0.0010256933746859431f, 0.003307628445327282f, 0.0007572784670628607f, 0.0007346845814026892f, 0.003471911419183016f, 0.0008218638249672949f, 0.0007066212710924447f, 0.004147168714553118f, 0.0008006306597962976f, 0.0008709392859600484f, 0.004337772261351347f, 0.0038997370284050703f, 0.0006406879401765764f, 0.0040871803648769855f, 0.007990253157913685f, 0.00329223251901567f, 0.000981985591351986f, 0.003115231404080987f, 0.0010598930530250072f, 0.00491719227284193f, 0.0006929425289854407f, 0.0011217216961085796f, 0.003973165526986122f, 0.0007139128865674138f, 0.003989884629845619f, 0.000669589324388653f, 0.000597198202740401f, 0.004115995950996876f, 0.0011831680312752724f, 0.001089133438654244f, 0.0007202578708529472f, 0.004060619045048952f, 0.000893265416380018f, 0.0007425234653055668f, 0.004276614636182785f, 0.0008016318315640092f, 0.0006739895325154066f, 0.0006991896661929786f, 0.004217027220875025f, 0.0008537059766240418f, 0.0008334568119607866f, 0.001158149796538055f, 0.0011188575299456716f, 0.003195495344698429f, 0.003983635921031237f, 0.0009095934219658375f, 0.0007711034268140793f, 0.001209945185109973f, 0.004379212856292725f, 0.0007254083757288754f, 0.0006798141403123736f, 0.003994189202785492f, 0.003980489447712898f, 0.0007951455190777779f, 0.0006989300600253046f, 0.00564581248909235f, 0.0005806201952509582f, 0.0012703799875453115f, 0.004603036679327488f, 0.0037991218268871307f, 0.004567979369312525f, 0.0006584693328477442f, 0.0006197525653988123f, 0.003823719220235944f, 0.0013157635694369674f, 0.003954820800572634f, 0.001017688657157123f, 0.0007606840808875859f, 0.0032578364480286837f, 0.0007207586313597858f, 0.0006965011125430465f, 0.0007732700905762613f, 0.0006421425496228039f, 0.00378825212828815f, 0.0008254142012447119f, 0.004655627533793449f, 0.0006750234751962125f, 0.000698684249073267f, 0.0006503374315798283f, 0.0007359460578300059f, 0.001404648763127625f, 0.0007683761650696397f, 0.0007721546571701765f, 0.0036503004375845194f, 0.0007442814530804753f, 0.0006399417179636657f, 0.0008177981362678111f, 0.0008075514924712479f, 0.0015462185256183147f, 0.0012740480015054345f, 0.0012296248460188508f, 0.0025856797583401203f, 0.005435212980955839f, 0.0007050257408991456f, 0.0009226913098245859f, 0.0016635811189189553f, 0.0007262227591127157f, 0.00446219090372324f, 0.003375399624928832f, 0.004195226822048426f, 0.0008242251933552325f, 0.003948538564145565f, 0.0007081369985826313f, 0.003653815481811762f, 0.0007488089031539857f, 0.0006602644571103156f, 0.004299127962440252f, 0.003738843137398362f, 0.0006687604472972453f, 0.0008059684769250453f, 0.0035061489325016737f, 0.0035067026037722826f, 0.0008279780158773065f, 0.0006691318121738732f, 0.0007347429054789245f, 0.004208937752991915f, 0.0010675068479031324f, 0.0006875339895486832f, 0.003533815499395132f, 0.004204421304166317f, 0.0008269286481663585f, 0.004510305356234312f, 0.003759786719456315f, 0.004109066911041737f, 0.0006592559511773288f, 0.0007934680324979126f, 0.003981306217610836f, 0.004186323843896389f, 0.004339177627116442f, 0.001117844134569168f, 0.001094217412173748f, 0.0009475476108491421f, 0.0006379863480105996f, 0.0054109059274196625f, 0.0035986718721687794f, 0.0037587694823741913f, 0.0008772786823101342f, 0.004836615175008774f, 0.0007787853828631341f, 0.003891203086823225f, 0.0045239063911139965f, 0.0006466190097853541f, 0.004724042024463415f, 0.0007386757642962039f, 0.004931684583425522f, 0.0038719400763511658f, 0.001079289591871202f, 0.002832247642800212f, 0.003917399328202009f, 0.004915177822113037f, 0.000976616283878684f, 0.0013844507047906518f, 0.005628679413348436f, 0.0007771350210532546f, 0.005079022143036127f, 0.0007680993876419961f, 0.0038074541371315718f, 0.0034408888313919306f, 0.0011399650247767568f, 0.000759839138481766f, 0.000746498757507652f, 0.0006864656461402774f, 0.0007106658304110169f, 0.003226198023185134f, 0.0006691153394058347f, 0.003622722579166293f, 0.0006493671098724008f, 0.004667595960199833f, 0.001256974064745009f, 0.003537227399647236f, 0.0011037657968699932f, 0.004875782877206802f, 0.003519060555845499f, 0.004426606930792332f, 0.0027599772438406944f, 0.00421065604314208f, 0.004681198857724667f, 0.0023728429805487394f, 0.0035635107196867466f, 0.0006092202384024858f, 0.0007379387971013784f, 0.004153373185545206f, 0.0046765003353357315f, 0.0006425836472772062f, 0.0036413664929568768f, 0.0006967938388697803f, 0.0028807800263166428f, 0.004250910598784685f, 0.004171609412878752f, 0.0008054886129684746f, 0.004665623418986797f, 0.0007759099826216698f, 0.0007064226665534079f, 0.0007155106286518276f, 0.004102099686861038f, 0.0006827980396337807f, 0.0033802574034780264f, 0.0008193698595277965f, 0.000666796404402703f, 0.003618742572143674f, 0.0037430289667099714f, 0.0006435512914322317f, 0.003940265160053968f, 0.0006216735346242785f, 0.004505028948187828f, 0.0006009411881677806f, 0.0008583583403378725f, 0.00423735985532403f, 0.001087266718968749f, 0.0010131451999768615f, 0.000755125714931637f, 0.0006812312640249729f, 0.003480857703834772f, 0.000758431269787252f, 0.004217743407934904f, 0.0038061104714870453f, 0.0007136705098673701f, 0.0007740666042082012f, 0.004536651540547609f, 0.0008209431543946266f, 0.0007037913892418146f, 0.006368937902152538f, 0.001235270407050848f, 0.0008005322306416929f, 0.004338995087891817f, 0.004314240533858538f, 0.003600688884034753f, 0.000808172335382551f, 0.0043671997264027596f, 0.0006813813233748078f, 0.003367639146745205f, 0.0007594897761009634f, 0.0038862626533955336f, 0.0011239295126870275f, 0.0007970681181177497f, 0.0013545486144721508f, 0.0007597411749884486f, 0.0006785848527215421f, 0.0019003134220838547f, 0.00445495406165719f, 0.003662307048216462f, 0.0034464895725250244f, 0.004103328101336956f, 0.000881741289049387f, 0.0006876576226204634f, 0.003409162862226367f, 0.0007268422050401568f, 0.0019439380848780274f, 0.0031516847666352987f, 0.004874828737229109f, 0.003927992191165686f, 0.0005948205362074077f, 0.003206681227311492f, 0.0035813457798212767f, 0.004348465707153082f, 0.003721600864082575f, 0.005211764946579933f, 0.0006630325224250555f, 0.005149263422936201f, 0.00428224541246891f, 0.0036088828928768635f, 0.0007767108036205173f, 0.0007633917848579586f, 0.004385627806186676f, 0.0005835526390001178f, 0.004176104906946421f, 0.0007204707362689078f, 0.0016012649284675717f, 0.0007126837153919041f, 0.0007322732708416879f, 0.0006267349235713482f, 0.005495645571500063f, 0.0009090628009289503f, 0.0008145355968736112f, 0.0006217354093678296f, 0.0008191982633434236f, 0.0007089544669725001f, 0.0008011720492504537f, 0.004328926559537649f, 0.003814782714471221f, 0.0013803221518173814f, 0.0032140822149813175f, 0.0007876920280978084f, 0.0057975659146904945f, 0.0006349334726110101f, 0.0008207496139220893f, 0.004739535041153431f, 0.0007312746020033956f, 0.0007821150356903672f, 0.0008686699438840151f, 0.0009259579237550497f, 0.0010077842744067311f, 0.004015069920569658f, 0.0023852591402828693f, 0.0007210542098619044f, 0.0007439474575221539f, 0.003968748264014721f, 0.0006182692595757544f, 0.003724197158589959f, 0.0036447420716285706f, 0.0007031474960967898f, 0.0034584610257297754f, 0.0007084357785061002f, 0.003510809503495693f, 0.005373163614422083f, 0.0005935198860242963f, 0.004572344943881035f, 0.004588056821376085f, 0.0005704243667423725f, 0.0035435850732028484f, 0.0041610682383179665f, 0.0039920019917190075f, 0.003569377586245537f, 0.0012321269605308771f, 0.0007368034566752613f, 0.0007179730455391109f, 0.004129116423428059f, 0.0009391779894940555f, 0.0007198458770290017f, 0.003881844226270914f, 0.001043302589096129f, 0.0039879814721643925f, 0.0010686942841857672f, 0.004975704476237297f, 0.0006977790035307407f, 0.0035353058483451605f, 0.0008531046914868057f, 0.0006601858185604215f, 0.0008328940602950752f, 0.0008546960889361799f, 0.0029832664877176285f, 0.004192664287984371f, 0.00146968150511384f, 0.0008169712382368743f, 0.005453603807836771f, 0.0007615574868395925f, 0.004293896723538637f, 0.004838265478610992f, 0.0009987660450860858f, 0.0007847468368709087f, 0.0033459526021033525f, 0.005330189131200314f, 0.003944180440157652f, 0.004275682847946882f, 0.004114899318665266f, 0.003770357696339488f, 0.0005927205784246325f, 0.0006472768145613372f, 0.0005486386362463236f, 0.004513108637183905f, 0.0007885656086727977f, 0.004442313686013222f, 0.000741126830689609f, 0.00396350072696805f, 0.0007399570313282311f, 0.0011606819462031126f, 0.0007076121983118355f, 0.0010755951516330242f, 0.004727852065116167f, 0.0007879511686041951f, 0.0007609136519022286f, 0.003596504218876362f, 0.0007106068078428507f, 0.00489465706050396f, 0.0007576955831609666f, 0.00373002327978611f, 0.004726231098175049f, 0.0006339447572827339f, 0.0007461814675480127f, 0.000777697074227035f, 0.0008024110575206578f, 0.0008334039594046772f, 0.0008484571008011699f, 0.0010988962603732944f, 0.0038138185627758503f, 0.004290878307074308f, 0.002953762887045741f, 0.0007179043022915721f, 0.0007800905150361359f, 0.0008768629049882293f, 0.004320733714848757f, 0.000792687467765063f, 0.003251730464398861f, 0.0008380637154914439f, 0.0047950660809874535f, 0.0044877734035253525f, 0.000608996779192239f, 0.000695790397003293f, 0.0041690487414598465f, 0.0007260169950313866f, 0.001117149950005114f, 0.0006080172024667263f, 0.004321926739066839f, 0.0005713821155950427f, 0.0010634205536916852f, 0.004531358368694782f, 0.0041081905364990234f, 0.0005829258006997406f, 0.0007671333733014762f, 0.0053397598676383495f, 0.0008825872209854424f, 0.0006825290038250387f, 0.0009821474086493254f, 0.004056544508785009f, 0.0006500532617792487f, 0.0009170176344923675f, 0.0008616760605946183f, 0.003600829280912876f, 0.003408667631447315f, 0.0006891990778967738f, 0.0007165149436332285f, 0.0010371546959504485f, 0.0007318737334571779f, 0.003882286138832569f, 0.00365748954936862f, 0.0007194822537712753f, 0.001251492532901466f, 0.000758600770495832f, 0.0008579780114814639f, 0.003835478564724326f, 0.0008100029081106186f, 0.0008720014011487365f, 0.0036622544284909964f, 0.0013160951202735305f, 0.0037039618473500013f, 0.0034263702109456062f, 0.0008137153927236795f, 0.0007961245719343424f, 0.0037189917638897896f, 0.0008051588665693998f, 0.0008514071232639253f, 0.0007726819603703916f, 0.004306088201701641f, 0.0009765514405444264f, 0.0007098806090652943f, 0.0035733503755182028f, 0.0006093792035244405f, 0.004036430269479752f, 0.004675713367760181f, 0.0007916929898783565f, 0.0013698558323085308f, 0.003505430882796645f, 0.0009158793254755437f, 0.0033227389212697744f, 0.0008776387549005449f, 0.0008371035801246762f, 0.0007785022025927901f, 0.0007016618037596345f, 0.0010483532678335905f, 0.0006825163727626204f, 0.0006891213124617934f, 0.0036732121370732784f, 0.0006925870548002422f, 0.0037930470425635576f, 0.00408740621060133f, 0.00058208272093907f, 0.00379132735542953f, 0.0037149994168430567f, 0.004327171947807074f, 0.0007922140066511929f, 0.005366303492337465f, 0.0006476485286839306f, 0.0006368003087118268f, 0.0015834042569622397f, 0.0012070121010765433f, 0.005156517494469881f, 0.0013322012964636087f, 0.0007568473229184747f, 0.0007267848122864962f, 0.0012352624908089638f, 0.0007516263867728412f, 0.0040364935994148254f, 0.0010363737819716334f, 0.0027295106556266546f, 0.0037482494954019785f, 0.0010603796690702438f, 0.0050627137534320354f, 0.0008000824018381536f, 0.0006146602681837976f, 0.0008265128708444536f, 0.001136505394242704f, 0.000776441243942827f, 0.004633491393178701f, 0.0008686060318723321f, 0.000832865247502923f, 0.0005995213869027793f, 0.005032331682741642f, 0.004708562977612019f, 0.0010688063921406865f, 0.0041680242866277695f, 0.000814016442745924f, 0.0006296620122157037f, 0.005555280949920416f, 0.003807332133874297f, 0.0038832409773021936f, 0.0005525673041120172f, 0.0025754510425031185f, 0.004131827503442764f, 0.004264092072844505f, 0.004165253136307001f, 0.0006845843163318932f, 0.0008476551156491041f, 0.0013866667868569493f, 0.004262298811227083f, 0.0008456725627183914f, 0.001874628011137247f, 0.0007432707934640348f, 0.0007908319239504635f, 0.0038350943941622972f, 0.003558008000254631f, 0.00429713586345315f, 0.0006197795155458152f, 0.0008090775809250772f, 0.004231996834278107f, 0.004075376316905022f, 0.0038772968109697104f, 0.0026589063927531242f, 0.0008679595775902271f, 0.0008128408226184547f, 0.003924574237316847f, 0.003896963084116578f, 0.0011273486306890845f, 0.0008433397742919624f, 0.0009105920908041298f, 0.0037333949003368616f, 0.0037347457837313414f, 0.0009998999303206801f, 0.0011912118643522263f, 0.003440986620262265f, 0.0012001050636172295f, 0.003528520930558443f, 0.003953821025788784f, 0.0006614617304876447f, 0.0034892852418124676f, 0.004774574190378189f, 0.0012709028087556362f, 0.004309132229536772f, 0.0032567891757935286f, 0.0032103199046105146f, 0.0006138207390904427f, 0.0010997699573636055f, 0.0008551687351427972f, 0.0006697603384964168f, 0.0008638062281534076f, 0.0008500526892021298f, 0.004530925303697586f, 0.0005752812721766531f, 0.0009268747526220977f, 0.0009092080290429294f, 0.0045433021150529385f, 0.0007664510048925877f, 0.0007303744205273688f, 0.004556720145046711f, 0.005275570787489414f, 0.0008839078363962471f, 0.0020380562637001276f, 0.005573343485593796f, 0.0011598221026360989f, 0.0010174503549933434f, 0.0032101927790790796f, 0.004521076567471027f, 0.004672636743634939f, 0.00458016712218523f, 0.000640097598079592f, 0.0006598157342523336f, 0.0007007839740253985f, 0.00414170790463686f, 0.002806467702612281f, 0.005272382870316505f, 0.004054274410009384f, 0.003528094384819269f, 0.0031511769630014896f, 0.003425789065659046f, 0.003843900980427861f, 0.004550160840153694f, 0.0008213723194785416f, 0.0038943428080528975f, 0.0038179627154022455f, 0.003973729908466339f, 0.0007205806905403733f, 0.0006966594373807311f, 0.004087400157004595f, 0.0007066488033160567f, 0.0007127966382540762f, 0.004080025479197502f, 0.004048423375934362f, 0.0012751577887684107f, 0.003832130692899227f, 0.004120819736272097f, 0.0012963759945705533f, 0.0006149084656499326f, 0.003531028050929308f, 0.0046912143006920815f, 0.0007185703725554049f, 0.0005975828389637172f, 0.003927291836589575f, 0.003982954658567905f, 0.0014077411033213139f, 0.003982842899858952f, 0.0007397844456136227f, 0.0010273271473124623f, 0.0008576574036851525f, 0.0007962525705806911f, 0.0009825918823480606f, 0.0006707909633405507f, 0.0006818061810918152f, 0.0033373371697962284f, 0.004384103696793318f, 0.0005994992097839713f, 0.0008044010610319674f, 0.0007460570777766407f, 0.003812445094808936f, 0.0007653001812286675f, 0.0006476135458797216f, 0.004662537947297096f, 0.0041160606779158115f, 0.0005427891737781465f, 0.004116468597203493f, 0.0008166199550032616f, 0.0038198581896722317f, 0.0007796335266903043f, 0.0011416201014071703f, 0.0038416048046201468f, 0.0007419491303153336f, 0.0010140163358300924f, 0.0006883459282107651f, 0.006422007922083139f, 0.0047324956394732f, 0.0008437568321824074f, 0.0027523476164788008f, 0.004932536743581295f, 0.00398574722930789f, 0.0012015912216156721f, 0.0009020366705954075f, 0.003345577511936426f, 0.0037933713756501675f, 0.004809386562556028f, 0.004512759391218424f, 0.0038616613019257784f, 0.0007619308307766914f, 0.0008970460039563477f, 0.005253104958683252f, 0.004275680519640446f, 0.0026782145723700523f, 0.001025663805194199f, 0.004641855601221323f, 0.005564095452427864f, 0.004300100263208151f, 0.003656592685729265f, 0.0007717957487329841f, 0.003264734288677573f, 0.0008136539836414158f, 0.004595710430294275f, 0.0006541181937791407f, 0.0008032022742554545f, 0.0011666907230392098f, 0.0008257965091615915f, 0.0006973298150114715f, 0.0008026323630474508f, 0.004100032616406679f, 0.004637968726456165f, 0.0008920000400394201f, 0.004797149449586868f, 0.0008223753538914025f, 0.0006907969946041703f, 0.0038085137493908405f, 0.0011613679816946387f, 0.0006531591061502695f, 0.00389897171407938f, 0.004094951320439577f, 0.004626757465302944f, 0.000665603147353977f, 0.0019310533534735441f, 0.0008205946069210768f, 0.0007465651724487543f, 0.0006306639988906682f, 0.0039474209770560265f, 0.0034117777831852436f, 0.0008633968536742032f, 0.004669698886573315f, 0.0010125718545168638f, 0.004921330604702234f, 0.000875404046382755f, 0.00393778458237648f, 0.003550170920789242f, 0.000747664540540427f, 0.003480779705569148f, 0.0007714451639913023f, 0.003395992796868086f, 0.003539386671036482f, 0.0013790499651804566f, 0.000692111614625901f, 0.0009045127080753446f, 0.0036477900575846434f, 0.0008041217224672437f, 0.0007130287704057992f, 0.0011003392282873392f, 0.0006503112381324172f, 0.0018030592473223805f, 0.0005725609371438622f, 0.0005953189684078097f, 0.0041913827881217f, 0.0010447351960465312f, 0.001045352779328823f, 0.00379953789524734f, 0.00553092872723937f, 0.003509154077619314f, 0.0007152340258471668f, 0.000769378908444196f, 0.0006781587726436555f, 0.0008418346405960619f, 0.0009231365984305739f, 0.0007084505050443113f, 0.00391033198684454f, 0.0006889279466122389f, 0.0035394064616411924f, 0.005066878627985716f, 0.004010973498225212f, 0.0005979600828140974f, 0.004468644503504038f, 0.0007286972249858081f, 0.003228314220905304f, 0.0028378507122397423f, 0.000799465284217149f, 0.0012546925572678447f, 0.005001899786293507f, 0.000783872848842293f, 0.0011314809089526534f, 0.004149646032601595f, 0.0037826059851795435f, 0.00447045685723424f, 0.0007856679731048644f, 0.0038935879711061716f, 0.000918530800845474f, 0.003815904725342989f, 0.004618702922016382f, 0.0023894740734249353f, 0.001145264133810997f, 0.001378578250296414f, 0.000758717127609998f, 0.0037220115773379803f, 0.004352949559688568f, 0.0008093416108749807f, 0.0012397186364978552f, 0.004443036857992411f, 0.0006933579570613801f, 0.0034018894657492638f, 0.0007368701626546681f, 0.004093389492481947f, 0.0007998525397852063f, 0.0006955512217245996f, 0.003337530419230461f, 0.0035315202549099922f, 0.0008431404130533338f, 0.003752100979909301f, 0.0007812197436578572f, 0.0033899054396897554f, 0.00078357890015468f, 0.0035790796391665936f, 0.001062606694176793f, 0.0006684024119749665f, 0.0036192317493259907f, 0.0035239635035395622f, 0.0037648421712219715f, 0.0037069579120725393f, 0.0009983782656490803f, 0.001983346650376916f, 0.0014885978307574987f, 0.0009967619553208351f, 0.0040481979958713055f, 0.0008565395255573094f, 0.004968987312167883f, 0.0037256143987178802f, 0.0006421717698685825f, 0.000885788060259074f, 0.004886634182184935f, 0.0007591675966978073f, 0.0007414839928969741f, 0.0007129753357730806f, 0.0008149652276188135f, 0.0007592554902657866f, 0.0009061350720003247f, 0.004982238635420799f, 0.0012494514230638742f, 0.0008522326243110001f, 0.0006969945388846099f, 0.0035920371301472187f, 0.0010351167293265462f, 0.0010219586547464132f, 0.0007419725880026817f, 0.0033864404540508986f, 0.0011463552946224809f, 0.00395727064460516f, 0.0009393227519467473f, 0.0039213914424180984f, 0.003664239775389433f, 0.0036242245696485043f, 0.005150772165507078f, 0.0008119566482491791f, 0.0005602393648587167f, 0.0008857004577293992f, 0.0010420228354632854f, 0.0005865891580469906f, 0.0007681357092224061f, 0.004248687997460365f, 0.0011014710180461407f, 0.004464853089302778f, 0.006063228007405996f, 0.0018953284015879035f, 0.0031085126101970673f, 0.0035366688389331102f, 0.00496135838329792f, 0.004076819866895676f, 0.0034821503795683384f, 0.004190674517303705f, 0.0008135343086905777f, 0.003372174920514226f, 0.0006711803725920618f, 0.000799782807007432f, 0.001222020830027759f, 0.0038713125977665186f, 0.0033496504183858633f, 0.0009647217812016606f, 0.0006476855487562716f, 0.004837698303163052f, 0.003700830042362213f, 0.0034288475289940834f, 0.0007842414197511971f, 0.002539384877309203f, 0.0009260990773327649f, 0.00084150634938851f, 0.004707767628133297f, 0.0010360036976635456f, 0.0005714998114854097f, 0.0040060048922896385f, 0.003795427270233631f, 0.0007177963852882385f, 0.003971074242144823f, 0.0010237410897389054f, 0.0007441295310854912f, 0.002936807693913579f, 0.0008661727770231664f, 0.0006250949809327722f, 0.0007030050037428737f, 0.0007059965282678604f, 0.003894403111189604f, 0.004230272490531206f, 0.0007429859833791852f, 0.0010453397408127785f, 0.0009222985827364028f, 0.0038790565449744463f, 0.004963969811797142f, 0.0007584691629745066f, 0.0007284925668500364f, 0.003914895001798868f, 0.003957174252718687f, 0.003240027232095599f, 0.0006481065065599978f, 0.004008457995951176f, 0.00420305086299777f, 0.0046090055257081985f, 0.000800402311142534f, 0.004921688698232174f, 0.005094665102660656f, 0.0006778205861337483f, 0.0008659932063892484f, 0.0007986465352587402f, 0.0037193133030086756f, 0.003711216850206256f, 0.0037700349930673838f, 0.0006471259985119104f, 0.00370252993889153f, 0.004270086996257305f, 0.0010125227272510529f, 0.000704581500031054f, 0.004070955328643322f, 0.0007191371987573802f, 0.0008234329288825393f, 0.003382132388651371f, 0.0007866478990763426f, 0.004211579915136099f, 0.0036398801021277905f, 0.005099581088870764f, 0.003810733091086149f, 0.0007007422973401845f, 0.004862598143517971f, 0.0007033852161839604f, 0.004027752671390772f, 0.0006114972056820989f, 0.0006107240333221853f, 0.0006677588680759072f, 0.003989997319877148f, 0.0009364565485157073f, 0.0008006771095097065f, 0.0007816523429937661f, 0.0006939168088138103f, 0.001031767576932907f, 0.0007774176774546504f, 0.0006464202306233346f, 0.0006675965269096196f, 0.0012227031402289867f, 0.004043993540108204f, 0.003431683639064431f, 0.002305458765476942f, 0.004411870613694191f, 0.005218260921537876f, 0.003470486495643854f, 0.0008339123451150954f, 0.0006938000442460179f, 0.004400867503136396f, 0.002705387305468321f, 0.003951848018914461f, 0.0039224945940077305f, 0.0006981809274293482f, 0.0007842012564651668f, 0.003109452547505498f, 0.003778474172577262f, 0.0005908845923841f, 0.006010174751281738f, 0.0033819000236690044f, 0.0034094741567969322f, 0.0008171137887984514f, 0.0049558356404304504f, 0.0008408820140175521f, 0.0006224921089597046f, 0.0006353763164952397f, 0.0007323437603190541f, 0.0008079057442955673f, 0.0006737452931702137f, 0.005114661995321512f, 0.00115471042227f, 0.000761862494982779f, 0.004588041454553604f, 0.001095010433346033f, 0.003416123567149043f, 0.0007155785569921136f, 0.003988965414464474f, 0.0007717512198723853f, 0.0056129381991922855f, 0.0007746333722025156f, 0.0011182399466633797f, 0.000732391607016325f, 0.0007134810439310968f, 0.0007574648479931056f, 0.000910547620151192f, 0.0047234962694346905f, 0.0006074774428270757f, 0.0006869416101835668f, 0.0008445332641713321f, 0.0007714586099609733f, 0.0047038099728524685f, 0.0008180063450708985f, 0.0007822489133104682f, 0.0007208474562503397f, 0.00382116436958313f, 0.0006606621318496764f, 0.0008840130758471787f, 0.0012136100558564067f, 0.004998219199478626f, 0.004286728333681822f, 0.000843330635689199f, 0.0009017755510285497f, 0.0007464932277798653f, 0.0047057438641786575f, 0.0006557643646374345f, 0.004082052502781153f, 0.00462627736851573f, 0.001018895534798503f, 0.000767301709856838f, 0.0006793926586396992f, 0.0006385359447449446f, 0.003003499237820506f, 0.0006647648988291621f, 0.004553796257823706f, 0.00466638058423996f, 0.0008208203362300992f, 0.0006489084917120636f, 0.00432825880125165f, 0.0036772470921278f, 0.0034593925811350346f, 0.0007731460500508547f, 0.0006734737544320524f, 0.003816774347797036f, 0.003149321535602212f, 0.0012201669160276651f, 0.004788214806467295f, 0.004775128792971373f, 0.004110938403755426f, 0.000903468462638557f, 0.004692796152085066f, 0.004258798900991678f, 0.0008163446327671409f, 0.004142085090279579f, 0.0007314744871109724f, 0.0027274074964225292f, 0.0007930389256216586f, 0.0006530103855766356f, 0.0007563743274658918f, 0.0008437287760898471f, 0.004604296758770943f, 0.0008658039150759578f, 0.0050296904519200325f, 0.0005374031024985015f, 0.0009159973706118762f, 0.0007057460024952888f, 0.003997533116489649f, 0.0008555401000194252f, 0.003198545193299651f, 0.0043229456059634686f, 0.004665096756070852f, 0.003490817965939641f, 0.0038279618602246046f, 0.0033246646635234356f, 0.0006131791160441935f, 0.0009686584235168993f, 0.005684741772711277f, 0.0007798849837854505f, 0.0049164374358952045f, 0.0037281799595803022f, 0.0006853867089375854f, 0.0007574880728498101f, 0.000808705750387162f, 0.004261515103280544f, 0.0012247245758771896f, 0.003839787095785141f, 0.0006996526499278843f, 0.004036590922623873f, 0.002094933297485113f, 0.0008017307263799012f, 0.0038900228682905436f, 0.0036263898946344852f, 0.0037448254879564047f, 0.004236913286149502f, 0.0049258084036409855f, 0.004360525403171778f, 0.0007876183371990919f, 0.0012376679806038737f, 0.0029024083632975817f, 0.003469733288511634f, 0.003976069390773773f, 0.0010046535171568394f, 0.0039212629199028015f, 0.0035489548463374376f, 0.0005660195020027459f, 0.0009892105590552092f, 0.0012167118256911635f, 0.0045076352544128895f, 0.0037252989131957293f, 0.0014657913707196712f, 0.0036168305668979883f, 0.0006886562914587557f, 0.004122368060052395f, 0.0007211784832179546f, 0.003993396647274494f, 0.0036238867323845625f, 0.0007789664668962359f, 0.004417657386511564f, 0.0008837885106913745f, 0.005838725715875626f, 0.0037032149266451597f, 0.0007960949442349374f, 0.004204410593956709f, 0.0009177226456813514f, 0.0008157218690030277f, 0.0017705047503113747f, 0.005192998796701431f, 0.0030774385668337345f, 0.0007466973038390279f, 0.0007669252809137106f, 0.000998275470919907f, 0.004295354709029198f, 0.003743023844435811f, 0.0007366997306235135f, 0.004809706937521696f, 0.0007467208779416978f, 0.004338384605944157f, 0.0008502596756443381f, 0.0028929486870765686f, 0.0012453374220058322f, 0.0049512190744280815f, 0.003818406257778406f, 0.0008055508369579911f, 0.0007300068973563612f, 0.003681984730064869f, 0.000676747236866504f, 0.0006521194009110332f, 0.003511525457724929f, 0.0007157014333643019f, 0.0008600873406976461f, 0.0008137064287438989f, 0.0030112050008028746f, 0.0010919392807409167f, 0.0007947939448058605f, 0.0007809458184055984f, 0.0034517673775553703f, 0.004240452311933041f, 0.003188028000295162f, 0.004105282481759787f, 0.0006340991239994764f, 0.0044547924771904945f, 0.0044336458668112755f, 0.0007579688681289554f, 0.0017865325789898634f, 0.0009010849171318114f, 0.000879200582858175f, 0.004662882536649704f, 0.004625371657311916f, 0.0008782905642874539f, 0.0012215684400871396f, 0.0044641392305493355f, 0.004617286846041679f, 0.0008933040080592036f, 0.0035392295103520155f, 0.003942451905459166f, 0.003894628956913948f, 0.0006553927669301629f, 0.0009732613689266145f, 0.0006020370055921376f, 0.0007858473691157997f, 0.0007626812439411879f, 0.0032295086421072483f, 0.0032337168231606483f, 0.003623353084549308f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #175 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_99_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 39,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00785178691148758f, 0.008119015023112297f, 0.009939615614712238f, 0.007984573021531105f, 0.005939094815403223f, 0.007374392356723547f, 0.007947995327413082f, 0.007334049791097641f, 0.006999673787504435f, 0.007344215176999569f, 0.008199750445783138f, 0.009810338728129864f, 0.00853760726749897f, 0.006242674309760332f, 0.008129147812724113f, 0.007440764922648668f, 0.007910949178040028f, 0.007921428419649601f, 0.005646720062941313f, 0.00669120391830802f, 0.007411077618598938f, 0.006182079203426838f, 0.009487525559961796f, 0.009409870021045208f, 0.00661493930965662f, 0.006949662696570158f, 0.007920414209365845f, 0.005679159890860319f, 0.007784782908856869f, 0.008105665445327759f, 0.006869889795780182f, 0.006247095298022032f, 0.007279220502823591f, 0.0069362698122859f, 0.006905085407197475f, 0.007541508413851261f, 0.009255839511752129f, 0.00644740229472518f, 0.006123030092567205f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #176 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #177 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #178 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #179 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #180 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #181 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #182 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #183 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #184 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #185 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #186 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #187 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #188 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #189 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #190 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #191 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #192 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #193 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #194 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #195 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_58_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #196 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #197 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_68_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/**  Tensor declarations section  *********************************************/
/* Tensor #0 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_scratch0, AI_STATIC,
  0, 0x0,
  AI_SHAPE_INIT(4, 1, 936, 1, 1), AI_STRIDE_INIT(4, 1, 1, 936, 936),
  1, &conv2d_70_scratch0_array, NULL)

/* Tensor #1 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_71_scratch0, AI_STATIC,
  1, 0x0,
  AI_SHAPE_INIT(4, 1, 1584, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1584, 1584),
  1, &conv2d_71_scratch0_array, NULL)

/* Tensor #2 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_75_scratch0, AI_STATIC,
  2, 0x0,
  AI_SHAPE_INIT(4, 1, 1056, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1056, 1056),
  1, &conv2d_75_scratch0_array, NULL)

/* Tensor #3 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_scratch0, AI_STATIC,
  3, 0x0,
  AI_SHAPE_INIT(4, 1, 3072, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3072, 3072),
  1, &conv2d_76_scratch0_array, NULL)

/* Tensor #4 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_scratch1, AI_STATIC,
  4, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_76_scratch1_array, &conv2d_76_scratch1_array_intq)

/* Tensor #5 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_77_scratch0, AI_STATIC,
  5, 0x0,
  AI_SHAPE_INIT(4, 1, 24481, 1, 1), AI_STRIDE_INIT(4, 1, 1, 24481, 24481),
  1, &conv2d_77_scratch0_array, NULL)

/* Tensor #6 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_77_scratch1, AI_STATIC,
  6, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_77_scratch1_array, &conv2d_77_scratch1_array_intq)

/* Tensor #7 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_scratch0, AI_STATIC,
  7, 0x0,
  AI_SHAPE_INIT(4, 1, 1872, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1872, 1872),
  1, &conv2d_79_scratch0_array, NULL)

/* Tensor #8 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_scratch1, AI_STATIC,
  8, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &conv2d_79_scratch1_array, &conv2d_79_scratch1_array_intq)

/* Tensor #9 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_80_scratch0, AI_STATIC,
  9, 0x0,
  AI_SHAPE_INIT(4, 1, 3168, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3168, 3168),
  1, &conv2d_80_scratch0_array, NULL)

/* Tensor #10 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_84_scratch0, AI_STATIC,
  10, 0x0,
  AI_SHAPE_INIT(4, 1, 1632, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1632, 1632),
  1, &conv2d_84_scratch0_array, NULL)

/* Tensor #11 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_86_scratch0, AI_STATIC,
  11, 0x0,
  AI_SHAPE_INIT(4, 1, 3072, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3072, 3072),
  1, &conv2d_86_scratch0_array, NULL)

/* Tensor #12 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_86_scratch1, AI_STATIC,
  12, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_86_scratch1_array, &conv2d_86_scratch1_array_intq)

/* Tensor #13 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_87_scratch0, AI_STATIC,
  13, 0x0,
  AI_SHAPE_INIT(4, 1, 24481, 1, 1), AI_STRIDE_INIT(4, 1, 1, 24481, 24481),
  1, &conv2d_87_scratch0_array, NULL)

/* Tensor #14 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_87_scratch1, AI_STATIC,
  14, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_87_scratch1_array, &conv2d_87_scratch1_array_intq)

/* Tensor #15 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_89_scratch0, AI_STATIC,
  15, 0x0,
  AI_SHAPE_INIT(4, 1, 1872, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1872, 1872),
  1, &conv2d_89_scratch0_array, NULL)

/* Tensor #16 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_89_scratch1, AI_STATIC,
  16, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &conv2d_89_scratch1_array, &conv2d_89_scratch1_array_intq)

/* Tensor #17 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_90_scratch0, AI_STATIC,
  17, 0x0,
  AI_SHAPE_INIT(4, 1, 3168, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3168, 3168),
  1, &conv2d_90_scratch0_array, NULL)

/* Tensor #18 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_94_scratch0, AI_STATIC,
  18, 0x0,
  AI_SHAPE_INIT(4, 1, 1632, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1632, 1632),
  1, &conv2d_94_scratch0_array, NULL)

/* Tensor #19 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_96_scratch0, AI_STATIC,
  19, 0x0,
  AI_SHAPE_INIT(4, 1, 3072, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3072, 3072),
  1, &conv2d_96_scratch0_array, NULL)

/* Tensor #20 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_96_scratch1, AI_STATIC,
  20, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_96_scratch1_array, &conv2d_96_scratch1_array_intq)

/* Tensor #21 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_scratch0, AI_STATIC,
  21, 0x0,
  AI_SHAPE_INIT(4, 1, 13952, 1, 1), AI_STRIDE_INIT(4, 1, 1, 13952, 13952),
  1, &conv2d_98_scratch0_array, NULL)

/* Tensor #22 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_scratch1, AI_STATIC,
  22, 0x1,
  AI_SHAPE_INIT(4, 1, 1280, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1280, 1280),
  1, &conv2d_98_scratch1_array, &conv2d_98_scratch1_array_intq)

/* Tensor #23 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_99_scratch0, AI_STATIC,
  23, 0x0,
  AI_SHAPE_INIT(4, 1, 5510, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5510, 5510),
  1, &conv2d_99_scratch0_array, NULL)

/* Tensor #24 */
AI_TENSOR_OBJ_DECLARE(
  nl_101_scratch0, AI_STATIC,
  24, 0x0,
  AI_SHAPE_INIT(4, 1, 39, 1, 1), AI_STRIDE_INIT(4, 4, 4, 156, 156),
  1, &nl_101_scratch0_array, NULL)

/* Tensor #25 */
AI_TENSOR_OBJ_DECLARE(
  serving_default_input_10_output, AI_STATIC,
  25, 0x1,
  AI_SHAPE_INIT(4, 1, 3, 224, 224), AI_STRIDE_INIT(4, 1, 1, 3, 672),
  1, &serving_default_input_10_output_array, &serving_default_input_10_output_array_intq)

/* Tensor #26 */
AI_TENSOR_OBJ_DECLARE(
  conversion_0_output, AI_STATIC,
  26, 0x1,
  AI_SHAPE_INIT(4, 1, 3, 224, 224), AI_STRIDE_INIT(4, 1, 1, 3, 672),
  1, &conversion_0_output_array, &conversion_0_output_array_intq)

/* Tensor #27 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_output, AI_STATIC,
  27, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_1_output_array, &conv2d_1_output_array_intq)

/* Tensor #28 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_output, AI_STATIC,
  28, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_2_output_array, &conv2d_2_output_array_intq)

/* Tensor #29 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_pad_before_output, AI_STATIC,
  29, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 114, 114), AI_STRIDE_INIT(4, 1, 1, 8, 912),
  1, &conv2d_3_pad_before_output_array, &conv2d_3_pad_before_output_array_intq)

/* Tensor #30 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_output, AI_STATIC,
  30, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 56, 56), AI_STRIDE_INIT(4, 1, 1, 8, 448),
  1, &conv2d_3_output_array, &conv2d_3_output_array_intq)

/* Tensor #31 */
AI_TENSOR_OBJ_DECLARE(
  pool_4_output, AI_STATIC,
  31, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 1, 1, 8, 8),
  1, &pool_4_output_array, &pool_4_output_array_intq)

/* Tensor #32 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_output, AI_STATIC,
  32, 0x1,
  AI_SHAPE_INIT(4, 1, 2, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2, 2),
  1, &conv2d_5_output_array, &conv2d_5_output_array_intq)

/* Tensor #33 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_output, AI_STATIC,
  33, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 1, 1, 8, 8),
  1, &conv2d_6_output_array, &conv2d_6_output_array_intq)

/* Tensor #34 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_7_output, AI_STATIC,
  34, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 1, 1, 8, 8),
  1, &eltwise_7_output_array, &eltwise_7_output_array_intq)

/* Tensor #35 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_9_output, AI_STATIC,
  35, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 56, 56), AI_STRIDE_INIT(4, 1, 1, 8, 448),
  1, &eltwise_9_output_array, &eltwise_9_output_array_intq)

/* Tensor #36 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_output, AI_STATIC,
  36, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 56, 56), AI_STRIDE_INIT(4, 1, 1, 8, 448),
  1, &conv2d_10_output_array, &conv2d_10_output_array_intq)

/* Tensor #37 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_output, AI_STATIC,
  37, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 56, 56), AI_STRIDE_INIT(4, 1, 1, 40, 2240),
  1, &conv2d_11_output_array, &conv2d_11_output_array_intq)

/* Tensor #38 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_pad_before_output, AI_STATIC,
  38, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 58, 58), AI_STRIDE_INIT(4, 1, 1, 40, 2320),
  1, &conv2d_12_pad_before_output_array, &conv2d_12_pad_before_output_array_intq)

/* Tensor #39 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_output, AI_STATIC,
  39, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 28, 28), AI_STRIDE_INIT(4, 1, 1, 40, 1120),
  1, &conv2d_12_output_array, &conv2d_12_output_array_intq)

/* Tensor #40 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_output, AI_STATIC,
  40, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &conv2d_13_output_array, &conv2d_13_output_array_intq)

/* Tensor #41 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_output, AI_STATIC,
  41, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_14_output_array, &conv2d_14_output_array_intq)

/* Tensor #42 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_pad_before_output, AI_STATIC,
  42, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 30, 30), AI_STRIDE_INIT(4, 1, 1, 48, 1440),
  1, &conv2d_15_pad_before_output_array, &conv2d_15_pad_before_output_array_intq)

/* Tensor #43 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_output, AI_STATIC,
  43, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_15_output_array, &conv2d_15_output_array_intq)

/* Tensor #44 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_output, AI_STATIC,
  44, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &conv2d_16_output_array, &conv2d_16_output_array_intq)

/* Tensor #45 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_17_output, AI_STATIC,
  45, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &eltwise_17_output_array, &eltwise_17_output_array_intq)

/* Tensor #46 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_output, AI_STATIC,
  46, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_18_output_array, &conv2d_18_output_array_intq)

/* Tensor #47 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_output, AI_STATIC,
  47, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 14, 14), AI_STRIDE_INIT(4, 1, 1, 48, 672),
  1, &conv2d_19_output_array, &conv2d_19_output_array_intq)

/* Tensor #48 */
AI_TENSOR_OBJ_DECLARE(
  pool_20_output, AI_STATIC,
  48, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &pool_20_output_array, &pool_20_output_array_intq)

/* Tensor #49 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_output, AI_STATIC,
  49, 0x1,
  AI_SHAPE_INIT(4, 1, 12, 1, 1), AI_STRIDE_INIT(4, 1, 1, 12, 12),
  1, &conv2d_21_output_array, &conv2d_21_output_array_intq)

/* Tensor #50 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_output, AI_STATIC,
  50, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &conv2d_22_output_array, &conv2d_22_output_array_intq)

/* Tensor #51 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_23_output, AI_STATIC,
  51, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &eltwise_23_output_array, &eltwise_23_output_array_intq)

/* Tensor #52 */
AI_TENSOR_OBJ_DECLARE(
  nl_24_output, AI_STATIC,
  52, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &nl_24_output_array, &nl_24_output_array_intq)

/* Tensor #53 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_25_output, AI_STATIC,
  53, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 14, 14), AI_STRIDE_INIT(4, 1, 1, 48, 672),
  1, &eltwise_25_output_array, &eltwise_25_output_array_intq)

/* Tensor #54 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_output, AI_STATIC,
  54, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_26_output_array, &conv2d_26_output_array_intq)

/* Tensor #55 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_output, AI_STATIC,
  55, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_27_output_array, &conv2d_27_output_array_intq)

/* Tensor #56 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_output, AI_STATIC,
  56, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_28_output_array, &conv2d_28_output_array_intq)

/* Tensor #57 */
AI_TENSOR_OBJ_DECLARE(
  pool_29_output, AI_STATIC,
  57, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &pool_29_output_array, &pool_29_output_array_intq)

/* Tensor #58 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_output, AI_STATIC,
  58, 0x1,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 1, 1, 30, 30),
  1, &conv2d_30_output_array, &conv2d_30_output_array_intq)

/* Tensor #59 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_output, AI_STATIC,
  59, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &conv2d_31_output_array, &conv2d_31_output_array_intq)

/* Tensor #60 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_32_output, AI_STATIC,
  60, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &eltwise_32_output_array, &eltwise_32_output_array_intq)

/* Tensor #61 */
AI_TENSOR_OBJ_DECLARE(
  nl_33_output, AI_STATIC,
  61, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &nl_33_output_array, &nl_33_output_array_intq)

/* Tensor #62 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_34_output, AI_STATIC,
  62, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &eltwise_34_output_array, &eltwise_34_output_array_intq)

/* Tensor #63 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_output, AI_STATIC,
  63, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_35_output_array, &conv2d_35_output_array_intq)

/* Tensor #64 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_36_output, AI_STATIC,
  64, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &eltwise_36_output_array, &eltwise_36_output_array_intq)

/* Tensor #65 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_output, AI_STATIC,
  65, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_37_output_array, &conv2d_37_output_array_intq)

/* Tensor #66 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_output, AI_STATIC,
  66, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_38_output_array, &conv2d_38_output_array_intq)

/* Tensor #67 */
AI_TENSOR_OBJ_DECLARE(
  pool_39_output, AI_STATIC,
  67, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &pool_39_output_array, &pool_39_output_array_intq)

/* Tensor #68 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_output, AI_STATIC,
  68, 0x1,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 1, 1, 30, 30),
  1, &conv2d_40_output_array, &conv2d_40_output_array_intq)

/* Tensor #69 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_output, AI_STATIC,
  69, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &conv2d_41_output_array, &conv2d_41_output_array_intq)

/* Tensor #70 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_42_output, AI_STATIC,
  70, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &eltwise_42_output_array, &eltwise_42_output_array_intq)

/* Tensor #71 */
AI_TENSOR_OBJ_DECLARE(
  nl_43_output, AI_STATIC,
  71, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &nl_43_output_array, &nl_43_output_array_intq)

/* Tensor #72 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_44_output, AI_STATIC,
  72, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &eltwise_44_output_array, &eltwise_44_output_array_intq)

/* Tensor #73 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_output, AI_STATIC,
  73, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_45_output_array, &conv2d_45_output_array_intq)

/* Tensor #74 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_46_output, AI_STATIC,
  74, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &eltwise_46_output_array, &eltwise_46_output_array_intq)

/* Tensor #75 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_output, AI_STATIC,
  75, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_47_output_array, &conv2d_47_output_array_intq)

/* Tensor #76 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_output, AI_STATIC,
  76, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_48_output_array, &conv2d_48_output_array_intq)

/* Tensor #77 */
AI_TENSOR_OBJ_DECLARE(
  pool_49_output, AI_STATIC,
  77, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &pool_49_output_array, &pool_49_output_array_intq)

/* Tensor #78 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_output, AI_STATIC,
  78, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 1, 1, 16, 16),
  1, &conv2d_50_output_array, &conv2d_50_output_array_intq)

/* Tensor #79 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_output, AI_STATIC,
  79, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &conv2d_51_output_array, &conv2d_51_output_array_intq)

/* Tensor #80 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_52_output, AI_STATIC,
  80, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &eltwise_52_output_array, &eltwise_52_output_array_intq)

/* Tensor #81 */
AI_TENSOR_OBJ_DECLARE(
  nl_53_output, AI_STATIC,
  81, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &nl_53_output_array, &nl_53_output_array_intq)

/* Tensor #82 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_54_output, AI_STATIC,
  82, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &eltwise_54_output_array, &eltwise_54_output_array_intq)

/* Tensor #83 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_output, AI_STATIC,
  83, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_55_output_array, &conv2d_55_output_array_intq)

/* Tensor #84 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_56_output, AI_STATIC,
  84, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &eltwise_56_output_array, &eltwise_56_output_array_intq)

/* Tensor #85 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_output, AI_STATIC,
  85, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 14, 14), AI_STRIDE_INIT(4, 1, 1, 72, 1008),
  1, &conv2d_57_output_array, &conv2d_57_output_array_intq)

/* Tensor #86 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_output, AI_STATIC,
  86, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 14, 14), AI_STRIDE_INIT(4, 1, 1, 72, 1008),
  1, &conv2d_58_output_array, &conv2d_58_output_array_intq)

/* Tensor #87 */
AI_TENSOR_OBJ_DECLARE(
  pool_59_output, AI_STATIC,
  87, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &pool_59_output_array, &pool_59_output_array_intq)

/* Tensor #88 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_output, AI_STATIC,
  88, 0x1,
  AI_SHAPE_INIT(4, 1, 18, 1, 1), AI_STRIDE_INIT(4, 1, 1, 18, 18),
  1, &conv2d_60_output_array, &conv2d_60_output_array_intq)

/* Tensor #89 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_output, AI_STATIC,
  89, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &conv2d_61_output_array, &conv2d_61_output_array_intq)

/* Tensor #90 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_62_output, AI_STATIC,
  90, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &eltwise_62_output_array, &eltwise_62_output_array_intq)

/* Tensor #91 */
AI_TENSOR_OBJ_DECLARE(
  nl_63_output, AI_STATIC,
  91, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &nl_63_output_array, &nl_63_output_array_intq)

/* Tensor #92 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_64_output, AI_STATIC,
  92, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 14, 14), AI_STRIDE_INIT(4, 1, 1, 72, 1008),
  1, &eltwise_64_output_array, &eltwise_64_output_array_intq)

/* Tensor #93 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_output, AI_STATIC,
  93, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_65_output_array, &conv2d_65_output_array_intq)

/* Tensor #94 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_66_output, AI_STATIC,
  94, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &eltwise_66_output_array, &eltwise_66_output_array_intq)

/* Tensor #95 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_output, AI_STATIC,
  95, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_67_output_array, &conv2d_67_output_array_intq)

/* Tensor #96 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_output, AI_STATIC,
  96, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 7, 7), AI_STRIDE_INIT(4, 1, 1, 144, 1008),
  1, &conv2d_68_output_array, &conv2d_68_output_array_intq)

/* Tensor #97 */
AI_TENSOR_OBJ_DECLARE(
  pool_69_output, AI_STATIC,
  97, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &pool_69_output_array, &pool_69_output_array_intq)

/* Tensor #98 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_output, AI_STATIC,
  98, 0x1,
  AI_SHAPE_INIT(4, 1, 36, 1, 1), AI_STRIDE_INIT(4, 1, 1, 36, 36),
  1, &conv2d_70_output_array, &conv2d_70_output_array_intq)

/* Tensor #99 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_71_output, AI_STATIC,
  99, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &conv2d_71_output_array, &conv2d_71_output_array_intq)

/* Tensor #100 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_72_output, AI_STATIC,
  100, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &eltwise_72_output_array, &eltwise_72_output_array_intq)

/* Tensor #101 */
AI_TENSOR_OBJ_DECLARE(
  nl_73_output, AI_STATIC,
  101, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &nl_73_output_array, &nl_73_output_array_intq)

/* Tensor #102 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_74_output, AI_STATIC,
  102, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 7, 7), AI_STRIDE_INIT(4, 1, 1, 144, 1008),
  1, &eltwise_74_output_array, &eltwise_74_output_array_intq)

/* Tensor #103 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_75_output, AI_STATIC,
  103, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &conv2d_75_output_array, &conv2d_75_output_array_intq)

/* Tensor #104 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_output, AI_STATIC,
  104, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_76_output_array, &conv2d_76_output_array_intq)

/* Tensor #105 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_77_output, AI_STATIC,
  105, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_77_output_array, &conv2d_77_output_array_intq)

/* Tensor #106 */
AI_TENSOR_OBJ_DECLARE(
  pool_78_output, AI_STATIC,
  106, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &pool_78_output_array, &pool_78_output_array_intq)

/* Tensor #107 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_output, AI_STATIC,
  107, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &conv2d_79_output_array, &conv2d_79_output_array_intq)

/* Tensor #108 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_80_output, AI_STATIC,
  108, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &conv2d_80_output_array, &conv2d_80_output_array_intq)

/* Tensor #109 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_81_output, AI_STATIC,
  109, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &eltwise_81_output_array, &eltwise_81_output_array_intq)

/* Tensor #110 */
AI_TENSOR_OBJ_DECLARE(
  nl_82_output, AI_STATIC,
  110, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &nl_82_output_array, &nl_82_output_array_intq)

/* Tensor #111 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_83_output, AI_STATIC,
  111, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &eltwise_83_output_array, &eltwise_83_output_array_intq)

/* Tensor #112 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_84_output, AI_STATIC,
  112, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &conv2d_84_output_array, &conv2d_84_output_array_intq)

/* Tensor #113 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_85_output, AI_STATIC,
  113, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &eltwise_85_output_array, &eltwise_85_output_array_intq)

/* Tensor #114 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_86_output, AI_STATIC,
  114, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_86_output_array, &conv2d_86_output_array_intq)

/* Tensor #115 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_87_output, AI_STATIC,
  115, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_87_output_array, &conv2d_87_output_array_intq)

/* Tensor #116 */
AI_TENSOR_OBJ_DECLARE(
  pool_88_output, AI_STATIC,
  116, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &pool_88_output_array, &pool_88_output_array_intq)

/* Tensor #117 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_89_output, AI_STATIC,
  117, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &conv2d_89_output_array, &conv2d_89_output_array_intq)

/* Tensor #118 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_90_output, AI_STATIC,
  118, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &conv2d_90_output_array, &conv2d_90_output_array_intq)

/* Tensor #119 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_91_output, AI_STATIC,
  119, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &eltwise_91_output_array, &eltwise_91_output_array_intq)

/* Tensor #120 */
AI_TENSOR_OBJ_DECLARE(
  nl_92_output, AI_STATIC,
  120, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &nl_92_output_array, &nl_92_output_array_intq)

/* Tensor #121 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_93_output, AI_STATIC,
  121, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &eltwise_93_output_array, &eltwise_93_output_array_intq)

/* Tensor #122 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_94_output, AI_STATIC,
  122, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &conv2d_94_output_array, &conv2d_94_output_array_intq)

/* Tensor #123 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_95_output, AI_STATIC,
  123, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &eltwise_95_output_array, &eltwise_95_output_array_intq)

/* Tensor #124 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_96_output, AI_STATIC,
  124, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_96_output_array, &conv2d_96_output_array_intq)

/* Tensor #125 */
AI_TENSOR_OBJ_DECLARE(
  pool_97_output, AI_STATIC,
  125, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &pool_97_output_array, &pool_97_output_array_intq)

/* Tensor #126 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_output, AI_STATIC,
  126, 0x1,
  AI_SHAPE_INIT(4, 1, 1280, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1280, 1280),
  1, &conv2d_98_output_array, &conv2d_98_output_array_intq)

/* Tensor #127 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_99_output, AI_STATIC,
  127, 0x1,
  AI_SHAPE_INIT(4, 1, 39, 1, 1), AI_STRIDE_INIT(4, 1, 1, 39, 39),
  1, &conv2d_99_output_array, &conv2d_99_output_array_intq)

/* Tensor #128 */
AI_TENSOR_OBJ_DECLARE(
  nl_101_output, AI_STATIC,
  128, 0x1,
  AI_SHAPE_INIT(4, 1, 39, 1, 1), AI_STRIDE_INIT(4, 1, 1, 39, 39),
  1, &nl_101_output_array, &nl_101_output_array_intq)

/* Tensor #129 */
AI_TENSOR_OBJ_DECLARE(
  conversion_102_output, AI_STATIC,
  129, 0x0,
  AI_SHAPE_INIT(4, 1, 39, 1, 1), AI_STRIDE_INIT(4, 4, 4, 156, 156),
  1, &conversion_102_output_array, NULL)

/* Tensor #130 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8, AI_STATIC,
  130, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array_intq)

/* Tensor #131 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7, AI_STATIC,
  131, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array_intq)

/* Tensor #132 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6, AI_STATIC,
  132, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array_intq)

/* Tensor #133 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5, AI_STATIC,
  133, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array_intq)

/* Tensor #134 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4, AI_STATIC,
  134, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array_intq)

/* Tensor #135 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3, AI_STATIC,
  135, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array_intq)

/* Tensor #136 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2, AI_STATIC,
  136, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array_intq)

/* Tensor #137 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1, AI_STATIC,
  137, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array_intq)

/* Tensor #138 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y, AI_STATIC,
  138, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array_intq)

/* Tensor #139 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_weights, AI_STATIC,
  139, 0x1,
  AI_SHAPE_INIT(4, 3, 3, 3, 8), AI_STRIDE_INIT(4, 1, 3, 24, 72),
  1, &conv2d_1_weights_array, &conv2d_1_weights_array_intq)

/* Tensor #140 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_bias, AI_STATIC,
  140, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_1_bias_array, NULL)

/* Tensor #141 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_weights, AI_STATIC,
  141, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 8), AI_STRIDE_INIT(4, 1, 8, 64, 64),
  1, &conv2d_2_weights_array, &conv2d_2_weights_array_intq)

/* Tensor #142 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_bias, AI_STATIC,
  142, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_2_bias_array, NULL)

/* Tensor #143 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_weights, AI_STATIC,
  143, 0x1,
  AI_SHAPE_INIT(4, 8, 3, 3, 1), AI_STRIDE_INIT(4, 1, 8, 8, 24),
  1, &conv2d_3_weights_array, &conv2d_3_weights_array_intq)

/* Tensor #144 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_bias, AI_STATIC,
  144, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_3_bias_array, NULL)

/* Tensor #145 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_weights, AI_STATIC,
  145, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 2), AI_STRIDE_INIT(4, 1, 8, 16, 16),
  1, &conv2d_5_weights_array, &conv2d_5_weights_array_intq)

/* Tensor #146 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_bias, AI_STATIC,
  146, 0x0,
  AI_SHAPE_INIT(4, 1, 2, 1, 1), AI_STRIDE_INIT(4, 4, 4, 8, 8),
  1, &conv2d_5_bias_array, NULL)

/* Tensor #147 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_weights, AI_STATIC,
  147, 0x1,
  AI_SHAPE_INIT(4, 2, 1, 1, 8), AI_STRIDE_INIT(4, 1, 2, 16, 16),
  1, &conv2d_6_weights_array, &conv2d_6_weights_array_intq)

/* Tensor #148 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_bias, AI_STATIC,
  148, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_6_bias_array, NULL)

/* Tensor #149 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_weights, AI_STATIC,
  149, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 8), AI_STRIDE_INIT(4, 1, 8, 64, 64),
  1, &conv2d_10_weights_array, &conv2d_10_weights_array_intq)

/* Tensor #150 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_bias, AI_STATIC,
  150, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_10_bias_array, NULL)

/* Tensor #151 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_weights, AI_STATIC,
  151, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 40), AI_STRIDE_INIT(4, 1, 8, 320, 320),
  1, &conv2d_11_weights_array, &conv2d_11_weights_array_intq)

/* Tensor #152 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_bias, AI_STATIC,
  152, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_11_bias_array, NULL)

/* Tensor #153 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_weights, AI_STATIC,
  153, 0x1,
  AI_SHAPE_INIT(4, 40, 3, 3, 1), AI_STRIDE_INIT(4, 1, 40, 40, 120),
  1, &conv2d_12_weights_array, &conv2d_12_weights_array_intq)

/* Tensor #154 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_bias, AI_STATIC,
  154, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_12_bias_array, NULL)

/* Tensor #155 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_weights, AI_STATIC,
  155, 0x1,
  AI_SHAPE_INIT(4, 40, 1, 1, 16), AI_STRIDE_INIT(4, 1, 40, 640, 640),
  1, &conv2d_13_weights_array, &conv2d_13_weights_array_intq)

/* Tensor #156 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_bias, AI_STATIC,
  156, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_13_bias_array, NULL)

/* Tensor #157 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_weights, AI_STATIC,
  157, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 48), AI_STRIDE_INIT(4, 1, 16, 768, 768),
  1, &conv2d_14_weights_array, &conv2d_14_weights_array_intq)

/* Tensor #158 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_bias, AI_STATIC,
  158, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_14_bias_array, NULL)

/* Tensor #159 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_weights, AI_STATIC,
  159, 0x1,
  AI_SHAPE_INIT(4, 48, 3, 3, 1), AI_STRIDE_INIT(4, 1, 48, 48, 144),
  1, &conv2d_15_weights_array, &conv2d_15_weights_array_intq)

/* Tensor #160 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_bias, AI_STATIC,
  160, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_15_bias_array, NULL)

/* Tensor #161 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_weights, AI_STATIC,
  161, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 16), AI_STRIDE_INIT(4, 1, 48, 768, 768),
  1, &conv2d_16_weights_array, &conv2d_16_weights_array_intq)

/* Tensor #162 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_bias, AI_STATIC,
  162, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_16_bias_array, NULL)

/* Tensor #163 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_weights, AI_STATIC,
  163, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 48), AI_STRIDE_INIT(4, 1, 16, 768, 768),
  1, &conv2d_18_weights_array, &conv2d_18_weights_array_intq)

/* Tensor #164 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_bias, AI_STATIC,
  164, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_18_bias_array, NULL)

/* Tensor #165 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_weights, AI_STATIC,
  165, 0x1,
  AI_SHAPE_INIT(4, 48, 5, 5, 1), AI_STRIDE_INIT(4, 1, 48, 48, 240),
  1, &conv2d_19_weights_array, &conv2d_19_weights_array_intq)

/* Tensor #166 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_bias, AI_STATIC,
  166, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_19_bias_array, NULL)

/* Tensor #167 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_weights, AI_STATIC,
  167, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 12), AI_STRIDE_INIT(4, 1, 48, 576, 576),
  1, &conv2d_21_weights_array, &conv2d_21_weights_array_intq)

/* Tensor #168 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_bias, AI_STATIC,
  168, 0x0,
  AI_SHAPE_INIT(4, 1, 12, 1, 1), AI_STRIDE_INIT(4, 4, 4, 48, 48),
  1, &conv2d_21_bias_array, NULL)

/* Tensor #169 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_weights, AI_STATIC,
  169, 0x1,
  AI_SHAPE_INIT(4, 12, 1, 1, 48), AI_STRIDE_INIT(4, 1, 12, 576, 576),
  1, &conv2d_22_weights_array, &conv2d_22_weights_array_intq)

/* Tensor #170 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_bias, AI_STATIC,
  170, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_22_bias_array, NULL)

/* Tensor #171 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_weights, AI_STATIC,
  171, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 24), AI_STRIDE_INIT(4, 1, 48, 1152, 1152),
  1, &conv2d_26_weights_array, &conv2d_26_weights_array_intq)

/* Tensor #172 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_bias, AI_STATIC,
  172, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_26_bias_array, NULL)

/* Tensor #173 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_weights, AI_STATIC,
  173, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 120), AI_STRIDE_INIT(4, 1, 24, 2880, 2880),
  1, &conv2d_27_weights_array, &conv2d_27_weights_array_intq)

/* Tensor #174 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_bias, AI_STATIC,
  174, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_27_bias_array, NULL)

/* Tensor #175 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_weights, AI_STATIC,
  175, 0x1,
  AI_SHAPE_INIT(4, 120, 5, 5, 1), AI_STRIDE_INIT(4, 1, 120, 120, 600),
  1, &conv2d_28_weights_array, &conv2d_28_weights_array_intq)

/* Tensor #176 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_bias, AI_STATIC,
  176, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_28_bias_array, NULL)

/* Tensor #177 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_weights, AI_STATIC,
  177, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 30), AI_STRIDE_INIT(4, 1, 120, 3600, 3600),
  1, &conv2d_30_weights_array, &conv2d_30_weights_array_intq)

/* Tensor #178 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_bias, AI_STATIC,
  178, 0x0,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 4, 4, 120, 120),
  1, &conv2d_30_bias_array, NULL)

/* Tensor #179 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_weights, AI_STATIC,
  179, 0x1,
  AI_SHAPE_INIT(4, 30, 1, 1, 120), AI_STRIDE_INIT(4, 1, 30, 3600, 3600),
  1, &conv2d_31_weights_array, &conv2d_31_weights_array_intq)

/* Tensor #180 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_bias, AI_STATIC,
  180, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_31_bias_array, NULL)

/* Tensor #181 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_weights, AI_STATIC,
  181, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 24), AI_STRIDE_INIT(4, 1, 120, 2880, 2880),
  1, &conv2d_35_weights_array, &conv2d_35_weights_array_intq)

/* Tensor #182 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_bias, AI_STATIC,
  182, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_35_bias_array, NULL)

/* Tensor #183 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_weights, AI_STATIC,
  183, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 120), AI_STRIDE_INIT(4, 1, 24, 2880, 2880),
  1, &conv2d_37_weights_array, &conv2d_37_weights_array_intq)

/* Tensor #184 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_bias, AI_STATIC,
  184, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_37_bias_array, NULL)

/* Tensor #185 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_weights, AI_STATIC,
  185, 0x1,
  AI_SHAPE_INIT(4, 120, 5, 5, 1), AI_STRIDE_INIT(4, 1, 120, 120, 600),
  1, &conv2d_38_weights_array, &conv2d_38_weights_array_intq)

/* Tensor #186 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_bias, AI_STATIC,
  186, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_38_bias_array, NULL)

/* Tensor #187 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_weights, AI_STATIC,
  187, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 30), AI_STRIDE_INIT(4, 1, 120, 3600, 3600),
  1, &conv2d_40_weights_array, &conv2d_40_weights_array_intq)

/* Tensor #188 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_bias, AI_STATIC,
  188, 0x0,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 4, 4, 120, 120),
  1, &conv2d_40_bias_array, NULL)

/* Tensor #189 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_weights, AI_STATIC,
  189, 0x1,
  AI_SHAPE_INIT(4, 30, 1, 1, 120), AI_STRIDE_INIT(4, 1, 30, 3600, 3600),
  1, &conv2d_41_weights_array, &conv2d_41_weights_array_intq)

/* Tensor #190 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_bias, AI_STATIC,
  190, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_41_bias_array, NULL)

/* Tensor #191 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_weights, AI_STATIC,
  191, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 24), AI_STRIDE_INIT(4, 1, 120, 2880, 2880),
  1, &conv2d_45_weights_array, &conv2d_45_weights_array_intq)

/* Tensor #192 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_bias, AI_STATIC,
  192, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_45_bias_array, NULL)

/* Tensor #193 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_weights, AI_STATIC,
  193, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 64), AI_STRIDE_INIT(4, 1, 24, 1536, 1536),
  1, &conv2d_47_weights_array, &conv2d_47_weights_array_intq)

/* Tensor #194 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_bias, AI_STATIC,
  194, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_47_bias_array, NULL)

/* Tensor #195 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_weights, AI_STATIC,
  195, 0x1,
  AI_SHAPE_INIT(4, 64, 5, 5, 1), AI_STRIDE_INIT(4, 1, 64, 64, 320),
  1, &conv2d_48_weights_array, &conv2d_48_weights_array_intq)

/* Tensor #196 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_bias, AI_STATIC,
  196, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_48_bias_array, NULL)

/* Tensor #197 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_weights, AI_STATIC,
  197, 0x1,
  AI_SHAPE_INIT(4, 64, 1, 1, 16), AI_STRIDE_INIT(4, 1, 64, 1024, 1024),
  1, &conv2d_50_weights_array, &conv2d_50_weights_array_intq)

/* Tensor #198 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_bias, AI_STATIC,
  198, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_50_bias_array, NULL)

/* Tensor #199 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_weights, AI_STATIC,
  199, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 64), AI_STRIDE_INIT(4, 1, 16, 1024, 1024),
  1, &conv2d_51_weights_array, &conv2d_51_weights_array_intq)

/* Tensor #200 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_bias, AI_STATIC,
  200, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_51_bias_array, NULL)

/* Tensor #201 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_weights, AI_STATIC,
  201, 0x1,
  AI_SHAPE_INIT(4, 64, 1, 1, 24), AI_STRIDE_INIT(4, 1, 64, 1536, 1536),
  1, &conv2d_55_weights_array, &conv2d_55_weights_array_intq)

/* Tensor #202 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_bias, AI_STATIC,
  202, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_55_bias_array, NULL)

/* Tensor #203 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_weights, AI_STATIC,
  203, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 72), AI_STRIDE_INIT(4, 1, 24, 1728, 1728),
  1, &conv2d_57_weights_array, &conv2d_57_weights_array_intq)

/* Tensor #204 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_bias, AI_STATIC,
  204, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_57_bias_array, NULL)

/* Tensor #205 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_weights, AI_STATIC,
  205, 0x1,
  AI_SHAPE_INIT(4, 72, 5, 5, 1), AI_STRIDE_INIT(4, 1, 72, 72, 360),
  1, &conv2d_58_weights_array, &conv2d_58_weights_array_intq)

/* Tensor #206 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_bias, AI_STATIC,
  206, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_58_bias_array, NULL)

/* Tensor #207 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_weights, AI_STATIC,
  207, 0x1,
  AI_SHAPE_INIT(4, 72, 1, 1, 18), AI_STRIDE_INIT(4, 1, 72, 1296, 1296),
  1, &conv2d_60_weights_array, &conv2d_60_weights_array_intq)

/* Tensor #208 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_bias, AI_STATIC,
  208, 0x0,
  AI_SHAPE_INIT(4, 1, 18, 1, 1), AI_STRIDE_INIT(4, 4, 4, 72, 72),
  1, &conv2d_60_bias_array, NULL)

/* Tensor #209 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_weights, AI_STATIC,
  209, 0x1,
  AI_SHAPE_INIT(4, 18, 1, 1, 72), AI_STRIDE_INIT(4, 1, 18, 1296, 1296),
  1, &conv2d_61_weights_array, &conv2d_61_weights_array_intq)

/* Tensor #210 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_bias, AI_STATIC,
  210, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_61_bias_array, NULL)

/* Tensor #211 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_weights, AI_STATIC,
  211, 0x1,
  AI_SHAPE_INIT(4, 72, 1, 1, 24), AI_STRIDE_INIT(4, 1, 72, 1728, 1728),
  1, &conv2d_65_weights_array, &conv2d_65_weights_array_intq)

/* Tensor #212 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_bias, AI_STATIC,
  212, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_65_bias_array, NULL)

/* Tensor #213 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_weights, AI_STATIC,
  213, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 144), AI_STRIDE_INIT(4, 1, 24, 3456, 3456),
  1, &conv2d_67_weights_array, &conv2d_67_weights_array_intq)

/* Tensor #214 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_bias, AI_STATIC,
  214, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_67_bias_array, NULL)

/* Tensor #215 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_weights, AI_STATIC,
  215, 0x1,
  AI_SHAPE_INIT(4, 144, 5, 5, 1), AI_STRIDE_INIT(4, 1, 144, 144, 720),
  1, &conv2d_68_weights_array, &conv2d_68_weights_array_intq)

/* Tensor #216 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_bias, AI_STATIC,
  216, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_68_bias_array, NULL)

/* Tensor #217 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_weights, AI_STATIC,
  217, 0x1,
  AI_SHAPE_INIT(4, 144, 1, 1, 36), AI_STRIDE_INIT(4, 1, 144, 5184, 5184),
  1, &conv2d_70_weights_array, &conv2d_70_weights_array_intq)

/* Tensor #218 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_bias, AI_STATIC,
  218, 0x0,
  AI_SHAPE_INIT(4, 1, 36, 1, 1), AI_STRIDE_INIT(4, 4, 4, 144, 144),
  1, &conv2d_70_bias_array, NULL)

/* Tensor #219 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_71_weights, AI_STATIC,
  219, 0x1,
  AI_SHAPE_INIT(4, 36, 1, 1, 144), AI_STRIDE_INIT(4, 1, 36, 5184, 5184),
  1, &conv2d_71_weights_array, &conv2d_71_weights_array_intq)

/* Tensor #220 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_71_bias, AI_STATIC,
  220, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_71_bias_array, NULL)

/* Tensor #221 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_75_weights, AI_STATIC,
  221, 0x1,
  AI_SHAPE_INIT(4, 144, 1, 1, 48), AI_STRIDE_INIT(4, 1, 144, 6912, 6912),
  1, &conv2d_75_weights_array, &conv2d_75_weights_array_intq)

/* Tensor #222 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_75_bias, AI_STATIC,
  222, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_75_bias_array, NULL)

/* Tensor #223 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_weights, AI_STATIC,
  223, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 288), AI_STRIDE_INIT(4, 1, 48, 13824, 13824),
  1, &conv2d_76_weights_array, &conv2d_76_weights_array_intq)

/* Tensor #224 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_bias, AI_STATIC,
  224, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_76_bias_array, NULL)

/* Tensor #225 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_77_weights, AI_STATIC,
  225, 0x1,
  AI_SHAPE_INIT(4, 288, 5, 5, 1), AI_STRIDE_INIT(4, 1, 288, 288, 1440),
  1, &conv2d_77_weights_array, &conv2d_77_weights_array_intq)

/* Tensor #226 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_77_bias, AI_STATIC,
  226, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_77_bias_array, NULL)

/* Tensor #227 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_weights, AI_STATIC,
  227, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 72), AI_STRIDE_INIT(4, 1, 288, 20736, 20736),
  1, &conv2d_79_weights_array, &conv2d_79_weights_array_intq)

/* Tensor #228 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_bias, AI_STATIC,
  228, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_79_bias_array, NULL)

/* Tensor #229 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_80_weights, AI_STATIC,
  229, 0x1,
  AI_SHAPE_INIT(4, 72, 1, 1, 288), AI_STRIDE_INIT(4, 1, 72, 20736, 20736),
  1, &conv2d_80_weights_array, &conv2d_80_weights_array_intq)

/* Tensor #230 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_80_bias, AI_STATIC,
  230, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_80_bias_array, NULL)

/* Tensor #231 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_84_weights, AI_STATIC,
  231, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 48), AI_STRIDE_INIT(4, 1, 288, 13824, 13824),
  1, &conv2d_84_weights_array, &conv2d_84_weights_array_intq)

/* Tensor #232 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_84_bias, AI_STATIC,
  232, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_84_bias_array, NULL)

/* Tensor #233 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_86_weights, AI_STATIC,
  233, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 288), AI_STRIDE_INIT(4, 1, 48, 13824, 13824),
  1, &conv2d_86_weights_array, &conv2d_86_weights_array_intq)

/* Tensor #234 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_86_bias, AI_STATIC,
  234, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_86_bias_array, NULL)

/* Tensor #235 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_87_weights, AI_STATIC,
  235, 0x1,
  AI_SHAPE_INIT(4, 288, 5, 5, 1), AI_STRIDE_INIT(4, 1, 288, 288, 1440),
  1, &conv2d_87_weights_array, &conv2d_87_weights_array_intq)

/* Tensor #236 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_87_bias, AI_STATIC,
  236, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_87_bias_array, NULL)

/* Tensor #237 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_89_weights, AI_STATIC,
  237, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 72), AI_STRIDE_INIT(4, 1, 288, 20736, 20736),
  1, &conv2d_89_weights_array, &conv2d_89_weights_array_intq)

/* Tensor #238 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_89_bias, AI_STATIC,
  238, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_89_bias_array, NULL)

/* Tensor #239 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_90_weights, AI_STATIC,
  239, 0x1,
  AI_SHAPE_INIT(4, 72, 1, 1, 288), AI_STRIDE_INIT(4, 1, 72, 20736, 20736),
  1, &conv2d_90_weights_array, &conv2d_90_weights_array_intq)

/* Tensor #240 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_90_bias, AI_STATIC,
  240, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_90_bias_array, NULL)

/* Tensor #241 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_94_weights, AI_STATIC,
  241, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 48), AI_STRIDE_INIT(4, 1, 288, 13824, 13824),
  1, &conv2d_94_weights_array, &conv2d_94_weights_array_intq)

/* Tensor #242 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_94_bias, AI_STATIC,
  242, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_94_bias_array, NULL)

/* Tensor #243 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_96_weights, AI_STATIC,
  243, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 288), AI_STRIDE_INIT(4, 1, 48, 13824, 13824),
  1, &conv2d_96_weights_array, &conv2d_96_weights_array_intq)

/* Tensor #244 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_96_bias, AI_STATIC,
  244, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_96_bias_array, NULL)

/* Tensor #245 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_weights, AI_STATIC,
  245, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 1280), AI_STRIDE_INIT(4, 1, 288, 368640, 368640),
  1, &conv2d_98_weights_array, &conv2d_98_weights_array_intq)

/* Tensor #246 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_bias, AI_STATIC,
  246, 0x0,
  AI_SHAPE_INIT(4, 1, 1280, 1, 1), AI_STRIDE_INIT(4, 4, 4, 5120, 5120),
  1, &conv2d_98_bias_array, NULL)

/* Tensor #247 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_99_weights, AI_STATIC,
  247, 0x1,
  AI_SHAPE_INIT(4, 1280, 1, 1, 39), AI_STRIDE_INIT(4, 1, 1280, 49920, 49920),
  1, &conv2d_99_weights_array, &conv2d_99_weights_array_intq)

/* Tensor #248 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_99_bias, AI_STATIC,
  248, 0x0,
  AI_SHAPE_INIT(4, 1, 39, 1, 1), AI_STRIDE_INIT(4, 4, 4, 156, 156),
  1, &conv2d_99_bias_array, NULL)

/* Tensor #249 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch0, AI_STATIC,
  249, 0x0,
  AI_SHAPE_INIT(4, 1, 652, 1, 1), AI_STRIDE_INIT(4, 1, 1, 652, 652),
  1, &conv2d_1_scratch0_array, NULL)

/* Tensor #250 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch1, AI_STATIC,
  250, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_1_scratch1_array, &conv2d_1_scratch1_array_intq)

/* Tensor #251 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_scratch0, AI_STATIC,
  251, 0x0,
  AI_SHAPE_INIT(4, 1, 112, 1, 1), AI_STRIDE_INIT(4, 1, 1, 112, 112),
  1, &conv2d_2_scratch0_array, NULL)

/* Tensor #252 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_scratch1, AI_STATIC,
  252, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_2_scratch1_array, &conv2d_2_scratch1_array_intq)

/* Tensor #253 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_scratch0, AI_STATIC,
  253, 0x0,
  AI_SHAPE_INIT(4, 1, 297, 1, 1), AI_STRIDE_INIT(4, 1, 1, 297, 297),
  1, &conv2d_3_scratch0_array, NULL)

/* Tensor #254 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_scratch1, AI_STATIC,
  254, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 56, 56), AI_STRIDE_INIT(4, 1, 1, 8, 448),
  1, &conv2d_3_scratch1_array, &conv2d_3_scratch1_array_intq)

/* Tensor #255 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_scratch0, AI_STATIC,
  255, 0x0,
  AI_SHAPE_INIT(4, 1, 52, 1, 1), AI_STRIDE_INIT(4, 1, 1, 52, 52),
  1, &conv2d_5_scratch0_array, NULL)

/* Tensor #256 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_scratch0, AI_STATIC,
  256, 0x0,
  AI_SHAPE_INIT(4, 1, 88, 1, 1), AI_STRIDE_INIT(4, 1, 1, 88, 88),
  1, &conv2d_6_scratch0_array, NULL)

/* Tensor #257 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_scratch0, AI_STATIC,
  257, 0x0,
  AI_SHAPE_INIT(4, 1, 112, 1, 1), AI_STRIDE_INIT(4, 1, 1, 112, 112),
  1, &conv2d_10_scratch0_array, NULL)

/* Tensor #258 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_scratch0, AI_STATIC,
  258, 0x0,
  AI_SHAPE_INIT(4, 1, 432, 1, 1), AI_STRIDE_INIT(4, 1, 1, 432, 432),
  1, &conv2d_11_scratch0_array, NULL)

/* Tensor #259 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_scratch1, AI_STATIC,
  259, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 56, 56), AI_STRIDE_INIT(4, 1, 1, 40, 2240),
  1, &conv2d_11_scratch1_array, &conv2d_11_scratch1_array_intq)

/* Tensor #260 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_scratch0, AI_STATIC,
  260, 0x0,
  AI_SHAPE_INIT(4, 1, 1481, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1481, 1481),
  1, &conv2d_12_scratch0_array, NULL)

/* Tensor #261 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_scratch1, AI_STATIC,
  261, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 28, 28), AI_STRIDE_INIT(4, 1, 1, 40, 1120),
  1, &conv2d_12_scratch1_array, &conv2d_12_scratch1_array_intq)

/* Tensor #262 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_scratch0, AI_STATIC,
  262, 0x0,
  AI_SHAPE_INIT(4, 1, 320, 1, 1), AI_STRIDE_INIT(4, 1, 1, 320, 320),
  1, &conv2d_13_scratch0_array, NULL)

/* Tensor #263 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_scratch0, AI_STATIC,
  263, 0x0,
  AI_SHAPE_INIT(4, 1, 544, 1, 1), AI_STRIDE_INIT(4, 1, 1, 544, 544),
  1, &conv2d_14_scratch0_array, NULL)

/* Tensor #264 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_scratch1, AI_STATIC,
  264, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_14_scratch1_array, &conv2d_14_scratch1_array_intq)

/* Tensor #265 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_scratch0, AI_STATIC,
  265, 0x0,
  AI_SHAPE_INIT(4, 1, 1777, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1777, 1777),
  1, &conv2d_15_scratch0_array, NULL)

/* Tensor #266 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_scratch1, AI_STATIC,
  266, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_15_scratch1_array, &conv2d_15_scratch1_array_intq)

/* Tensor #267 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_scratch0, AI_STATIC,
  267, 0x0,
  AI_SHAPE_INIT(4, 1, 352, 1, 1), AI_STRIDE_INIT(4, 1, 1, 352, 352),
  1, &conv2d_16_scratch0_array, NULL)

/* Tensor #268 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_scratch0, AI_STATIC,
  268, 0x0,
  AI_SHAPE_INIT(4, 1, 544, 1, 1), AI_STRIDE_INIT(4, 1, 1, 544, 544),
  1, &conv2d_18_scratch0_array, NULL)

/* Tensor #269 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_scratch1, AI_STATIC,
  269, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_18_scratch1_array, &conv2d_18_scratch1_array_intq)

/* Tensor #270 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_scratch0, AI_STATIC,
  270, 0x0,
  AI_SHAPE_INIT(4, 1, 4081, 1, 1), AI_STRIDE_INIT(4, 1, 1, 4081, 4081),
  1, &conv2d_19_scratch0_array, NULL)

/* Tensor #271 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_scratch1, AI_STATIC,
  271, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 14, 14), AI_STRIDE_INIT(4, 1, 1, 48, 672),
  1, &conv2d_19_scratch1_array, &conv2d_19_scratch1_array_intq)

/* Tensor #272 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_scratch0, AI_STATIC,
  272, 0x0,
  AI_SHAPE_INIT(4, 1, 312, 1, 1), AI_STRIDE_INIT(4, 1, 1, 312, 312),
  1, &conv2d_21_scratch0_array, NULL)

/* Tensor #273 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_scratch1, AI_STATIC,
  273, 0x1,
  AI_SHAPE_INIT(4, 1, 12, 1, 1), AI_STRIDE_INIT(4, 1, 1, 12, 12),
  1, &conv2d_21_scratch1_array, &conv2d_21_scratch1_array_intq)

/* Tensor #274 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_scratch0, AI_STATIC,
  274, 0x0,
  AI_SHAPE_INIT(4, 1, 528, 1, 1), AI_STRIDE_INIT(4, 1, 1, 528, 528),
  1, &conv2d_22_scratch0_array, NULL)

/* Tensor #275 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_scratch0, AI_STATIC,
  275, 0x0,
  AI_SHAPE_INIT(4, 1, 432, 1, 1), AI_STRIDE_INIT(4, 1, 1, 432, 432),
  1, &conv2d_26_scratch0_array, NULL)

/* Tensor #276 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_scratch0, AI_STATIC,
  276, 0x0,
  AI_SHAPE_INIT(4, 1, 1296, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1296, 1296),
  1, &conv2d_27_scratch0_array, NULL)

/* Tensor #277 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_scratch1, AI_STATIC,
  277, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_27_scratch1_array, &conv2d_27_scratch1_array_intq)

/* Tensor #278 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_scratch0, AI_STATIC,
  278, 0x0,
  AI_SHAPE_INIT(4, 1, 10201, 1, 1), AI_STRIDE_INIT(4, 1, 1, 10201, 10201),
  1, &conv2d_28_scratch0_array, NULL)

/* Tensor #279 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_scratch1, AI_STATIC,
  279, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_28_scratch1_array, &conv2d_28_scratch1_array_intq)

/* Tensor #280 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_scratch0, AI_STATIC,
  280, 0x0,
  AI_SHAPE_INIT(4, 1, 780, 1, 1), AI_STRIDE_INIT(4, 1, 1, 780, 780),
  1, &conv2d_30_scratch0_array, NULL)

/* Tensor #281 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_scratch1, AI_STATIC,
  281, 0x1,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 1, 1, 30, 30),
  1, &conv2d_30_scratch1_array, &conv2d_30_scratch1_array_intq)

/* Tensor #282 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_scratch0, AI_STATIC,
  282, 0x0,
  AI_SHAPE_INIT(4, 1, 1320, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1320, 1320),
  1, &conv2d_31_scratch0_array, NULL)

/* Tensor #283 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_scratch0, AI_STATIC,
  283, 0x0,
  AI_SHAPE_INIT(4, 1, 720, 1, 1), AI_STRIDE_INIT(4, 1, 1, 720, 720),
  1, &conv2d_35_scratch0_array, NULL)

/* Tensor #284 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_scratch0, AI_STATIC,
  284, 0x0,
  AI_SHAPE_INIT(4, 1, 1296, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1296, 1296),
  1, &conv2d_37_scratch0_array, NULL)

/* Tensor #285 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_scratch1, AI_STATIC,
  285, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_37_scratch1_array, &conv2d_37_scratch1_array_intq)

/* Tensor #286 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_scratch0, AI_STATIC,
  286, 0x0,
  AI_SHAPE_INIT(4, 1, 10201, 1, 1), AI_STRIDE_INIT(4, 1, 1, 10201, 10201),
  1, &conv2d_38_scratch0_array, NULL)

/* Tensor #287 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_scratch1, AI_STATIC,
  287, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_38_scratch1_array, &conv2d_38_scratch1_array_intq)

/* Tensor #288 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_scratch0, AI_STATIC,
  288, 0x0,
  AI_SHAPE_INIT(4, 1, 780, 1, 1), AI_STRIDE_INIT(4, 1, 1, 780, 780),
  1, &conv2d_40_scratch0_array, NULL)

/* Tensor #289 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_scratch1, AI_STATIC,
  289, 0x1,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 1, 1, 30, 30),
  1, &conv2d_40_scratch1_array, &conv2d_40_scratch1_array_intq)

/* Tensor #290 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_scratch0, AI_STATIC,
  290, 0x0,
  AI_SHAPE_INIT(4, 1, 1320, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1320, 1320),
  1, &conv2d_41_scratch0_array, NULL)

/* Tensor #291 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_scratch0, AI_STATIC,
  291, 0x0,
  AI_SHAPE_INIT(4, 1, 720, 1, 1), AI_STRIDE_INIT(4, 1, 1, 720, 720),
  1, &conv2d_45_scratch0_array, NULL)

/* Tensor #292 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_scratch0, AI_STATIC,
  292, 0x0,
  AI_SHAPE_INIT(4, 1, 736, 1, 1), AI_STRIDE_INIT(4, 1, 1, 736, 736),
  1, &conv2d_47_scratch0_array, NULL)

/* Tensor #293 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_scratch1, AI_STATIC,
  293, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_47_scratch1_array, &conv2d_47_scratch1_array_intq)

/* Tensor #294 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_scratch0, AI_STATIC,
  294, 0x0,
  AI_SHAPE_INIT(4, 1, 5441, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5441, 5441),
  1, &conv2d_48_scratch0_array, NULL)

/* Tensor #295 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_scratch1, AI_STATIC,
  295, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_48_scratch1_array, &conv2d_48_scratch1_array_intq)

/* Tensor #296 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_scratch0, AI_STATIC,
  296, 0x0,
  AI_SHAPE_INIT(4, 1, 416, 1, 1), AI_STRIDE_INIT(4, 1, 1, 416, 416),
  1, &conv2d_50_scratch0_array, NULL)

/* Tensor #297 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_scratch0, AI_STATIC,
  297, 0x0,
  AI_SHAPE_INIT(4, 1, 704, 1, 1), AI_STRIDE_INIT(4, 1, 1, 704, 704),
  1, &conv2d_51_scratch0_array, NULL)

/* Tensor #298 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_scratch0, AI_STATIC,
  298, 0x0,
  AI_SHAPE_INIT(4, 1, 496, 1, 1), AI_STRIDE_INIT(4, 1, 1, 496, 496),
  1, &conv2d_55_scratch0_array, NULL)

/* Tensor #299 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_scratch0, AI_STATIC,
  299, 0x0,
  AI_SHAPE_INIT(4, 1, 816, 1, 1), AI_STRIDE_INIT(4, 1, 1, 816, 816),
  1, &conv2d_57_scratch0_array, NULL)

/* Tensor #300 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_scratch1, AI_STATIC,
  300, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 14, 14), AI_STRIDE_INIT(4, 1, 1, 72, 1008),
  1, &conv2d_57_scratch1_array, &conv2d_57_scratch1_array_intq)

/* Tensor #301 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_scratch0, AI_STATIC,
  301, 0x0,
  AI_SHAPE_INIT(4, 1, 6121, 1, 1), AI_STRIDE_INIT(4, 1, 1, 6121, 6121),
  1, &conv2d_58_scratch0_array, NULL)

/* Tensor #302 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_scratch1, AI_STATIC,
  302, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 14, 14), AI_STRIDE_INIT(4, 1, 1, 72, 1008),
  1, &conv2d_58_scratch1_array, &conv2d_58_scratch1_array_intq)

/* Tensor #303 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_scratch0, AI_STATIC,
  303, 0x0,
  AI_SHAPE_INIT(4, 1, 468, 1, 1), AI_STRIDE_INIT(4, 1, 1, 468, 468),
  1, &conv2d_60_scratch0_array, NULL)

/* Tensor #304 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_scratch0, AI_STATIC,
  304, 0x0,
  AI_SHAPE_INIT(4, 1, 792, 1, 1), AI_STRIDE_INIT(4, 1, 1, 792, 792),
  1, &conv2d_61_scratch0_array, NULL)

/* Tensor #305 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_scratch0, AI_STATIC,
  305, 0x0,
  AI_SHAPE_INIT(4, 1, 528, 1, 1), AI_STRIDE_INIT(4, 1, 1, 528, 528),
  1, &conv2d_65_scratch0_array, NULL)

/* Tensor #306 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_scratch0, AI_STATIC,
  306, 0x0,
  AI_SHAPE_INIT(4, 1, 1536, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1536, 1536),
  1, &conv2d_67_scratch0_array, NULL)

/* Tensor #307 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_scratch1, AI_STATIC,
  307, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_67_scratch1_array, &conv2d_67_scratch1_array_intq)

/* Tensor #308 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_scratch0, AI_STATIC,
  308, 0x0,
  AI_SHAPE_INIT(4, 1, 12241, 1, 1), AI_STRIDE_INIT(4, 1, 1, 12241, 12241),
  1, &conv2d_68_scratch0_array, NULL)

/* Tensor #309 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_scratch1, AI_STATIC,
  309, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 7, 7), AI_STRIDE_INIT(4, 1, 1, 144, 1008),
  1, &conv2d_68_scratch1_array, &conv2d_68_scratch1_array_intq)



/**  Layer declarations section  **********************************************/


AI_TENSOR_CHAIN_OBJ_DECLARE(
  conversion_102_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_101_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conversion_102_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conversion_102_layer, 102,
  NL_TYPE, 0x0, NULL,
  nl, node_convert,
  &conversion_102_chain,
  NULL, &conversion_102_layer, AI_STATIC, 
)


AI_STATIC_CONST ai_i32 nl_101_nl_params_data[] = { 1676579840, 25, -62 };
AI_ARRAY_OBJ_DECLARE(
    nl_101_nl_params, AI_ARRAY_FORMAT_S32,
    nl_101_nl_params_data, nl_101_nl_params_data, 3, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_101_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_99_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_101_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_101_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  nl_101_layer, 101,
  NL_TYPE, 0x0, NULL,
  nl, forward_sm_integer,
  &nl_101_chain,
  NULL, &conversion_102_layer, AI_STATIC, 
  .nl_params = &nl_101_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_99_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_98_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_99_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_99_weights, &conv2d_99_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_99_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_99_layer, 99,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_99_chain,
  NULL, &nl_101_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_98_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_97_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_98_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_98_weights, &conv2d_98_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_98_scratch0, &conv2d_98_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_98_layer, 98,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_98_chain,
  NULL, &conv2d_99_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_97_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_96_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_97_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_97_layer, 97,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_97_chain,
  NULL, &conv2d_98_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(7, 7), 
  .pool_stride = AI_SHAPE_2D_INIT(7, 7), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_96_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_95_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_96_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_96_weights, &conv2d_96_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_96_scratch0, &conv2d_96_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_96_layer, 96,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_96_chain,
  NULL, &pool_97_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_95_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_85_output, &conv2d_94_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_95_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_95_layer, 95,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_95_chain,
  NULL, &conv2d_96_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_94_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_93_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_94_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_94_weights, &conv2d_94_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_94_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_94_layer, 94,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_94_chain,
  NULL, &eltwise_95_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_93_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_87_output, &nl_92_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_93_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_93_layer, 93,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_93_chain,
  NULL, &conv2d_94_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_92_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -124, -120, -116, -112, -108, -104, -100, -96, -93, -89, -85, -81, -77, -73, -69, -65, -61, -57, -53, -49, -45, -41, -37, -33, -29, -25, -22, -18, -14, -10, -6, -2, 2, 6, 10, 14, 18, 22, 26, 30, 34, 38, 42, 46, 49, 53, 57, 61, 65, 69, 73, 77, 81, 85, 89, 93, 97, 101, 105, 109, 113, 117, 120, 124, 127 };
AI_ARRAY_OBJ_DECLARE(
    nl_92_nl_params, AI_ARRAY_FORMAT_S8,
    nl_92_nl_params_data, nl_92_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_92_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_91_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_92_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_92_layer, 92,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_92_chain,
  NULL, &eltwise_93_layer, AI_STATIC, 
  .nl_params = &nl_92_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_91_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_90_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_91_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_91_layer, 91,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_91_chain,
  NULL, &nl_92_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_90_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_89_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_90_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_90_weights, &conv2d_90_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_90_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_90_layer, 90,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_90_chain,
  NULL, &eltwise_91_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_89_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_88_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_89_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_89_weights, &conv2d_89_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_89_scratch0, &conv2d_89_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_89_layer, 89,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_89_chain,
  NULL, &conv2d_90_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_88_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_87_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_88_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_88_layer, 88,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_88_chain,
  NULL, &conv2d_89_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(7, 7), 
  .pool_stride = AI_SHAPE_2D_INIT(7, 7), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_87_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_86_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_87_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_87_weights, &conv2d_87_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_87_scratch0, &conv2d_87_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_87_layer, 87,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_sssa8_ch,
  &conv2d_87_chain,
  NULL, &pool_88_layer, AI_STATIC, 
  .groups = 288, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 2, 2, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_86_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_85_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_86_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_86_weights, &conv2d_86_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_86_scratch0, &conv2d_86_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_86_layer, 86,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_86_chain,
  NULL, &conv2d_87_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_85_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_75_output, &conv2d_84_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_85_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_85_layer, 85,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_85_chain,
  NULL, &conv2d_86_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_84_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_83_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_84_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_84_weights, &conv2d_84_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_84_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_84_layer, 84,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_84_chain,
  NULL, &eltwise_85_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_83_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_77_output, &nl_82_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_83_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_83_layer, 83,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_83_chain,
  NULL, &conv2d_84_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_82_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -122, -119, -116, -113, -110, -107, -104, -101, -98, -95, -92, -89, -86, -83, -80, -77, -74, -71, -68, -65, -61, -58, -55, -52, -49, -46, -43, -40, -37, -34, -31, -28, -25, -22, -19, -16, -13, -10, -7, -4, -1, 2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 35, 38, 41, 44, 47, 50, 53, 56, 59, 62, 65, 69, 72, 75, 78, 81, 84, 87, 90, 93, 96, 99, 102, 105, 108, 111, 114, 117, 120, 123, 126 };
AI_ARRAY_OBJ_DECLARE(
    nl_82_nl_params, AI_ARRAY_FORMAT_S8,
    nl_82_nl_params_data, nl_82_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_82_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_81_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_82_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_82_layer, 82,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_82_chain,
  NULL, &eltwise_83_layer, AI_STATIC, 
  .nl_params = &nl_82_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_81_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_80_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_81_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_81_layer, 81,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_81_chain,
  NULL, &nl_82_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_80_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_79_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_80_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_80_weights, &conv2d_80_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_80_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_80_layer, 80,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_80_chain,
  NULL, &eltwise_81_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_79_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_78_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_79_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_79_weights, &conv2d_79_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_79_scratch0, &conv2d_79_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_79_layer, 79,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_79_chain,
  NULL, &conv2d_80_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_78_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_77_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_78_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_78_layer, 78,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_78_chain,
  NULL, &conv2d_79_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(7, 7), 
  .pool_stride = AI_SHAPE_2D_INIT(7, 7), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_77_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_76_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_77_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_77_weights, &conv2d_77_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_77_scratch0, &conv2d_77_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_77_layer, 77,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_sssa8_ch,
  &conv2d_77_chain,
  NULL, &pool_78_layer, AI_STATIC, 
  .groups = 288, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 2, 2, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_76_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_75_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_76_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_76_weights, &conv2d_76_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_76_scratch0, &conv2d_76_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_76_layer, 76,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_76_chain,
  NULL, &conv2d_77_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_75_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_74_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_75_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_75_weights, &conv2d_75_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_75_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_75_layer, 75,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_75_chain,
  NULL, &conv2d_76_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_74_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_68_output, &nl_73_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_74_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_74_layer, 74,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_74_chain,
  NULL, &conv2d_75_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_73_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -124, -123, -121, -119, -117, -115, -113, -112, -110, -108, -106, -104, -102, -101, -99, -97, -95, -93, -91, -90, -88, -86, -84, -82, -80, -79, -77, -75, -73, -71, -69, -68, -66, -64, -62, -60, -59, -57, -55, -53, -51, -49, -48, -46, -44, -42, -40, -38, -37, -35, -33, -31, -29, -27, -26, -24, -22, -20, -18, -16, -15, -13, -11, -9, -7, -5, -4, -2, 0, 2, 4, 5, 7, 9, 11, 13, 15, 16, 18, 20, 22, 24, 26, 27, 29, 31, 33, 35, 37, 38, 40, 42, 44, 46, 48, 49, 51, 53, 55, 57, 59, 60, 62, 64, 66, 68, 70, 71, 73, 75, 77, 79, 80, 82, 84, 86, 88, 90, 91, 93, 95, 97, 99, 101, 102, 104, 106, 108, 110, 112, 113, 115, 117, 119, 121, 123, 124, 126 };
AI_ARRAY_OBJ_DECLARE(
    nl_73_nl_params, AI_ARRAY_FORMAT_S8,
    nl_73_nl_params_data, nl_73_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_73_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_72_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_73_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_73_layer, 73,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_73_chain,
  NULL, &eltwise_74_layer, AI_STATIC, 
  .nl_params = &nl_73_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_72_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_71_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_72_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_72_layer, 72,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_72_chain,
  NULL, &nl_73_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_71_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_70_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_71_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_71_weights, &conv2d_71_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_71_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_71_layer, 71,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_71_chain,
  NULL, &eltwise_72_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_70_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_69_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_70_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_70_weights, &conv2d_70_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_70_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_70_layer, 70,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_70_chain,
  NULL, &conv2d_71_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_69_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_68_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_69_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_69_layer, 69,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_69_chain,
  NULL, &conv2d_70_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(7, 7), 
  .pool_stride = AI_SHAPE_2D_INIT(7, 7), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_68_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_67_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_68_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_68_weights, &conv2d_68_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_68_scratch0, &conv2d_68_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_68_layer, 68,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_sssa8_ch,
  &conv2d_68_chain,
  NULL, &pool_69_layer, AI_STATIC, 
  .groups = 144, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 3, 3), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_67_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_66_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_67_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_67_weights, &conv2d_67_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_67_scratch0, &conv2d_67_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_67_layer, 67,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_67_chain,
  NULL, &conv2d_68_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_66_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_56_output, &conv2d_65_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_66_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_66_layer, 66,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_66_chain,
  NULL, &conv2d_67_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_65_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_64_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_65_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_65_weights, &conv2d_65_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_65_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_65_layer, 65,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_65_chain,
  NULL, &eltwise_66_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_64_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_58_output, &nl_63_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_64_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_64_layer, 64,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_64_chain,
  NULL, &conv2d_65_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_63_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -125, -123, -122, -120, -118, -117, -115, -113, -112, -110, -109, -107, -105, -104, -102, -100, -99, -97, -96, -94, -92, -91, -89, -87, -86, -84, -83, -81, -79, -78, -76, -74, -73, -71, -70, -68, -66, -65, -63, -62, -60, -58, -57, -55, -53, -52, -50, -49, -47, -45, -44, -42, -40, -39, -37, -36, -34, -32, -31, -29, -27, -26, -24, -23, -21, -19, -18, -16, -15, -13, -11, -10, -8, -6, -5, -3, -2, 0, 2, 3, 5, 7, 8, 10, 11, 13, 15, 16, 18, 20, 21, 23, 24, 26, 28, 29, 31, 33, 34, 36, 37, 39, 41, 42, 44, 45, 47, 49, 50, 52, 54, 55, 57, 58, 60, 62, 63, 65, 67, 68, 70, 71, 73, 75, 76, 78, 80, 81, 83, 84, 86, 88, 89, 91, 92, 94, 96, 97, 99, 101, 102, 104, 105, 107, 109, 110, 112, 114, 115, 117, 118, 120, 122, 123, 125, 127 };
AI_ARRAY_OBJ_DECLARE(
    nl_63_nl_params, AI_ARRAY_FORMAT_S8,
    nl_63_nl_params_data, nl_63_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_63_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_62_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_63_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_63_layer, 63,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_63_chain,
  NULL, &eltwise_64_layer, AI_STATIC, 
  .nl_params = &nl_63_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_62_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_61_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_62_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_62_layer, 62,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_62_chain,
  NULL, &nl_63_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_61_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_60_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_61_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_61_weights, &conv2d_61_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_61_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_61_layer, 61,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_61_chain,
  NULL, &eltwise_62_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_60_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_59_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_60_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_60_weights, &conv2d_60_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_60_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_60_layer, 60,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_60_chain,
  NULL, &conv2d_61_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_59_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_58_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_59_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_59_layer, 59,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_59_chain,
  NULL, &conv2d_60_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(14, 14), 
  .pool_stride = AI_SHAPE_2D_INIT(14, 14), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_58_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_57_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_58_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_58_weights, &conv2d_58_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_58_scratch0, &conv2d_58_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_58_layer, 58,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_sssa8_ch,
  &conv2d_58_chain,
  NULL, &pool_59_layer, AI_STATIC, 
  .groups = 72, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 2, 2, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_57_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_56_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_57_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_57_weights, &conv2d_57_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_57_scratch0, &conv2d_57_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_57_layer, 57,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_57_chain,
  NULL, &conv2d_58_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_56_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_46_output, &conv2d_55_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_56_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_56_layer, 56,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_56_chain,
  NULL, &conv2d_57_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_55_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_54_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_55_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_55_weights, &conv2d_55_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_55_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_55_layer, 55,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_55_chain,
  NULL, &eltwise_56_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_54_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_48_output, &nl_53_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_54_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_54_layer, 54,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_54_chain,
  NULL, &conv2d_55_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_53_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -125, -123, -121, -119, -118, -116, -114, -113, -111, -109, -107, -106, -104, -102, -101, -99, -97, -95, -94, -92, -90, -89, -87, -85, -83, -82, -80, -78, -77, -75, -73, -71, -70, -68, -66, -65, -63, -61, -59, -58, -56, -54, -53, -51, -49, -47, -46, -44, -42, -41, -39, -37, -35, -34, -32, -30, -28, -27, -25, -23, -22, -20, -18, -16, -15, -13, -11, -10, -8, -6, -4, -3, -1, 1, 2, 4, 6, 8, 9, 11, 13, 14, 16, 18, 20, 21, 23, 25, 26, 28, 30, 32, 33, 35, 37, 38, 40, 42, 44, 45, 47, 49, 50, 52, 54, 56, 57, 59, 61, 62, 64, 66, 68, 69, 71, 73, 74, 76, 78, 80, 81, 83, 85, 86, 88, 90, 92, 93, 95, 97, 98, 100, 102, 104, 105, 107, 109, 110, 112, 114, 116, 117, 119, 121, 122, 124, 126, 127 };
AI_ARRAY_OBJ_DECLARE(
    nl_53_nl_params, AI_ARRAY_FORMAT_S8,
    nl_53_nl_params_data, nl_53_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_53_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_52_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_53_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_53_layer, 53,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_53_chain,
  NULL, &eltwise_54_layer, AI_STATIC, 
  .nl_params = &nl_53_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_52_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_51_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_52_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_52_layer, 52,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_52_chain,
  NULL, &nl_53_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_51_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_50_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_51_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_51_weights, &conv2d_51_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_51_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_51_layer, 51,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_51_chain,
  NULL, &eltwise_52_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_50_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_49_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_50_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_50_weights, &conv2d_50_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_50_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_50_layer, 50,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_50_chain,
  NULL, &conv2d_51_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_49_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_48_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_49_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_49_layer, 49,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_49_chain,
  NULL, &conv2d_50_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(14, 14), 
  .pool_stride = AI_SHAPE_2D_INIT(14, 14), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_48_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_47_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_48_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_48_weights, &conv2d_48_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_48_scratch0, &conv2d_48_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_48_layer, 48,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_sssa8_ch,
  &conv2d_48_chain,
  NULL, &pool_49_layer, AI_STATIC, 
  .groups = 64, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 2, 2, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_47_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_46_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_47_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_47_weights, &conv2d_47_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_47_scratch0, &conv2d_47_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_47_layer, 47,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_47_chain,
  NULL, &conv2d_48_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_46_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_36_output, &conv2d_45_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_46_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_46_layer, 46,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_46_chain,
  NULL, &conv2d_47_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_45_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_44_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_45_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_45_weights, &conv2d_45_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_45_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_45_layer, 45,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_45_chain,
  NULL, &eltwise_46_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_44_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_38_output, &nl_43_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_44_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_44_layer, 44,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_44_chain,
  NULL, &conv2d_45_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_43_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -122, -119, -115, -112, -109, -106, -103, -100, -97, -94, -90, -87, -84, -81, -78, -75, -72, -69, -65, -62, -59, -56, -53, -50, -47, -44, -40, -37, -34, -31, -28, -25, -22, -19, -15, -12, -9, -6, -3, 0, 3, 6, 10, 13, 16, 19, 22, 25, 28, 31, 35, 38, 41, 44, 47, 50, 53, 56, 60, 63, 66, 69, 72, 75, 78, 81, 85, 88, 91, 94, 97, 100, 103, 106, 110, 113, 116, 119, 122, 125, 127 };
AI_ARRAY_OBJ_DECLARE(
    nl_43_nl_params, AI_ARRAY_FORMAT_S8,
    nl_43_nl_params_data, nl_43_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_43_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_42_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_43_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_43_layer, 43,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_43_chain,
  NULL, &eltwise_44_layer, AI_STATIC, 
  .nl_params = &nl_43_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_42_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_41_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_42_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_42_layer, 42,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_42_chain,
  NULL, &nl_43_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_41_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_40_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_41_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_41_weights, &conv2d_41_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_41_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_41_layer, 41,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_41_chain,
  NULL, &eltwise_42_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_40_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_39_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_40_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_40_weights, &conv2d_40_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_40_scratch0, &conv2d_40_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_40_layer, 40,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_40_chain,
  NULL, &conv2d_41_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_39_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_38_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_39_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_39_layer, 39,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_39_chain,
  NULL, &conv2d_40_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(14, 14), 
  .pool_stride = AI_SHAPE_2D_INIT(14, 14), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_38_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_37_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_38_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_38_weights, &conv2d_38_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_38_scratch0, &conv2d_38_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_38_layer, 38,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_sssa8_ch,
  &conv2d_38_chain,
  NULL, &pool_39_layer, AI_STATIC, 
  .groups = 120, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 2, 2, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_37_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_36_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_37_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_37_weights, &conv2d_37_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_37_scratch0, &conv2d_37_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_37_layer, 37,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_37_chain,
  NULL, &conv2d_38_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_36_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_26_output, &conv2d_35_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_36_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_36_layer, 36,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_36_chain,
  NULL, &conv2d_37_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_35_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_34_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_35_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_35_weights, &conv2d_35_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_35_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_35_layer, 35,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_35_chain,
  NULL, &eltwise_36_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_34_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_28_output, &nl_33_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_34_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_34_layer, 34,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_34_chain,
  NULL, &conv2d_35_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_33_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -124, -122, -121, -119, -117, -115, -113, -111, -109, -107, -106, -104, -102, -100, -98, -96, -94, -93, -91, -89, -87, -85, -83, -81, -79, -78, -76, -74, -72, -70, -68, -66, -65, -63, -61, -59, -57, -55, -53, -52, -50, -48, -46, -44, -42, -40, -38, -37, -35, -33, -31, -29, -27, -25, -24, -22, -20, -18, -16, -14, -12, -10, -9, -7, -5, -3, -1, 1, 3, 4, 6, 8, 10, 12, 14, 16, 18, 19, 21, 23, 25, 27, 29, 31, 32, 34, 36, 38, 40, 42, 44, 46, 47, 49, 51, 53, 55, 57, 59, 60, 62, 64, 66, 68, 70, 72, 73, 75, 77, 79, 81, 83, 85, 87, 88, 90, 92, 94, 96, 98, 100, 101, 103, 105, 107, 109, 111, 113, 115, 116, 118, 120, 122, 124, 126, 127 };
AI_ARRAY_OBJ_DECLARE(
    nl_33_nl_params, AI_ARRAY_FORMAT_S8,
    nl_33_nl_params_data, nl_33_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_33_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_32_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_33_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_33_layer, 33,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_33_chain,
  NULL, &eltwise_34_layer, AI_STATIC, 
  .nl_params = &nl_33_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_32_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_31_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_32_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_32_layer, 32,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_32_chain,
  NULL, &nl_33_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_31_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_30_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_31_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_31_weights, &conv2d_31_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_31_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_31_layer, 31,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_31_chain,
  NULL, &eltwise_32_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_30_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_29_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_30_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_30_weights, &conv2d_30_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_30_scratch0, &conv2d_30_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_30_layer, 30,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_30_chain,
  NULL, &conv2d_31_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_29_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_28_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_29_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_29_layer, 29,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_29_chain,
  NULL, &conv2d_30_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(14, 14), 
  .pool_stride = AI_SHAPE_2D_INIT(14, 14), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_28_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_27_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_28_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_28_weights, &conv2d_28_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_28_scratch0, &conv2d_28_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_28_layer, 28,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_sssa8_ch,
  &conv2d_28_chain,
  NULL, &pool_29_layer, AI_STATIC, 
  .groups = 120, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 2, 2, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_27_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_26_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_27_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_27_weights, &conv2d_27_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_27_scratch0, &conv2d_27_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_27_layer, 27,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_27_chain,
  NULL, &conv2d_28_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_26_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_25_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_26_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_26_weights, &conv2d_26_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_26_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_26_layer, 26,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_26_chain,
  NULL, &conv2d_27_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_25_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_19_output, &nl_24_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_25_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_25_layer, 25,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_25_chain,
  NULL, &conv2d_26_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_24_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -125, -124, -123, -121, -120, -119, -117, -116, -115, -113, -112, -111, -109, -108, -107, -105, -104, -102, -101, -100, -98, -97, -96, -94, -93, -92, -90, -89, -88, -86, -85, -84, -82, -81, -80, -78, -77, -76, -74, -73, -72, -70, -69, -68, -66, -65, -64, -62, -61, -60, -58, -57, -56, -54, -53, -51, -50, -49, -47, -46, -45, -43, -42, -41, -39, -38, -37, -35, -34, -33, -31, -30, -29, -27, -26, -25, -23, -22, -21, -19, -18, -17, -15, -14, -13, -11, -10, -9, -7, -6, -5, -3, -2, 0, 1, 2, 4, 5, 6, 8, 9, 10, 12, 13, 14, 16, 17, 18, 20, 21, 22, 24, 25, 26, 28, 29, 30, 32, 33, 34, 36, 37, 38, 40, 41, 42, 44, 45, 47, 48, 49, 51, 52, 53, 55, 56, 57, 59, 60, 61, 63, 64, 65, 67, 68, 69, 71, 72, 73, 75, 76, 77, 79, 80, 81, 83, 84, 85, 87, 88, 89, 91, 92, 93, 95, 96, 98, 99, 100, 102, 103, 104, 106, 107, 108, 110, 111, 112, 114, 115, 116, 118, 119, 120, 122, 123, 124, 126, 127 };
AI_ARRAY_OBJ_DECLARE(
    nl_24_nl_params, AI_ARRAY_FORMAT_S8,
    nl_24_nl_params_data, nl_24_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_24_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_23_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_24_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_24_layer, 24,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_24_chain,
  NULL, &eltwise_25_layer, AI_STATIC, 
  .nl_params = &nl_24_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_23_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_22_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_23_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_23_layer, 23,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_23_chain,
  NULL, &nl_24_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_22_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_21_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_22_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_22_weights, &conv2d_22_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_22_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_22_layer, 22,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_22_chain,
  NULL, &eltwise_23_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_21_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_20_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_21_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_21_weights, &conv2d_21_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_21_scratch0, &conv2d_21_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_21_layer, 21,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_21_chain,
  NULL, &conv2d_22_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_20_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_19_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_20_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_20_layer, 20,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_20_chain,
  NULL, &conv2d_21_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(14, 14), 
  .pool_stride = AI_SHAPE_2D_INIT(14, 14), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_19_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_18_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_19_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_19_weights, &conv2d_19_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_19_scratch0, &conv2d_19_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_19_layer, 19,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_sssa8_ch,
  &conv2d_19_chain,
  NULL, &pool_20_layer, AI_STATIC, 
  .groups = 48, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 3, 3), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_18_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_17_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_18_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_18_weights, &conv2d_18_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_18_scratch0, &conv2d_18_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_18_layer, 18,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_18_chain,
  NULL, &conv2d_19_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_17_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_13_output, &conv2d_16_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_17_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_17_layer, 17,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_17_chain,
  NULL, &conv2d_18_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_16_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_15_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_16_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_16_weights, &conv2d_16_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_16_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_16_layer, 16,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_16_chain,
  NULL, &eltwise_17_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_15_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_15_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_15_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_15_weights, &conv2d_15_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_15_scratch0, &conv2d_15_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_15_layer, 15,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_3x3_sssa8_ch,
  &conv2d_15_chain,
  NULL, &conv2d_16_layer, AI_STATIC, 
  .groups = 48, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_15_pad_before_value_data[] = { -128 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_15_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_15_pad_before_value_data, conv2d_15_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_15_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_14_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_15_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_15_pad_before_layer, 15,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_15_pad_before_chain,
  NULL, &conv2d_15_layer, AI_STATIC, 
  .value = &conv2d_15_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_14_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_13_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_14_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_14_weights, &conv2d_14_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_14_scratch0, &conv2d_14_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_14_layer, 14,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_14_chain,
  NULL, &conv2d_15_pad_before_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_13_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_12_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_13_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_13_weights, &conv2d_13_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_13_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_13_layer, 13,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_13_chain,
  NULL, &conv2d_14_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_12_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_12_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_12_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_12_weights, &conv2d_12_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_12_scratch0, &conv2d_12_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_12_layer, 12,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_3x3_sssa8_ch,
  &conv2d_12_chain,
  NULL, &conv2d_13_layer, AI_STATIC, 
  .groups = 40, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_12_pad_before_value_data[] = { -128 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_12_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_12_pad_before_value_data, conv2d_12_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_12_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_11_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_12_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_12_pad_before_layer, 12,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_12_pad_before_chain,
  NULL, &conv2d_12_layer, AI_STATIC, 
  .value = &conv2d_12_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 0, 0, 2, 2), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_11_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_11_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_11_weights, &conv2d_11_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_11_scratch0, &conv2d_11_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_11_layer, 11,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_11_chain,
  NULL, &conv2d_12_pad_before_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_10_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_9_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_10_weights, &conv2d_10_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_10_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_10_layer, 10,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_10_chain,
  NULL, &conv2d_11_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_9_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_3_output, &eltwise_7_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_9_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_9_layer, 9,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_9_chain,
  NULL, &conv2d_10_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_7_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_6_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_7_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_7_layer, 7,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_7_chain,
  NULL, &eltwise_9_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_6_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_5_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_6_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_6_weights, &conv2d_6_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_6_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_6_layer, 6,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_6_chain,
  NULL, &eltwise_7_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_5_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_4_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_5_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_5_weights, &conv2d_5_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_5_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_5_layer, 5,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_5_chain,
  NULL, &conv2d_6_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_4_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_4_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_4_layer, 4,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_4_chain,
  NULL, &conv2d_5_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(56, 56), 
  .pool_stride = AI_SHAPE_2D_INIT(56, 56), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_3_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_3_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_3_weights, &conv2d_3_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_3_scratch0, &conv2d_3_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_3_layer, 3,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_3x3_sssa8_ch,
  &conv2d_3_chain,
  NULL, &pool_4_layer, AI_STATIC, 
  .groups = 8, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_3_pad_before_value_data[] = { -128 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_3_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_3_pad_before_value_data, conv2d_3_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_3_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_3_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_3_pad_before_layer, 3,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_3_pad_before_chain,
  NULL, &conv2d_3_layer, AI_STATIC, 
  .value = &conv2d_3_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 0, 0, 2, 2), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_2_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_2_weights, &conv2d_2_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_2_scratch0, &conv2d_2_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_2_layer, 2,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_2_chain,
  NULL, &conv2d_3_pad_before_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_1_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conversion_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_1_weights, &conv2d_1_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_1_scratch0, &conv2d_1_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_1_layer, 1,
  OPTIMIZED_CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_rgb_sssa8_ch,
  &conv2d_1_chain,
  NULL, &conv2d_2_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conversion_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &serving_default_input_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conversion_0_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conversion_0_layer, 0,
  NL_TYPE, 0x0, NULL,
  nl, node_convert_integer,
  &conversion_0_chain,
  NULL, &conv2d_1_layer, AI_STATIC, 
)


#if (AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 687248, 1, 1),
    687248, NULL, NULL),
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 156600, 1, 1),
    156600, NULL, NULL),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_IN_NUM, &serving_default_input_10_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_OUT_NUM, &conversion_102_output),
  &conversion_0_layer, 0, NULL)

#else

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 687248, 1, 1),
      687248, NULL, NULL)
  ),
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 156600, 1, 1),
      156600, NULL, NULL)
  ),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_IN_NUM, &serving_default_input_10_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_OUT_NUM, &conversion_102_output),
  &conversion_0_layer, 0, NULL)

#endif	/*(AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)*/


/******************************************************************************/
AI_DECLARE_STATIC
ai_bool network_configure_activations(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  if (ai_platform_get_activations_map(g_network_activations_map, 1, params)) {
    /* Updating activations (byte) offsets */
    
    serving_default_input_10_output_array.data = AI_PTR(g_network_activations_map[0] + 5420);
    serving_default_input_10_output_array.data_start = AI_PTR(g_network_activations_map[0] + 5420);
    
    conversion_0_output_array.data = AI_PTR(g_network_activations_map[0] + 5416);
    conversion_0_output_array.data_start = AI_PTR(g_network_activations_map[0] + 5416);
    
    conv2d_1_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 155948);
    conv2d_1_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 155948);
    
    conv2d_1_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 4512);
    conv2d_1_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 4512);
    
    conv2d_1_output_array.data = AI_PTR(g_network_activations_map[0] + 4512);
    conv2d_1_output_array.data_start = AI_PTR(g_network_activations_map[0] + 4512);
    
    conv2d_2_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 104864);
    conv2d_2_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 104864);
    
    conv2d_2_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 3616);
    conv2d_2_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 3616);
    
    conv2d_2_output_array.data = AI_PTR(g_network_activations_map[0] + 3616);
    conv2d_2_output_array.data_start = AI_PTR(g_network_activations_map[0] + 3616);
    
    conv2d_3_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_3_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_3_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 103968);
    conv2d_3_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 103968);
    
    conv2d_3_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 104268);
    conv2d_3_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 104268);
    
    conv2d_3_output_array.data = AI_PTR(g_network_activations_map[0] + 129356);
    conv2d_3_output_array.data_start = AI_PTR(g_network_activations_map[0] + 129356);
    
    pool_4_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_4_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_5_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 8);
    conv2d_5_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 8);
    
    conv2d_5_output_array.data = AI_PTR(g_network_activations_map[0] + 60);
    conv2d_5_output_array.data_start = AI_PTR(g_network_activations_map[0] + 60);
    
    conv2d_6_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 64);
    conv2d_6_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 64);
    
    conv2d_6_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_6_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_7_output_array.data = AI_PTR(g_network_activations_map[0] + 8);
    eltwise_7_output_array.data_start = AI_PTR(g_network_activations_map[0] + 8);
    
    eltwise_9_output_array.data = AI_PTR(g_network_activations_map[0] + 16);
    eltwise_9_output_array.data_start = AI_PTR(g_network_activations_map[0] + 16);
    
    conv2d_10_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 25104);
    conv2d_10_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 25104);
    
    conv2d_10_output_array.data = AI_PTR(g_network_activations_map[0] + 131512);
    conv2d_10_output_array.data_start = AI_PTR(g_network_activations_map[0] + 131512);
    
    conv2d_11_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_11_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_11_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 28920);
    conv2d_11_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 28920);
    
    conv2d_11_output_array.data = AI_PTR(g_network_activations_map[0] + 28920);
    conv2d_11_output_array.data_start = AI_PTR(g_network_activations_map[0] + 28920);
    
    conv2d_12_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 19800);
    conv2d_12_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 19800);
    
    conv2d_12_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_12_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_12_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 18680);
    conv2d_12_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 18680);
    
    conv2d_12_output_array.data = AI_PTR(g_network_activations_map[0] + 18680);
    conv2d_12_output_array.data_start = AI_PTR(g_network_activations_map[0] + 18680);
    
    conv2d_13_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_13_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_13_output_array.data = AI_PTR(g_network_activations_map[0] + 320);
    conv2d_13_output_array.data_start = AI_PTR(g_network_activations_map[0] + 320);
    
    conv2d_14_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 12864);
    conv2d_14_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 12864);
    
    conv2d_14_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 13408);
    conv2d_14_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 13408);
    
    conv2d_14_output_array.data = AI_PTR(g_network_activations_map[0] + 51040);
    conv2d_14_output_array.data_start = AI_PTR(g_network_activations_map[0] + 51040);
    
    conv2d_15_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 88672);
    conv2d_15_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 88672);
    
    conv2d_15_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 12864);
    conv2d_15_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 12864);
    
    conv2d_15_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 14644);
    conv2d_15_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 14644);
    
    conv2d_15_output_array.data = AI_PTR(g_network_activations_map[0] + 87328);
    conv2d_15_output_array.data_start = AI_PTR(g_network_activations_map[0] + 87328);
    
    conv2d_16_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 12864);
    conv2d_16_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 12864);
    
    conv2d_16_output_array.data = AI_PTR(g_network_activations_map[0] + 13216);
    conv2d_16_output_array.data_start = AI_PTR(g_network_activations_map[0] + 13216);
    
    eltwise_17_output_array.data = AI_PTR(g_network_activations_map[0] + 25760);
    eltwise_17_output_array.data_start = AI_PTR(g_network_activations_map[0] + 25760);
    
    conv2d_18_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_18_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_18_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 38304);
    conv2d_18_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 38304);
    
    conv2d_18_output_array.data = AI_PTR(g_network_activations_map[0] + 75936);
    conv2d_18_output_array.data_start = AI_PTR(g_network_activations_map[0] + 75936);
    
    conv2d_19_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_19_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_19_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 4084);
    conv2d_19_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 4084);
    
    conv2d_19_output_array.data = AI_PTR(g_network_activations_map[0] + 13492);
    conv2d_19_output_array.data_start = AI_PTR(g_network_activations_map[0] + 13492);
    
    pool_20_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_20_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_21_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 48);
    conv2d_21_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 48);
    
    conv2d_21_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 360);
    conv2d_21_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 360);
    
    conv2d_21_output_array.data = AI_PTR(g_network_activations_map[0] + 372);
    conv2d_21_output_array.data_start = AI_PTR(g_network_activations_map[0] + 372);
    
    conv2d_22_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 384);
    conv2d_22_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 384);
    
    conv2d_22_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_22_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_23_output_array.data = AI_PTR(g_network_activations_map[0] + 48);
    eltwise_23_output_array.data_start = AI_PTR(g_network_activations_map[0] + 48);
    
    nl_24_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_24_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_25_output_array.data = AI_PTR(g_network_activations_map[0] + 48);
    eltwise_25_output_array.data_start = AI_PTR(g_network_activations_map[0] + 48);
    
    conv2d_26_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 9456);
    conv2d_26_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 9456);
    
    conv2d_26_output_array.data = AI_PTR(g_network_activations_map[0] + 9888);
    conv2d_26_output_array.data_start = AI_PTR(g_network_activations_map[0] + 9888);
    
    conv2d_27_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_27_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_27_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 14592);
    conv2d_27_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 14592);
    
    conv2d_27_output_array.data = AI_PTR(g_network_activations_map[0] + 38112);
    conv2d_27_output_array.data_start = AI_PTR(g_network_activations_map[0] + 38112);
    
    conv2d_28_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 14592);
    conv2d_28_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 14592);
    
    conv2d_28_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 61632);
    conv2d_28_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 61632);
    
    conv2d_28_output_array.data = AI_PTR(g_network_activations_map[0] + 85152);
    conv2d_28_output_array.data_start = AI_PTR(g_network_activations_map[0] + 85152);
    
    pool_29_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_29_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_30_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 120);
    conv2d_30_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 120);
    
    conv2d_30_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 900);
    conv2d_30_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 900);
    
    conv2d_30_output_array.data = AI_PTR(g_network_activations_map[0] + 932);
    conv2d_30_output_array.data_start = AI_PTR(g_network_activations_map[0] + 932);
    
    conv2d_31_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 964);
    conv2d_31_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 964);
    
    conv2d_31_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_31_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_32_output_array.data = AI_PTR(g_network_activations_map[0] + 120);
    eltwise_32_output_array.data_start = AI_PTR(g_network_activations_map[0] + 120);
    
    nl_33_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_33_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_34_output_array.data = AI_PTR(g_network_activations_map[0] + 14592);
    eltwise_34_output_array.data_start = AI_PTR(g_network_activations_map[0] + 14592);
    
    conv2d_35_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_35_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_35_output_array.data = AI_PTR(g_network_activations_map[0] + 720);
    conv2d_35_output_array.data_start = AI_PTR(g_network_activations_map[0] + 720);
    
    eltwise_36_output_array.data = AI_PTR(g_network_activations_map[0] + 14592);
    eltwise_36_output_array.data_start = AI_PTR(g_network_activations_map[0] + 14592);
    
    conv2d_37_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_37_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_37_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 19296);
    conv2d_37_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 19296);
    
    conv2d_37_output_array.data = AI_PTR(g_network_activations_map[0] + 42816);
    conv2d_37_output_array.data_start = AI_PTR(g_network_activations_map[0] + 42816);
    
    conv2d_38_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_38_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_38_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 19296);
    conv2d_38_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 19296);
    
    conv2d_38_output_array.data = AI_PTR(g_network_activations_map[0] + 66336);
    conv2d_38_output_array.data_start = AI_PTR(g_network_activations_map[0] + 66336);
    
    pool_39_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_39_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_40_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 120);
    conv2d_40_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 120);
    
    conv2d_40_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 900);
    conv2d_40_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 900);
    
    conv2d_40_output_array.data = AI_PTR(g_network_activations_map[0] + 932);
    conv2d_40_output_array.data_start = AI_PTR(g_network_activations_map[0] + 932);
    
    conv2d_41_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 964);
    conv2d_41_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 964);
    
    conv2d_41_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_41_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_42_output_array.data = AI_PTR(g_network_activations_map[0] + 120);
    eltwise_42_output_array.data_start = AI_PTR(g_network_activations_map[0] + 120);
    
    nl_43_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_43_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_44_output_array.data = AI_PTR(g_network_activations_map[0] + 19296);
    eltwise_44_output_array.data_start = AI_PTR(g_network_activations_map[0] + 19296);
    
    conv2d_45_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_45_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_45_output_array.data = AI_PTR(g_network_activations_map[0] + 720);
    conv2d_45_output_array.data_start = AI_PTR(g_network_activations_map[0] + 720);
    
    eltwise_46_output_array.data = AI_PTR(g_network_activations_map[0] + 5424);
    eltwise_46_output_array.data_start = AI_PTR(g_network_activations_map[0] + 5424);
    
    conv2d_47_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_47_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_47_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 10128);
    conv2d_47_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 10128);
    
    conv2d_47_output_array.data = AI_PTR(g_network_activations_map[0] + 22672);
    conv2d_47_output_array.data_start = AI_PTR(g_network_activations_map[0] + 22672);
    
    conv2d_48_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 10128);
    conv2d_48_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 10128);
    
    conv2d_48_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 35216);
    conv2d_48_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 35216);
    
    conv2d_48_output_array.data = AI_PTR(g_network_activations_map[0] + 47760);
    conv2d_48_output_array.data_start = AI_PTR(g_network_activations_map[0] + 47760);
    
    pool_49_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_49_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_50_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 64);
    conv2d_50_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 64);
    
    conv2d_50_output_array.data = AI_PTR(g_network_activations_map[0] + 480);
    conv2d_50_output_array.data_start = AI_PTR(g_network_activations_map[0] + 480);
    
    conv2d_51_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 496);
    conv2d_51_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 496);
    
    conv2d_51_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_51_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_52_output_array.data = AI_PTR(g_network_activations_map[0] + 64);
    eltwise_52_output_array.data_start = AI_PTR(g_network_activations_map[0] + 64);
    
    nl_53_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_53_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_54_output_array.data = AI_PTR(g_network_activations_map[0] + 10128);
    eltwise_54_output_array.data_start = AI_PTR(g_network_activations_map[0] + 10128);
    
    conv2d_55_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_55_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_55_output_array.data = AI_PTR(g_network_activations_map[0] + 496);
    conv2d_55_output_array.data_start = AI_PTR(g_network_activations_map[0] + 496);
    
    eltwise_56_output_array.data = AI_PTR(g_network_activations_map[0] + 10128);
    eltwise_56_output_array.data_start = AI_PTR(g_network_activations_map[0] + 10128);
    
    conv2d_57_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_57_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_57_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 14832);
    conv2d_57_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 14832);
    
    conv2d_57_output_array.data = AI_PTR(g_network_activations_map[0] + 28944);
    conv2d_57_output_array.data_start = AI_PTR(g_network_activations_map[0] + 28944);
    
    conv2d_58_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_58_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_58_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 14832);
    conv2d_58_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 14832);
    
    conv2d_58_output_array.data = AI_PTR(g_network_activations_map[0] + 43056);
    conv2d_58_output_array.data_start = AI_PTR(g_network_activations_map[0] + 43056);
    
    pool_59_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_59_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_60_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 72);
    conv2d_60_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 72);
    
    conv2d_60_output_array.data = AI_PTR(g_network_activations_map[0] + 540);
    conv2d_60_output_array.data_start = AI_PTR(g_network_activations_map[0] + 540);
    
    conv2d_61_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 560);
    conv2d_61_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 560);
    
    conv2d_61_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_61_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_62_output_array.data = AI_PTR(g_network_activations_map[0] + 72);
    eltwise_62_output_array.data_start = AI_PTR(g_network_activations_map[0] + 72);
    
    nl_63_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_63_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_64_output_array.data = AI_PTR(g_network_activations_map[0] + 14832);
    eltwise_64_output_array.data_start = AI_PTR(g_network_activations_map[0] + 14832);
    
    conv2d_65_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_65_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_65_output_array.data = AI_PTR(g_network_activations_map[0] + 528);
    conv2d_65_output_array.data_start = AI_PTR(g_network_activations_map[0] + 528);
    
    eltwise_66_output_array.data = AI_PTR(g_network_activations_map[0] + 5232);
    eltwise_66_output_array.data_start = AI_PTR(g_network_activations_map[0] + 5232);
    
    conv2d_67_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_67_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_67_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 9936);
    conv2d_67_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 9936);
    
    conv2d_67_output_array.data = AI_PTR(g_network_activations_map[0] + 38160);
    conv2d_67_output_array.data_start = AI_PTR(g_network_activations_map[0] + 38160);
    
    conv2d_68_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_68_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_68_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 12244);
    conv2d_68_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 12244);
    
    conv2d_68_output_array.data = AI_PTR(g_network_activations_map[0] + 19300);
    conv2d_68_output_array.data_start = AI_PTR(g_network_activations_map[0] + 19300);
    
    pool_69_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_69_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_70_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 144);
    conv2d_70_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 144);
    
    conv2d_70_output_array.data = AI_PTR(g_network_activations_map[0] + 1080);
    conv2d_70_output_array.data_start = AI_PTR(g_network_activations_map[0] + 1080);
    
    conv2d_71_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 1116);
    conv2d_71_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 1116);
    
    conv2d_71_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_71_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_72_output_array.data = AI_PTR(g_network_activations_map[0] + 144);
    eltwise_72_output_array.data_start = AI_PTR(g_network_activations_map[0] + 144);
    
    nl_73_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_73_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_74_output_array.data = AI_PTR(g_network_activations_map[0] + 144);
    eltwise_74_output_array.data_start = AI_PTR(g_network_activations_map[0] + 144);
    
    conv2d_75_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 7200);
    conv2d_75_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 7200);
    
    conv2d_75_output_array.data = AI_PTR(g_network_activations_map[0] + 8256);
    conv2d_75_output_array.data_start = AI_PTR(g_network_activations_map[0] + 8256);
    
    conv2d_76_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_76_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_76_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 10608);
    conv2d_76_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 10608);
    
    conv2d_76_output_array.data = AI_PTR(g_network_activations_map[0] + 24720);
    conv2d_76_output_array.data_start = AI_PTR(g_network_activations_map[0] + 24720);
    
    conv2d_77_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 38832);
    conv2d_77_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 38832);
    
    conv2d_77_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 10608);
    conv2d_77_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 10608);
    
    conv2d_77_output_array.data = AI_PTR(g_network_activations_map[0] + 63316);
    conv2d_77_output_array.data_start = AI_PTR(g_network_activations_map[0] + 63316);
    
    pool_78_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_78_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_79_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 288);
    conv2d_79_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 288);
    
    conv2d_79_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 2160);
    conv2d_79_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 2160);
    
    conv2d_79_output_array.data = AI_PTR(g_network_activations_map[0] + 2232);
    conv2d_79_output_array.data_start = AI_PTR(g_network_activations_map[0] + 2232);
    
    conv2d_80_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 2304);
    conv2d_80_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 2304);
    
    conv2d_80_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_80_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_81_output_array.data = AI_PTR(g_network_activations_map[0] + 288);
    eltwise_81_output_array.data_start = AI_PTR(g_network_activations_map[0] + 288);
    
    nl_82_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_82_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_83_output_array.data = AI_PTR(g_network_activations_map[0] + 10608);
    eltwise_83_output_array.data_start = AI_PTR(g_network_activations_map[0] + 10608);
    
    conv2d_84_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_84_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_84_output_array.data = AI_PTR(g_network_activations_map[0] + 1632);
    conv2d_84_output_array.data_start = AI_PTR(g_network_activations_map[0] + 1632);
    
    eltwise_85_output_array.data = AI_PTR(g_network_activations_map[0] + 3984);
    eltwise_85_output_array.data_start = AI_PTR(g_network_activations_map[0] + 3984);
    
    conv2d_86_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_86_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_86_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 6336);
    conv2d_86_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 6336);
    
    conv2d_86_output_array.data = AI_PTR(g_network_activations_map[0] + 20448);
    conv2d_86_output_array.data_start = AI_PTR(g_network_activations_map[0] + 20448);
    
    conv2d_87_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 34560);
    conv2d_87_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 34560);
    
    conv2d_87_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 6336);
    conv2d_87_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 6336);
    
    conv2d_87_output_array.data = AI_PTR(g_network_activations_map[0] + 59044);
    conv2d_87_output_array.data_start = AI_PTR(g_network_activations_map[0] + 59044);
    
    pool_88_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_88_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_89_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 288);
    conv2d_89_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 288);
    
    conv2d_89_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 2160);
    conv2d_89_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 2160);
    
    conv2d_89_output_array.data = AI_PTR(g_network_activations_map[0] + 2232);
    conv2d_89_output_array.data_start = AI_PTR(g_network_activations_map[0] + 2232);
    
    conv2d_90_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 6336);
    conv2d_90_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 6336);
    
    conv2d_90_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_90_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_91_output_array.data = AI_PTR(g_network_activations_map[0] + 288);
    eltwise_91_output_array.data_start = AI_PTR(g_network_activations_map[0] + 288);
    
    nl_92_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_92_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_93_output_array.data = AI_PTR(g_network_activations_map[0] + 6336);
    eltwise_93_output_array.data_start = AI_PTR(g_network_activations_map[0] + 6336);
    
    conv2d_94_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_94_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_94_output_array.data = AI_PTR(g_network_activations_map[0] + 1632);
    conv2d_94_output_array.data_start = AI_PTR(g_network_activations_map[0] + 1632);
    
    eltwise_95_output_array.data = AI_PTR(g_network_activations_map[0] + 6336);
    eltwise_95_output_array.data_start = AI_PTR(g_network_activations_map[0] + 6336);
    
    conv2d_96_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_96_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_96_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 8688);
    conv2d_96_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 8688);
    
    conv2d_96_output_array.data = AI_PTR(g_network_activations_map[0] + 22800);
    conv2d_96_output_array.data_start = AI_PTR(g_network_activations_map[0] + 22800);
    
    pool_97_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_97_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_98_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 288);
    conv2d_98_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 288);
    
    conv2d_98_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 14240);
    conv2d_98_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 14240);
    
    conv2d_98_output_array.data = AI_PTR(g_network_activations_map[0] + 15520);
    conv2d_98_output_array.data_start = AI_PTR(g_network_activations_map[0] + 15520);
    
    conv2d_99_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_99_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_99_output_array.data = AI_PTR(g_network_activations_map[0] + 5512);
    conv2d_99_output_array.data_start = AI_PTR(g_network_activations_map[0] + 5512);
    
    nl_101_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_101_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    nl_101_output_array.data = AI_PTR(g_network_activations_map[0] + 156);
    nl_101_output_array.data_start = AI_PTR(g_network_activations_map[0] + 156);
    
    conversion_102_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conversion_102_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_ACTIVATIONS);
  return false;
}



/******************************************************************************/
AI_DECLARE_STATIC
ai_bool network_configure_weights(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  if (ai_platform_get_weights_map(g_network_weights_map, 1, params)) {
    /* Updating weights (byte) offsets */
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array.data = AI_PTR(g_network_weights_map[0] + 0);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array.data_start = AI_PTR(g_network_weights_map[0] + 0);
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array.data = AI_PTR(g_network_weights_map[0] + 4);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array.data_start = AI_PTR(g_network_weights_map[0] + 4);
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array.data = AI_PTR(g_network_weights_map[0] + 8);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array.data_start = AI_PTR(g_network_weights_map[0] + 8);
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array.data = AI_PTR(g_network_weights_map[0] + 12);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array.data_start = AI_PTR(g_network_weights_map[0] + 12);
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array.data = AI_PTR(g_network_weights_map[0] + 16);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array.data_start = AI_PTR(g_network_weights_map[0] + 16);
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array.data = AI_PTR(g_network_weights_map[0] + 20);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array.data_start = AI_PTR(g_network_weights_map[0] + 20);
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array.data = AI_PTR(g_network_weights_map[0] + 24);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array.data_start = AI_PTR(g_network_weights_map[0] + 24);
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array.data = AI_PTR(g_network_weights_map[0] + 28);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array.data_start = AI_PTR(g_network_weights_map[0] + 28);
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array.data = AI_PTR(g_network_weights_map[0] + 32);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array.data_start = AI_PTR(g_network_weights_map[0] + 32);
    
    conv2d_1_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_1_weights_array.data = AI_PTR(g_network_weights_map[0] + 36);
    conv2d_1_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 36);
    
    conv2d_1_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_1_bias_array.data = AI_PTR(g_network_weights_map[0] + 252);
    conv2d_1_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 252);
    
    conv2d_2_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_2_weights_array.data = AI_PTR(g_network_weights_map[0] + 284);
    conv2d_2_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 284);
    
    conv2d_2_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_2_bias_array.data = AI_PTR(g_network_weights_map[0] + 348);
    conv2d_2_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 348);
    
    conv2d_3_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_3_weights_array.data = AI_PTR(g_network_weights_map[0] + 380);
    conv2d_3_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 380);
    
    conv2d_3_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_3_bias_array.data = AI_PTR(g_network_weights_map[0] + 452);
    conv2d_3_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 452);
    
    conv2d_5_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_5_weights_array.data = AI_PTR(g_network_weights_map[0] + 484);
    conv2d_5_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 484);
    
    conv2d_5_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_5_bias_array.data = AI_PTR(g_network_weights_map[0] + 500);
    conv2d_5_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 500);
    
    conv2d_6_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_6_weights_array.data = AI_PTR(g_network_weights_map[0] + 508);
    conv2d_6_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 508);
    
    conv2d_6_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_6_bias_array.data = AI_PTR(g_network_weights_map[0] + 524);
    conv2d_6_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 524);
    
    conv2d_10_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_10_weights_array.data = AI_PTR(g_network_weights_map[0] + 556);
    conv2d_10_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 556);
    
    conv2d_10_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_10_bias_array.data = AI_PTR(g_network_weights_map[0] + 620);
    conv2d_10_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 620);
    
    conv2d_11_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_11_weights_array.data = AI_PTR(g_network_weights_map[0] + 652);
    conv2d_11_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 652);
    
    conv2d_11_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_11_bias_array.data = AI_PTR(g_network_weights_map[0] + 972);
    conv2d_11_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 972);
    
    conv2d_12_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_12_weights_array.data = AI_PTR(g_network_weights_map[0] + 1132);
    conv2d_12_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 1132);
    
    conv2d_12_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_12_bias_array.data = AI_PTR(g_network_weights_map[0] + 1492);
    conv2d_12_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 1492);
    
    conv2d_13_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_13_weights_array.data = AI_PTR(g_network_weights_map[0] + 1652);
    conv2d_13_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 1652);
    
    conv2d_13_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_13_bias_array.data = AI_PTR(g_network_weights_map[0] + 2292);
    conv2d_13_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 2292);
    
    conv2d_14_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_14_weights_array.data = AI_PTR(g_network_weights_map[0] + 2356);
    conv2d_14_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 2356);
    
    conv2d_14_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_14_bias_array.data = AI_PTR(g_network_weights_map[0] + 3124);
    conv2d_14_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 3124);
    
    conv2d_15_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_15_weights_array.data = AI_PTR(g_network_weights_map[0] + 3316);
    conv2d_15_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 3316);
    
    conv2d_15_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_15_bias_array.data = AI_PTR(g_network_weights_map[0] + 3748);
    conv2d_15_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 3748);
    
    conv2d_16_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_16_weights_array.data = AI_PTR(g_network_weights_map[0] + 3940);
    conv2d_16_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 3940);
    
    conv2d_16_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_16_bias_array.data = AI_PTR(g_network_weights_map[0] + 4708);
    conv2d_16_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 4708);
    
    conv2d_18_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_18_weights_array.data = AI_PTR(g_network_weights_map[0] + 4772);
    conv2d_18_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 4772);
    
    conv2d_18_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_18_bias_array.data = AI_PTR(g_network_weights_map[0] + 5540);
    conv2d_18_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 5540);
    
    conv2d_19_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_19_weights_array.data = AI_PTR(g_network_weights_map[0] + 5732);
    conv2d_19_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 5732);
    
    conv2d_19_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_19_bias_array.data = AI_PTR(g_network_weights_map[0] + 6932);
    conv2d_19_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 6932);
    
    conv2d_21_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_21_weights_array.data = AI_PTR(g_network_weights_map[0] + 7124);
    conv2d_21_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 7124);
    
    conv2d_21_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_21_bias_array.data = AI_PTR(g_network_weights_map[0] + 7700);
    conv2d_21_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 7700);
    
    conv2d_22_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_22_weights_array.data = AI_PTR(g_network_weights_map[0] + 7748);
    conv2d_22_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 7748);
    
    conv2d_22_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_22_bias_array.data = AI_PTR(g_network_weights_map[0] + 8324);
    conv2d_22_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 8324);
    
    conv2d_26_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_26_weights_array.data = AI_PTR(g_network_weights_map[0] + 8516);
    conv2d_26_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 8516);
    
    conv2d_26_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_26_bias_array.data = AI_PTR(g_network_weights_map[0] + 9668);
    conv2d_26_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 9668);
    
    conv2d_27_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_27_weights_array.data = AI_PTR(g_network_weights_map[0] + 9764);
    conv2d_27_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 9764);
    
    conv2d_27_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_27_bias_array.data = AI_PTR(g_network_weights_map[0] + 12644);
    conv2d_27_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 12644);
    
    conv2d_28_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_28_weights_array.data = AI_PTR(g_network_weights_map[0] + 13124);
    conv2d_28_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 13124);
    
    conv2d_28_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_28_bias_array.data = AI_PTR(g_network_weights_map[0] + 16124);
    conv2d_28_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 16124);
    
    conv2d_30_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_30_weights_array.data = AI_PTR(g_network_weights_map[0] + 16604);
    conv2d_30_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 16604);
    
    conv2d_30_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_30_bias_array.data = AI_PTR(g_network_weights_map[0] + 20204);
    conv2d_30_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 20204);
    
    conv2d_31_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_31_weights_array.data = AI_PTR(g_network_weights_map[0] + 20324);
    conv2d_31_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 20324);
    
    conv2d_31_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_31_bias_array.data = AI_PTR(g_network_weights_map[0] + 23924);
    conv2d_31_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 23924);
    
    conv2d_35_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_35_weights_array.data = AI_PTR(g_network_weights_map[0] + 24404);
    conv2d_35_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 24404);
    
    conv2d_35_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_35_bias_array.data = AI_PTR(g_network_weights_map[0] + 27284);
    conv2d_35_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 27284);
    
    conv2d_37_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_37_weights_array.data = AI_PTR(g_network_weights_map[0] + 27380);
    conv2d_37_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 27380);
    
    conv2d_37_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_37_bias_array.data = AI_PTR(g_network_weights_map[0] + 30260);
    conv2d_37_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 30260);
    
    conv2d_38_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_38_weights_array.data = AI_PTR(g_network_weights_map[0] + 30740);
    conv2d_38_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 30740);
    
    conv2d_38_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_38_bias_array.data = AI_PTR(g_network_weights_map[0] + 33740);
    conv2d_38_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 33740);
    
    conv2d_40_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_40_weights_array.data = AI_PTR(g_network_weights_map[0] + 34220);
    conv2d_40_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 34220);
    
    conv2d_40_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_40_bias_array.data = AI_PTR(g_network_weights_map[0] + 37820);
    conv2d_40_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 37820);
    
    conv2d_41_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_41_weights_array.data = AI_PTR(g_network_weights_map[0] + 37940);
    conv2d_41_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 37940);
    
    conv2d_41_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_41_bias_array.data = AI_PTR(g_network_weights_map[0] + 41540);
    conv2d_41_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 41540);
    
    conv2d_45_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_45_weights_array.data = AI_PTR(g_network_weights_map[0] + 42020);
    conv2d_45_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 42020);
    
    conv2d_45_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_45_bias_array.data = AI_PTR(g_network_weights_map[0] + 44900);
    conv2d_45_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 44900);
    
    conv2d_47_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_47_weights_array.data = AI_PTR(g_network_weights_map[0] + 44996);
    conv2d_47_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 44996);
    
    conv2d_47_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_47_bias_array.data = AI_PTR(g_network_weights_map[0] + 46532);
    conv2d_47_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 46532);
    
    conv2d_48_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_48_weights_array.data = AI_PTR(g_network_weights_map[0] + 46788);
    conv2d_48_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 46788);
    
    conv2d_48_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_48_bias_array.data = AI_PTR(g_network_weights_map[0] + 48388);
    conv2d_48_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 48388);
    
    conv2d_50_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_50_weights_array.data = AI_PTR(g_network_weights_map[0] + 48644);
    conv2d_50_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 48644);
    
    conv2d_50_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_50_bias_array.data = AI_PTR(g_network_weights_map[0] + 49668);
    conv2d_50_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 49668);
    
    conv2d_51_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_51_weights_array.data = AI_PTR(g_network_weights_map[0] + 49732);
    conv2d_51_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 49732);
    
    conv2d_51_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_51_bias_array.data = AI_PTR(g_network_weights_map[0] + 50756);
    conv2d_51_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 50756);
    
    conv2d_55_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_55_weights_array.data = AI_PTR(g_network_weights_map[0] + 51012);
    conv2d_55_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 51012);
    
    conv2d_55_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_55_bias_array.data = AI_PTR(g_network_weights_map[0] + 52548);
    conv2d_55_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 52548);
    
    conv2d_57_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_57_weights_array.data = AI_PTR(g_network_weights_map[0] + 52644);
    conv2d_57_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 52644);
    
    conv2d_57_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_57_bias_array.data = AI_PTR(g_network_weights_map[0] + 54372);
    conv2d_57_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 54372);
    
    conv2d_58_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_58_weights_array.data = AI_PTR(g_network_weights_map[0] + 54660);
    conv2d_58_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 54660);
    
    conv2d_58_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_58_bias_array.data = AI_PTR(g_network_weights_map[0] + 56460);
    conv2d_58_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 56460);
    
    conv2d_60_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_60_weights_array.data = AI_PTR(g_network_weights_map[0] + 56748);
    conv2d_60_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 56748);
    
    conv2d_60_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_60_bias_array.data = AI_PTR(g_network_weights_map[0] + 58044);
    conv2d_60_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 58044);
    
    conv2d_61_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_61_weights_array.data = AI_PTR(g_network_weights_map[0] + 58116);
    conv2d_61_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 58116);
    
    conv2d_61_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_61_bias_array.data = AI_PTR(g_network_weights_map[0] + 59412);
    conv2d_61_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 59412);
    
    conv2d_65_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_65_weights_array.data = AI_PTR(g_network_weights_map[0] + 59700);
    conv2d_65_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 59700);
    
    conv2d_65_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_65_bias_array.data = AI_PTR(g_network_weights_map[0] + 61428);
    conv2d_65_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 61428);
    
    conv2d_67_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_67_weights_array.data = AI_PTR(g_network_weights_map[0] + 61524);
    conv2d_67_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 61524);
    
    conv2d_67_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_67_bias_array.data = AI_PTR(g_network_weights_map[0] + 64980);
    conv2d_67_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 64980);
    
    conv2d_68_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_68_weights_array.data = AI_PTR(g_network_weights_map[0] + 65556);
    conv2d_68_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 65556);
    
    conv2d_68_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_68_bias_array.data = AI_PTR(g_network_weights_map[0] + 69156);
    conv2d_68_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 69156);
    
    conv2d_70_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_70_weights_array.data = AI_PTR(g_network_weights_map[0] + 69732);
    conv2d_70_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 69732);
    
    conv2d_70_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_70_bias_array.data = AI_PTR(g_network_weights_map[0] + 74916);
    conv2d_70_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 74916);
    
    conv2d_71_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_71_weights_array.data = AI_PTR(g_network_weights_map[0] + 75060);
    conv2d_71_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 75060);
    
    conv2d_71_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_71_bias_array.data = AI_PTR(g_network_weights_map[0] + 80244);
    conv2d_71_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 80244);
    
    conv2d_75_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_75_weights_array.data = AI_PTR(g_network_weights_map[0] + 80820);
    conv2d_75_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 80820);
    
    conv2d_75_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_75_bias_array.data = AI_PTR(g_network_weights_map[0] + 87732);
    conv2d_75_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 87732);
    
    conv2d_76_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_76_weights_array.data = AI_PTR(g_network_weights_map[0] + 87924);
    conv2d_76_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 87924);
    
    conv2d_76_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_76_bias_array.data = AI_PTR(g_network_weights_map[0] + 101748);
    conv2d_76_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 101748);
    
    conv2d_77_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_77_weights_array.data = AI_PTR(g_network_weights_map[0] + 102900);
    conv2d_77_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 102900);
    
    conv2d_77_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_77_bias_array.data = AI_PTR(g_network_weights_map[0] + 110100);
    conv2d_77_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 110100);
    
    conv2d_79_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_79_weights_array.data = AI_PTR(g_network_weights_map[0] + 111252);
    conv2d_79_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 111252);
    
    conv2d_79_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_79_bias_array.data = AI_PTR(g_network_weights_map[0] + 131988);
    conv2d_79_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 131988);
    
    conv2d_80_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_80_weights_array.data = AI_PTR(g_network_weights_map[0] + 132276);
    conv2d_80_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 132276);
    
    conv2d_80_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_80_bias_array.data = AI_PTR(g_network_weights_map[0] + 153012);
    conv2d_80_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 153012);
    
    conv2d_84_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_84_weights_array.data = AI_PTR(g_network_weights_map[0] + 154164);
    conv2d_84_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 154164);
    
    conv2d_84_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_84_bias_array.data = AI_PTR(g_network_weights_map[0] + 167988);
    conv2d_84_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 167988);
    
    conv2d_86_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_86_weights_array.data = AI_PTR(g_network_weights_map[0] + 168180);
    conv2d_86_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 168180);
    
    conv2d_86_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_86_bias_array.data = AI_PTR(g_network_weights_map[0] + 182004);
    conv2d_86_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 182004);
    
    conv2d_87_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_87_weights_array.data = AI_PTR(g_network_weights_map[0] + 183156);
    conv2d_87_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 183156);
    
    conv2d_87_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_87_bias_array.data = AI_PTR(g_network_weights_map[0] + 190356);
    conv2d_87_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 190356);
    
    conv2d_89_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_89_weights_array.data = AI_PTR(g_network_weights_map[0] + 191508);
    conv2d_89_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 191508);
    
    conv2d_89_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_89_bias_array.data = AI_PTR(g_network_weights_map[0] + 212244);
    conv2d_89_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 212244);
    
    conv2d_90_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_90_weights_array.data = AI_PTR(g_network_weights_map[0] + 212532);
    conv2d_90_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 212532);
    
    conv2d_90_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_90_bias_array.data = AI_PTR(g_network_weights_map[0] + 233268);
    conv2d_90_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 233268);
    
    conv2d_94_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_94_weights_array.data = AI_PTR(g_network_weights_map[0] + 234420);
    conv2d_94_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 234420);
    
    conv2d_94_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_94_bias_array.data = AI_PTR(g_network_weights_map[0] + 248244);
    conv2d_94_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 248244);
    
    conv2d_96_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_96_weights_array.data = AI_PTR(g_network_weights_map[0] + 248436);
    conv2d_96_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 248436);
    
    conv2d_96_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_96_bias_array.data = AI_PTR(g_network_weights_map[0] + 262260);
    conv2d_96_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 262260);
    
    conv2d_98_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_98_weights_array.data = AI_PTR(g_network_weights_map[0] + 263412);
    conv2d_98_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 263412);
    
    conv2d_98_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_98_bias_array.data = AI_PTR(g_network_weights_map[0] + 632052);
    conv2d_98_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 632052);
    
    conv2d_99_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_99_weights_array.data = AI_PTR(g_network_weights_map[0] + 637172);
    conv2d_99_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 637172);
    
    conv2d_99_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_99_bias_array.data = AI_PTR(g_network_weights_map[0] + 687092);
    conv2d_99_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 687092);
    
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_WEIGHTS);
  return false;
}


/**  PUBLIC APIs SECTION  *****************************************************/


AI_DEPRECATED
AI_API_ENTRY
ai_bool ai_network_get_info(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_NETWORK_MODEL_NAME,
      .model_signature   = AI_NETWORK_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 20176174,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .params            = AI_STRUCT_INIT,
      .activations       = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x0,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}


AI_API_ENTRY
ai_bool ai_network_get_report(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_NETWORK_MODEL_NAME,
      .model_signature   = AI_NETWORK_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 20176174,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .map_signature     = AI_MAGIC_SIGNATURE,
      .map_weights       = AI_STRUCT_INIT,
      .map_activations   = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x0,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}

AI_API_ENTRY
ai_error ai_network_get_error(ai_handle network)
{
  return ai_platform_network_get_error(network);
}

AI_API_ENTRY
ai_error ai_network_create(
  ai_handle* network, const ai_buffer* network_config)
{
  return ai_platform_network_create(
    network, network_config, 
    &AI_NET_OBJ_INSTANCE,
    AI_TOOLS_API_VERSION_MAJOR, AI_TOOLS_API_VERSION_MINOR, AI_TOOLS_API_VERSION_MICRO);
}

AI_API_ENTRY
ai_error ai_network_create_and_init(
  ai_handle* network, const ai_handle activations[], const ai_handle weights[])
{
    ai_error err;
    ai_network_params params;

    err = ai_network_create(network, AI_NETWORK_DATA_CONFIG);
    if (err.type != AI_ERROR_NONE)
        return err;
    if (ai_network_data_params_get(&params) != true) {
        err = ai_network_get_error(*network);
        return err;
    }
#if defined(AI_NETWORK_DATA_ACTIVATIONS_COUNT)
    if (activations) {
        /* set the addresses of the activations buffers */
        for (int idx=0;idx<params.map_activations.size;idx++)
            AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_activations, idx, activations[idx]);
    }
#endif
#if defined(AI_NETWORK_DATA_WEIGHTS_COUNT)
    if (weights) {
        /* set the addresses of the weight buffers */
        for (int idx=0;idx<params.map_weights.size;idx++)
            AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_weights, idx, weights[idx]);
    }
#endif
    if (ai_network_init(*network, &params) != true) {
        err = ai_network_get_error(*network);
    }
    return err;
}

AI_API_ENTRY
ai_buffer* ai_network_inputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    ((ai_network *)network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_inputs_get(network, n_buffer);
}

AI_API_ENTRY
ai_buffer* ai_network_outputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    ((ai_network *)network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_outputs_get(network, n_buffer);
}

AI_API_ENTRY
ai_handle ai_network_destroy(ai_handle network)
{
  return ai_platform_network_destroy(network);
}

AI_API_ENTRY
ai_bool ai_network_init(
  ai_handle network, const ai_network_params* params)
{
  ai_network* net_ctx = ai_platform_network_init(network, params);
  if (!net_ctx) return false;

  ai_bool ok = true;
  ok &= network_configure_weights(net_ctx, params);
  ok &= network_configure_activations(net_ctx, params);

  ok &= ai_platform_network_post_init(network);

  return ok;
}


AI_API_ENTRY
ai_i32 ai_network_run(
  ai_handle network, const ai_buffer* input, ai_buffer* output)
{
  return ai_platform_network_process(network, input, output);
}

AI_API_ENTRY
ai_i32 ai_network_forward(ai_handle network, const ai_buffer* input)
{
  return ai_platform_network_process(network, input, NULL);
}



#undef AI_NETWORK_MODEL_SIGNATURE
#undef AI_NET_OBJ_INSTANCE
#undef AI_TOOLS_DATE_TIME
#undef AI_TOOLS_COMPILE_TIME

=======
/**
  ******************************************************************************
  * @file    network.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Tue Jul 22 14:54:15 2025
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */


#include "network.h"
#include "network_data.h"

#include "ai_platform.h"
#include "ai_platform_interface.h"
#include "ai_math_helpers.h"

#include "core_common.h"
#include "core_convert.h"

#include "layers.h"



#undef AI_NET_OBJ_INSTANCE
#define AI_NET_OBJ_INSTANCE g_network
 
#undef AI_NETWORK_MODEL_SIGNATURE
#define AI_NETWORK_MODEL_SIGNATURE     "c287274618a83933cfe1e1850d88f567"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Tue Jul 22 14:54:15 2025"

#undef AI_TOOLS_COMPILE_TIME
#define AI_TOOLS_COMPILE_TIME    __DATE__ " " __TIME__

#undef AI_NETWORK_N_BATCHES
#define AI_NETWORK_N_BATCHES         (1)

static ai_ptr g_network_activations_map[1] = AI_C_ARRAY_INIT;
static ai_ptr g_network_weights_map[1] = AI_C_ARRAY_INIT;



/**  Array declarations section  **********************************************/
/* Array#0 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 936, AI_STATIC)
/* Array#1 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_71_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1584, AI_STATIC)
/* Array#2 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_75_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1056, AI_STATIC)
/* Array#3 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3072, AI_STATIC)
/* Array#4 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#5 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_77_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 24481, AI_STATIC)
/* Array#6 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_77_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#7 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1872, AI_STATIC)
/* Array#8 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#9 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_80_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3168, AI_STATIC)
/* Array#10 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_84_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1632, AI_STATIC)
/* Array#11 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_86_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3072, AI_STATIC)
/* Array#12 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_86_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#13 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_87_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 24481, AI_STATIC)
/* Array#14 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_87_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#15 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_89_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1872, AI_STATIC)
/* Array#16 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_89_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#17 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_90_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3168, AI_STATIC)
/* Array#18 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_94_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1632, AI_STATIC)
/* Array#19 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_96_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3072, AI_STATIC)
/* Array#20 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_96_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#21 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13952, AI_STATIC)
/* Array#22 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1280, AI_STATIC)
/* Array#23 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_99_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5510, AI_STATIC)
/* Array#24 */
AI_ARRAY_OBJ_DECLARE(
  nl_101_scratch0_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 39, AI_STATIC)
/* Array#25 */
AI_ARRAY_OBJ_DECLARE(
  serving_default_input_10_output_array, AI_ARRAY_FORMAT_U8|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 150528, AI_STATIC)
/* Array#26 */
AI_ARRAY_OBJ_DECLARE(
  conversion_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 150529, AI_STATIC)
/* Array#27 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#28 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#29 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 103968, AI_STATIC)
/* Array#30 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#31 */
AI_ARRAY_OBJ_DECLARE(
  pool_4_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 8, AI_STATIC)
/* Array#32 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2, AI_STATIC)
/* Array#33 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 8, AI_STATIC)
/* Array#34 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_7_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 8, AI_STATIC)
/* Array#35 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_9_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#36 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#37 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 125440, AI_STATIC)
/* Array#38 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 134560, AI_STATIC)
/* Array#39 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 31360, AI_STATIC)
/* Array#40 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#41 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#42 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_pad_before_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 43200, AI_STATIC)
/* Array#43 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#44 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#45 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_17_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#46 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#47 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9408, AI_STATIC)
/* Array#48 */
AI_ARRAY_OBJ_DECLARE(
  pool_20_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#49 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12, AI_STATIC)
/* Array#50 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#51 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_23_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#52 */
AI_ARRAY_OBJ_DECLARE(
  nl_24_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 48, AI_STATIC)
/* Array#53 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_25_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9408, AI_STATIC)
/* Array#54 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#55 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#56 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#57 */
AI_ARRAY_OBJ_DECLARE(
  pool_29_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#58 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 30, AI_STATIC)
/* Array#59 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#60 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_32_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#61 */
AI_ARRAY_OBJ_DECLARE(
  nl_33_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#62 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_34_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#63 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#64 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_36_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#65 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#66 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#67 */
AI_ARRAY_OBJ_DECLARE(
  pool_39_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#68 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 30, AI_STATIC)
/* Array#69 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#70 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_42_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#71 */
AI_ARRAY_OBJ_DECLARE(
  nl_43_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 120, AI_STATIC)
/* Array#72 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_44_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#73 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#74 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_46_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#75 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#76 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#77 */
AI_ARRAY_OBJ_DECLARE(
  pool_49_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#78 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#79 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#80 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_52_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#81 */
AI_ARRAY_OBJ_DECLARE(
  nl_53_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#82 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_54_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#83 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#84 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_56_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#85 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#86 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#87 */
AI_ARRAY_OBJ_DECLARE(
  pool_59_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#88 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 18, AI_STATIC)
/* Array#89 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#90 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_62_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#91 */
AI_ARRAY_OBJ_DECLARE(
  nl_63_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#92 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_64_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#93 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#94 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_66_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4704, AI_STATIC)
/* Array#95 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)
/* Array#96 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7056, AI_STATIC)
/* Array#97 */
AI_ARRAY_OBJ_DECLARE(
  pool_69_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#98 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 36, AI_STATIC)
/* Array#99 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_71_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#100 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_72_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#101 */
AI_ARRAY_OBJ_DECLARE(
  nl_73_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)
/* Array#102 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_74_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7056, AI_STATIC)
/* Array#103 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_75_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#104 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#105 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_77_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#106 */
AI_ARRAY_OBJ_DECLARE(
  pool_78_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#107 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#108 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_80_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#109 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_81_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#110 */
AI_ARRAY_OBJ_DECLARE(
  nl_82_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#111 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_83_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#112 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_84_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#113 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_85_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#114 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_86_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#115 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_87_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#116 */
AI_ARRAY_OBJ_DECLARE(
  pool_88_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#117 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_89_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#118 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_90_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#119 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_91_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#120 */
AI_ARRAY_OBJ_DECLARE(
  nl_92_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#121 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_93_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#122 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_94_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#123 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_95_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2352, AI_STATIC)
/* Array#124 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_96_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#125 */
AI_ARRAY_OBJ_DECLARE(
  pool_97_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)
/* Array#126 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1280, AI_STATIC)
/* Array#127 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_99_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 39, AI_STATIC)
/* Array#128 */
AI_ARRAY_OBJ_DECLARE(
  nl_101_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 39, AI_STATIC)
/* Array#129 */
AI_ARRAY_OBJ_DECLARE(
  conversion_102_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 39, AI_STATIC)
/* Array#130 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#131 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#132 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#133 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#134 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#135 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#136 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#137 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#138 */
AI_ARRAY_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1, AI_STATIC)
/* Array#139 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 216, AI_STATIC)
/* Array#140 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#141 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#142 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#143 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)
/* Array#144 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#145 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#146 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 2, AI_STATIC)
/* Array#147 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16, AI_STATIC)
/* Array#148 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#149 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)
/* Array#150 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)
/* Array#151 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 320, AI_STATIC)
/* Array#152 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#153 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 360, AI_STATIC)
/* Array#154 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 40, AI_STATIC)
/* Array#155 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 640, AI_STATIC)
/* Array#156 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#157 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 768, AI_STATIC)
/* Array#158 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#159 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 432, AI_STATIC)
/* Array#160 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#161 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 768, AI_STATIC)
/* Array#162 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#163 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 768, AI_STATIC)
/* Array#164 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#165 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1200, AI_STATIC)
/* Array#166 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#167 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 576, AI_STATIC)
/* Array#168 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 12, AI_STATIC)
/* Array#169 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 576, AI_STATIC)
/* Array#170 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#171 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1152, AI_STATIC)
/* Array#172 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#173 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#174 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#175 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3000, AI_STATIC)
/* Array#176 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#177 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#178 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 30, AI_STATIC)
/* Array#179 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#180 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#181 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#182 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#183 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#184 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#185 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3000, AI_STATIC)
/* Array#186 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#187 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#188 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 30, AI_STATIC)
/* Array#189 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#190 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 120, AI_STATIC)
/* Array#191 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2880, AI_STATIC)
/* Array#192 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#193 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#194 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#195 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1600, AI_STATIC)
/* Array#196 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#197 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#198 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)
/* Array#199 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)
/* Array#200 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)
/* Array#201 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#202 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#203 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1728, AI_STATIC)
/* Array#204 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#205 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1800, AI_STATIC)
/* Array#206 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#207 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)
/* Array#208 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 18, AI_STATIC)
/* Array#209 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)
/* Array#210 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#211 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1728, AI_STATIC)
/* Array#212 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 24, AI_STATIC)
/* Array#213 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3456, AI_STATIC)
/* Array#214 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)
/* Array#215 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3600, AI_STATIC)
/* Array#216 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)
/* Array#217 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5184, AI_STATIC)
/* Array#218 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_70_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 36, AI_STATIC)
/* Array#219 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_71_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5184, AI_STATIC)
/* Array#220 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_71_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 144, AI_STATIC)
/* Array#221 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_75_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6912, AI_STATIC)
/* Array#222 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_75_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#223 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#224 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_76_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#225 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_77_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7200, AI_STATIC)
/* Array#226 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_77_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#227 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20736, AI_STATIC)
/* Array#228 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_79_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#229 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_80_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20736, AI_STATIC)
/* Array#230 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_80_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#231 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_84_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#232 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_84_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#233 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_86_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#234 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_86_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#235 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_87_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7200, AI_STATIC)
/* Array#236 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_87_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#237 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_89_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20736, AI_STATIC)
/* Array#238 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_89_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 72, AI_STATIC)
/* Array#239 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_90_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 20736, AI_STATIC)
/* Array#240 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_90_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#241 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_94_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#242 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_94_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 48, AI_STATIC)
/* Array#243 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_96_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 13824, AI_STATIC)
/* Array#244 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_96_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 288, AI_STATIC)
/* Array#245 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 368640, AI_STATIC)
/* Array#246 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_98_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 1280, AI_STATIC)
/* Array#247 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_99_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 49920, AI_STATIC)
/* Array#248 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_99_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 39, AI_STATIC)
/* Array#249 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 652, AI_STATIC)
/* Array#250 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#251 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 112, AI_STATIC)
/* Array#252 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)
/* Array#253 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 297, AI_STATIC)
/* Array#254 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)
/* Array#255 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 52, AI_STATIC)
/* Array#256 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 88, AI_STATIC)
/* Array#257 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 112, AI_STATIC)
/* Array#258 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 432, AI_STATIC)
/* Array#259 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 125440, AI_STATIC)
/* Array#260 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1481, AI_STATIC)
/* Array#261 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 31360, AI_STATIC)
/* Array#262 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 320, AI_STATIC)
/* Array#263 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 544, AI_STATIC)
/* Array#264 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_14_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#265 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1777, AI_STATIC)
/* Array#266 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_15_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#267 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_16_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 352, AI_STATIC)
/* Array#268 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 544, AI_STATIC)
/* Array#269 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_18_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 37632, AI_STATIC)
/* Array#270 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4081, AI_STATIC)
/* Array#271 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_19_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 9408, AI_STATIC)
/* Array#272 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 312, AI_STATIC)
/* Array#273 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_21_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12, AI_STATIC)
/* Array#274 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_22_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 528, AI_STATIC)
/* Array#275 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_26_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 432, AI_STATIC)
/* Array#276 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)
/* Array#277 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_27_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#278 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 10201, AI_STATIC)
/* Array#279 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_28_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#280 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 780, AI_STATIC)
/* Array#281 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_30_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 30, AI_STATIC)
/* Array#282 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_31_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1320, AI_STATIC)
/* Array#283 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_35_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 720, AI_STATIC)
/* Array#284 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1296, AI_STATIC)
/* Array#285 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_37_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#286 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 10201, AI_STATIC)
/* Array#287 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_38_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 23520, AI_STATIC)
/* Array#288 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 780, AI_STATIC)
/* Array#289 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_40_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 30, AI_STATIC)
/* Array#290 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_41_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1320, AI_STATIC)
/* Array#291 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_45_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 720, AI_STATIC)
/* Array#292 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 736, AI_STATIC)
/* Array#293 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_47_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#294 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 5441, AI_STATIC)
/* Array#295 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_48_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)
/* Array#296 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_50_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 416, AI_STATIC)
/* Array#297 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_51_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 704, AI_STATIC)
/* Array#298 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_55_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 496, AI_STATIC)
/* Array#299 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 816, AI_STATIC)
/* Array#300 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_57_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#301 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6121, AI_STATIC)
/* Array#302 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_58_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 14112, AI_STATIC)
/* Array#303 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_60_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 468, AI_STATIC)
/* Array#304 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_61_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 792, AI_STATIC)
/* Array#305 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_65_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 528, AI_STATIC)
/* Array#306 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1536, AI_STATIC)
/* Array#307 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_67_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 28224, AI_STATIC)
/* Array#308 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12241, AI_STATIC)
/* Array#309 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_68_scratch1_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 7056, AI_STATIC)
/**  Array metadata declarations section  *************************************/
/* Int quant #0 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #1 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_77_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #2 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_79_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #3 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_86_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #4 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_87_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #5 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_89_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #6 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_96_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #7 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_98_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #8 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(serving_default_input_10_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_U8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007843137718737125f),
    AI_PACK_UINTQ_ZP(127)))

/* Int quant #9 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conversion_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007843137718737125f),
    AI_PACK_INTQ_ZP(-1)))

/* Int quant #10 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #11 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #12 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #13 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #14 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_4_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #15 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.009516200050711632f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #16 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_6_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0031124306842684746f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #17 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_7_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0031124306842684746f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #18 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_9_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.014954746700823307f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #19 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.10332554578781128f),
    AI_PACK_INTQ_ZP(2)))

/* Int quant #20 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #21 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #22 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #23 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08427556604146957f),
    AI_PACK_INTQ_ZP(-9)))

/* Int quant #24 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #25 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_pad_before_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #26 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #27 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.06807182729244232f),
    AI_PACK_INTQ_ZP(5)))

/* Int quant #28 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_17_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.1034516990184784f),
    AI_PACK_INTQ_ZP(-4)))

/* Int quant #29 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #30 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #31 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_20_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #32 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #33 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00526403496041894f),
    AI_PACK_INTQ_ZP(-63)))

/* Int quant #34 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_23_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00526403496041894f),
    AI_PACK_INTQ_ZP(-63)))

/* Int quant #35 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_24_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #36 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_25_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0218984242528677f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #37 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.09420520067214966f),
    AI_PACK_INTQ_ZP(-14)))

/* Int quant #38 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #39 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #40 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_29_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #41 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #42 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_31_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007316198665648699f),
    AI_PACK_INTQ_ZP(-10)))

/* Int quant #43 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_32_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007316198665648699f),
    AI_PACK_INTQ_ZP(-10)))

/* Int quant #44 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_33_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #45 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_34_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #46 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_35_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08340273052453995f),
    AI_PACK_INTQ_ZP(-14)))

/* Int quant #47 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_36_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.1424964815378189f),
    AI_PACK_INTQ_ZP(-2)))

/* Int quant #48 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #49 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #50 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_39_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #51 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #52 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.012257272377610207f),
    AI_PACK_INTQ_ZP(45)))

/* Int quant #53 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_42_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.012257272377610207f),
    AI_PACK_INTQ_ZP(45)))

/* Int quant #54 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_43_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #55 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_44_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #56 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_45_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.07309067249298096f),
    AI_PACK_INTQ_ZP(2)))

/* Int quant #57 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_46_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.17490433156490326f),
    AI_PACK_INTQ_ZP(9)))

/* Int quant #58 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #59 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #60 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_49_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #61 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.02084592543542385f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #62 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_51_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006727815140038729f),
    AI_PACK_INTQ_ZP(-22)))

/* Int quant #63 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_52_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006727815140038729f),
    AI_PACK_INTQ_ZP(-22)))

/* Int quant #64 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_53_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #65 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_54_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #66 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0673380121588707f),
    AI_PACK_INTQ_ZP(19)))

/* Int quant #67 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_56_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.20240196585655212f),
    AI_PACK_INTQ_ZP(5)))

/* Int quant #68 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #69 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_58_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #70 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_59_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #71 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01719767227768898f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #72 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_61_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006357946898788214f),
    AI_PACK_INTQ_ZP(-30)))

/* Int quant #73 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_62_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006357946898788214f),
    AI_PACK_INTQ_ZP(-30)))

/* Int quant #74 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_63_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #75 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_64_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #76 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_65_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.07611342519521713f),
    AI_PACK_INTQ_ZP(-16)))

/* Int quant #77 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_66_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.22713306546211243f),
    AI_PACK_INTQ_ZP(-8)))

/* Int quant #78 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #79 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_68_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #80 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_69_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #81 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_70_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.022326180711388588f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #82 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_71_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007171421777456999f),
    AI_PACK_INTQ_ZP(-12)))

/* Int quant #83 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_72_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007171421777456999f),
    AI_PACK_INTQ_ZP(-12)))

/* Int quant #84 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_73_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #85 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_74_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #86 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_75_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08375091850757599f),
    AI_PACK_INTQ_ZP(-4)))

/* Int quant #87 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #88 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_77_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #89 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_78_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #90 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_79_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #91 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_80_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.011855513788759708f),
    AI_PACK_INTQ_ZP(43)))

/* Int quant #92 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_81_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.011855513788759708f),
    AI_PACK_INTQ_ZP(43)))

/* Int quant #93 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_82_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #94 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_83_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #95 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_84_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.06937107443809509f),
    AI_PACK_INTQ_ZP(4)))

/* Int quant #96 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_85_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.11802709847688675f),
    AI_PACK_INTQ_ZP(21)))

/* Int quant #97 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_86_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #98 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_87_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #99 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_88_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #100 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_89_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #101 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_90_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.015465336851775646f),
    AI_PACK_INTQ_ZP(62)))

/* Int quant #102 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_91_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.015465336851775646f),
    AI_PACK_INTQ_ZP(62)))

/* Int quant #103 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_92_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003921568859368563f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #104 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_93_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #105 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_94_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08162485808134079f),
    AI_PACK_INTQ_ZP(-1)))

/* Int quant #106 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(eltwise_95_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.14292466640472412f),
    AI_PACK_INTQ_ZP(6)))

/* Int quant #107 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_96_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #108 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(pool_97_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.014633315615355968f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #109 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_98_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #110 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_99_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.39035916328430176f),
    AI_PACK_INTQ_ZP(59)))

/* Int quant #111 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(nl_101_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00390625f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #112 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.015465336851775646f),
    AI_PACK_INTQ_ZP(62)))

/* Int quant #113 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.011855513788759708f),
    AI_PACK_INTQ_ZP(43)))

/* Int quant #114 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007171421777456999f),
    AI_PACK_INTQ_ZP(-12)))

/* Int quant #115 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006357946898788214f),
    AI_PACK_INTQ_ZP(-30)))

/* Int quant #116 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006727815140038729f),
    AI_PACK_INTQ_ZP(-22)))

/* Int quant #117 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.012257272377610207f),
    AI_PACK_INTQ_ZP(45)))

/* Int quant #118 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007316198665648699f),
    AI_PACK_INTQ_ZP(-10)))

/* Int quant #119 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00526403496041894f),
    AI_PACK_INTQ_ZP(-63)))

/* Int quant #120 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0031124306842684746f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #121 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01118295919150114f, 0.008753325790166855f, 0.008631238713860512f, 0.005268042907118797f, 0.007194590289145708f, 0.009219306521117687f, 0.007873729802668095f, 0.006087170913815498f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #122 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004305631387978792f, 0.0030547131318598986f, 0.005220004357397556f, 0.004804220050573349f, 0.007399693597108126f, 0.002775711240246892f, 0.007609773427248001f, 0.00929138995707035f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #123 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0041474271565675735f, 0.012005417607724667f, 0.00778148602694273f, 0.010538630187511444f, 0.010073419660329819f, 0.02335343509912491f, 0.002650143578648567f, 0.00860107596963644f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #124 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_5_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 2,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005060416646301746f, 0.006031143479049206f),
    AI_PACK_INTQ_ZP(0, 0)))

/* Int quant #125 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_6_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0014592972584068775f, 0.0008485227590426803f, 0.0009324002894572914f, 0.0010489339474588633f, 0.0011330799898132682f, 0.0005537584656849504f, 0.0010058884508907795f, 0.0011815008474513888f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #126 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_10_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 8,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.013192808255553246f, 0.021107451990246773f, 0.016571981832385063f, 0.020852774381637573f, 0.01746571622788906f, 0.022294312715530396f, 0.017326397821307182f, 0.018320821225643158f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #127 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0043599954806268215f, 0.0035523076076060534f, 0.004461220465600491f, 0.002127958694472909f, 0.002170521765947342f, 0.004885260947048664f, 0.004533338826149702f, 0.004419063217937946f, 0.006688897032290697f, 0.004881509114056826f, 0.003653343301266432f, 0.004035378340631723f, 0.003972338046878576f, 0.0035387249663472176f, 0.004658181685954332f, 0.004411053843796253f, 0.008500476367771626f, 0.0027068699710071087f, 0.0029178885743021965f, 0.008419652469456196f, 0.004685815889388323f, 0.003967515658587217f, 0.0033224006183445454f, 0.0031243956182152033f, 0.003503723768517375f, 0.0029631732031702995f, 0.004468347877264023f, 0.0026863832026720047f, 0.00432465597987175f, 0.005254649091511965f, 0.0017836230108514428f, 0.007343448232859373f, 0.0043928362429142f, 0.003978360909968615f, 0.003173291450366378f, 0.003095229621976614f, 0.004357429686933756f, 0.005006080958992243f, 0.0028197509236633778f, 0.008868798613548279f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #128 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 40,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007767641916871071f, 0.004546359181404114f, 0.013212001882493496f, 0.023797787725925446f, 0.008097581565380096f, 0.017093002796173096f, 0.003542564809322357f, 0.00857746135443449f, 0.007945341989398003f, 0.010323825292289257f, 0.007358484901487827f, 0.013941636309027672f, 0.005242584273219109f, 0.003153052879497409f, 0.0036847300361841917f, 0.003886803751811385f, 0.008254645392298698f, 0.014180110767483711f, 0.017922764644026756f, 0.009615489281713963f, 0.005871511995792389f, 0.004874902777373791f, 0.006710702553391457f, 0.01990339905023575f, 0.007503410801291466f, 0.0033014947548508644f, 0.012800420634448528f, 0.008151357062160969f, 0.010752110742032528f, 0.008597375825047493f, 0.0073792459443211555f, 0.007026338018476963f, 0.006663356442004442f, 0.009672245010733604f, 0.008859825320541859f, 0.01659395359456539f, 0.01063497643917799f, 0.005018414929509163f, 0.008132717572152615f, 0.004993845243006945f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #129 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_13_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003529139794409275f, 0.004593033343553543f, 0.00384613242931664f, 0.0038348031230270863f, 0.005004492588341236f, 0.0038563066627830267f, 0.004414799623191357f, 0.0033316765911877155f, 0.0037441905587911606f, 0.004005192779004574f, 0.003791850758716464f, 0.0031118574552237988f, 0.0033968305215239525f, 0.0036045475862920284f, 0.003933401312679052f, 0.003155832877382636f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #130 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003580791177228093f, 0.0026047148276120424f, 0.001777328667230904f, 0.0012626745738089085f, 0.002238609129562974f, 0.002878814470022917f, 0.0033942058216780424f, 0.0031179434154182673f, 0.0016605192795395851f, 0.00397735508158803f, 0.002863203873857856f, 0.0017278911545872688f, 0.0021949945949018f, 0.0025045268703252077f, 0.0034017583820968866f, 0.0019905492663383484f, 0.0035504871048033237f, 0.003407986368983984f, 0.003157556289806962f, 0.0028964602388441563f, 0.002962761092931032f, 0.002071151277050376f, 0.002638857811689377f, 0.004379738122224808f, 0.0020280492026358843f, 0.0024124004412442446f, 0.003809145651757717f, 0.0015685767866671085f, 0.0031708350870758295f, 0.0025342623703181744f, 0.002799159614369273f, 0.002991355024278164f, 0.00201504398137331f, 0.004700685851275921f, 0.0019062345381826162f, 0.004079355392605066f, 0.0025820829905569553f, 0.0022114396560937166f, 0.003966822754591703f, 0.004522187169641256f, 0.0034522737842053175f, 0.0038045288529247046f, 0.0017083875136449933f, 0.002550884149968624f, 0.003942579496651888f, 0.003476670477539301f, 0.004158816300332546f, 0.0021463779266923666f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #131 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.02408357709646225f, 0.01146015990525484f, 0.011992021463811398f, 0.011005285196006298f, 0.004753153771162033f, 0.010097207501530647f, 0.008655015379190445f, 0.016195032745599747f, 0.007053134497255087f, 0.01002016756683588f, 0.015274743549525738f, 0.017808396369218826f, 0.009865444153547287f, 0.010414172895252705f, 0.006438651122152805f, 0.007025871891528368f, 0.013318290933966637f, 0.005738366860896349f, 0.00958981178700924f, 0.0078949686139822f, 0.01352236233651638f, 0.016537917777895927f, 0.00964596588164568f, 0.01561004389077425f, 0.012477170675992966f, 0.007786410395056009f, 0.005727862473577261f, 0.022886907681822777f, 0.023547306656837463f, 0.015623313374817371f, 0.024933142587542534f, 0.005001583136618137f, 0.0077378153800964355f, 0.009227743372321129f, 0.004358344245702028f, 0.00870787724852562f, 0.01282502245157957f, 0.012887576594948769f, 0.009455892257392406f, 0.007757304236292839f, 0.011119435541331768f, 0.02736647240817547f, 0.00689869187772274f, 0.016284173354506493f, 0.0074537391774356365f, 0.02330273762345314f, 0.003429171396419406f, 0.009656472131609917f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #132 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_16_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0022024286445230246f, 0.0018758262740448117f, 0.0031589101999998093f, 0.002467937069013715f, 0.0022350104991346598f, 0.002304909285157919f, 0.002788884099572897f, 0.001709898468106985f, 0.002034175908192992f, 0.0022129237186163664f, 0.0023127454333007336f, 0.0027592130936682224f, 0.002058925572782755f, 0.002163739874958992f, 0.0037552667781710625f, 0.0022433444391936064f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #133 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0021952870301902294f, 0.0013662195997312665f, 0.0021067182533442974f, 0.0024581251200288534f, 0.0018638524925336242f, 0.0015888083726167679f, 0.0026945373974740505f, 0.0024563795886933804f, 0.001473633456043899f, 0.0026111977640539408f, 0.0019703891593962908f, 0.0010872107231989503f, 0.002182621043175459f, 0.00267750583589077f, 0.0013868353562429547f, 0.0024478351697325706f, 0.003767105285078287f, 0.0010206224396824837f, 0.0016486761160194874f, 0.0023833434097468853f, 0.0021567032672464848f, 0.0028152333106845617f, 0.0025728153996169567f, 0.0026796895544975996f, 0.0018474931130185723f, 0.0019235124345868826f, 0.0026728049851953983f, 0.0011584300082176924f, 0.002177887363359332f, 0.0023083712439984083f, 0.0017506286967545748f, 0.001940627465955913f, 0.001505666645243764f, 0.001111832563765347f, 0.002121271565556526f, 0.002619367791339755f, 0.001472873380407691f, 0.0028521318454295397f, 0.002118242671713233f, 0.0017317448509857059f, 0.0019300658022984862f, 0.0042690010741353035f, 0.0020381563808768988f, 0.001745045417919755f, 0.0027755468618124723f, 0.002122520934790373f, 0.002770036458969116f, 0.0014827809063717723f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #134 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00488170376047492f, 0.006247553043067455f, 0.00424984423443675f, 0.0030047898180782795f, 0.006068806629627943f, 0.00466509722173214f, 0.00495742866769433f, 0.005687486380338669f, 0.0042120967991650105f, 0.003870465327054262f, 0.00496263662353158f, 0.006882926449179649f, 0.005142948590219021f, 0.007133351173251867f, 0.008874591439962387f, 0.002587567549198866f, 0.0033829722087830305f, 0.005496657453477383f, 0.004447004292160273f, 0.006489632651209831f, 0.003388446057215333f, 0.0024535914417356253f, 0.004559314344078302f, 0.0034153577871620655f, 0.004313777666538954f, 0.005607905797660351f, 0.0031319560948759317f, 0.014912890270352364f, 0.004224514123052359f, 0.0056091779842972755f, 0.004815889522433281f, 0.0041084131225943565f, 0.006880076602101326f, 0.0064245425164699554f, 0.003100114641711116f, 0.0020617542322725058f, 0.004385064356029034f, 0.0042276643216609955f, 0.0026932084001600742f, 0.0037885087076574564f, 0.0042131817899644375f, 0.002798394300043583f, 0.005296588875353336f, 0.0042945281602442265f, 0.0024041112046688795f, 0.003921139054000378f, 0.0027034771628677845f, 0.005465199705213308f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #135 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 12,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003424070542678237f, 0.003995741717517376f, 0.005613165441900492f, 0.0030847885645926f, 0.004037051927298307f, 0.007340555544942617f, 0.003151303855702281f, 0.002846810268238187f, 0.004169146995991468f, 0.004299654625356197f, 0.003271255875006318f, 0.0032063093967735767f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #136 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_22_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0006036048289388418f, 0.0007159805973060429f, 0.0007668527541682124f, 0.00100660917814821f, 0.0007585130515508354f, 0.0008850517333485186f, 0.0005992387305013835f, 0.0007729296339675784f, 0.0008128602639771998f, 0.0005578435375355184f, 0.0007456941530108452f, 0.0005852883332408965f, 0.0007926230318844318f, 0.000991336302831769f, 0.0006347580929286778f, 0.0006726693245582283f, 0.0006803472642786801f, 0.000656255055218935f, 0.00077793252421543f, 0.0012855144450441003f, 0.001008200808428228f, 0.0008969979244284332f, 0.0008793871966190636f, 0.0009893785463646054f, 0.0009605557424947619f, 0.0003526213113218546f, 0.0006711807800456882f, 0.0007193271303549409f, 0.0007741854642517865f, 0.000905072083696723f, 0.0007704300805926323f, 0.0008846502751111984f, 0.0007130121230147779f, 0.0005907599115744233f, 0.0007944993558339775f, 0.0007432824932038784f, 0.0008775400929152966f, 0.0007396199507638812f, 0.000983127043582499f, 0.00046188151463866234f, 0.0003210176946595311f, 0.00041322887409478426f, 0.00044925222755409777f, 0.0009095670538954437f, 0.0006811836501583457f, 0.0006949910311959684f, 0.0007851963164284825f, 0.0008894652128219604f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #137 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_26_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.006014474201947451f, 0.0061318539083004f, 0.009965572506189346f, 0.0075094676576554775f, 0.006681062281131744f, 0.007699072826653719f, 0.007494821213185787f, 0.006812996231019497f, 0.007205004338175058f, 0.006680989172309637f, 0.009072541259229183f, 0.00809368584305048f, 0.006036687176674604f, 0.009298942051827908f, 0.006507929414510727f, 0.008165734820067883f, 0.010836443863809109f, 0.009607442654669285f, 0.0070429593324661255f, 0.006622533779591322f, 0.006785772740840912f, 0.01047099381685257f, 0.007332163862884045f, 0.007453763857483864f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #138 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0024098658468574286f, 0.0017006758134812117f, 0.0014792602742090821f, 0.0013563628308475018f, 0.002558477222919464f, 0.001994453137740493f, 0.0025320113636553288f, 0.0017385538667440414f, 0.0015302429674193263f, 0.0024352935142815113f, 0.0017392791341990232f, 0.002166429301723838f, 0.0019259239779785275f, 0.0028442684561014175f, 0.0012313908664509654f, 0.002019076608121395f, 0.0017704417696222663f, 0.0017270040698349476f, 0.0017227017087861896f, 0.0018225092208012938f, 0.001586590544320643f, 0.00265602208673954f, 0.001957884756848216f, 0.0031527213286608458f, 0.0016707159811630845f, 0.0017264721682295203f, 0.0019696736708283424f, 0.0021415119990706444f, 0.0023390112910419703f, 0.0014562271535396576f, 0.003647752571851015f, 0.0019922128412872553f, 0.0021705974359065294f, 0.0013242487329989672f, 0.001275897491723299f, 0.0018394938670098782f, 0.002008056500926614f, 0.0019284514710307121f, 0.0037914146669209003f, 0.002479830291122198f, 0.0024839146062731743f, 0.0016662501730024815f, 0.0016693472862243652f, 0.002928329398855567f, 0.0013183216797187924f, 0.002499539637938142f, 0.002171338303014636f, 0.0016430221730843186f, 0.0012837339891120791f, 0.0016199304955080152f, 0.002445915248245001f, 0.0019223958952352405f, 0.0017426616977900267f, 0.0023535429500043392f, 0.0010692226933315396f, 0.001877641654573381f, 0.0016982125816866755f, 0.0027134958654642105f, 0.0019407705403864384f, 0.0017332196002826095f, 0.0017424890538677573f, 0.0013808750081807375f, 0.0011017128126695752f, 0.0010954828467220068f, 0.0014244102640077472f, 0.0021739003714174032f, 0.0014572609215974808f, 0.001991234952583909f, 0.0017005633562803268f, 0.0020492267794907093f, 0.0013221475528553128f, 0.0015998699236661196f, 0.0027984343469142914f, 0.003578240517526865f, 0.0021724235266447067f, 0.002102808328345418f, 0.0027967998757958412f, 0.0017563026631250978f, 0.0016338623827323318f, 0.0025366502813994884f, 0.003506717272102833f, 0.00182798330206424f, 0.001486578956246376f, 0.0011194403050467372f, 0.0015003073494881392f, 0.0014172687660902739f, 0.0018608085811138153f, 0.0021906704641878605f, 0.0029645992908626795f, 0.002019603503867984f, 0.0014387421542778611f, 0.0017739549512043595f, 0.0016204430721700191f, 0.002842487534508109f, 0.0017294002464041114f, 0.0036603566259145737f, 0.0028344348538666964f, 0.0025223142001777887f, 0.0021753069013357162f, 0.0012221010401844978f, 0.001958622597157955f, 0.0018286359263584018f, 0.0022332186345010996f, 0.0018944760086014867f, 0.002696175826713443f, 0.002076484262943268f, 0.002760314615443349f, 0.0018505366751924157f, 0.0021411862690001726f, 0.002559680724516511f, 0.0023216132540255785f, 0.002251503523439169f, 0.0012666549300774932f, 0.001346195233054459f, 0.0013910034904256463f, 0.0011935965158045292f, 0.0015553781995549798f, 0.002584666945040226f, 0.0013670531334355474f, 0.002375552896410227f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #139 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004255871754139662f, 0.012058138847351074f, 0.0025545060634613037f, 0.012462332844734192f, 0.005313343368470669f, 0.010673213750123978f, 0.011388872750103474f, 0.003233251627534628f, 0.008863751776516438f, 0.00933602824807167f, 0.0020570119377225637f, 0.007482236251235008f, 0.006240001879632473f, 0.017712512984871864f, 0.0063048009760677814f, 0.004963383078575134f, 0.0035129711031913757f, 0.005846761167049408f, 0.00403137132525444f, 0.008857307024300098f, 0.01600368693470955f, 0.002352518728002906f, 0.01273905485868454f, 0.0040237088687717915f, 0.003037631744518876f, 0.01082701701670885f, 0.010171985253691673f, 0.005817991215735674f, 0.001832497538998723f, 0.017041558399796486f, 0.01007760874927044f, 0.004608271177858114f, 0.004146450664848089f, 0.009103544056415558f, 0.007390051614493132f, 0.00232704752124846f, 0.011722528375685215f, 0.007625477388501167f, 0.0058579822070896626f, 0.012050184421241283f, 0.003800349310040474f, 0.004815759137272835f, 0.00654652900993824f, 0.008471698500216007f, 0.003088670317083597f, 0.003191953292116523f, 0.002084731590002775f, 0.01021448615938425f, 0.01504090428352356f, 0.011693909764289856f, 0.009493420831859112f, 0.005939028691500425f, 0.0030950154177844524f, 0.00942845456302166f, 0.007013176567852497f, 0.00449352664873004f, 0.004362101200968027f, 0.004269500263035297f, 0.00603522127494216f, 0.0031974392477422953f, 0.007168878801167011f, 0.014145215041935444f, 0.016571559011936188f, 0.006961153820157051f, 0.007133707404136658f, 0.006827137898653746f, 0.019865503534674644f, 0.0019785123877227306f, 0.007016678806394339f, 0.006235102191567421f, 0.005161693785339594f, 0.01663932017982006f, 0.007082951720803976f, 0.009227189235389233f, 0.004291323013603687f, 0.005615468602627516f, 0.008063101209700108f, 0.008685726672410965f, 0.010202327743172646f, 0.003709755139425397f, 0.00495649641379714f, 0.017462337389588356f, 0.019459376111626625f, 0.002406666288152337f, 0.005489675793796778f, 0.0066251130774617195f, 0.006609571631997824f, 0.0037978985346853733f, 0.003155988873913884f, 0.004905503708869219f, 0.007181908003985882f, 0.004199958872050047f, 0.0027404441498219967f, 0.002407805062830448f, 0.01276418101042509f, 0.003232836490496993f, 0.003932228311896324f, 0.004612901713699102f, 0.0047843120992183685f, 0.014904292300343513f, 0.013470546342432499f, 0.0031178402714431286f, 0.006221095100045204f, 0.006163271609693766f, 0.007499323692172766f, 0.0074454681016504765f, 0.008367196656763554f, 0.0033253629226237535f, 0.003380581270903349f, 0.002245507435873151f, 0.004311500582844019f, 0.002563935238867998f, 0.006129438988864422f, 0.01219006534665823f, 0.008244873955845833f, 0.019771680235862732f, 0.006597047671675682f, 0.002395487856119871f, 0.005488218739628792f, 0.0031283407006412745f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #140 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 30,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003920228686183691f, 0.004198124166578054f, 0.0015747231664136052f, 0.004610780626535416f, 0.002042659092694521f, 0.003549546469002962f, 0.001864283811300993f, 0.003667844459414482f, 0.004769920837134123f, 0.0037837601266801357f, 0.004687408450990915f, 0.0018469836795702577f, 0.0020513490308076143f, 0.002151462947949767f, 0.004874702543020248f, 0.002224375493824482f, 0.0019167629070580006f, 0.001954435370862484f, 0.00483195623382926f, 0.0020176570396870375f, 0.002212527673691511f, 0.0037626686971634626f, 0.004979195538908243f, 0.004071229603141546f, 0.003453632118180394f, 0.005739549174904823f, 0.007266816683113575f, 0.004129806067794561f, 0.0018210376147180796f, 0.0038142038974910975f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #141 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_31_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0009705669363029301f, 0.000988681335002184f, 0.0007046153768897057f, 0.0005191805539652705f, 0.0007261062855832279f, 0.0005732544232159853f, 0.0008822660893201828f, 0.0006610480486415327f, 0.0006451894878409803f, 0.000806560623459518f, 0.0008893298800103366f, 0.0006167340907268226f, 0.0009307739092037082f, 0.0007119147339835763f, 0.0008411263697780669f, 0.0009945003548637033f, 0.0006187987746670842f, 0.0006729480228386819f, 0.0007534838514402509f, 0.0006651465664617717f, 0.0007313659298233688f, 0.0007747606141492724f, 0.0007976664346642792f, 0.0005812733434140682f, 0.0008402513340115547f, 0.0008649431983940303f, 0.0005959445261396468f, 0.000659823592286557f, 0.0007296054973267019f, 0.0005217032157815993f, 0.0006341777625493705f, 0.0006094644195400178f, 0.0006450598011724651f, 0.0006657036137767136f, 0.00045361791853792965f, 0.0009655322064645588f, 0.0010125909466296434f, 0.0009102672338485718f, 0.00058416259707883f, 0.0005048480234108865f, 0.0006045274785719812f, 0.0003995913139078766f, 0.0004991477471776307f, 0.0006894576945342124f, 0.0005148989730514586f, 0.00035023887176066637f, 0.0007121461676433682f, 0.000584346940740943f, 0.0006148054380901158f, 0.0010167235741391778f, 0.0007697720429860055f, 0.00046552118146792054f, 0.000810303958132863f, 0.0005374803440645337f, 0.0007147003198042512f, 0.0006585853407159448f, 0.0007092310697771609f, 0.0005744442460127175f, 0.0007218124228529632f, 0.0007157953805290163f, 0.0007341184536926448f, 0.0006371817435137928f, 0.0007311519584618509f, 0.0007052079308778048f, 0.0005678055458702147f, 0.00044195755617693067f, 0.000725733523722738f, 0.0008725473890081048f, 0.0006614325102418661f, 0.00037404615432024f, 0.0008776540053077042f, 0.0005474580102600157f, 0.0006424853345379233f, 0.0005903458222746849f, 0.0007271749200299382f, 0.0006494541885331273f, 0.0007070481078699231f, 0.0007725972100161016f, 0.00046548355021514f, 0.0006676852935925126f, 0.0008721864433027804f, 0.0008233722764998674f, 0.0005197847494855523f, 0.0005807611742056906f, 0.0006730483146384358f, 0.0008093810174614191f, 0.0007671978091821074f, 0.0006533616688102484f, 0.0008549441117793322f, 0.0004306066839490086f, 0.0005131377256475389f, 0.0007167232688516378f, 0.000613745185546577f, 0.0007325560436584055f, 0.0007102309027686715f, 0.0005757982726208866f, 0.0007544135442003608f, 0.0004997649812139571f, 0.0006842793081887066f, 0.0007461879285983741f, 0.0008489089086651802f, 0.0009764058631844819f, 0.0005825475673191249f, 0.0006901107262820005f, 0.00042974602547474205f, 0.0006302305846475065f, 0.0007229226175695658f, 0.0005719743203371763f, 0.0008462092955596745f, 0.0008609298965893686f, 0.0009607772808521986f, 0.0005895054782740772f, 0.0009223963716067374f, 0.000771805236581713f, 0.0007023315411061049f, 0.0005835245829075575f, 0.0008091920171864331f, 0.0005340512725524604f, 0.0005437310901470482f, 0.0008720234036445618f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #142 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_35_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004848525393754244f, 0.00493264477699995f, 0.003192116506397724f, 0.0031897067092359066f, 0.004059604834765196f, 0.0040462142787873745f, 0.003228419926017523f, 0.003707281546667218f, 0.004033765755593777f, 0.004983692429959774f, 0.0033496925607323647f, 0.003080186666920781f, 0.004405318293720484f, 0.0046544671058654785f, 0.004011520184576511f, 0.003690871875733137f, 0.0030973427928984165f, 0.00467033963650465f, 0.003223883453756571f, 0.0030724508687853813f, 0.004569577053189278f, 0.004173769149929285f, 0.0034917909651994705f, 0.002572542754933238f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #143 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0012724008411169052f, 0.0011723260395228863f, 0.0019735482055693865f, 0.0014307344099506736f, 0.0021222250070422888f, 0.002007102593779564f, 0.0011671704705804586f, 0.0013967970153316855f, 0.0012354584177955985f, 0.0020663458853960037f, 0.0015916210832074285f, 0.002051631221547723f, 0.002662095008417964f, 0.000696924515068531f, 0.0020138267427682877f, 0.0015573665732517838f, 0.0017883299151435494f, 0.0013199528912082314f, 0.0015724177937954664f, 0.0018452949589118361f, 0.0012963474728167057f, 0.0027151857502758503f, 0.0018406723393127322f, 0.0013198214583098888f, 0.0013866473454982042f, 0.001576326321810484f, 0.0018364947754889727f, 0.0016556953778490424f, 0.0023014217149466276f, 0.0007222599815577269f, 0.0012920395238325f, 0.0010855485452339053f, 0.001057197107002139f, 0.0011865185806527734f, 0.0009979206370189786f, 0.0011735367588698864f, 0.0015687172999605536f, 0.0012338835513219237f, 0.0013237391831353307f, 0.0023709333036094904f, 0.0012697878992184997f, 0.0005883533740416169f, 0.0017820546636357903f, 0.0016207186272367835f, 0.0020621749572455883f, 0.0017650608206167817f, 0.0012926026247441769f, 0.0018504324834793806f, 0.0014523073332384229f, 0.0019305540481582284f, 0.0016953570302575827f, 0.0017624101601541042f, 0.0012479058932512999f, 0.0017797218170017004f, 0.002023499459028244f, 0.0025994442403316498f, 0.0013610530877485871f, 0.0015618408797308803f, 0.0013685575686395168f, 0.0012515902053564787f, 0.0009190387791022658f, 0.0011402403470128775f, 0.003042857628315687f, 0.0012652187142521143f, 0.002456342102959752f, 0.0025591226294636726f, 0.0011883380357176065f, 0.0013300630962476134f, 0.001411110395565629f, 0.0011048645246773958f, 0.001193318865261972f, 0.0013723315205425024f, 0.0021377939265221357f, 0.002868012059479952f, 0.0012370258336886764f, 0.0021909349597990513f, 0.0016005287179723382f, 0.00133665488101542f, 0.0013624748680740595f, 0.002168816514313221f, 0.0013003387721255422f, 0.001960668247193098f, 0.0015454253880307078f, 0.0012647825060412288f, 0.0017870712326839566f, 0.0017345916712656617f, 0.0017656614072620869f, 0.0007586625288240612f, 0.001750959432683885f, 0.0015980188036337495f, 0.0016186656430363655f, 0.001589540159329772f, 0.0012832237407565117f, 0.0013184384442865849f, 0.001668207929469645f, 0.0021791860926896334f, 0.0020463592372834682f, 0.0011117412941530347f, 0.002076241886243224f, 0.0011827190173789859f, 0.0020467196591198444f, 0.0011321294587105513f, 0.00282741105183959f, 0.0022641746327281f, 0.0017724598292261362f, 0.002488519065082073f, 0.0010547478450462222f, 0.0012751152971759439f, 0.0016519067576155066f, 0.0012753905029967427f, 0.0028192640747874975f, 0.0013665443984791636f, 0.0022880176547914743f, 0.001466722460463643f, 0.0012097362196072936f, 0.0016335508553311229f, 0.0016716242535039783f, 0.0014189219800755382f, 0.0020583823788911104f, 0.0019543843809515238f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #144 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0036325552500784397f, 0.010907014831900597f, 0.00587467523291707f, 0.004913173150271177f, 0.0019037039019167423f, 0.002129538916051388f, 0.0064463852904737f, 0.004829806741327047f, 0.009547479450702667f, 0.014420523308217525f, 0.004406686872243881f, 0.009806239046156406f, 0.003098492044955492f, 0.009722787886857986f, 0.0041603464633226395f, 0.002709962660446763f, 0.007711883634328842f, 0.006917697377502918f, 0.00919446349143982f, 0.0016756155528128147f, 0.013985944911837578f, 0.002212752588093281f, 0.003945108037441969f, 0.002766250167042017f, 0.008399475365877151f, 0.004726088605821133f, 0.005899062845855951f, 0.007622115314006805f, 0.00453555304557085f, 0.029005253687500954f, 0.004248719196766615f, 0.006134293973445892f, 0.01578572206199169f, 0.009249008260667324f, 0.03552228957414627f, 0.007188387215137482f, 0.007406288757920265f, 0.010168482549488544f, 0.008273742161691189f, 0.002769539598375559f, 0.0065845041535794735f, 0.028076140210032463f, 0.004094667267054319f, 0.008722135797142982f, 0.00669555738568306f, 0.0034378368873149157f, 0.006881379522383213f, 0.005233265459537506f, 0.01061429176479578f, 0.005966340657323599f, 0.004370676353573799f, 0.002308838302269578f, 0.003513588337227702f, 0.002112428657710552f, 0.0031137221958488226f, 0.0015475178370252252f, 0.010428841225802898f, 0.007041321601718664f, 0.014960035681724548f, 0.0024230426643043756f, 0.011268091388046741f, 0.004000961314886808f, 0.0035758635494858027f, 0.0034473873674869537f, 0.0023185675963759422f, 0.0023836398031562567f, 0.009117720648646355f, 0.006955390330404043f, 0.012274663895368576f, 0.0339740552008152f, 0.006207400467246771f, 0.0031140130013227463f, 0.003622346790507436f, 0.002144169993698597f, 0.0064515117555856705f, 0.009322430938482285f, 0.012785958126187325f, 0.0031208444852381945f, 0.002592971781268716f, 0.0036754861939698458f, 0.010628599673509598f, 0.0023969653993844986f, 0.004641330800950527f, 0.0047342367470264435f, 0.0033482450526207685f, 0.0020324180368334055f, 0.0024059247225522995f, 0.018358685076236725f, 0.009154715575277805f, 0.010538795962929726f, 0.012798932380974293f, 0.002064715139567852f, 0.010875350795686245f, 0.0035179443657398224f, 0.0034872391261160374f, 0.0019124264363199472f, 0.004902729764580727f, 0.005217335652559996f, 0.0034772187937051058f, 0.0024377391673624516f, 0.004648404661566019f, 0.007561422418802977f, 0.0022632135078310966f, 0.0025112424045801163f, 0.005364379845559597f, 0.004715226124972105f, 0.00874126236885786f, 0.0045319898054003716f, 0.003909256774932146f, 0.006049570627510548f, 0.0035718707367777824f, 0.0018537541618570685f, 0.007073719520121813f, 0.0023409940768033266f, 0.0075668408535420895f, 0.005790729075670242f, 0.011585804633796215f, 0.003790259826928377f, 0.006295406725257635f, 0.01901456154882908f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #145 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 30,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00507028354331851f, 0.002050373936071992f, 0.0037822818849235773f, 0.005758586805313826f, 0.0034898745361715555f, 0.003753348020836711f, 0.001932642888277769f, 0.001962577225640416f, 0.0020442684181034565f, 0.0018075683619827032f, 0.0035826005041599274f, 0.004712203983217478f, 0.0044309403747320175f, 0.004925336688756943f, 0.0020214098040014505f, 0.0042512379586696625f, 0.0035353198181837797f, 0.0038285679183900356f, 0.0017116301460191607f, 0.00184318155515939f, 0.0019486453384160995f, 0.005164030473679304f, 0.0038507075514644384f, 0.0016444082139059901f, 0.0039059447590261698f, 0.0038843152578920126f, 0.001862388220615685f, 0.003899239469319582f, 0.0035833099391311407f, 0.003939254209399223f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #146 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_41_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 120,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0009956673020496964f, 0.0005702920607291162f, 0.0005821008235216141f, 0.0007656647940166295f, 0.0007152194157242775f, 0.0005987028125673532f, 0.0008665177738294005f, 0.000672787893563509f, 0.0006178879411891103f, 0.0004655108496081084f, 0.0006236162735149264f, 0.0006646679248660803f, 0.0007039523916319013f, 0.0007216960075311363f, 0.0009087044163607061f, 0.0006499693263322115f, 0.0007570458692498505f, 0.0007317744311876595f, 0.0004627649032045156f, 0.0007957118796184659f, 0.0006195811438374221f, 0.0007618397939950228f, 0.0007623857236467302f, 0.0005331572028808296f, 0.0008254216518253088f, 0.0005252168048173189f, 0.0006131876143626869f, 0.0007196408114396036f, 0.0005828473367728293f, 0.0009219638304784894f, 0.0006178666953928769f, 0.0008402222883887589f, 0.0006917170831002295f, 0.0007012303685769439f, 0.000662313133943826f, 0.0006608067196793854f, 0.0007370656239800155f, 0.0006918369326740503f, 0.0008985265740193427f, 0.0004392438568174839f, 0.0007274316740222275f, 0.000803702394478023f, 0.0008059785468503833f, 0.0007202962879091501f, 0.0008432457107119262f, 0.0007149031152948737f, 0.0005360990762710571f, 0.0008254683925770223f, 0.0008565395255573094f, 0.0008100729319266975f, 0.0006185693782754242f, 0.0010300700087100267f, 0.0010174672352150083f, 0.0005582362064160407f, 0.00047118079965002835f, 0.0007870456902310252f, 0.0005905639263801277f, 0.0007081592921167612f, 0.0007637426606379449f, 0.0006121325423009694f, 0.0006139472825452685f, 0.0007529057911597192f, 0.000916635908652097f, 0.0005206115311011672f, 0.0007020933553576469f, 0.0007080569048412144f, 0.00067053985549137f, 0.0005695819272659719f, 0.0005571505753323436f, 0.0006038194405846298f, 0.0007474164594896138f, 0.0007123854593373835f, 0.0005093893851153553f, 0.0008326281677000225f, 0.0006905909394845366f, 0.000591277435887605f, 0.0006307290168479085f, 0.0003885910555254668f, 0.0008165556355379522f, 0.0006831789505667984f, 0.0005968836485408247f, 0.0007617968949489295f, 0.0005305404192768037f, 0.0007660826086066663f, 0.00040291488403454423f, 0.0008061943226493895f, 0.00047376632574014366f, 0.0005191742675378919f, 0.0011709480313584208f, 0.000710165302734822f, 0.0009287354769185185f, 0.0009598435717634857f, 0.0006547703524120152f, 0.0008488415041938424f, 0.0005321017233654857f, 0.0007179921376518905f, 0.000563514418900013f, 0.0008186943014152348f, 0.0007285414612852037f, 0.0008380000945180655f, 0.0005148191121406853f, 0.0007210220792330801f, 0.00042691591079346836f, 0.0007942044758237898f, 0.00045896609663031995f, 0.0003948724188376218f, 0.0005753354053013027f, 0.0005894888890907168f, 0.0007511567673645914f, 0.0006755731883458793f, 0.0008103924337774515f, 0.0008711589616723359f, 0.0005576320108957589f, 0.0003912012907676399f, 0.00042740674689412117f, 0.0007003493374213576f, 0.0006771638290956616f, 0.0005319459014572203f, 0.0006452537490986288f, 0.0005727119278162718f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #147 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_45_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003023552242666483f, 0.003494339995086193f, 0.003784443251788616f, 0.0034559103660285473f, 0.0034709558822214603f, 0.005329139530658722f, 0.004265515599399805f, 0.003559540957212448f, 0.0032517414074391127f, 0.005914716515690088f, 0.004671705421060324f, 0.0028189634904265404f, 0.003910689149051905f, 0.0043862066231667995f, 0.0044075921177864075f, 0.004503889009356499f, 0.0045430101454257965f, 0.005088417790830135f, 0.00449995556846261f, 0.005672505125403404f, 0.0039034574292600155f, 0.004126096144318581f, 0.004125694744288921f, 0.002121583092957735f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #148 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0011107739992439747f, 0.0011383389355614781f, 0.0010170371970161796f, 0.000826883246190846f, 0.0012668614508584142f, 0.002219965448603034f, 0.0018417479004710913f, 0.0014140275306999683f, 0.0017952470807358623f, 0.001132256700657308f, 0.001103860791772604f, 0.0016754649113863707f, 0.0014488424640148878f, 0.001641957787796855f, 0.0021871558856219053f, 0.0009467577910982072f, 0.0009077588329091668f, 0.0014891019091010094f, 0.001662033493630588f, 0.0010893361177295446f, 0.0007616448565386236f, 0.0016836350550875068f, 0.0012204350205138326f, 0.0020482842810451984f, 0.0020611241925507784f, 0.0012214217567816377f, 0.0010314900428056717f, 0.0008190524531528354f, 0.0016940947389230132f, 0.0023015858605504036f, 0.002383464714512229f, 0.0012375389924272895f, 0.0010583925759419799f, 0.0009156144224107265f, 0.0010012636194005609f, 0.0008941128035075963f, 0.0013400667812675238f, 0.0014928416348993778f, 0.0011875195195898414f, 0.0009029091452248394f, 0.0016763184685260057f, 0.0013034725561738014f, 0.001755038509145379f, 0.0019435652066022158f, 0.0008978939149528742f, 0.0019295482197776437f, 0.0010730577632784843f, 0.0018937949789687991f, 0.0012126123765483499f, 0.0018664175877347589f, 0.0011938742827624083f, 0.0016908193938434124f, 0.0010837478330358863f, 0.0019717852119356394f, 0.0019205526914447546f, 0.001727737719193101f, 0.0028506822418421507f, 0.0019382609752938151f, 0.0014533879002556205f, 0.0015894862590357661f, 0.0010433541610836983f, 0.0015920520527288318f, 0.0009794937213882804f, 0.0010232727508991957f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #149 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003094769548624754f, 0.002368989633396268f, 0.004113353788852692f, 0.004646499175578356f, 0.0028322706930339336f, 0.003993700258433819f, 0.004438306204974651f, 0.003590113716199994f, 0.004262404516339302f, 0.004278081003576517f, 0.005052709020674229f, 0.007708326447755098f, 0.003884453559294343f, 0.010769626125693321f, 0.0041107055731117725f, 0.004424892831593752f, 0.011044193990528584f, 0.004889387637376785f, 0.008263460360467434f, 0.002821407513692975f, 0.010649758391082287f, 0.00797661580145359f, 0.01402838435024023f, 0.002641223603859544f, 0.0035790528636425734f, 0.0025497297756373882f, 0.004958027042448521f, 0.0107789421454072f, 0.00811778660863638f, 0.009678376838564873f, 0.010398007929325104f, 0.011375187896192074f, 0.003590152831748128f, 0.013778415508568287f, 0.005664785858243704f, 0.004320000763982534f, 0.005471290089190006f, 0.0031856114510446787f, 0.006386436987668276f, 0.005370497703552246f, 0.003611265914514661f, 0.002265127142891288f, 0.003513581119477749f, 0.004042779095470905f, 0.005954388994723558f, 0.0028372297529131174f, 0.004397493787109852f, 0.0021100782323628664f, 0.009909851476550102f, 0.0031452265102416277f, 0.004809683188796043f, 0.0019598498474806547f, 0.005286430008709431f, 0.0024514636024832726f, 0.0026927334256470203f, 0.001998061081394553f, 0.0049996706657111645f, 0.004586575087159872f, 0.004815081600099802f, 0.007974361069500446f, 0.007065196055918932f, 0.00578833743929863f, 0.015206720679998398f, 0.004099556244909763f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #150 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_50_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 16,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005571912508457899f, 0.0061052534729242325f, 0.004041338339447975f, 0.0031684949062764645f, 0.0039169685915112495f, 0.004540990572422743f, 0.004490871913731098f, 0.005568715278059244f, 0.0038581672124564648f, 0.004794414155185223f, 0.003433386329561472f, 0.004138106945902109f, 0.00419581076130271f, 0.0032723648473620415f, 0.004770718980580568f, 0.005010776687413454f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #151 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_51_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 64,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.000559563166461885f, 0.0006622449145652354f, 0.0007338155410252512f, 0.001010123873129487f, 0.0006621459615416825f, 0.0008519440307281911f, 0.0009393843356519938f, 0.0008515208610333502f, 0.0007959200302138925f, 0.0009186046663671732f, 0.0008629197254776955f, 0.0007671553757973015f, 0.0006058992585167289f, 0.0007257585530169308f, 0.0007772733806632459f, 0.0005506050656549633f, 0.0013660683762282133f, 0.0009809876792132854f, 0.0009632648434489965f, 0.0006636555190198123f, 0.0007790779345668852f, 0.0005569185013882816f, 0.0006567172240465879f, 0.000682707701344043f, 0.000542497611604631f, 0.0006446815677918494f, 0.000578553881496191f, 0.0005171045777387917f, 0.0009308129083365202f, 0.0005351711879484355f, 0.0006939684972167015f, 0.0007054185261949897f, 0.000877183920238167f, 0.0005855534691363573f, 0.0008157432312145829f, 0.0005706369993276894f, 0.0010592836188152432f, 0.0008970614871941507f, 0.0005436658975668252f, 0.000728124170564115f, 0.0005371987936086953f, 0.0006823759176768363f, 0.0009271741146221757f, 0.0006176008610054851f, 0.0006221036310307682f, 0.00092951615806669f, 0.0005994057864882052f, 0.0007130017038434744f, 0.0006854540552012622f, 0.0010844195494428277f, 0.0007136196363717318f, 0.000757140398491174f, 0.0007916377508081496f, 0.0008012181497178972f, 0.0007060338393785059f, 0.0007716479594819248f, 0.000547514297068119f, 0.0011016385396942496f, 0.0011268146336078644f, 0.0006257161730900407f, 0.0006988386157900095f, 0.0007442165515385568f, 0.000826633651740849f, 0.000754323264118284f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #152 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_55_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0044324672780931f, 0.006456178613007069f, 0.0035336629953235388f, 0.005428322125226259f, 0.003605755278840661f, 0.005890936125069857f, 0.005776928272098303f, 0.00435236282646656f, 0.004383591935038567f, 0.003725930582731962f, 0.004767733160406351f, 0.0039212522096931934f, 0.005763338413089514f, 0.00587355624884367f, 0.003689534030854702f, 0.0031104518566280603f, 0.005702737718820572f, 0.004173319321125746f, 0.006417210679501295f, 0.0045479414984583855f, 0.0066230506636202335f, 0.005548529326915741f, 0.004747177939862013f, 0.0038624033331871033f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #153 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0022093032021075487f, 0.0006262456299737096f, 0.0011659347219392657f, 0.001037385081872344f, 0.0008576489053666592f, 0.0010408839443698525f, 0.0018118361476808786f, 0.0007224371656775475f, 0.0010869527468457818f, 0.0007515859906561673f, 0.0007400722242891788f, 0.0007588462322019041f, 0.0013641841942444444f, 0.0020391952712088823f, 0.0024628913961350918f, 0.0012164725922048092f, 0.0013288871850818396f, 0.0016982934903353453f, 0.0010021445341408253f, 0.000665247265715152f, 0.0009916627313941717f, 0.0007302620215341449f, 0.0017260410822927952f, 0.0009008256020024419f, 0.0011787577532231808f, 0.0013394199777394533f, 0.0006957984296604991f, 0.001565943588502705f, 0.0009689152357168496f, 0.0013989655999466777f, 0.0008787772385403514f, 0.0012642481597140431f, 0.0012767781736329198f, 0.0024267463013529778f, 0.0011810919968411326f, 0.0007903638179413974f, 0.0013984699035063386f, 0.001307933940552175f, 0.001182081177830696f, 0.0008197964052669704f, 0.001060214824974537f, 0.0012249863939359784f, 0.0005666967481374741f, 0.0010415698634460568f, 0.0016462159110233188f, 0.0011842944659292698f, 0.0007698242552578449f, 0.0017775068990886211f, 0.0015067296335473657f, 0.0015554869314655662f, 0.0009091057581827044f, 0.0011986438184976578f, 0.002081079874187708f, 0.0011319752084091306f, 0.0010773686226457357f, 0.0013654642971232533f, 0.0006805076263844967f, 0.001496718730777502f, 0.0012422194704413414f, 0.0015904498286545277f, 0.0017364063533023f, 0.0020691670943051577f, 0.001039779861457646f, 0.0013026006054133177f, 0.0018839178374037147f, 0.0008690417744219303f, 0.000782001472543925f, 0.0015490292571485043f, 0.0013145203702151775f, 0.0008019186207093298f, 0.002071127062663436f, 0.000752798339817673f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #154 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_58_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0024083552416414022f, 0.021219002082943916f, 0.009418247267603874f, 0.0049836281687021255f, 0.02676149643957615f, 0.0053360071033239365f, 0.005125993397086859f, 0.005145159084349871f, 0.002617029706016183f, 0.01454917062073946f, 0.010161950252950191f, 0.011882182210683823f, 0.004825285170227289f, 0.003390988800674677f, 0.0022708685137331486f, 0.004046538379043341f, 0.00362061383202672f, 0.010159862227737904f, 0.005365655291825533f, 0.010530025698244572f, 0.005407255608588457f, 0.006955210119485855f, 0.0039052844513207674f, 0.011437598615884781f, 0.004039066378027201f, 0.0021030332427471876f, 0.009419023059308529f, 0.002103096805512905f, 0.010568431578576565f, 0.00957397185266018f, 0.00774971442297101f, 0.007458799984306097f, 0.004634100943803787f, 0.004190112929791212f, 0.002432572888210416f, 0.011908022686839104f, 0.00794140063226223f, 0.006151970475912094f, 0.004582858644425869f, 0.005625717807561159f, 0.004466544836759567f, 0.008072469383478165f, 0.03466745465993881f, 0.005665868055075407f, 0.002410098211839795f, 0.0032134170178323984f, 0.0055856588296592236f, 0.004372540395706892f, 0.007849994115531445f, 0.003448289819061756f, 0.003986685071140528f, 0.007285640574991703f, 0.0030957337003201246f, 0.00475857499986887f, 0.008777793496847153f, 0.002743013435974717f, 0.03073163516819477f, 0.0019389399094507098f, 0.0047113304026424885f, 0.0057776207104325294f, 0.004241712857037783f, 0.0020304927602410316f, 0.012877900153398514f, 0.005820301361382008f, 0.0019145358819514513f, 0.008707690052688122f, 0.007098452188074589f, 0.00691650714725256f, 0.0028162398375570774f, 0.01344417966902256f, 0.0015702457167208195f, 0.0039775981567800045f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #155 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_60_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 18,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002393443137407303f, 0.004717829171568155f, 0.004468818660825491f, 0.005595893133431673f, 0.003971780650317669f, 0.0036353047471493483f, 0.003796346252784133f, 0.004197333939373493f, 0.004412473179399967f, 0.005136051215231419f, 0.00567003944888711f, 0.005132248625159264f, 0.006392745301127434f, 0.004978562239557505f, 0.0022801803424954414f, 0.00557681592181325f, 0.0047433157451450825f, 0.004438244272023439f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #156 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_61_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0010341842425987124f, 0.0005714542930945754f, 0.0006411257782019675f, 0.0010068925330415368f, 0.0004956955090165138f, 0.0008727480890229344f, 0.0007714617531746626f, 0.0008363262168131769f, 0.000729378021787852f, 0.0008891636389307678f, 0.0007246072636917233f, 0.0005544795421883464f, 0.0006606731913052499f, 0.0009811389027163386f, 0.000634450581856072f, 0.001283265883103013f, 0.0007320664008148015f, 0.0009834645316004753f, 0.0007337267743423581f, 0.001137189450673759f, 0.0010916247265413404f, 0.0006393201183527708f, 0.0008678306476213038f, 0.0007814497221261263f, 0.0007832376286387444f, 0.001071952166967094f, 0.0009410390048287809f, 0.0009163788636215031f, 0.000589849310927093f, 0.0011125848395749927f, 0.0011124189477413893f, 0.0006782767595723271f, 0.0007029026164673269f, 0.0008653094409964979f, 0.000615379773080349f, 0.0010362152243033051f, 0.0009826282039284706f, 0.0007528301794081926f, 0.0009036877891048789f, 0.0009626656537875533f, 0.000693179783411324f, 0.001039594761095941f, 0.001196733908727765f, 0.0008304198854602873f, 0.0006007366464473307f, 0.0010403204942122102f, 0.0010123536922037601f, 0.0006150564877316356f, 0.0006418255507014692f, 0.0006805345765314996f, 0.0006779246614314616f, 0.0007929099374450743f, 0.0006352855707518756f, 0.0005283667123876512f, 0.0008171770023182034f, 0.0006061654421500862f, 0.0008125592721626163f, 0.0006125516956672072f, 0.0006446191109716892f, 0.0008083180291578174f, 0.0006679039215669036f, 0.0010496634058654308f, 0.0008834960171952844f, 0.0007743907626718283f, 0.0008155185496434569f, 0.0006039345753379166f, 0.0008109984337352216f, 0.001003761077299714f, 0.0009168817778117955f, 0.0008489995962008834f, 0.001065058633685112f, 0.0007354577537626028f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #157 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_65_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 24,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004718595650047064f, 0.0053677973337471485f, 0.0034215725027024746f, 0.0034088988322764635f, 0.0042946492321789265f, 0.004481861833482981f, 0.0059328931383788586f, 0.005191649775952101f, 0.00447078887373209f, 0.007102120667695999f, 0.0033421313855797052f, 0.0031450344249606133f, 0.00585164176300168f, 0.006280794739723206f, 0.004529873374849558f, 0.005286177154630423f, 0.004988483618944883f, 0.0050037698820233345f, 0.004809313919395208f, 0.005680019501596689f, 0.003237062832340598f, 0.006385693326592445f, 0.0033348812721669674f, 0.0033948912750929594f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #158 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0009942188626155257f, 0.0015632681315764785f, 0.0007170123280957341f, 0.0011603415478020906f, 0.001378892920911312f, 0.0010353302350267768f, 0.0010051717981696129f, 0.000930328038521111f, 0.0008126009488478303f, 0.0005009275628253818f, 0.001228156965225935f, 0.0011197070125490427f, 0.0009194021113216877f, 0.0012168436078354716f, 0.0012455638498067856f, 0.0009914655238389969f, 0.0014794067246839404f, 0.00046156696043908596f, 0.0011895968345925212f, 0.0006265050615184009f, 0.0009603087091818452f, 0.0008838538778945804f, 0.0007322396268136799f, 0.0009619713528081775f, 0.0003179485211148858f, 0.0006649782881140709f, 0.0010935134487226605f, 0.000683616497553885f, 0.0012155105359852314f, 0.0021352125331759453f, 0.0011008050059899688f, 0.0008252823608927429f, 0.0012923796894028783f, 0.0010208102175965905f, 0.000993872876279056f, 0.0006266328855417669f, 0.0011424162657931447f, 0.0008833686006255448f, 0.0017154780216515064f, 0.0011045390274375677f, 0.0009404737502336502f, 0.0010711157228797674f, 0.0006115736323408782f, 0.001330093713477254f, 0.0009014623356051743f, 0.0009569743415340781f, 0.0007566838758066297f, 0.0013879762263968587f, 0.0006903220200911164f, 0.0014943673741072416f, 0.0012763726990669966f, 0.0008897687657736242f, 0.0015070185763761401f, 0.0011348676634952426f, 0.0011903858976438642f, 0.0010259808041155338f, 0.0009270745795220137f, 0.0008539420668967068f, 0.0011595034739002585f, 0.000682263751514256f, 0.0007906996179372072f, 0.000904779473785311f, 0.001155090401880443f, 0.00124946772120893f, 0.001564153004437685f, 0.0008521093404851854f, 0.0012941107852384448f, 0.0006446424522437155f, 0.0008798867929726839f, 0.0014223901089280844f, 0.0015310888411477208f, 0.0007947321864776313f, 0.0019181082025170326f, 0.0015155842993408442f, 0.001175052602775395f, 0.00085231609409675f, 0.00039495329838246107f, 0.001227839384227991f, 0.0013063335791230202f, 0.0010734295938163996f, 0.0007785200141370296f, 0.0007880350458435714f, 0.0008961218409240246f, 0.001371087389998138f, 0.0009834382217377424f, 0.0010788417421281338f, 0.0006100698956288397f, 0.0019178695511072874f, 0.0009937460999935865f, 0.0009944781195372343f, 0.0012013972736895084f, 0.0011007152497768402f, 0.001238409779034555f, 0.0008929514442570508f, 0.0009027296910062432f, 0.0008070687763392925f, 0.0015845715533941984f, 0.000983458710834384f, 0.0007018651813268661f, 0.00038787556695751846f, 0.001338586094789207f, 0.0015646505635231733f, 0.0009318660013377666f, 0.0012718356447294354f, 0.0006344933644868433f, 0.0011053439229726791f, 0.000918692210689187f, 0.0012398542603477836f, 0.0009328768355771899f, 0.0008015176863409579f, 0.002266368130221963f, 0.001010308274999261f, 0.0007700839778408408f, 0.0009441229631192982f, 0.0005411778693087399f, 0.000694474671036005f, 0.0008979817503131926f, 0.0005210716626606882f, 0.0004490126157179475f, 0.0017068375600501895f, 0.000791805621702224f, 0.0009327101288363338f, 0.0014647614443674684f, 0.0009320556418970227f, 0.002095090691000223f, 0.000677016272675246f, 0.0008927634335123003f, 0.0007819631136953831f, 0.0009581050253473222f, 0.0009352197521366179f, 0.00049626111285761f, 0.0009987478842958808f, 0.0008622085442766547f, 0.0005973584484308958f, 0.0014242719626054168f, 0.00086985994130373f, 0.0007145635900087655f, 0.0007747228373773396f, 0.0005685688811354339f, 0.001044762902893126f, 0.0010799814481288195f, 0.0013324731262400746f, 0.0018831004854291677f, 0.0010633025085553527f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #159 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_68_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.002081185346469283f, 0.0020430865697562695f, 0.0057772183790802956f, 0.002515869215130806f, 0.0024811471812427044f, 0.0022538851480931044f, 0.006063665729016066f, 0.004074463155120611f, 0.005153481848537922f, 0.014480892568826675f, 0.002970897825434804f, 0.002289431169629097f, 0.0034392662346363068f, 0.002715913811698556f, 0.006382799241691828f, 0.005385641939938068f, 0.0021245162934064865f, 0.015542563050985336f, 0.005765690468251705f, 0.0083737438544631f, 0.002594876801595092f, 0.0033422205597162247f, 0.015609377063810825f, 0.004124237224459648f, 0.02351275645196438f, 0.006997617892920971f, 0.002767670899629593f, 0.006253044120967388f, 0.002413996960967779f, 0.0018462500302121043f, 0.0037800208665430546f, 0.006820788607001305f, 0.002006943104788661f, 0.003937361761927605f, 0.003566220635548234f, 0.011044636368751526f, 0.0025642598047852516f, 0.002604007488116622f, 0.0020884263794869184f, 0.002610373543575406f, 0.004270770121365786f, 0.002793925581499934f, 0.01193333137780428f, 0.0019345949403941631f, 0.0034836637787520885f, 0.003443519352003932f, 0.003318431321531534f, 0.0025719136465340853f, 0.0073617445304989815f, 0.0017572654178366065f, 0.0026313236448913813f, 0.004976614378392696f, 0.0023249471560120583f, 0.0042925248853862286f, 0.005414800718426704f, 0.005420876666903496f, 0.005202368833124638f, 0.006613770965486765f, 0.006562266033142805f, 0.006481883581727743f, 0.0022697176318615675f, 0.00460107671096921f, 0.002499290741980076f, 0.002816702937707305f, 0.0027635800652205944f, 0.012826004065573215f, 0.005428587552160025f, 0.008099853061139584f, 0.004901175387203693f, 0.001968907658010721f, 0.0024328173603862524f, 0.0030734792817384005f, 0.0013728694757446647f, 0.0023558156099170446f, 0.002417281735688448f, 0.004009555093944073f, 0.016270194202661514f, 0.0030889343470335007f, 0.0018318772781640291f, 0.003023582510650158f, 0.006950996816158295f, 0.006986395921558142f, 0.0017348568653687835f, 0.0030275441240519285f, 0.005244423169642687f, 0.0037360540591180325f, 0.011869163252413273f, 0.0025721166748553514f, 0.002804557792842388f, 0.0016306702746078372f, 0.0020091659389436245f, 0.003178089391440153f, 0.0021083462052047253f, 0.005036723334342241f, 0.0058954074047505856f, 0.0036150978412479162f, 0.0027310207951813936f, 0.007217818405479193f, 0.005986719857901335f, 0.02767864242196083f, 0.003384529845789075f, 0.0028684737626463175f, 0.0034375477116554976f, 0.0031141601502895355f, 0.005275979172438383f, 0.006300827953964472f, 0.004534055478870869f, 0.0027966441120952368f, 0.004157233517616987f, 0.0043784575536847115f, 0.002256709383800626f, 0.0027665593661367893f, 0.004221009090542793f, 0.009977266192436218f, 0.02003435604274273f, 0.004073672462254763f, 0.005421485751867294f, 0.003239148296415806f, 0.012741093523800373f, 0.0019011144759133458f, 0.005617061629891396f, 0.008574847131967545f, 0.002282648114487529f, 0.004535623360425234f, 0.0031119859777390957f, 0.0037987246178090572f, 0.004616824444383383f, 0.003098510205745697f, 0.005677402019500732f, 0.0035006420221179724f, 0.010522416792809963f, 0.0025323168374598026f, 0.00638765562325716f, 0.006707743275910616f, 0.0032437255140393972f, 0.00295120757073164f, 0.0032850299030542374f, 0.004675996024161577f, 0.009100206196308136f, 0.004688887391239405f, 0.0037645010743290186f, 0.002788478508591652f, 0.0017832955345511436f, 0.002130627166479826f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #160 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_70_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 36,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003154308535158634f, 0.006469273939728737f, 0.003845870029181242f, 0.0035913658794015646f, 0.003126859199255705f, 0.002512549515813589f, 0.0016860230825841427f, 0.0016192778712138534f, 0.0029805528465658426f, 0.0015576665755361319f, 0.0041944719851017f, 0.0032327452208846807f, 0.004716275259852409f, 0.0018628635443747044f, 0.0042561418376863f, 0.004220537841320038f, 0.002265573712065816f, 0.0015465631149709225f, 0.0016469041584059596f, 0.0034808404743671417f, 0.0017446305137127638f, 0.0033581657335162163f, 0.0048672109842300415f, 0.0023569795303046703f, 0.0018338679801672697f, 0.00164823851082474f, 0.003992343787103891f, 0.0046071214601397514f, 0.005285306833684444f, 0.0025839570444077253f, 0.004492081701755524f, 0.003585552331060171f, 0.004549889359623194f, 0.0036360255908221006f, 0.00429178960621357f, 0.0049352399073541164f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #161 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_71_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 144,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0007627750746905804f, 0.0006761871627531946f, 0.0005455211503431201f, 0.0005901530385017395f, 0.0005589818465523422f, 0.0005652192048728466f, 0.0005464109126478434f, 0.0007679012487642467f, 0.0006718497606925666f, 0.000595567689742893f, 0.0006654362077824771f, 0.0005302641075104475f, 0.0006651955191046f, 0.0007117054774425924f, 0.0007230106857605278f, 0.0013375728158280253f, 0.0005839884397573769f, 0.0008250110549852252f, 0.0007681347778998315f, 0.0007955525070428848f, 0.000976817449554801f, 0.0005864000413566828f, 0.0009443099261261523f, 0.0006270838202908635f, 0.0006576540763489902f, 0.0007229947950690985f, 0.0006347355083562434f, 0.0007760013686493039f, 0.0005593942478299141f, 0.0005869354354217649f, 0.0005262912018224597f, 0.0007689440972171724f, 0.0007086066179908812f, 0.00092076207511127f, 0.0006032763631083071f, 0.0006324881687760353f, 0.0009914017282426357f, 0.0005378419882617891f, 0.0004792341496795416f, 0.00046074294368736446f, 0.000704293604940176f, 0.0009155095322057605f, 0.0007883819052949548f, 0.0007222346612252295f, 0.0007449164404533803f, 0.000789052399341017f, 0.0008299868204630911f, 0.0007314034155569971f, 0.0007956190383993089f, 0.000840882072225213f, 0.0006311910692602396f, 0.0007235564407892525f, 0.000488829507958144f, 0.0006522976327687502f, 0.0006622197688557208f, 0.0005456461803987622f, 0.0008878110093064606f, 0.0008008948643691838f, 0.0007837501470930874f, 0.0007630859618075192f, 0.0008919257088564336f, 0.0008777236216701567f, 0.0005446207942441106f, 0.0005935615045018494f, 0.0005734556470997632f, 0.0006457187118940055f, 0.0008123278967104852f, 0.0011312345741316676f, 0.0006573976133950055f, 0.0007966798730194569f, 0.0007406080258078873f, 0.0006520319147966802f, 0.0006632201257161796f, 0.0006304139387793839f, 0.0008897787192836404f, 0.0010724756866693497f, 0.0007599795935675502f, 0.0006645041867159307f, 0.0006018000422045588f, 0.000598306127358228f, 0.000645055144559592f, 0.0005197986611165106f, 0.0007012828718870878f, 0.00034994882298633456f, 0.0006333408528007567f, 0.0006998221506364644f, 0.0006961071630939841f, 0.0007721501169726253f, 0.0009890943765640259f, 0.0006568534299731255f, 0.0007148253498598933f, 0.0009261031518690288f, 0.0008126015309244394f, 0.000637244840618223f, 0.0006491598323918879f, 0.0006274167681112885f, 0.0004428638785611838f, 0.0007249336340464652f, 0.0011132516665384173f, 0.0008658863371238112f, 0.0006349941249936819f, 0.0004754308902192861f, 0.0005255818250589073f, 0.0005556963733397424f, 0.00044571893522515893f, 0.0008750247652642429f, 0.0008705364307388663f, 0.00047622030251659453f, 0.0005211436655372381f, 0.0010485014645382762f, 0.0008953441865742207f, 0.0007536154007539153f, 0.000516283034812659f, 0.0006576473242603242f, 0.0006120739271864295f, 0.0008324591326527297f, 0.0005065079894848168f, 0.0007180050015449524f, 0.0010196284856647253f, 0.0005270953406579792f, 0.0006247232668101788f, 0.0009894173126667738f, 0.001068471698090434f, 0.00045168367796577513f, 0.0006091889808885753f, 0.0007146778516471386f, 0.0005256605218164623f, 0.0007859478937461972f, 0.0008042691042646766f, 0.0007392812403850257f, 0.0006624644156545401f, 0.0007299940916709602f, 0.0005131502402946353f, 0.0005902166594751179f, 0.000716573849786073f, 0.000517494510859251f, 0.00047209105105139315f, 0.0007842016639187932f, 0.0007021900964900851f, 0.0008784396341070533f, 0.0006873799138702452f, 0.0005852111498825252f, 0.0006021119770593941f, 0.0006959867314435542f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #162 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_75_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004511890467256308f, 0.004496361594647169f, 0.004093752708286047f, 0.005498853512108326f, 0.00440299091860652f, 0.0040673306211829185f, 0.005100676324218512f, 0.0047130705788731575f, 0.003463195404037833f, 0.004690024070441723f, 0.004824670497328043f, 0.003043884877115488f, 0.003252622904255986f, 0.005049517378211021f, 0.005420450586825609f, 0.0033264998346567154f, 0.004204206634312868f, 0.0043025086633861065f, 0.0037607618141919374f, 0.005095597356557846f, 0.003729293355718255f, 0.005008470267057419f, 0.004907574970275164f, 0.0041902451775968075f, 0.004476913716644049f, 0.003627898870036006f, 0.003932928200811148f, 0.004872863180935383f, 0.0048406170681118965f, 0.005125920753926039f, 0.004179793410003185f, 0.00442497106269002f, 0.006089579779654741f, 0.006686707958579063f, 0.0035333794075995684f, 0.003388462122529745f, 0.004235489293932915f, 0.004835666157305241f, 0.0038285795599222183f, 0.004297635518014431f, 0.004660886246711016f, 0.004479619674384594f, 0.003523863386362791f, 0.004262979608029127f, 0.00432400219142437f, 0.004199726972728968f, 0.005956556182354689f, 0.0035036380868405104f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #163 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_76_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0017029644222930074f, 0.0013502450892701745f, 0.0030134667176753283f, 0.0024183723144233227f, 0.000707528437487781f, 0.0018521302845329046f, 0.000854122918099165f, 0.001460914732888341f, 0.0017324459040537477f, 0.0021383396815508604f, 0.0010660648113116622f, 0.0015314461197704077f, 0.0022965497337281704f, 0.0016042059287428856f, 0.001348692923784256f, 0.001660195761360228f, 0.001279208343476057f, 0.0014418329810723662f, 0.002059681573882699f, 0.0018370370380580425f, 0.0013662176206707954f, 0.002540554152801633f, 0.0018830780172720551f, 0.0010378084843978286f, 0.0010755106341093779f, 0.001548664877191186f, 0.001973094418644905f, 0.003358375048264861f, 0.0013644545106217265f, 0.0009090063977055252f, 0.001604230608791113f, 0.0018790540052577853f, 0.0016688869800418615f, 0.001984085189178586f, 0.002689422806724906f, 0.001551907160319388f, 0.0013502069050446153f, 0.0021074851974844933f, 0.0008052618359215558f, 0.0022426762152463198f, 0.0012234074529260397f, 0.0017277759034186602f, 0.0012038934510201216f, 0.001747590838931501f, 0.0025978905614465475f, 0.0019339557038620114f, 0.001289471285417676f, 0.0018187252571806312f, 0.001478311838582158f, 0.0015391022898256779f, 0.003159812418743968f, 0.0024052683729678392f, 0.001306273858062923f, 0.0018710196018218994f, 0.0011469280580058694f, 0.0019186704885214567f, 0.0015275743789970875f, 0.0017685632919892669f, 0.002438655821606517f, 0.0016429848037660122f, 0.0026456716004759073f, 0.0011871909955516458f, 0.0021087077911943197f, 0.0014010814484208822f, 0.0012577149318531156f, 0.0008985161548480392f, 0.0018525527557358146f, 0.0012383995344862342f, 0.0010665933368727565f, 0.0015096368733793497f, 0.002676286967471242f, 0.0017244417686015368f, 0.0012032497907057405f, 0.002152607776224613f, 0.0015892552910372615f, 0.0017847040435299277f, 0.0017565716989338398f, 0.00100320007186383f, 0.002354190219193697f, 0.002277241786941886f, 0.0013607178116217256f, 0.001179922721348703f, 0.0012038092827424407f, 0.00192058680113405f, 0.0017225724877789617f, 0.0013108891434967518f, 0.0014969210606068373f, 0.0008774783345870674f, 0.0011871109018102288f, 0.0018203954678028822f, 0.0009577054297551513f, 0.0014939161483198404f, 0.0017428116407245398f, 0.0018533424008637667f, 0.0011682107578963041f, 0.0016598686343058944f, 0.00136978377122432f, 0.0012531486572697759f, 0.0021158233284950256f, 0.0019219419918954372f, 0.0017569856718182564f, 0.002164719859138131f, 0.0020875504706054926f, 0.0008081847918219864f, 0.002155289286747575f, 0.0017692431574687362f, 0.001478123595006764f, 0.001603787182830274f, 0.0016073136357590556f, 0.0018085226183757186f, 0.0020289854146540165f, 0.0014109978219494224f, 0.002565056085586548f, 0.0022980847861617804f, 0.0015911320224404335f, 0.0017534405924379826f, 0.001743805012665689f, 0.0012205790262669325f, 0.002072972245514393f, 0.001313570886850357f, 0.0018223526421934366f, 0.002565668197348714f, 0.001504941494204104f, 0.001735503552481532f, 0.0014694961719214916f, 0.0012175468727946281f, 0.0014377342304214835f, 0.001260816934518516f, 0.000892575248144567f, 0.001279248739592731f, 0.0015962495235726237f, 0.0012642608489841223f, 0.0009346855222247541f, 0.0019348796922713518f, 0.0015077654970809817f, 0.0016748711932450533f, 0.0016099868807941675f, 0.0017591275973245502f, 0.0013957420596852899f, 0.003572558518499136f, 0.001129032694734633f, 0.002766115590929985f, 0.0012361593544483185f, 0.0010061562061309814f, 0.002939667087048292f, 0.0014241000171750784f, 0.0009187854593619704f, 0.0013374582631513476f, 0.0015360835241153836f, 0.0015577804297208786f, 0.0012247372651472688f, 0.001138410996645689f, 0.001344777294434607f, 0.0024589886888861656f, 0.0006104715866968036f, 0.002058819169178605f, 0.0017859613290056586f, 0.001980751985684037f, 0.0021215423475950956f, 0.0012461217120289803f, 0.001794783165678382f, 0.001776523538865149f, 0.002173296408727765f, 0.0012014198582619429f, 0.001729247160255909f, 0.0019498384790495038f, 0.0016168584115803242f, 0.002306663431227207f, 0.002445558551698923f, 0.0008267460507340729f, 0.001459379680454731f, 0.0011022668331861496f, 0.0010160291567444801f, 0.0015699132345616817f, 0.0017770434496924281f, 0.0014999251579865813f, 0.0012337099760770798f, 0.0017417693743482232f, 0.0009209205745719373f, 0.0009388587786816061f, 0.0009618618641979992f, 0.0011396626941859722f, 0.0013882933417335153f, 0.0010101586813107133f, 0.0016095617320388556f, 0.0012962165055796504f, 0.0016579688526690006f, 0.001168656861409545f, 0.0013116056798025966f, 0.0010604960843920708f, 0.0012434573145583272f, 0.002022914821282029f, 0.0014556938549503684f, 0.0012136788573116064f, 0.0018934198888018727f, 0.0014716812875121832f, 0.001580505515448749f, 0.0010554797481745481f, 0.0011524837464094162f, 0.0010456900345161557f, 0.0012297951616346836f, 0.0015607241075485945f, 0.0019064293010160327f, 0.0024542633909732103f, 0.0016992693999782205f, 0.0009652693988755345f, 0.0012711531016975641f, 0.0020531965419650078f, 0.0012319518718868494f, 0.001975112594664097f, 0.0014324829680845141f, 0.0019132047891616821f, 0.0009354188805446029f, 0.001607553451322019f, 0.0018574041314423084f, 0.0014366016257554293f, 0.0016734928358346224f, 0.0016454524593427777f, 0.0019268244504928589f, 0.001560752629302442f, 0.001268064952455461f, 0.0016194877680391073f, 0.0015127237420529127f, 0.0020825413521379232f, 0.0017860046355053782f, 0.0008320694323629141f, 0.0012926259078085423f, 0.0012309656012803316f, 0.0019758979324251413f, 0.0017444465775042772f, 0.0017195154214277864f, 0.001453522709198296f, 0.0022883154451847076f, 0.0014523712452501059f, 0.0013752392260357738f, 0.0006337887607514858f, 0.0015252464218065143f, 0.0020897816866636276f, 0.0008608122589066625f, 0.0007831098046153784f, 0.001844095764681697f, 0.0014079216634854674f, 0.0023540216498076916f, 0.0013443954521790147f, 0.0012491726083680987f, 0.0016510201385244727f, 0.0009361387928947806f, 0.0009451644727960229f, 0.000632862385828048f, 0.001811535912565887f, 0.001658171764574945f, 0.0014293041313067079f, 0.00193112064152956f, 0.0020333079155534506f, 0.0013663952704519033f, 0.0010021368507295847f, 0.001966806361451745f, 0.002134711714461446f, 0.0011776864994317293f, 0.0011698667658492923f, 0.002088825451210141f, 0.0009284402476623654f, 0.0018988787196576595f, 0.0015735401539132f, 0.0013408539816737175f, 0.0007385580684058368f, 0.0014362353831529617f, 0.0011911791516467929f, 0.0008943098364397883f, 0.0019156306516379118f, 0.001334252068772912f, 0.0018487212946638465f, 0.0010909531265497208f, 0.0018095305422320962f, 0.001287958468310535f, 0.0012716109631583095f, 0.001153790159150958f, 0.0013342980528250337f, 0.0020724432542920113f, 0.0010950281284749508f, 0.001490956055931747f, 0.0011777565814554691f, 0.0015833136858418584f, 0.001241428079083562f, 0.001248638960532844f, 0.0017359692137688398f, 0.0011674374109134078f, 0.0013951065484434366f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #164 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_77_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0025146189145743847f, 0.011372177861630917f, 0.0031826929189264774f, 0.0024837360251694918f, 0.03336106240749359f, 0.005385747179389f, 0.0500858798623085f, 0.0072843353264033794f, 0.006367439404129982f, 0.004022668581455946f, 0.018562346696853638f, 0.0035082080867141485f, 0.0022260481491684914f, 0.004832966718822718f, 0.006289862096309662f, 0.005778331775218248f, 0.003501585451886058f, 0.019279420375823975f, 0.0022004737984389067f, 0.003795494558289647f, 0.005544754676520824f, 0.002652506111189723f, 0.0028264678549021482f, 0.0076720393262803555f, 0.00506910216063261f, 0.009225417859852314f, 0.008499961346387863f, 0.003592195687815547f, 0.007230042014271021f, 0.01336059533059597f, 0.00442324485629797f, 0.0066801621578633785f, 0.003316268092021346f, 0.006674385163933039f, 0.0023298216983675957f, 0.010648852214217186f, 0.0031450155656784773f, 0.004054232966154814f, 0.025121452286839485f, 0.004182744305580854f, 0.004311105236411095f, 0.0035944769624620676f, 0.005108526907861233f, 0.005970415659248829f, 0.004844935145229101f, 0.0015939950244501233f, 0.008441472426056862f, 0.002874833531677723f, 0.00789720006287098f, 0.0021844469010829926f, 0.002181554678827524f, 0.0018650875426828861f, 0.0034628526773303747f, 0.0036199355963617563f, 0.016647445037961006f, 0.0029345310758799314f, 0.005058987531810999f, 0.003902595257386565f, 0.002031003125011921f, 0.00397068727761507f, 0.0020683929324150085f, 0.007976277731359005f, 0.0031175510957837105f, 0.0029547717422246933f, 0.009260167367756367f, 0.02316177263855934f, 0.0024770197924226522f, 0.007762654218822718f, 0.01035995688289404f, 0.01218104362487793f, 0.00406223488971591f, 0.004206734709441662f, 0.005151237826794386f, 0.004920927807688713f, 0.0019664668943732977f, 0.0032989662140607834f, 0.0025765823666006327f, 0.01130792684853077f, 0.0018582900520414114f, 0.00587084935978055f, 0.003645462216809392f, 0.00394321046769619f, 0.01145675964653492f, 0.0022691816557198763f, 0.004132292233407497f, 0.006222007796168327f, 0.005499179009348154f, 0.01608649455010891f, 0.004273292142897844f, 0.0030137617141008377f, 0.018841799348592758f, 0.015793057158589363f, 0.004234218969941139f, 0.003947366029024124f, 0.009232909418642521f, 0.0031178228091448545f, 0.006332045421004295f, 0.003176589496433735f, 0.0039793336763978004f, 0.003935815300792456f, 0.0041284458711743355f, 0.007434310391545296f, 0.0034915716387331486f, 0.013939084485173225f, 0.007952556014060974f, 0.003858396550640464f, 0.006595694925636053f, 0.0046331631019711494f, 0.00318648642860353f, 0.021691923961043358f, 0.003503065789118409f, 0.008395875804126263f, 0.002334045246243477f, 0.0037864409387111664f, 0.003039070637896657f, 0.004490583669394255f, 0.003830311121419072f, 0.012346272356808186f, 0.00370126124471426f, 0.005887666717171669f, 0.0023090222384780645f, 0.002899328013882041f, 0.0045010303147137165f, 0.004970919340848923f, 0.009434078820049763f, 0.0036659915931522846f, 0.005197151564061642f, 0.011300085112452507f, 0.01934780925512314f, 0.005571656860411167f, 0.010094141587615013f, 0.007313526701182127f, 0.013589218258857727f, 0.003458168590441346f, 0.004344278480857611f, 0.0024473750963807106f, 0.009388308972120285f, 0.00712484959512949f, 0.006098542362451553f, 0.00195230299141258f, 0.007699173875153065f, 0.002948409179225564f, 0.006505571771413088f, 0.010009248740971088f, 0.0022061390336602926f, 0.0025505092926323414f, 0.015532574616372585f, 0.005378771107643843f, 0.0029663201421499252f, 0.0027888501062989235f, 0.005885242950171232f, 0.008968058042228222f, 0.004225151613354683f, 0.0030799300875514746f, 0.014763046987354755f, 0.002732153981924057f, 0.003331500804051757f, 0.008483029901981354f, 0.0030201836489140987f, 0.005527752451598644f, 0.003917713183909655f, 0.002684293081983924f, 0.003106137039139867f, 0.005424940958619118f, 0.0029291643295437098f, 0.008836680091917515f, 0.0038946361746639013f, 0.0016314329113811255f, 0.0021071366500109434f, 0.029509741812944412f, 0.008374425582587719f, 0.00751303369179368f, 0.009281489998102188f, 0.006221516989171505f, 0.0031443354673683643f, 0.0051819332875311375f, 0.0038353032432496548f, 0.0059851184487342834f, 0.021375291049480438f, 0.013440518639981747f, 0.006306338589638472f, 0.013071775436401367f, 0.002381392288953066f, 0.011622206307947636f, 0.004099664278328419f, 0.008604446426033974f, 0.0031129587441682816f, 0.0056100040674209595f, 0.004365522414445877f, 0.019017430022358894f, 0.008863517083227634f, 0.003076707711443305f, 0.003839797107502818f, 0.007747912313789129f, 0.003139154054224491f, 0.002875040052458644f, 0.00786069966852665f, 0.007114210166037083f, 0.0038039549253880978f, 0.008604771457612514f, 0.010727095417678356f, 0.007647810038179159f, 0.002577984007075429f, 0.0026345085352659225f, 0.0040484522469341755f, 0.00825701653957367f, 0.009867105633020401f, 0.0029084691777825356f, 0.011121117509901524f, 0.00259329192340374f, 0.009569901041686535f, 0.0034525995142757893f, 0.014060856774449348f, 0.007856599055230618f, 0.007437544409185648f, 0.008516749367117882f, 0.003631970612332225f, 0.003895273432135582f, 0.003947780933231115f, 0.008397619239985943f, 0.006819895002990961f, 0.004214357119053602f, 0.004044533707201481f, 0.003800997044891119f, 0.008056609891355038f, 0.014165693894028664f, 0.008516627363860607f, 0.01983564905822277f, 0.002749202074483037f, 0.0038969351444393396f, 0.005891661625355482f, 0.014652756042778492f, 0.0023198069538921118f, 0.00462963106110692f, 0.005764163099229336f, 0.023851705715060234f, 0.0066259815357625484f, 0.0047129252925515175f, 0.01203075610101223f, 0.02096589468419552f, 0.004360193386673927f, 0.0031853558029979467f, 0.002386248204857111f, 0.0064973304979503155f, 0.008940537460148335f, 0.004440329037606716f, 0.017238767817616463f, 0.012784712016582489f, 0.03775264322757721f, 0.0026232926174998283f, 0.010787366889417171f, 0.004839065484702587f, 0.002219822956249118f, 0.0021971212700009346f, 0.0063447109423577785f, 0.008450761437416077f, 0.005617623683065176f, 0.00533420080319047f, 0.0072947354055941105f, 0.010729287751019001f, 0.002787757897749543f, 0.011947534047067165f, 0.003661121940240264f, 0.004592584911733866f, 0.00519405584782362f, 0.03294084966182709f, 0.010419996455311775f, 0.005086067598313093f, 0.022276543080806732f, 0.0044077676720917225f, 0.004266035743057728f, 0.002914851065725088f, 0.003394859842956066f, 0.004057396203279495f, 0.004688671790063381f, 0.007618957664817572f, 0.023767584934830666f, 0.006928880233317614f, 0.0023232826497405767f, 0.011546680703759193f, 0.0038731934037059546f, 0.006987473927438259f, 0.004448185209184885f, 0.01280253753066063f, 0.02820654958486557f, 0.003254263661801815f, 0.019668543711304665f, 0.004071804694831371f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #165 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_79_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.005603468976914883f, 0.00132456433493644f, 0.0016183557454496622f, 0.005982538219541311f, 0.0014089863980188966f, 0.004428580868989229f, 0.002379290759563446f, 0.001210764516144991f, 0.001881929812952876f, 0.004110497888177633f, 0.0012328150914981961f, 0.0017623368185013533f, 0.0016225201543420553f, 0.004643050953745842f, 0.003921136260032654f, 0.001639542169868946f, 0.0013494717422872782f, 0.006896937731653452f, 0.003582957200706005f, 0.0012399519328027964f, 0.0012626362731680274f, 0.004304239060729742f, 0.0013117576017975807f, 0.004267009440809488f, 0.001176008372567594f, 0.005938631482422352f, 0.0011635860428214073f, 0.0016641548136249185f, 0.0011851834133267403f, 0.0013091062428429723f, 0.0015629484551027417f, 0.0012624285882338881f, 0.0038607416208833456f, 0.004507198464125395f, 0.005377625580877066f, 0.0014421058585867286f, 0.0013738804263994098f, 0.004594146739691496f, 0.0013200759422034025f, 0.004263829905539751f, 0.001509387162514031f, 0.0041123670525848866f, 0.0015433046501129866f, 0.0013425841461867094f, 0.0012375764781609178f, 0.0059266709722578526f, 0.001525916624814272f, 0.004664652049541473f, 0.0012539953459054232f, 0.0042193555273115635f, 0.005620819982141256f, 0.0017589040799066424f, 0.0013267581816762686f, 0.0013077040202915668f, 0.001335205975919962f, 0.0012944428017362952f, 0.005483875051140785f, 0.0013080294011160731f, 0.0037272991612553596f, 0.0014540147967636585f, 0.0013052400900050998f, 0.001357471221126616f, 0.0017746079247444868f, 0.001470470684580505f, 0.0018013016087934375f, 0.002000299282371998f, 0.00471601914614439f, 0.0013375640846788883f, 0.005508056841790676f, 0.004325819201767445f, 0.006267881486564875f, 0.005294013302773237f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #166 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_80_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0006482647731900215f, 0.0006920486339367926f, 0.0007293342496268451f, 0.001120838220231235f, 0.0007025789236649871f, 0.0005413633189164102f, 0.0006851456710137427f, 0.00090353301493451f, 0.000995511538349092f, 0.0010045778471976519f, 0.0008145149331539869f, 0.0005535895470529795f, 0.0005468418239615858f, 0.00045530431088991463f, 0.0006313133053481579f, 0.0010203055571764708f, 0.0006331185577437282f, 0.000595977995544672f, 0.0006096772267483175f, 0.0008678550366312265f, 0.0004864870570600033f, 0.0005179399158805609f, 0.0005539855337701738f, 0.0010717840632423759f, 0.000931084796320647f, 0.000847695569973439f, 0.0007332560489885509f, 0.00038297564606182277f, 0.0008121937280520797f, 0.0005681788898073137f, 0.0005274607101455331f, 0.0005791688454337418f, 0.0006271887104958296f, 0.0005761618376709521f, 0.0005630776286125183f, 0.0010355939157307148f, 0.0006072422256693244f, 0.000571609300095588f, 0.0007800134480930865f, 0.0007049854611977935f, 0.0006958943558856845f, 0.0008944557630456984f, 0.0005835355841554701f, 0.0009330335888080299f, 0.0006022363668307662f, 0.0007917917682789266f, 0.0008312403806485236f, 0.0007892334833741188f, 0.0006268156575970352f, 0.0008612460806034505f, 0.0007460123160853982f, 0.0007354923873208463f, 0.0005971245700493455f, 0.0007168211159296334f, 0.0005902860430069268f, 0.00044013920705765486f, 0.0006160358316265047f, 0.0008165238541550934f, 0.0005268366076052189f, 0.0007362052565440536f, 0.0008818200440146029f, 0.0007573232869617641f, 0.0005622136523015797f, 0.0005273281713016331f, 0.0007065496174618602f, 0.0009631101274862885f, 0.0005812520976178348f, 0.0007513173623010516f, 0.000747697486076504f, 0.0007465801318176091f, 0.0008334490703418851f, 0.0006458304706029594f, 0.0008588797645643353f, 0.0005518365651369095f, 0.000426767481258139f, 0.0009475645492784679f, 0.0008613004465587437f, 0.0007102621020749211f, 0.0006408834597095847f, 0.0005619848379865289f, 0.0005037806695327163f, 0.0007380577153526247f, 0.0007504062377847731f, 0.0009925573831424117f, 0.0006049609510228038f, 0.0009140911279246211f, 0.0007890175911597908f, 0.0007074859458953142f, 0.000720225740224123f, 0.0006380103877745569f, 0.0008128567133098841f, 0.0009059807052835822f, 0.0007488574483431876f, 0.0007138945511542261f, 0.0009886507177725434f, 0.0006467794300988317f, 0.0005920557305216789f, 0.0004872163408435881f, 0.0006195426103658974f, 0.0007660989067517221f, 0.0005775018944405019f, 0.000850493204779923f, 0.0008052835473790765f, 0.0007565056439489126f, 0.0006587363895960152f, 0.0006057177088223398f, 0.0005863982951268554f, 0.0006908688228577375f, 0.000606637739110738f, 0.0010830811224877834f, 0.000629103509709239f, 0.0007721511065028608f, 0.0007555476040579379f, 0.0005855461349710822f, 0.0005709466058760881f, 0.0010117249330505729f, 0.0008157782140187919f, 0.0006900716107338667f, 0.0004782924661412835f, 0.0006021813023835421f, 0.00041073260945267975f, 0.0005923152202740312f, 0.0006457525887526572f, 0.0007357002468779683f, 0.0007244902080856264f, 0.0006766954902559519f, 0.0007571805035695434f, 0.00045772313023917377f, 0.0007583008846268058f, 0.00046033685794100165f, 0.0006495679845102131f, 0.0006528268568217754f, 0.0009604252991266549f, 0.0006231978186406195f, 0.0006836573593318462f, 0.000577933038584888f, 0.000585647823754698f, 0.0010534352622926235f, 0.0005811724695377052f, 0.0006559476023539901f, 0.0005556105170398951f, 0.0006955406279303133f, 0.0007337444694712758f, 0.0005970164202153683f, 0.00048176158452406526f, 0.000541622401215136f, 0.000841600529383868f, 0.0009308474254794419f, 0.0005543410661630332f, 0.0006713341572321951f, 0.0009159237379208207f, 0.0006562932976521552f, 0.0006098098237998784f, 0.0006969405221752822f, 0.0007728726486675441f, 0.0008226784993894398f, 0.0006997942691668868f, 0.0008948029135353863f, 0.0007111440063454211f, 0.0006120241014286876f, 0.0006218535709194839f, 0.0006994772702455521f, 0.0005830798763781786f, 0.0008344760863110423f, 0.0006492042448371649f, 0.0009523282060399652f, 0.0006668198620900512f, 0.0006619147025048733f, 0.0007295021205209196f, 0.0009466747287660837f, 0.0007947167032398283f, 0.0006995579460635781f, 0.0008462268742732704f, 0.0006541096372529864f, 0.0005937988171353936f, 0.0010315249674022198f, 0.0006547787925228477f, 0.0005391457816585898f, 0.0005748068797402084f, 0.0006247988203540444f, 0.0006210214924067259f, 0.0006901062442921102f, 0.0012670551659539342f, 0.0006093675037845969f, 0.0007170724566094577f, 0.0006835993845015764f, 0.0007463307701982558f, 0.0006481701857410371f, 0.0007573832990601659f, 0.0006298468797467649f, 0.0011138104600831866f, 0.0008916236693039536f, 0.0009492544922977686f, 0.0004805972275789827f, 0.0006262404494918883f, 0.0005328498664312065f, 0.0007205450674518943f, 0.0007045951206237078f, 0.0006830708007328212f, 0.000778169312980026f, 0.0006083895568735898f, 0.0005870777531526983f, 0.0007765745976939797f, 0.0006547805387526751f, 0.0007442242349497974f, 0.0006676716147921979f, 0.0008571823127567768f, 0.0006374851218424737f, 0.0006170127890072763f, 0.0004968215944245458f, 0.0006440572324208915f, 0.0005674805724993348f, 0.00036605619243346155f, 0.000830340082757175f, 0.0005737091996707022f, 0.0005742528010159731f, 0.0006077775615267456f, 0.000787306809797883f, 0.0005797776393592358f, 0.0008365309913642704f, 0.0008431061287410557f, 0.0008512939093634486f, 0.00046599723282270133f, 0.0006317213410511613f, 0.0007658046088181436f, 0.000571012613363564f, 0.000894186261575669f, 0.0007381023024208844f, 0.000833032769151032f, 0.0007710310746915638f, 0.0007418374880217016f, 0.0007548286812379956f, 0.0005766271497122943f, 0.0006871727528050542f, 0.0009555196738801897f, 0.0008743028156459332f, 0.0006946510984562337f, 0.0009834397351369262f, 0.0006986885564401746f, 0.0005119299166835845f, 0.0004982278915122151f, 0.0008546312456019223f, 0.000557940686121583f, 0.0007139134686440229f, 0.0006946416688151658f, 0.0005403432296589017f, 0.000476178276585415f, 0.0007109345751814544f, 0.0005707393866032362f, 0.00047885876847431064f, 0.0007784295012243092f, 0.000716162147000432f, 0.0006117798038758337f, 0.000630703812930733f, 0.0005817330675199628f, 0.000571263546589762f, 0.0005472092307172716f, 0.0007378078298643231f, 0.0004935089382342994f, 0.0008478402160108089f, 0.0005887135630473495f, 0.000743924523703754f, 0.0007210744661279023f, 0.0007488794508390129f, 0.0006588312098756433f, 0.0006563915521837771f, 0.0006898817955516279f, 0.0007566126296296716f, 0.0006079132435843349f, 0.0007778936414979398f, 0.0006962145562283695f, 0.0008121124701574445f, 0.0005502165295183659f, 0.0007296420517377555f, 0.0006957799778319895f, 0.0007867253734730184f, 0.0005547597538679838f, 0.0006988925742916763f, 0.0011280759936198592f, 0.0005415878840722144f, 0.0005730849807150662f, 0.0006657418562099338f, 0.0006348883616738021f, 0.0010610141325742006f, 0.0008389036520384252f, 0.0005890103639103472f, 0.0006071706884540617f, 0.0008694747230038047f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #167 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_84_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0035585814621299505f, 0.003517715260386467f, 0.00417935149744153f, 0.0030736159533262253f, 0.003594632726162672f, 0.00430168816819787f, 0.0035033852327615023f, 0.003081286558881402f, 0.003906519617885351f, 0.0032634702511131763f, 0.0037968833930790424f, 0.0042813243344426155f, 0.0032024062238633633f, 0.004907501395791769f, 0.0036626379005610943f, 0.0027384976856410503f, 0.0026058261282742023f, 0.004751487635076046f, 0.0031410977244377136f, 0.004931133706122637f, 0.002944587729871273f, 0.002181961666792631f, 0.004012742079794407f, 0.002844835864380002f, 0.003079855814576149f, 0.003466559574007988f, 0.003911267500370741f, 0.004217064939439297f, 0.004786239471286535f, 0.003210759721696377f, 0.003745145397260785f, 0.00394023722037673f, 0.0031609151046723127f, 0.003443973371759057f, 0.003248738357797265f, 0.004296408500522375f, 0.0035954322665929794f, 0.002812048653140664f, 0.003152653109282255f, 0.003500481601804495f, 0.003692688187584281f, 0.003505932167172432f, 0.004556120838969946f, 0.004510965663939714f, 0.003770169336348772f, 0.004007892683148384f, 0.0035033230669796467f, 0.0030592684634029865f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #168 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_86_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0008305956143885851f, 0.0015282371314242482f, 0.0018981792964041233f, 0.0015364690916612744f, 0.0006902681780047715f, 0.0023403579834848642f, 0.000861187931150198f, 0.0012131212279200554f, 0.0007626880542375147f, 0.0016463322099298239f, 0.0010033748112618923f, 0.0009509160881862044f, 0.0015336847864091396f, 0.00045442054397426546f, 0.0007872951682657003f, 0.0011185681214556098f, 0.0019253556383773685f, 0.0009887110209092498f, 0.0017223396571353078f, 0.0009616284514777362f, 0.0010418945457786322f, 0.0012102441396564245f, 0.0016695348313078284f, 0.0015987347578629851f, 0.0011919094249606133f, 0.0008129272609949112f, 0.0008792761364020407f, 0.0008994710515253246f, 0.0011851638555526733f, 0.000928468129131943f, 0.001033054431900382f, 0.0009336436633020639f, 0.0015757716028019786f, 0.001391101162880659f, 0.0009577965247444808f, 0.0015013535739853978f, 0.0008051428012549877f, 0.0006428463384509087f, 0.0010665225563570857f, 0.0022851324174553156f, 0.0012597489403560758f, 0.001080718357115984f, 0.0011948755709454417f, 0.0019015289144590497f, 0.0014180631842464209f, 0.0012139141326770186f, 0.000964509672485292f, 0.001258169417269528f, 0.001181077677756548f, 0.0021152172703295946f, 0.000814082333818078f, 0.0012859445996582508f, 0.0006717114592902362f, 0.0011394015746191144f, 0.0011967028258368373f, 0.001064819865860045f, 0.0012140913167968392f, 0.0011677138973027468f, 0.0012430464848876f, 0.0014638227876275778f, 0.0017982663121074438f, 0.0010312962112948298f, 0.0006828810437582433f, 0.0008287234813906252f, 0.0017355548916384578f, 0.0010314916726201773f, 0.001854207250289619f, 0.0018854468362405896f, 0.0010837127920240164f, 0.0016987016424536705f, 0.001206513261422515f, 0.0016633315244689584f, 0.0006565699586644769f, 0.0010755734983831644f, 0.0009500260348431766f, 0.002063025953248143f, 0.0013653411297127604f, 0.0006465413025580347f, 0.0009139556204900146f, 0.0007927859551273286f, 0.0007471423596143723f, 0.0013129679718986154f, 0.001315143657848239f, 0.0012695309706032276f, 0.0010168693261221051f, 0.0009502340690232813f, 0.0011237537255510688f, 0.0014819527277722955f, 0.0010340941371396184f, 0.0008434804622083902f, 0.001918191323056817f, 0.0013414548011496663f, 0.001096798456273973f, 0.0013421833282336593f, 0.0009031193912960589f, 0.0013858479214832187f, 0.000780231726821512f, 0.0008186292252503335f, 0.0011030614841729403f, 0.0010903833899646997f, 0.000824292073957622f, 0.0011104652658104897f, 0.001496291602961719f, 0.0015702202217653394f, 0.0015314803458750248f, 0.0009679672657512128f, 0.001620258204638958f, 0.0012771663023158908f, 0.0012130988761782646f, 0.001777826575562358f, 0.0012911445228382945f, 0.001162854372523725f, 0.001050648046657443f, 0.000841731030959636f, 0.0012639305787160993f, 0.0011054816422984004f, 0.0017324169166386127f, 0.000694568152539432f, 0.001110363402403891f, 0.0014687206130474806f, 0.0015299568185582757f, 0.0010917969048023224f, 0.0008893893100321293f, 0.0010104505345225334f, 0.0013633237686008215f, 0.0008289385004900396f, 0.0013016427401453257f, 0.0009866626933217049f, 0.0005716995219700038f, 0.0012317385990172625f, 0.0014832199085503817f, 0.0015265368856489658f, 0.0016641005640849471f, 0.0022915478330105543f, 0.0011808406561613083f, 0.0016001748153939843f, 0.0017256444552913308f, 0.001228598295710981f, 0.0009038093267008662f, 0.001011264743283391f, 0.002358989091590047f, 0.0024802980478852987f, 0.0010386818321421742f, 0.0007917869952507317f, 0.0009782473789528012f, 0.001506955362856388f, 0.0014441509265452623f, 0.0010422957129776478f, 0.0018409374170005322f, 0.0020555949304252863f, 0.001352893654257059f, 0.0019120246870443225f, 0.0006324750138446689f, 0.000770881655625999f, 0.0011626440100371838f, 0.0006817520479671657f, 0.001152676297351718f, 0.0008313959697261453f, 0.0005737269530072808f, 0.0008433600887656212f, 0.0010374730918556452f, 0.0012266186531633139f, 0.001495805219747126f, 0.0012094990815967321f, 0.0010546220000833273f, 0.0007429750985465944f, 0.0016443670028820634f, 0.0015056502306833863f, 0.0015403268625959754f, 0.0012371198972687125f, 0.0009479987784288824f, 0.0015353307826444507f, 0.0009529827511869371f, 0.0010498465271666646f, 0.0013677155366167426f, 0.0008678312879055738f, 0.0018014726229012012f, 0.000722189957741648f, 0.0007638928364031017f, 0.0011553434887900949f, 0.0014539852272719145f, 0.001117246807552874f, 0.001835176721215248f, 0.0008875548373907804f, 0.001045741024427116f, 0.0014968873001635075f, 0.0015658553456887603f, 0.0007007646490819752f, 0.0013190099271014333f, 0.0009170108241960406f, 0.001362791284918785f, 0.0008174679824151099f, 0.0021355266217142344f, 0.0006226398982107639f, 0.0011826488189399242f, 0.001913657644763589f, 0.0008925473084673285f, 0.0010024841176345944f, 0.0012838206021115184f, 0.0016927177784964442f, 0.0015028839698061347f, 0.0008458354859612882f, 0.0013156994245946407f, 0.001502623432315886f, 0.0008017863146960735f, 0.0012518190778791904f, 0.0009821823332458735f, 0.0014359946362674236f, 0.0009564216597937047f, 0.0009576567099429667f, 0.0018821738194674253f, 0.0006540666217915714f, 0.0011402430245652795f, 0.0021261796355247498f, 0.0012620323104783893f, 0.0010904574301093817f, 0.00119025819003582f, 0.000731038220692426f, 0.0013923199148848653f, 0.0010383037151768804f, 0.0009347975719720125f, 0.0014318294124677777f, 0.0011578052071854472f, 0.0007531538140028715f, 0.0011737302411347628f, 0.0011607548221945763f, 0.0016773331444710493f, 0.0011047247098758817f, 0.0013605932472273707f, 0.0008956808014772832f, 0.0015138147864490747f, 0.001294327201321721f, 0.0014503792626783252f, 0.001124137663282454f, 0.001187587738968432f, 0.0009735988569445908f, 0.000762917276006192f, 0.0008536840905435383f, 0.0012325751595199108f, 0.0014785357052460313f, 0.0014391931472346187f, 0.0010866193333640695f, 0.0009771956829354167f, 0.0007753146346658468f, 0.0008240681490860879f, 0.0010070136049762368f, 0.0011047151638194919f, 0.0012913208920508623f, 0.0011962123680859804f, 0.0012643241789191961f, 0.0009553312556818128f, 0.0019835359416902065f, 0.0007123227114789188f, 0.0021499632857739925f, 0.0015640095807611942f, 0.0010200644610449672f, 0.0014751056442037225f, 0.0011344385566189885f, 0.0009946427308022976f, 0.0009764292626641691f, 0.0015814972575753927f, 0.0015063179889693856f, 0.0018422711873427033f, 0.0006240044021978974f, 0.0014520514523610473f, 0.0018704237882047892f, 0.0013357530115172267f, 0.0009012982482090592f, 0.0012542563490569592f, 0.0014127575559541583f, 0.0023123619612306356f, 0.0009514710400253534f, 0.0019196404609829187f, 0.001538351527415216f, 0.0012872866354882717f, 0.0007972050807438791f, 0.0006749724852852523f, 0.001680314657278359f, 0.0017777447355911136f, 0.0010862257331609726f, 0.0010458967881277204f, 0.0017560552805662155f, 0.0017871635500341654f, 0.0007553127943538129f, 0.001647086930461228f, 0.0012368012685328722f, 0.001092847203835845f, 0.0008640136802569032f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #169 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_87_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008211186155676842f, 0.004275540355592966f, 0.0018207639222964644f, 0.0024086679331958294f, 0.015770860016345978f, 0.002234771614894271f, 0.007253914140164852f, 0.0028810594230890274f, 0.012123806402087212f, 0.005614072550088167f, 0.014311815612018108f, 0.004279486835002899f, 0.004257652442902327f, 0.03929612785577774f, 0.019091203808784485f, 0.0036914474330842495f, 0.003647641511633992f, 0.01037516351789236f, 0.0030936526600271463f, 0.0035382029600441456f, 0.005759885534644127f, 0.0036440915428102016f, 0.002774953143671155f, 0.0034958035685122013f, 0.01703621633350849f, 0.006059808656573296f, 0.00828506425023079f, 0.006197019945830107f, 0.003916492220014334f, 0.0122221102938056f, 0.017241619527339935f, 0.006340092048048973f, 0.0022907659877091646f, 0.005714318715035915f, 0.005089535377919674f, 0.003842482343316078f, 0.013165943324565887f, 0.013093732297420502f, 0.004156860988587141f, 0.0023420366924256086f, 0.004554804880172014f, 0.0049182395450770855f, 0.006953217554837465f, 0.0013996644411236048f, 0.005786282010376453f, 0.0031041735783219337f, 0.017294902354478836f, 0.0028532359283417463f, 0.00489985104650259f, 0.003200808074325323f, 0.007883720099925995f, 0.007507767528295517f, 0.014553583227097988f, 0.006150713190436363f, 0.009063460864126682f, 0.0051115332171320915f, 0.004660551901906729f, 0.003109459998086095f, 0.0031215923372656107f, 0.0034376876428723335f, 0.0039736866019666195f, 0.005665522068738937f, 0.012261929921805859f, 0.0072650304064154625f, 0.0032628204207867384f, 0.007392471190541983f, 0.0033959527499973774f, 0.0028261730913072824f, 0.004879810847342014f, 0.004490471910685301f, 0.005312902387231588f, 0.0022366438060998917f, 0.03182115778326988f, 0.005474638193845749f, 0.011332637630403042f, 0.0033915608655661345f, 0.0038592491764575243f, 0.014595383778214455f, 0.007027816493064165f, 0.005778569262474775f, 0.015407569706439972f, 0.004371848423033953f, 0.009340680204331875f, 0.003153619123622775f, 0.009192523546516895f, 0.00822389405220747f, 0.013482591137290001f, 0.0024849101901054382f, 0.008363787084817886f, 0.009190122596919537f, 0.002947354456409812f, 0.014161420054733753f, 0.006076004821807146f, 0.008471416309475899f, 0.004923772998154163f, 0.0028674989007413387f, 0.00454682158306241f, 0.009427303448319435f, 0.007665492128580809f, 0.004357262048870325f, 0.016898615285754204f, 0.010112856514751911f, 0.002190230879932642f, 0.0026775903534144163f, 0.005295883864164352f, 0.006797769106924534f, 0.0025898453313857317f, 0.0033481919672340155f, 0.0028644318226724863f, 0.0023387994151562452f, 0.006302114576101303f, 0.00350127462297678f, 0.006003000307828188f, 0.006217107642441988f, 0.0038181659765541553f, 0.0029018123168498278f, 0.003965439740568399f, 0.013656587339937687f, 0.009195167571306229f, 0.0024870596826076508f, 0.004387518856674433f, 0.008599103428423405f, 0.009509310126304626f, 0.008058683946728706f, 0.006535770371556282f, 0.007562925573438406f, 0.008435037918388844f, 0.0069036600179970264f, 0.010607807897031307f, 0.003888234728947282f, 0.002551521174609661f, 0.002546785632148385f, 0.004976384807378054f, 0.0022436135914176702f, 0.006799678318202496f, 0.0028914534486830235f, 0.002039813669398427f, 0.004833947401493788f, 0.004818908870220184f, 0.005092832259833813f, 0.0015986523358151317f, 0.00288185803219676f, 0.007108117453753948f, 0.017024634405970573f, 0.01127554476261139f, 0.005158829502761364f, 0.002968964632600546f, 0.009359440766274929f, 0.006316415499895811f, 0.002959862817078829f, 0.003548088949173689f, 0.0025428123772144318f, 0.014141181483864784f, 0.017973294481635094f, 0.008233437314629555f, 0.015851445496082306f, 0.002614906756207347f, 0.0066533624194562435f, 0.013681338168680668f, 0.010470472276210785f, 0.0030503973830491304f, 0.005321876145899296f, 0.0031581036746501923f, 0.00661046989262104f, 0.0026343832723796368f, 0.013579001650214195f, 0.00431653019040823f, 0.004062444902956486f, 0.0020428968127816916f, 0.0032438416965305805f, 0.010293536819517612f, 0.001538203447125852f, 0.010634792037308216f, 0.009325004182755947f, 0.005094748456031084f, 0.011010534130036831f, 0.0032118314411491156f, 0.030008452013134956f, 0.01767924427986145f, 0.007831383496522903f, 0.0022642314434051514f, 0.004962413106113672f, 0.0032238345593214035f, 0.009883185848593712f, 0.002158093499019742f, 0.010635985992848873f, 0.0038298387080430984f, 0.01027593668550253f, 0.0029729828238487244f, 0.005668640602380037f, 0.004137759562581778f, 0.01536023709923029f, 0.0030816614162176847f, 0.012443401850759983f, 0.007455803919583559f, 0.001959998859092593f, 0.01420239545404911f, 0.005513953510671854f, 0.005647876299917698f, 0.005318454932421446f, 0.008350175805389881f, 0.007713181432336569f, 0.005101770628243685f, 0.004027196206152439f, 0.01467028260231018f, 0.0028054562862962484f, 0.0048531717620790005f, 0.0053263441659510136f, 0.016845934092998505f, 0.015802063047885895f, 0.00279601919464767f, 0.016463376581668854f, 0.007327493745833635f, 0.0024623924400657415f, 0.0018475878750905395f, 0.003025405341759324f, 0.0026073853950947523f, 0.011301598511636257f, 0.00313606858253479f, 0.00888163410127163f, 0.012974281795322895f, 0.0020434935577213764f, 0.005311919376254082f, 0.020789839327335358f, 0.008446798659861088f, 0.00791576411575079f, 0.004615563899278641f, 0.009091969579458237f, 0.005549559369683266f, 0.02286158688366413f, 0.005140341352671385f, 0.0035521662794053555f, 0.0031274540815502405f, 0.012264134362339973f, 0.004787631332874298f, 0.009525674395263195f, 0.010961554013192654f, 0.010575709864497185f, 0.004546493757516146f, 0.0028008343651890755f, 0.0026642961893230677f, 0.004214781802147627f, 0.00968219619244337f, 0.01990407146513462f, 0.016925456002354622f, 0.007745538372546434f, 0.003122960217297077f, 0.004784052260220051f, 0.0024175187572836876f, 0.007522482890635729f, 0.0037724985741078854f, 0.0016791083617135882f, 0.045393094420433044f, 0.003083816496655345f, 0.002966419095173478f, 0.005294661037623882f, 0.0022413674741983414f, 0.004951779264956713f, 0.008126175962388515f, 0.004259041044861078f, 0.002542997943237424f, 0.0033723879605531693f, 0.0030949709471315145f, 0.014108030125498772f, 0.0027205822989344597f, 0.0018152354750782251f, 0.011308039538562298f, 0.013507216237485409f, 0.01428295113146305f, 0.0030662803910672665f, 0.0024217069149017334f, 0.005267022177577019f, 0.003247080137953162f, 0.004484160337597132f, 0.0044760555028915405f, 0.006193820387125015f, 0.014146866276860237f, 0.00319519336335361f, 0.0028415590059012175f, 0.007113410159945488f, 0.006354101467877626f, 0.0019454550929367542f, 0.0023327001836150885f, 0.012073462828993797f, 0.0026140823028981686f, 0.0063268267549574375f, 0.006293411832302809f, 0.009032064117491245f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #170 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_89_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 72,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0012308511650189757f, 0.005384733434766531f, 0.00394466845318675f, 0.0013992355670779943f, 0.005037535447627306f, 0.004758656490594149f, 0.001895882305689156f, 0.0014211045345291495f, 0.001489928923547268f, 0.0012837834656238556f, 0.001541393343359232f, 0.004063611384481192f, 0.004032982047647238f, 0.001479840138927102f, 0.0014364358503371477f, 0.001304048579186201f, 0.004699765704572201f, 0.005803359672427177f, 0.001205254695378244f, 0.00626025814563036f, 0.0018912770319730043f, 0.0014998387778177857f, 0.006050053518265486f, 0.004431029781699181f, 0.0012789819156751037f, 0.004634465090930462f, 0.00501939095556736f, 0.0014148651389405131f, 0.001312601612880826f, 0.0015369206666946411f, 0.004160897806286812f, 0.001848720945417881f, 0.004557840526103973f, 0.0012755072675645351f, 0.00520916236564517f, 0.004584756214171648f, 0.004805184900760651f, 0.006737909745424986f, 0.00588072557002306f, 0.0054030949249863625f, 0.004352190997451544f, 0.001604979857802391f, 0.0053981589153409f, 0.001256183022633195f, 0.0018859737319871783f, 0.0015503980685025454f, 0.0012752916663885117f, 0.0037316111847758293f, 0.0013055062154307961f, 0.0015192099381238222f, 0.0014353293227031827f, 0.004386733286082745f, 0.00432266341522336f, 0.001368350931443274f, 0.0013325911713764071f, 0.004868679214268923f, 0.001529281260445714f, 0.006067564710974693f, 0.0013370158849284053f, 0.0015584385255351663f, 0.0012056806590408087f, 0.004873176105320454f, 0.0014078132808208466f, 0.004687414970248938f, 0.0017386020626872778f, 0.0016864659264683723f, 0.0013023745268583298f, 0.005186458583921194f, 0.001365938689559698f, 0.0015878049889579415f, 0.003972584381699562f, 0.0015264214016497135f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #171 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_90_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0010516246547922492f, 0.0009240955696441233f, 0.0005478837410919368f, 0.0009132262202911079f, 0.0006023457972332835f, 0.0009568601381033659f, 0.0006865347386337817f, 0.0008899339009076357f, 0.0008321701316162944f, 0.0006443917518481612f, 0.0004674276860896498f, 0.0007885210798121989f, 0.0014732572017237544f, 0.0007168682059273124f, 0.0006940833409316838f, 0.0009614403825253248f, 0.0010405757930129766f, 0.0009316714713349938f, 0.0010349095100536942f, 0.0008081204141490161f, 0.0007579490193165839f, 0.0009269820293411613f, 0.0007714065141044557f, 0.000846642127726227f, 0.0007251075003296137f, 0.0006216879119165242f, 0.0010052525904029608f, 0.0009327030275017023f, 0.0008272567647509277f, 0.0006899077561683953f, 0.0008249054662883282f, 0.0007406409131363034f, 0.0006263539544306695f, 0.000800830137450248f, 0.0010090816067531705f, 0.0007763669127598405f, 0.0005816694465465844f, 0.0006987066008150578f, 0.0011379763018339872f, 0.0006684519466944039f, 0.0005844643455930054f, 0.0006279941881075501f, 0.0008841925882734358f, 0.0008422819664701819f, 0.0007148776203393936f, 0.0008862179238349199f, 0.0005633963737636805f, 0.0008416975033469498f, 0.0011969367042183876f, 0.000778916641138494f, 0.0004941648221574724f, 0.0008362524094991386f, 0.0005716817104257643f, 0.0008660665480419993f, 0.0007255795644596219f, 0.0007587196887470782f, 0.0010187645675614476f, 0.000863105000462383f, 0.0006382919382303953f, 0.0007086196565069258f, 0.0006043799803592265f, 0.0008096142555586994f, 0.0005251989350654185f, 0.0006907695787958801f, 0.0008201450691558421f, 0.0011157034896314144f, 0.00043883081525564194f, 0.0007532733725383878f, 0.000924241088796407f, 0.0006140192272141576f, 0.0007611137116327882f, 0.0007462666253559291f, 0.0005002148100174963f, 0.0007001626072451472f, 0.0005639813025481999f, 0.0006423095474019647f, 0.0005595271941274405f, 0.0007238752441480756f, 0.0006869730423204601f, 0.0011988312471657991f, 0.0008394136093556881f, 0.0010109086288139224f, 0.0007399041205644608f, 0.0005906690494157374f, 0.0009440073044970632f, 0.0010756723349913955f, 0.0009099110029637814f, 0.0008808854618109763f, 0.0008489199681207538f, 0.0007867568056099117f, 0.0006158381002023816f, 0.0005637364229187369f, 0.0009963788324967027f, 0.0006975942524150014f, 0.0007988776196725667f, 0.0006265493575483561f, 0.0006896842969581485f, 0.000630296126473695f, 0.0008081721607595682f, 0.0005894827772863209f, 0.0009408744517713785f, 0.0008096512174233794f, 0.0008708859677426517f, 0.0006635110476054251f, 0.0008264784701168537f, 0.0005521897110156715f, 0.0007751570083200932f, 0.0005996082327328622f, 0.0005793148884549737f, 0.0006398661062121391f, 0.0006252494640648365f, 0.001346832257695496f, 0.0005913859349675477f, 0.0005560749559663236f, 0.0008047919254750013f, 0.0005973729421384633f, 0.0007814739947207272f, 0.0007408007513731718f, 0.0006457165000028908f, 0.0008848332217894495f, 0.0005131029756739736f, 0.0010610289173200727f, 0.0005512619973160326f, 0.0008000197703950107f, 0.0009963251650333405f, 0.0007084044045768678f, 0.0007880589691922069f, 0.00060752296121791f, 0.0007843895582482219f, 0.0008288170793093741f, 0.0006521701579913497f, 0.0007131019374355674f, 0.0008791542495600879f, 0.0008211893145926297f, 0.0006814746302552521f, 0.0008666940848343074f, 0.0006200203206390142f, 0.00045411675819195807f, 0.0009014926617965102f, 0.0006395301898010075f, 0.000914927979465574f, 0.0008735883166082203f, 0.000626965134870261f, 0.0009882914600893855f, 0.0007424067007377744f, 0.0006690232548862696f, 0.0006166909588500857f, 0.0007874537841416895f, 0.0005935699446126819f, 0.0007401574985124171f, 0.0005210542003624141f, 0.0003917936410289258f, 0.0005857727956026793f, 0.0008153912494890392f, 0.0006257487693801522f, 0.0007435730658471584f, 0.0008965943125076592f, 0.0007790165254846215f, 0.0011228303192183375f, 0.0006990912952460349f, 0.0008291901904158294f, 0.0007434540893882513f, 0.0007904136436991394f, 0.0010967793641611934f, 0.0005388472927734256f, 0.0009679767535999417f, 0.0007266652537509799f, 0.0006656217155978084f, 0.0005944931181147695f, 0.0009094830602407455f, 0.0007044028025120497f, 0.0008227408980019391f, 0.0005552583606913686f, 0.001246980857104063f, 0.0006945289205759764f, 0.0004420424229465425f, 0.0010832707630470395f, 0.0008716571028344333f, 0.000829557713586837f, 0.0007033600704744458f, 0.0007772634271532297f, 0.0009438577690161765f, 0.0006899583386257291f, 0.0006197526236064732f, 0.0007574339979328215f, 0.0009433112572878599f, 0.0007026256062090397f, 0.0005265326471999288f, 0.0007961070514284074f, 0.0010662570130079985f, 0.0009092038962990046f, 0.0008315509767271578f, 0.000581387139391154f, 0.0006962371408008039f, 0.0007440642802976072f, 0.0004456659662537277f, 0.000877054815646261f, 0.0010095612378790975f, 0.0007239098777063191f, 0.0007112842868082225f, 0.0009496768470853567f, 0.0008027554722502828f, 0.0006277195643633604f, 0.0007240457343868911f, 0.0006331330514512956f, 0.0011288286186754704f, 0.0006038036663085222f, 0.0005278731696307659f, 0.000963935861364007f, 0.0006623738445341587f, 0.0007202459964901209f, 0.0005620274459943175f, 0.0005166334449313581f, 0.0008035125792957842f, 0.0008640420855954289f, 0.000495866930577904f, 0.001081177149899304f, 0.000580453546717763f, 0.00046005030162632465f, 0.0005576204275712371f, 0.0006937935249879956f, 0.0006506106583401561f, 0.0009127420489676297f, 0.0008594777900725603f, 0.0006908042123541236f, 0.0010120195802301168f, 0.0009087680373340845f, 0.0007334800320677459f, 0.0007302150479517877f, 0.0006280523957684636f, 0.0008281661430373788f, 0.0010379598243162036f, 0.0008709015673957765f, 0.0007553770556114614f, 0.0007649029139429331f, 0.0006550131947733462f, 0.0006864981260150671f, 0.0008423051331192255f, 0.0007045209058560431f, 0.0008607835043221712f, 0.0006295752245932817f, 0.0006563946953974664f, 0.0008889266173355281f, 0.0006663331296294928f, 0.000607430178206414f, 0.001246635103598237f, 0.0005663000629283488f, 0.0005436002975329757f, 0.0007163570844568312f, 0.0005916144582442939f, 0.0005408347933553159f, 0.0007205695146694779f, 0.0008518145186826587f, 0.0006867379997856915f, 0.0007898914627730846f, 0.0007356028654612601f, 0.0008436801144853234f, 0.0007484554662369192f, 0.0007210909971036017f, 0.0007315605762414634f, 0.0005224270862527192f, 0.0007756748236715794f, 0.0007169369491748512f, 0.0008927785675041378f, 0.0004107342101633549f, 0.000626766006462276f, 0.0008393768221139908f, 0.0006450937362387776f, 0.0007027651881799102f, 0.0007574110059067607f, 0.0007204499561339617f, 0.000663177517708391f, 0.0008665987988933921f, 0.000648888002615422f, 0.0009032004163600504f, 0.0007717905100435019f, 0.0007172718760557473f, 0.0004722908779513091f, 0.000848693773150444f, 0.0005412715254351497f, 0.0007510097348131239f, 0.000671030196826905f, 0.0008149157511070371f, 0.0008753154543228447f, 0.001008390448987484f, 0.0007296765106730163f, 0.0007943414384499192f, 0.0010998795041814446f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #172 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_94_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 48,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0051414077170193195f, 0.0037161982618272305f, 0.0054646204225718975f, 0.0031559166964143515f, 0.0033794883638620377f, 0.004297977313399315f, 0.004062297288328409f, 0.003659408073872328f, 0.0035750330425798893f, 0.0030970843508839607f, 0.004501966293901205f, 0.005787128582596779f, 0.003761419327929616f, 0.004704745952039957f, 0.004066071473062038f, 0.004064532928168774f, 0.0031569236889481544f, 0.00440153619274497f, 0.0030171528924256563f, 0.003933427855372429f, 0.0038221057038754225f, 0.0027465170715004206f, 0.004917724058032036f, 0.0040376437827944756f, 0.004173018038272858f, 0.004097347613424063f, 0.004647042136639357f, 0.0034838446881622076f, 0.00478843878954649f, 0.003070826642215252f, 0.003689819248393178f, 0.0050573209300637245f, 0.004568517208099365f, 0.004365317057818174f, 0.0031174211762845516f, 0.005580291152000427f, 0.004836237523704767f, 0.0038872358854860067f, 0.004079804755747318f, 0.006866435520350933f, 0.0044820248149335384f, 0.0038523036055266857f, 0.004600783344358206f, 0.0036575139965862036f, 0.0037369788624346256f, 0.0059151845052838326f, 0.005711622070521116f, 0.0037334354128688574f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #173 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_96_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 288,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0012522733304649591f, 0.0014498918317258358f, 0.0018847736064344645f, 0.0012051069643348455f, 0.0009421574068255723f, 0.0013819349696859717f, 0.0011360604548826814f, 0.0014352640137076378f, 0.0013215573271736503f, 0.0008148142951540649f, 0.0012829266488552094f, 0.0007563015096820891f, 0.0010951998410746455f, 0.0009841974824666977f, 0.0009877075208351016f, 0.001235358533449471f, 0.0011351072462275624f, 0.0010587440337985754f, 0.0010203397832810879f, 0.0011353939771652222f, 0.0013200967805460095f, 0.0011284813517704606f, 0.0014355735620483756f, 0.0010563990799710155f, 0.0011031352914869785f, 0.0008465222781524062f, 0.00116067286580801f, 0.0016263889847323298f, 0.0010250684572383761f, 0.0010151120368391275f, 0.0010102526284754276f, 0.001540772384032607f, 0.0007356107817031443f, 0.0007798732258379459f, 0.0008258639718405902f, 0.0010446802480146289f, 0.0010113026946783066f, 0.001019553397782147f, 0.0009650253923609853f, 0.001153362332843244f, 0.0010487401159480214f, 0.001201783656142652f, 0.001511532929725945f, 0.0012621640926226974f, 0.0016991576412692666f, 0.0008911587647162378f, 0.0013618391240015626f, 0.0012012983206659555f, 0.000896434357855469f, 0.0011896784417331219f, 0.001227345783263445f, 0.001320361508987844f, 0.001448492519557476f, 0.0010326537303626537f, 0.0012402381980791688f, 0.0009992552222684026f, 0.0010969237191602588f, 0.0011572520015761256f, 0.0008702509221620858f, 0.0011505050351843238f, 0.0012215962633490562f, 0.0009613583679310977f, 0.001175169600173831f, 0.0007018768810667098f, 0.0011073836358264089f, 0.0010500436183065176f, 0.0011888269800692797f, 0.0009546930086798966f, 0.0010670579504221678f, 0.0009423735900782049f, 0.0014669183874502778f, 0.0011683059856295586f, 0.0013185999123379588f, 0.0013112741289660335f, 0.0012534646084532142f, 0.0011594031238928437f, 0.0012439616257324815f, 0.0012459642020985484f, 0.001298384042456746f, 0.0009019405697472394f, 0.0010126082925125957f, 0.0009908791398629546f, 0.0016831967514008284f, 0.0012622042559087276f, 0.0013589563313871622f, 0.0009369846084155142f, 0.0013246749294921756f, 0.0013791073579341173f, 0.0009452488739043474f, 0.0007904364611022174f, 0.0008465074351988733f, 0.0012643085792660713f, 0.0015357000520452857f, 0.0012581038754433393f, 0.0010030866833403707f, 0.0007215284858830273f, 0.0014148076297715306f, 0.001183152780868113f, 0.001074487343430519f, 0.0012755758361890912f, 0.00093083392130211f, 0.0012055495753884315f, 0.0013765377225354314f, 0.0008720802725292742f, 0.0012751162284985185f, 0.0014011380262672901f, 0.0012292867759242654f, 0.001078497152775526f, 0.0012836101232096553f, 0.00105441699270159f, 0.0013842012267559767f, 0.0008614882826805115f, 0.0009859458077698946f, 0.0013682243879884481f, 0.001360500929877162f, 0.001100292312912643f, 0.0013829729286953807f, 0.0013445662334561348f, 0.001761488150805235f, 0.0010214702924713492f, 0.0010131041053682566f, 0.0013227013405412436f, 0.00131645193323493f, 0.001209871843457222f, 0.0009977853624150157f, 0.0012724515981972218f, 0.0011739431647583842f, 0.0010547632118687034f, 0.0012503383914008737f, 0.0012765167048200965f, 0.0017890563467517495f, 0.0014360630884766579f, 0.001192081137560308f, 0.0009723958792164922f, 0.0013151649618521333f, 0.0010563342366367579f, 0.0011278962483629584f, 0.0010418470483273268f, 0.0016160276718437672f, 0.0012537774164229631f, 0.0012285365955904126f, 0.0011457044165581465f, 0.0009963334305211902f, 0.0015402224380522966f, 0.0013581259408965707f, 0.0008968814508989453f, 0.0007796916179358959f, 0.0009480179287493229f, 0.0009022680460475385f, 0.0010838228045031428f, 0.0015477566048502922f, 0.0011966557940468192f, 0.0011483961716294289f, 0.0010164373088628054f, 0.0012123386841267347f, 0.0012259188806638122f, 0.0011731580598279834f, 0.0009704236290417612f, 0.0011104370933026075f, 0.0011521578999236226f, 0.0010322463931515813f, 0.0014262342592701316f, 0.0014027577126398683f, 0.0016271923668682575f, 0.0016515498282387853f, 0.001112393569201231f, 0.0007976890774443746f, 0.0007597393705509603f, 0.001222645165398717f, 0.0011733981082215905f, 0.0012555642751976848f, 0.0012111545074731112f, 0.0012350662145763636f, 0.0010120151564478874f, 0.00113055226393044f, 0.0012613438302651048f, 0.0009492236422374845f, 0.0012463659513741732f, 0.001674186554737389f, 0.000987313804216683f, 0.0008859551744535565f, 0.001142216264270246f, 0.0016428108792752028f, 0.0011492329649627209f, 0.0009447277407161891f, 0.0014128107577562332f, 0.0012446899199858308f, 0.0012485848274081945f, 0.001180689549073577f, 0.0009859454585239291f, 0.0014011095045134425f, 0.0008717472082935274f, 0.0010938821360468864f, 0.001055877422913909f, 0.0011234679259359837f, 0.0008740320918150246f, 0.0011878755176439881f, 0.0013962819939479232f, 0.0013044480001553893f, 0.0012213261798024178f, 0.0013507145922631025f, 0.0012987673981115222f, 0.0012456810800358653f, 0.0011778745101764798f, 0.0012543190969154239f, 0.0012581722112372518f, 0.0011062691919505596f, 0.0015295181656256318f, 0.0011132803047075868f, 0.001241448218934238f, 0.001703970949165523f, 0.0009146122611127794f, 0.00124824745580554f, 0.0009995467262342572f, 0.0011678483569994569f, 0.0008903029374778271f, 0.0009408874902874231f, 0.0009158535394817591f, 0.0008876941283233464f, 0.001241279998794198f, 0.0013274623779579997f, 0.0011531845666468143f, 0.0010776127455756068f, 0.0010943522211164236f, 0.001018036506138742f, 0.000961806217674166f, 0.0011726400116458535f, 0.0014244912890717387f, 0.0008937816019169986f, 0.0010218358365818858f, 0.0008705925429239869f, 0.0011685789795592427f, 0.0012623879592865705f, 0.0011933071073144674f, 0.0012366777518764138f, 0.0009828218026086688f, 0.0009314133785665035f, 0.001058999914675951f, 0.0012822835706174374f, 0.0011169406352564692f, 0.0013221903936937451f, 0.0011609088396653533f, 0.0009299012017436326f, 0.0013117336202412844f, 0.0009703475516289473f, 0.001493460382334888f, 0.0010912714060395956f, 0.0009680968360044062f, 0.0014618136920034885f, 0.0009607519023120403f, 0.0012093075783923268f, 0.0020307060331106186f, 0.0012407763861119747f, 0.0011882880935445428f, 0.0012816450325772166f, 0.0012983821798115969f, 0.001066177268512547f, 0.0014388439012691379f, 0.0011029313318431377f, 0.0012890065554529428f, 0.0010423355270177126f, 0.000847337010782212f, 0.0011121651623398066f, 0.0010414774296805263f, 0.0010262681171298027f, 0.0010203124256804585f, 0.0008578431443311274f, 0.0009676124318502843f, 0.0012742832768708467f, 0.001159957959316671f, 0.0013254440855234861f, 0.0011428744764998555f, 0.001134276739321649f, 0.0009187574032694101f, 0.0013493295991793275f, 0.001209123875014484f, 0.0010628364980220795f, 0.0011851676972582936f, 0.0011807960690930486f, 0.0010732628870755434f, 0.0011559115955606103f, 0.001426667906343937f, 0.001322520081885159f, 0.001056195585988462f, 0.001127430354245007f, 0.0012003597803413868f, 0.0009540403843857348f, 0.0010537608759477735f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #174 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_98_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1280,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0008706789813004434f, 0.0037268484011292458f, 0.0035605242010205984f, 0.0007837964803911746f, 0.000718184164725244f, 0.003563098143786192f, 0.0005875368951819837f, 0.00398789020255208f, 0.0011078332317993045f, 0.005044975783675909f, 0.004291597753763199f, 0.003944491967558861f, 0.0039369710721075535f, 0.0008157530683092773f, 0.000762224430218339f, 0.005134417675435543f, 0.005503409542143345f, 0.0007692412473261356f, 0.0007329460349865258f, 0.004433820955455303f, 0.0005824801046401262f, 0.0008368719136342406f, 0.0008313467260450125f, 0.0049653067253530025f, 0.0009978699963539839f, 0.000814512197393924f, 0.004362554755061865f, 0.0010345270857214928f, 0.0006293152691796422f, 0.0007501097279600799f, 0.001544299302622676f, 0.003512444207444787f, 0.0020466570276767015f, 0.0036370172165334225f, 0.0006563370116055012f, 0.0031816945411264896f, 0.0007743304595351219f, 0.0038961947429925203f, 0.004157070070505142f, 0.0037146585527807474f, 0.0013043377548456192f, 0.0012309504672884941f, 0.003943217918276787f, 0.0039872704073786736f, 0.0007201306871138513f, 0.0008510533953085542f, 0.0007841016631573439f, 0.0007917000912129879f, 0.0007118828943930566f, 0.0037531666457653046f, 0.0046110800467431545f, 0.0007478652405552566f, 0.0006328758900053799f, 0.0007873198483139277f, 0.0008867884171195328f, 0.005493279546499252f, 0.0008648274233564734f, 0.004045572131872177f, 0.001358265639282763f, 0.000753675471059978f, 0.00484808161854744f, 0.0035214952658861876f, 0.0008737901225686073f, 0.00481505086645484f, 0.0036420829128473997f, 0.0042530810460448265f, 0.0005682984483428299f, 0.0008312218124046922f, 0.004701984580606222f, 0.0006298016523942351f, 0.0013845731737092137f, 0.0008656413992866874f, 0.0037612877786159515f, 0.0005335922469384968f, 0.0007999890949577093f, 0.0016736171673983335f, 0.0021092265378683805f, 0.0009580748155713081f, 0.004036055877804756f, 0.004157578572630882f, 0.0008195365662686527f, 0.0038938582874834538f, 0.004258125554770231f, 0.0007838733145035803f, 0.00359169184230268f, 0.0006503051263280213f, 0.0031779627315700054f, 0.0037017904687672853f, 0.004399749916046858f, 0.0028917447198182344f, 0.004397270735353231f, 0.0036892888601869345f, 0.004841613583266735f, 0.0010618494125083089f, 0.003572858637198806f, 0.0007720431312918663f, 0.004477245733141899f, 0.004257659427821636f, 0.001375306281261146f, 0.004036736208945513f, 0.0006044050096534193f, 0.0006233796593733132f, 0.00425803754478693f, 0.0010312156518921256f, 0.0009346948936581612f, 0.004785323049873114f, 0.0042732590809464455f, 0.0032831632997840643f, 0.0011828633723780513f, 0.0007142799440771341f, 0.004443678539246321f, 0.004598811734467745f, 0.004410146735608578f, 0.0036086139734834433f, 0.0010258416878059506f, 0.0038091710302978754f, 0.00371989025734365f, 0.004377562087029219f, 0.0006572067504748702f, 0.0005516497185453773f, 0.004721555858850479f, 0.0047826762311160564f, 0.004554435145109892f, 0.0006614566082134843f, 0.0007107250858098269f, 0.004043874330818653f, 0.00527301337569952f, 0.0007597403600811958f, 0.005397275555878878f, 0.000773751875385642f, 0.003727781120687723f, 0.0013386898208409548f, 0.004741557873785496f, 0.004037810023874044f, 0.0031743585132062435f, 0.0007602230180054903f, 0.0007890172419138253f, 0.0007849927642382681f, 0.004242877941578627f, 0.0008507993770763278f, 0.003970460966229439f, 0.0038988380692899227f, 0.005074594169855118f, 0.0006835110834799707f, 0.0008968862239271402f, 0.0013418967137113214f, 0.0010213544592261314f, 0.004312414675951004f, 0.0008060859399847686f, 0.004793550819158554f, 0.0006186356185935438f, 0.0009748587617650628f, 0.0035223113372921944f, 0.001048215082846582f, 0.004139126278460026f, 0.000762915937229991f, 0.0007034455775283277f, 0.0010256933746859431f, 0.003307628445327282f, 0.0007572784670628607f, 0.0007346845814026892f, 0.003471911419183016f, 0.0008218638249672949f, 0.0007066212710924447f, 0.004147168714553118f, 0.0008006306597962976f, 0.0008709392859600484f, 0.004337772261351347f, 0.0038997370284050703f, 0.0006406879401765764f, 0.0040871803648769855f, 0.007990253157913685f, 0.00329223251901567f, 0.000981985591351986f, 0.003115231404080987f, 0.0010598930530250072f, 0.00491719227284193f, 0.0006929425289854407f, 0.0011217216961085796f, 0.003973165526986122f, 0.0007139128865674138f, 0.003989884629845619f, 0.000669589324388653f, 0.000597198202740401f, 0.004115995950996876f, 0.0011831680312752724f, 0.001089133438654244f, 0.0007202578708529472f, 0.004060619045048952f, 0.000893265416380018f, 0.0007425234653055668f, 0.004276614636182785f, 0.0008016318315640092f, 0.0006739895325154066f, 0.0006991896661929786f, 0.004217027220875025f, 0.0008537059766240418f, 0.0008334568119607866f, 0.001158149796538055f, 0.0011188575299456716f, 0.003195495344698429f, 0.003983635921031237f, 0.0009095934219658375f, 0.0007711034268140793f, 0.001209945185109973f, 0.004379212856292725f, 0.0007254083757288754f, 0.0006798141403123736f, 0.003994189202785492f, 0.003980489447712898f, 0.0007951455190777779f, 0.0006989300600253046f, 0.00564581248909235f, 0.0005806201952509582f, 0.0012703799875453115f, 0.004603036679327488f, 0.0037991218268871307f, 0.004567979369312525f, 0.0006584693328477442f, 0.0006197525653988123f, 0.003823719220235944f, 0.0013157635694369674f, 0.003954820800572634f, 0.001017688657157123f, 0.0007606840808875859f, 0.0032578364480286837f, 0.0007207586313597858f, 0.0006965011125430465f, 0.0007732700905762613f, 0.0006421425496228039f, 0.00378825212828815f, 0.0008254142012447119f, 0.004655627533793449f, 0.0006750234751962125f, 0.000698684249073267f, 0.0006503374315798283f, 0.0007359460578300059f, 0.001404648763127625f, 0.0007683761650696397f, 0.0007721546571701765f, 0.0036503004375845194f, 0.0007442814530804753f, 0.0006399417179636657f, 0.0008177981362678111f, 0.0008075514924712479f, 0.0015462185256183147f, 0.0012740480015054345f, 0.0012296248460188508f, 0.0025856797583401203f, 0.005435212980955839f, 0.0007050257408991456f, 0.0009226913098245859f, 0.0016635811189189553f, 0.0007262227591127157f, 0.00446219090372324f, 0.003375399624928832f, 0.004195226822048426f, 0.0008242251933552325f, 0.003948538564145565f, 0.0007081369985826313f, 0.003653815481811762f, 0.0007488089031539857f, 0.0006602644571103156f, 0.004299127962440252f, 0.003738843137398362f, 0.0006687604472972453f, 0.0008059684769250453f, 0.0035061489325016737f, 0.0035067026037722826f, 0.0008279780158773065f, 0.0006691318121738732f, 0.0007347429054789245f, 0.004208937752991915f, 0.0010675068479031324f, 0.0006875339895486832f, 0.003533815499395132f, 0.004204421304166317f, 0.0008269286481663585f, 0.004510305356234312f, 0.003759786719456315f, 0.004109066911041737f, 0.0006592559511773288f, 0.0007934680324979126f, 0.003981306217610836f, 0.004186323843896389f, 0.004339177627116442f, 0.001117844134569168f, 0.001094217412173748f, 0.0009475476108491421f, 0.0006379863480105996f, 0.0054109059274196625f, 0.0035986718721687794f, 0.0037587694823741913f, 0.0008772786823101342f, 0.004836615175008774f, 0.0007787853828631341f, 0.003891203086823225f, 0.0045239063911139965f, 0.0006466190097853541f, 0.004724042024463415f, 0.0007386757642962039f, 0.004931684583425522f, 0.0038719400763511658f, 0.001079289591871202f, 0.002832247642800212f, 0.003917399328202009f, 0.004915177822113037f, 0.000976616283878684f, 0.0013844507047906518f, 0.005628679413348436f, 0.0007771350210532546f, 0.005079022143036127f, 0.0007680993876419961f, 0.0038074541371315718f, 0.0034408888313919306f, 0.0011399650247767568f, 0.000759839138481766f, 0.000746498757507652f, 0.0006864656461402774f, 0.0007106658304110169f, 0.003226198023185134f, 0.0006691153394058347f, 0.003622722579166293f, 0.0006493671098724008f, 0.004667595960199833f, 0.001256974064745009f, 0.003537227399647236f, 0.0011037657968699932f, 0.004875782877206802f, 0.003519060555845499f, 0.004426606930792332f, 0.0027599772438406944f, 0.00421065604314208f, 0.004681198857724667f, 0.0023728429805487394f, 0.0035635107196867466f, 0.0006092202384024858f, 0.0007379387971013784f, 0.004153373185545206f, 0.0046765003353357315f, 0.0006425836472772062f, 0.0036413664929568768f, 0.0006967938388697803f, 0.0028807800263166428f, 0.004250910598784685f, 0.004171609412878752f, 0.0008054886129684746f, 0.004665623418986797f, 0.0007759099826216698f, 0.0007064226665534079f, 0.0007155106286518276f, 0.004102099686861038f, 0.0006827980396337807f, 0.0033802574034780264f, 0.0008193698595277965f, 0.000666796404402703f, 0.003618742572143674f, 0.0037430289667099714f, 0.0006435512914322317f, 0.003940265160053968f, 0.0006216735346242785f, 0.004505028948187828f, 0.0006009411881677806f, 0.0008583583403378725f, 0.00423735985532403f, 0.001087266718968749f, 0.0010131451999768615f, 0.000755125714931637f, 0.0006812312640249729f, 0.003480857703834772f, 0.000758431269787252f, 0.004217743407934904f, 0.0038061104714870453f, 0.0007136705098673701f, 0.0007740666042082012f, 0.004536651540547609f, 0.0008209431543946266f, 0.0007037913892418146f, 0.006368937902152538f, 0.001235270407050848f, 0.0008005322306416929f, 0.004338995087891817f, 0.004314240533858538f, 0.003600688884034753f, 0.000808172335382551f, 0.0043671997264027596f, 0.0006813813233748078f, 0.003367639146745205f, 0.0007594897761009634f, 0.0038862626533955336f, 0.0011239295126870275f, 0.0007970681181177497f, 0.0013545486144721508f, 0.0007597411749884486f, 0.0006785848527215421f, 0.0019003134220838547f, 0.00445495406165719f, 0.003662307048216462f, 0.0034464895725250244f, 0.004103328101336956f, 0.000881741289049387f, 0.0006876576226204634f, 0.003409162862226367f, 0.0007268422050401568f, 0.0019439380848780274f, 0.0031516847666352987f, 0.004874828737229109f, 0.003927992191165686f, 0.0005948205362074077f, 0.003206681227311492f, 0.0035813457798212767f, 0.004348465707153082f, 0.003721600864082575f, 0.005211764946579933f, 0.0006630325224250555f, 0.005149263422936201f, 0.00428224541246891f, 0.0036088828928768635f, 0.0007767108036205173f, 0.0007633917848579586f, 0.004385627806186676f, 0.0005835526390001178f, 0.004176104906946421f, 0.0007204707362689078f, 0.0016012649284675717f, 0.0007126837153919041f, 0.0007322732708416879f, 0.0006267349235713482f, 0.005495645571500063f, 0.0009090628009289503f, 0.0008145355968736112f, 0.0006217354093678296f, 0.0008191982633434236f, 0.0007089544669725001f, 0.0008011720492504537f, 0.004328926559537649f, 0.003814782714471221f, 0.0013803221518173814f, 0.0032140822149813175f, 0.0007876920280978084f, 0.0057975659146904945f, 0.0006349334726110101f, 0.0008207496139220893f, 0.004739535041153431f, 0.0007312746020033956f, 0.0007821150356903672f, 0.0008686699438840151f, 0.0009259579237550497f, 0.0010077842744067311f, 0.004015069920569658f, 0.0023852591402828693f, 0.0007210542098619044f, 0.0007439474575221539f, 0.003968748264014721f, 0.0006182692595757544f, 0.003724197158589959f, 0.0036447420716285706f, 0.0007031474960967898f, 0.0034584610257297754f, 0.0007084357785061002f, 0.003510809503495693f, 0.005373163614422083f, 0.0005935198860242963f, 0.004572344943881035f, 0.004588056821376085f, 0.0005704243667423725f, 0.0035435850732028484f, 0.0041610682383179665f, 0.0039920019917190075f, 0.003569377586245537f, 0.0012321269605308771f, 0.0007368034566752613f, 0.0007179730455391109f, 0.004129116423428059f, 0.0009391779894940555f, 0.0007198458770290017f, 0.003881844226270914f, 0.001043302589096129f, 0.0039879814721643925f, 0.0010686942841857672f, 0.004975704476237297f, 0.0006977790035307407f, 0.0035353058483451605f, 0.0008531046914868057f, 0.0006601858185604215f, 0.0008328940602950752f, 0.0008546960889361799f, 0.0029832664877176285f, 0.004192664287984371f, 0.00146968150511384f, 0.0008169712382368743f, 0.005453603807836771f, 0.0007615574868395925f, 0.004293896723538637f, 0.004838265478610992f, 0.0009987660450860858f, 0.0007847468368709087f, 0.0033459526021033525f, 0.005330189131200314f, 0.003944180440157652f, 0.004275682847946882f, 0.004114899318665266f, 0.003770357696339488f, 0.0005927205784246325f, 0.0006472768145613372f, 0.0005486386362463236f, 0.004513108637183905f, 0.0007885656086727977f, 0.004442313686013222f, 0.000741126830689609f, 0.00396350072696805f, 0.0007399570313282311f, 0.0011606819462031126f, 0.0007076121983118355f, 0.0010755951516330242f, 0.004727852065116167f, 0.0007879511686041951f, 0.0007609136519022286f, 0.003596504218876362f, 0.0007106068078428507f, 0.00489465706050396f, 0.0007576955831609666f, 0.00373002327978611f, 0.004726231098175049f, 0.0006339447572827339f, 0.0007461814675480127f, 0.000777697074227035f, 0.0008024110575206578f, 0.0008334039594046772f, 0.0008484571008011699f, 0.0010988962603732944f, 0.0038138185627758503f, 0.004290878307074308f, 0.002953762887045741f, 0.0007179043022915721f, 0.0007800905150361359f, 0.0008768629049882293f, 0.004320733714848757f, 0.000792687467765063f, 0.003251730464398861f, 0.0008380637154914439f, 0.0047950660809874535f, 0.0044877734035253525f, 0.000608996779192239f, 0.000695790397003293f, 0.0041690487414598465f, 0.0007260169950313866f, 0.001117149950005114f, 0.0006080172024667263f, 0.004321926739066839f, 0.0005713821155950427f, 0.0010634205536916852f, 0.004531358368694782f, 0.0041081905364990234f, 0.0005829258006997406f, 0.0007671333733014762f, 0.0053397598676383495f, 0.0008825872209854424f, 0.0006825290038250387f, 0.0009821474086493254f, 0.004056544508785009f, 0.0006500532617792487f, 0.0009170176344923675f, 0.0008616760605946183f, 0.003600829280912876f, 0.003408667631447315f, 0.0006891990778967738f, 0.0007165149436332285f, 0.0010371546959504485f, 0.0007318737334571779f, 0.003882286138832569f, 0.00365748954936862f, 0.0007194822537712753f, 0.001251492532901466f, 0.000758600770495832f, 0.0008579780114814639f, 0.003835478564724326f, 0.0008100029081106186f, 0.0008720014011487365f, 0.0036622544284909964f, 0.0013160951202735305f, 0.0037039618473500013f, 0.0034263702109456062f, 0.0008137153927236795f, 0.0007961245719343424f, 0.0037189917638897896f, 0.0008051588665693998f, 0.0008514071232639253f, 0.0007726819603703916f, 0.004306088201701641f, 0.0009765514405444264f, 0.0007098806090652943f, 0.0035733503755182028f, 0.0006093792035244405f, 0.004036430269479752f, 0.004675713367760181f, 0.0007916929898783565f, 0.0013698558323085308f, 0.003505430882796645f, 0.0009158793254755437f, 0.0033227389212697744f, 0.0008776387549005449f, 0.0008371035801246762f, 0.0007785022025927901f, 0.0007016618037596345f, 0.0010483532678335905f, 0.0006825163727626204f, 0.0006891213124617934f, 0.0036732121370732784f, 0.0006925870548002422f, 0.0037930470425635576f, 0.00408740621060133f, 0.00058208272093907f, 0.00379132735542953f, 0.0037149994168430567f, 0.004327171947807074f, 0.0007922140066511929f, 0.005366303492337465f, 0.0006476485286839306f, 0.0006368003087118268f, 0.0015834042569622397f, 0.0012070121010765433f, 0.005156517494469881f, 0.0013322012964636087f, 0.0007568473229184747f, 0.0007267848122864962f, 0.0012352624908089638f, 0.0007516263867728412f, 0.0040364935994148254f, 0.0010363737819716334f, 0.0027295106556266546f, 0.0037482494954019785f, 0.0010603796690702438f, 0.0050627137534320354f, 0.0008000824018381536f, 0.0006146602681837976f, 0.0008265128708444536f, 0.001136505394242704f, 0.000776441243942827f, 0.004633491393178701f, 0.0008686060318723321f, 0.000832865247502923f, 0.0005995213869027793f, 0.005032331682741642f, 0.004708562977612019f, 0.0010688063921406865f, 0.0041680242866277695f, 0.000814016442745924f, 0.0006296620122157037f, 0.005555280949920416f, 0.003807332133874297f, 0.0038832409773021936f, 0.0005525673041120172f, 0.0025754510425031185f, 0.004131827503442764f, 0.004264092072844505f, 0.004165253136307001f, 0.0006845843163318932f, 0.0008476551156491041f, 0.0013866667868569493f, 0.004262298811227083f, 0.0008456725627183914f, 0.001874628011137247f, 0.0007432707934640348f, 0.0007908319239504635f, 0.0038350943941622972f, 0.003558008000254631f, 0.00429713586345315f, 0.0006197795155458152f, 0.0008090775809250772f, 0.004231996834278107f, 0.004075376316905022f, 0.0038772968109697104f, 0.0026589063927531242f, 0.0008679595775902271f, 0.0008128408226184547f, 0.003924574237316847f, 0.003896963084116578f, 0.0011273486306890845f, 0.0008433397742919624f, 0.0009105920908041298f, 0.0037333949003368616f, 0.0037347457837313414f, 0.0009998999303206801f, 0.0011912118643522263f, 0.003440986620262265f, 0.0012001050636172295f, 0.003528520930558443f, 0.003953821025788784f, 0.0006614617304876447f, 0.0034892852418124676f, 0.004774574190378189f, 0.0012709028087556362f, 0.004309132229536772f, 0.0032567891757935286f, 0.0032103199046105146f, 0.0006138207390904427f, 0.0010997699573636055f, 0.0008551687351427972f, 0.0006697603384964168f, 0.0008638062281534076f, 0.0008500526892021298f, 0.004530925303697586f, 0.0005752812721766531f, 0.0009268747526220977f, 0.0009092080290429294f, 0.0045433021150529385f, 0.0007664510048925877f, 0.0007303744205273688f, 0.004556720145046711f, 0.005275570787489414f, 0.0008839078363962471f, 0.0020380562637001276f, 0.005573343485593796f, 0.0011598221026360989f, 0.0010174503549933434f, 0.0032101927790790796f, 0.004521076567471027f, 0.004672636743634939f, 0.00458016712218523f, 0.000640097598079592f, 0.0006598157342523336f, 0.0007007839740253985f, 0.00414170790463686f, 0.002806467702612281f, 0.005272382870316505f, 0.004054274410009384f, 0.003528094384819269f, 0.0031511769630014896f, 0.003425789065659046f, 0.003843900980427861f, 0.004550160840153694f, 0.0008213723194785416f, 0.0038943428080528975f, 0.0038179627154022455f, 0.003973729908466339f, 0.0007205806905403733f, 0.0006966594373807311f, 0.004087400157004595f, 0.0007066488033160567f, 0.0007127966382540762f, 0.004080025479197502f, 0.004048423375934362f, 0.0012751577887684107f, 0.003832130692899227f, 0.004120819736272097f, 0.0012963759945705533f, 0.0006149084656499326f, 0.003531028050929308f, 0.0046912143006920815f, 0.0007185703725554049f, 0.0005975828389637172f, 0.003927291836589575f, 0.003982954658567905f, 0.0014077411033213139f, 0.003982842899858952f, 0.0007397844456136227f, 0.0010273271473124623f, 0.0008576574036851525f, 0.0007962525705806911f, 0.0009825918823480606f, 0.0006707909633405507f, 0.0006818061810918152f, 0.0033373371697962284f, 0.004384103696793318f, 0.0005994992097839713f, 0.0008044010610319674f, 0.0007460570777766407f, 0.003812445094808936f, 0.0007653001812286675f, 0.0006476135458797216f, 0.004662537947297096f, 0.0041160606779158115f, 0.0005427891737781465f, 0.004116468597203493f, 0.0008166199550032616f, 0.0038198581896722317f, 0.0007796335266903043f, 0.0011416201014071703f, 0.0038416048046201468f, 0.0007419491303153336f, 0.0010140163358300924f, 0.0006883459282107651f, 0.006422007922083139f, 0.0047324956394732f, 0.0008437568321824074f, 0.0027523476164788008f, 0.004932536743581295f, 0.00398574722930789f, 0.0012015912216156721f, 0.0009020366705954075f, 0.003345577511936426f, 0.0037933713756501675f, 0.004809386562556028f, 0.004512759391218424f, 0.0038616613019257784f, 0.0007619308307766914f, 0.0008970460039563477f, 0.005253104958683252f, 0.004275680519640446f, 0.0026782145723700523f, 0.001025663805194199f, 0.004641855601221323f, 0.005564095452427864f, 0.004300100263208151f, 0.003656592685729265f, 0.0007717957487329841f, 0.003264734288677573f, 0.0008136539836414158f, 0.004595710430294275f, 0.0006541181937791407f, 0.0008032022742554545f, 0.0011666907230392098f, 0.0008257965091615915f, 0.0006973298150114715f, 0.0008026323630474508f, 0.004100032616406679f, 0.004637968726456165f, 0.0008920000400394201f, 0.004797149449586868f, 0.0008223753538914025f, 0.0006907969946041703f, 0.0038085137493908405f, 0.0011613679816946387f, 0.0006531591061502695f, 0.00389897171407938f, 0.004094951320439577f, 0.004626757465302944f, 0.000665603147353977f, 0.0019310533534735441f, 0.0008205946069210768f, 0.0007465651724487543f, 0.0006306639988906682f, 0.0039474209770560265f, 0.0034117777831852436f, 0.0008633968536742032f, 0.004669698886573315f, 0.0010125718545168638f, 0.004921330604702234f, 0.000875404046382755f, 0.00393778458237648f, 0.003550170920789242f, 0.000747664540540427f, 0.003480779705569148f, 0.0007714451639913023f, 0.003395992796868086f, 0.003539386671036482f, 0.0013790499651804566f, 0.000692111614625901f, 0.0009045127080753446f, 0.0036477900575846434f, 0.0008041217224672437f, 0.0007130287704057992f, 0.0011003392282873392f, 0.0006503112381324172f, 0.0018030592473223805f, 0.0005725609371438622f, 0.0005953189684078097f, 0.0041913827881217f, 0.0010447351960465312f, 0.001045352779328823f, 0.00379953789524734f, 0.00553092872723937f, 0.003509154077619314f, 0.0007152340258471668f, 0.000769378908444196f, 0.0006781587726436555f, 0.0008418346405960619f, 0.0009231365984305739f, 0.0007084505050443113f, 0.00391033198684454f, 0.0006889279466122389f, 0.0035394064616411924f, 0.005066878627985716f, 0.004010973498225212f, 0.0005979600828140974f, 0.004468644503504038f, 0.0007286972249858081f, 0.003228314220905304f, 0.0028378507122397423f, 0.000799465284217149f, 0.0012546925572678447f, 0.005001899786293507f, 0.000783872848842293f, 0.0011314809089526534f, 0.004149646032601595f, 0.0037826059851795435f, 0.00447045685723424f, 0.0007856679731048644f, 0.0038935879711061716f, 0.000918530800845474f, 0.003815904725342989f, 0.004618702922016382f, 0.0023894740734249353f, 0.001145264133810997f, 0.001378578250296414f, 0.000758717127609998f, 0.0037220115773379803f, 0.004352949559688568f, 0.0008093416108749807f, 0.0012397186364978552f, 0.004443036857992411f, 0.0006933579570613801f, 0.0034018894657492638f, 0.0007368701626546681f, 0.004093389492481947f, 0.0007998525397852063f, 0.0006955512217245996f, 0.003337530419230461f, 0.0035315202549099922f, 0.0008431404130533338f, 0.003752100979909301f, 0.0007812197436578572f, 0.0033899054396897554f, 0.00078357890015468f, 0.0035790796391665936f, 0.001062606694176793f, 0.0006684024119749665f, 0.0036192317493259907f, 0.0035239635035395622f, 0.0037648421712219715f, 0.0037069579120725393f, 0.0009983782656490803f, 0.001983346650376916f, 0.0014885978307574987f, 0.0009967619553208351f, 0.0040481979958713055f, 0.0008565395255573094f, 0.004968987312167883f, 0.0037256143987178802f, 0.0006421717698685825f, 0.000885788060259074f, 0.004886634182184935f, 0.0007591675966978073f, 0.0007414839928969741f, 0.0007129753357730806f, 0.0008149652276188135f, 0.0007592554902657866f, 0.0009061350720003247f, 0.004982238635420799f, 0.0012494514230638742f, 0.0008522326243110001f, 0.0006969945388846099f, 0.0035920371301472187f, 0.0010351167293265462f, 0.0010219586547464132f, 0.0007419725880026817f, 0.0033864404540508986f, 0.0011463552946224809f, 0.00395727064460516f, 0.0009393227519467473f, 0.0039213914424180984f, 0.003664239775389433f, 0.0036242245696485043f, 0.005150772165507078f, 0.0008119566482491791f, 0.0005602393648587167f, 0.0008857004577293992f, 0.0010420228354632854f, 0.0005865891580469906f, 0.0007681357092224061f, 0.004248687997460365f, 0.0011014710180461407f, 0.004464853089302778f, 0.006063228007405996f, 0.0018953284015879035f, 0.0031085126101970673f, 0.0035366688389331102f, 0.00496135838329792f, 0.004076819866895676f, 0.0034821503795683384f, 0.004190674517303705f, 0.0008135343086905777f, 0.003372174920514226f, 0.0006711803725920618f, 0.000799782807007432f, 0.001222020830027759f, 0.0038713125977665186f, 0.0033496504183858633f, 0.0009647217812016606f, 0.0006476855487562716f, 0.004837698303163052f, 0.003700830042362213f, 0.0034288475289940834f, 0.0007842414197511971f, 0.002539384877309203f, 0.0009260990773327649f, 0.00084150634938851f, 0.004707767628133297f, 0.0010360036976635456f, 0.0005714998114854097f, 0.0040060048922896385f, 0.003795427270233631f, 0.0007177963852882385f, 0.003971074242144823f, 0.0010237410897389054f, 0.0007441295310854912f, 0.002936807693913579f, 0.0008661727770231664f, 0.0006250949809327722f, 0.0007030050037428737f, 0.0007059965282678604f, 0.003894403111189604f, 0.004230272490531206f, 0.0007429859833791852f, 0.0010453397408127785f, 0.0009222985827364028f, 0.0038790565449744463f, 0.004963969811797142f, 0.0007584691629745066f, 0.0007284925668500364f, 0.003914895001798868f, 0.003957174252718687f, 0.003240027232095599f, 0.0006481065065599978f, 0.004008457995951176f, 0.00420305086299777f, 0.0046090055257081985f, 0.000800402311142534f, 0.004921688698232174f, 0.005094665102660656f, 0.0006778205861337483f, 0.0008659932063892484f, 0.0007986465352587402f, 0.0037193133030086756f, 0.003711216850206256f, 0.0037700349930673838f, 0.0006471259985119104f, 0.00370252993889153f, 0.004270086996257305f, 0.0010125227272510529f, 0.000704581500031054f, 0.004070955328643322f, 0.0007191371987573802f, 0.0008234329288825393f, 0.003382132388651371f, 0.0007866478990763426f, 0.004211579915136099f, 0.0036398801021277905f, 0.005099581088870764f, 0.003810733091086149f, 0.0007007422973401845f, 0.004862598143517971f, 0.0007033852161839604f, 0.004027752671390772f, 0.0006114972056820989f, 0.0006107240333221853f, 0.0006677588680759072f, 0.003989997319877148f, 0.0009364565485157073f, 0.0008006771095097065f, 0.0007816523429937661f, 0.0006939168088138103f, 0.001031767576932907f, 0.0007774176774546504f, 0.0006464202306233346f, 0.0006675965269096196f, 0.0012227031402289867f, 0.004043993540108204f, 0.003431683639064431f, 0.002305458765476942f, 0.004411870613694191f, 0.005218260921537876f, 0.003470486495643854f, 0.0008339123451150954f, 0.0006938000442460179f, 0.004400867503136396f, 0.002705387305468321f, 0.003951848018914461f, 0.0039224945940077305f, 0.0006981809274293482f, 0.0007842012564651668f, 0.003109452547505498f, 0.003778474172577262f, 0.0005908845923841f, 0.006010174751281738f, 0.0033819000236690044f, 0.0034094741567969322f, 0.0008171137887984514f, 0.0049558356404304504f, 0.0008408820140175521f, 0.0006224921089597046f, 0.0006353763164952397f, 0.0007323437603190541f, 0.0008079057442955673f, 0.0006737452931702137f, 0.005114661995321512f, 0.00115471042227f, 0.000761862494982779f, 0.004588041454553604f, 0.001095010433346033f, 0.003416123567149043f, 0.0007155785569921136f, 0.003988965414464474f, 0.0007717512198723853f, 0.0056129381991922855f, 0.0007746333722025156f, 0.0011182399466633797f, 0.000732391607016325f, 0.0007134810439310968f, 0.0007574648479931056f, 0.000910547620151192f, 0.0047234962694346905f, 0.0006074774428270757f, 0.0006869416101835668f, 0.0008445332641713321f, 0.0007714586099609733f, 0.0047038099728524685f, 0.0008180063450708985f, 0.0007822489133104682f, 0.0007208474562503397f, 0.00382116436958313f, 0.0006606621318496764f, 0.0008840130758471787f, 0.0012136100558564067f, 0.004998219199478626f, 0.004286728333681822f, 0.000843330635689199f, 0.0009017755510285497f, 0.0007464932277798653f, 0.0047057438641786575f, 0.0006557643646374345f, 0.004082052502781153f, 0.00462627736851573f, 0.001018895534798503f, 0.000767301709856838f, 0.0006793926586396992f, 0.0006385359447449446f, 0.003003499237820506f, 0.0006647648988291621f, 0.004553796257823706f, 0.00466638058423996f, 0.0008208203362300992f, 0.0006489084917120636f, 0.00432825880125165f, 0.0036772470921278f, 0.0034593925811350346f, 0.0007731460500508547f, 0.0006734737544320524f, 0.003816774347797036f, 0.003149321535602212f, 0.0012201669160276651f, 0.004788214806467295f, 0.004775128792971373f, 0.004110938403755426f, 0.000903468462638557f, 0.004692796152085066f, 0.004258798900991678f, 0.0008163446327671409f, 0.004142085090279579f, 0.0007314744871109724f, 0.0027274074964225292f, 0.0007930389256216586f, 0.0006530103855766356f, 0.0007563743274658918f, 0.0008437287760898471f, 0.004604296758770943f, 0.0008658039150759578f, 0.0050296904519200325f, 0.0005374031024985015f, 0.0009159973706118762f, 0.0007057460024952888f, 0.003997533116489649f, 0.0008555401000194252f, 0.003198545193299651f, 0.0043229456059634686f, 0.004665096756070852f, 0.003490817965939641f, 0.0038279618602246046f, 0.0033246646635234356f, 0.0006131791160441935f, 0.0009686584235168993f, 0.005684741772711277f, 0.0007798849837854505f, 0.0049164374358952045f, 0.0037281799595803022f, 0.0006853867089375854f, 0.0007574880728498101f, 0.000808705750387162f, 0.004261515103280544f, 0.0012247245758771896f, 0.003839787095785141f, 0.0006996526499278843f, 0.004036590922623873f, 0.002094933297485113f, 0.0008017307263799012f, 0.0038900228682905436f, 0.0036263898946344852f, 0.0037448254879564047f, 0.004236913286149502f, 0.0049258084036409855f, 0.004360525403171778f, 0.0007876183371990919f, 0.0012376679806038737f, 0.0029024083632975817f, 0.003469733288511634f, 0.003976069390773773f, 0.0010046535171568394f, 0.0039212629199028015f, 0.0035489548463374376f, 0.0005660195020027459f, 0.0009892105590552092f, 0.0012167118256911635f, 0.0045076352544128895f, 0.0037252989131957293f, 0.0014657913707196712f, 0.0036168305668979883f, 0.0006886562914587557f, 0.004122368060052395f, 0.0007211784832179546f, 0.003993396647274494f, 0.0036238867323845625f, 0.0007789664668962359f, 0.004417657386511564f, 0.0008837885106913745f, 0.005838725715875626f, 0.0037032149266451597f, 0.0007960949442349374f, 0.004204410593956709f, 0.0009177226456813514f, 0.0008157218690030277f, 0.0017705047503113747f, 0.005192998796701431f, 0.0030774385668337345f, 0.0007466973038390279f, 0.0007669252809137106f, 0.000998275470919907f, 0.004295354709029198f, 0.003743023844435811f, 0.0007366997306235135f, 0.004809706937521696f, 0.0007467208779416978f, 0.004338384605944157f, 0.0008502596756443381f, 0.0028929486870765686f, 0.0012453374220058322f, 0.0049512190744280815f, 0.003818406257778406f, 0.0008055508369579911f, 0.0007300068973563612f, 0.003681984730064869f, 0.000676747236866504f, 0.0006521194009110332f, 0.003511525457724929f, 0.0007157014333643019f, 0.0008600873406976461f, 0.0008137064287438989f, 0.0030112050008028746f, 0.0010919392807409167f, 0.0007947939448058605f, 0.0007809458184055984f, 0.0034517673775553703f, 0.004240452311933041f, 0.003188028000295162f, 0.004105282481759787f, 0.0006340991239994764f, 0.0044547924771904945f, 0.0044336458668112755f, 0.0007579688681289554f, 0.0017865325789898634f, 0.0009010849171318114f, 0.000879200582858175f, 0.004662882536649704f, 0.004625371657311916f, 0.0008782905642874539f, 0.0012215684400871396f, 0.0044641392305493355f, 0.004617286846041679f, 0.0008933040080592036f, 0.0035392295103520155f, 0.003942451905459166f, 0.003894628956913948f, 0.0006553927669301629f, 0.0009732613689266145f, 0.0006020370055921376f, 0.0007858473691157997f, 0.0007626812439411879f, 0.0032295086421072483f, 0.0032337168231606483f, 0.003623353084549308f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #175 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_99_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 39,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00785178691148758f, 0.008119015023112297f, 0.009939615614712238f, 0.007984573021531105f, 0.005939094815403223f, 0.007374392356723547f, 0.007947995327413082f, 0.007334049791097641f, 0.006999673787504435f, 0.007344215176999569f, 0.008199750445783138f, 0.009810338728129864f, 0.00853760726749897f, 0.006242674309760332f, 0.008129147812724113f, 0.007440764922648668f, 0.007910949178040028f, 0.007921428419649601f, 0.005646720062941313f, 0.00669120391830802f, 0.007411077618598938f, 0.006182079203426838f, 0.009487525559961796f, 0.009409870021045208f, 0.00661493930965662f, 0.006949662696570158f, 0.007920414209365845f, 0.005679159890860319f, 0.007784782908856869f, 0.008105665445327759f, 0.006869889795780182f, 0.006247095298022032f, 0.007279220502823591f, 0.0069362698122859f, 0.006905085407197475f, 0.007541508413851261f, 0.009255839511752129f, 0.00644740229472518f, 0.006123030092567205f),
    AI_PACK_INTQ_ZP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)))

/* Int quant #176 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_1_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #177 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_2_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #178 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_3_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #179 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_11_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #180 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_12_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #181 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_14_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #182 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_15_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #183 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_18_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #184 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_19_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #185 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_21_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #186 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_27_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #187 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_28_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #188 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_30_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #189 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_37_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #190 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_38_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #191 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_40_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #192 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_47_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #193 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_48_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #194 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_57_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #195 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_58_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #196 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_67_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #197 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(conv2d_68_scratch1_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0235294122248888f),
    AI_PACK_INTQ_ZP(-128)))

/**  Tensor declarations section  *********************************************/
/* Tensor #0 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_scratch0, AI_STATIC,
  0, 0x0,
  AI_SHAPE_INIT(4, 1, 936, 1, 1), AI_STRIDE_INIT(4, 1, 1, 936, 936),
  1, &conv2d_70_scratch0_array, NULL)

/* Tensor #1 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_71_scratch0, AI_STATIC,
  1, 0x0,
  AI_SHAPE_INIT(4, 1, 1584, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1584, 1584),
  1, &conv2d_71_scratch0_array, NULL)

/* Tensor #2 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_75_scratch0, AI_STATIC,
  2, 0x0,
  AI_SHAPE_INIT(4, 1, 1056, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1056, 1056),
  1, &conv2d_75_scratch0_array, NULL)

/* Tensor #3 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_scratch0, AI_STATIC,
  3, 0x0,
  AI_SHAPE_INIT(4, 1, 3072, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3072, 3072),
  1, &conv2d_76_scratch0_array, NULL)

/* Tensor #4 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_scratch1, AI_STATIC,
  4, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_76_scratch1_array, &conv2d_76_scratch1_array_intq)

/* Tensor #5 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_77_scratch0, AI_STATIC,
  5, 0x0,
  AI_SHAPE_INIT(4, 1, 24481, 1, 1), AI_STRIDE_INIT(4, 1, 1, 24481, 24481),
  1, &conv2d_77_scratch0_array, NULL)

/* Tensor #6 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_77_scratch1, AI_STATIC,
  6, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_77_scratch1_array, &conv2d_77_scratch1_array_intq)

/* Tensor #7 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_scratch0, AI_STATIC,
  7, 0x0,
  AI_SHAPE_INIT(4, 1, 1872, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1872, 1872),
  1, &conv2d_79_scratch0_array, NULL)

/* Tensor #8 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_scratch1, AI_STATIC,
  8, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &conv2d_79_scratch1_array, &conv2d_79_scratch1_array_intq)

/* Tensor #9 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_80_scratch0, AI_STATIC,
  9, 0x0,
  AI_SHAPE_INIT(4, 1, 3168, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3168, 3168),
  1, &conv2d_80_scratch0_array, NULL)

/* Tensor #10 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_84_scratch0, AI_STATIC,
  10, 0x0,
  AI_SHAPE_INIT(4, 1, 1632, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1632, 1632),
  1, &conv2d_84_scratch0_array, NULL)

/* Tensor #11 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_86_scratch0, AI_STATIC,
  11, 0x0,
  AI_SHAPE_INIT(4, 1, 3072, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3072, 3072),
  1, &conv2d_86_scratch0_array, NULL)

/* Tensor #12 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_86_scratch1, AI_STATIC,
  12, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_86_scratch1_array, &conv2d_86_scratch1_array_intq)

/* Tensor #13 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_87_scratch0, AI_STATIC,
  13, 0x0,
  AI_SHAPE_INIT(4, 1, 24481, 1, 1), AI_STRIDE_INIT(4, 1, 1, 24481, 24481),
  1, &conv2d_87_scratch0_array, NULL)

/* Tensor #14 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_87_scratch1, AI_STATIC,
  14, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_87_scratch1_array, &conv2d_87_scratch1_array_intq)

/* Tensor #15 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_89_scratch0, AI_STATIC,
  15, 0x0,
  AI_SHAPE_INIT(4, 1, 1872, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1872, 1872),
  1, &conv2d_89_scratch0_array, NULL)

/* Tensor #16 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_89_scratch1, AI_STATIC,
  16, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &conv2d_89_scratch1_array, &conv2d_89_scratch1_array_intq)

/* Tensor #17 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_90_scratch0, AI_STATIC,
  17, 0x0,
  AI_SHAPE_INIT(4, 1, 3168, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3168, 3168),
  1, &conv2d_90_scratch0_array, NULL)

/* Tensor #18 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_94_scratch0, AI_STATIC,
  18, 0x0,
  AI_SHAPE_INIT(4, 1, 1632, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1632, 1632),
  1, &conv2d_94_scratch0_array, NULL)

/* Tensor #19 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_96_scratch0, AI_STATIC,
  19, 0x0,
  AI_SHAPE_INIT(4, 1, 3072, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3072, 3072),
  1, &conv2d_96_scratch0_array, NULL)

/* Tensor #20 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_96_scratch1, AI_STATIC,
  20, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_96_scratch1_array, &conv2d_96_scratch1_array_intq)

/* Tensor #21 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_scratch0, AI_STATIC,
  21, 0x0,
  AI_SHAPE_INIT(4, 1, 13952, 1, 1), AI_STRIDE_INIT(4, 1, 1, 13952, 13952),
  1, &conv2d_98_scratch0_array, NULL)

/* Tensor #22 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_scratch1, AI_STATIC,
  22, 0x1,
  AI_SHAPE_INIT(4, 1, 1280, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1280, 1280),
  1, &conv2d_98_scratch1_array, &conv2d_98_scratch1_array_intq)

/* Tensor #23 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_99_scratch0, AI_STATIC,
  23, 0x0,
  AI_SHAPE_INIT(4, 1, 5510, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5510, 5510),
  1, &conv2d_99_scratch0_array, NULL)

/* Tensor #24 */
AI_TENSOR_OBJ_DECLARE(
  nl_101_scratch0, AI_STATIC,
  24, 0x0,
  AI_SHAPE_INIT(4, 1, 39, 1, 1), AI_STRIDE_INIT(4, 4, 4, 156, 156),
  1, &nl_101_scratch0_array, NULL)

/* Tensor #25 */
AI_TENSOR_OBJ_DECLARE(
  serving_default_input_10_output, AI_STATIC,
  25, 0x1,
  AI_SHAPE_INIT(4, 1, 3, 224, 224), AI_STRIDE_INIT(4, 1, 1, 3, 672),
  1, &serving_default_input_10_output_array, &serving_default_input_10_output_array_intq)

/* Tensor #26 */
AI_TENSOR_OBJ_DECLARE(
  conversion_0_output, AI_STATIC,
  26, 0x1,
  AI_SHAPE_INIT(4, 1, 3, 224, 224), AI_STRIDE_INIT(4, 1, 1, 3, 672),
  1, &conversion_0_output_array, &conversion_0_output_array_intq)

/* Tensor #27 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_output, AI_STATIC,
  27, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_1_output_array, &conv2d_1_output_array_intq)

/* Tensor #28 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_output, AI_STATIC,
  28, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_2_output_array, &conv2d_2_output_array_intq)

/* Tensor #29 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_pad_before_output, AI_STATIC,
  29, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 114, 114), AI_STRIDE_INIT(4, 1, 1, 8, 912),
  1, &conv2d_3_pad_before_output_array, &conv2d_3_pad_before_output_array_intq)

/* Tensor #30 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_output, AI_STATIC,
  30, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 56, 56), AI_STRIDE_INIT(4, 1, 1, 8, 448),
  1, &conv2d_3_output_array, &conv2d_3_output_array_intq)

/* Tensor #31 */
AI_TENSOR_OBJ_DECLARE(
  pool_4_output, AI_STATIC,
  31, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 1, 1, 8, 8),
  1, &pool_4_output_array, &pool_4_output_array_intq)

/* Tensor #32 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_output, AI_STATIC,
  32, 0x1,
  AI_SHAPE_INIT(4, 1, 2, 1, 1), AI_STRIDE_INIT(4, 1, 1, 2, 2),
  1, &conv2d_5_output_array, &conv2d_5_output_array_intq)

/* Tensor #33 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_output, AI_STATIC,
  33, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 1, 1, 8, 8),
  1, &conv2d_6_output_array, &conv2d_6_output_array_intq)

/* Tensor #34 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_7_output, AI_STATIC,
  34, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 1, 1, 8, 8),
  1, &eltwise_7_output_array, &eltwise_7_output_array_intq)

/* Tensor #35 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_9_output, AI_STATIC,
  35, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 56, 56), AI_STRIDE_INIT(4, 1, 1, 8, 448),
  1, &eltwise_9_output_array, &eltwise_9_output_array_intq)

/* Tensor #36 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_output, AI_STATIC,
  36, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 56, 56), AI_STRIDE_INIT(4, 1, 1, 8, 448),
  1, &conv2d_10_output_array, &conv2d_10_output_array_intq)

/* Tensor #37 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_output, AI_STATIC,
  37, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 56, 56), AI_STRIDE_INIT(4, 1, 1, 40, 2240),
  1, &conv2d_11_output_array, &conv2d_11_output_array_intq)

/* Tensor #38 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_pad_before_output, AI_STATIC,
  38, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 58, 58), AI_STRIDE_INIT(4, 1, 1, 40, 2320),
  1, &conv2d_12_pad_before_output_array, &conv2d_12_pad_before_output_array_intq)

/* Tensor #39 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_output, AI_STATIC,
  39, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 28, 28), AI_STRIDE_INIT(4, 1, 1, 40, 1120),
  1, &conv2d_12_output_array, &conv2d_12_output_array_intq)

/* Tensor #40 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_output, AI_STATIC,
  40, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &conv2d_13_output_array, &conv2d_13_output_array_intq)

/* Tensor #41 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_output, AI_STATIC,
  41, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_14_output_array, &conv2d_14_output_array_intq)

/* Tensor #42 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_pad_before_output, AI_STATIC,
  42, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 30, 30), AI_STRIDE_INIT(4, 1, 1, 48, 1440),
  1, &conv2d_15_pad_before_output_array, &conv2d_15_pad_before_output_array_intq)

/* Tensor #43 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_output, AI_STATIC,
  43, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_15_output_array, &conv2d_15_output_array_intq)

/* Tensor #44 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_output, AI_STATIC,
  44, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &conv2d_16_output_array, &conv2d_16_output_array_intq)

/* Tensor #45 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_17_output, AI_STATIC,
  45, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 28, 28), AI_STRIDE_INIT(4, 1, 1, 16, 448),
  1, &eltwise_17_output_array, &eltwise_17_output_array_intq)

/* Tensor #46 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_output, AI_STATIC,
  46, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_18_output_array, &conv2d_18_output_array_intq)

/* Tensor #47 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_output, AI_STATIC,
  47, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 14, 14), AI_STRIDE_INIT(4, 1, 1, 48, 672),
  1, &conv2d_19_output_array, &conv2d_19_output_array_intq)

/* Tensor #48 */
AI_TENSOR_OBJ_DECLARE(
  pool_20_output, AI_STATIC,
  48, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &pool_20_output_array, &pool_20_output_array_intq)

/* Tensor #49 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_output, AI_STATIC,
  49, 0x1,
  AI_SHAPE_INIT(4, 1, 12, 1, 1), AI_STRIDE_INIT(4, 1, 1, 12, 12),
  1, &conv2d_21_output_array, &conv2d_21_output_array_intq)

/* Tensor #50 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_output, AI_STATIC,
  50, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &conv2d_22_output_array, &conv2d_22_output_array_intq)

/* Tensor #51 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_23_output, AI_STATIC,
  51, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &eltwise_23_output_array, &eltwise_23_output_array_intq)

/* Tensor #52 */
AI_TENSOR_OBJ_DECLARE(
  nl_24_output, AI_STATIC,
  52, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 1, 1, 48, 48),
  1, &nl_24_output_array, &nl_24_output_array_intq)

/* Tensor #53 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_25_output, AI_STATIC,
  53, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 14, 14), AI_STRIDE_INIT(4, 1, 1, 48, 672),
  1, &eltwise_25_output_array, &eltwise_25_output_array_intq)

/* Tensor #54 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_output, AI_STATIC,
  54, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_26_output_array, &conv2d_26_output_array_intq)

/* Tensor #55 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_output, AI_STATIC,
  55, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_27_output_array, &conv2d_27_output_array_intq)

/* Tensor #56 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_output, AI_STATIC,
  56, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_28_output_array, &conv2d_28_output_array_intq)

/* Tensor #57 */
AI_TENSOR_OBJ_DECLARE(
  pool_29_output, AI_STATIC,
  57, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &pool_29_output_array, &pool_29_output_array_intq)

/* Tensor #58 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_output, AI_STATIC,
  58, 0x1,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 1, 1, 30, 30),
  1, &conv2d_30_output_array, &conv2d_30_output_array_intq)

/* Tensor #59 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_output, AI_STATIC,
  59, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &conv2d_31_output_array, &conv2d_31_output_array_intq)

/* Tensor #60 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_32_output, AI_STATIC,
  60, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &eltwise_32_output_array, &eltwise_32_output_array_intq)

/* Tensor #61 */
AI_TENSOR_OBJ_DECLARE(
  nl_33_output, AI_STATIC,
  61, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &nl_33_output_array, &nl_33_output_array_intq)

/* Tensor #62 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_34_output, AI_STATIC,
  62, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &eltwise_34_output_array, &eltwise_34_output_array_intq)

/* Tensor #63 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_output, AI_STATIC,
  63, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_35_output_array, &conv2d_35_output_array_intq)

/* Tensor #64 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_36_output, AI_STATIC,
  64, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &eltwise_36_output_array, &eltwise_36_output_array_intq)

/* Tensor #65 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_output, AI_STATIC,
  65, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_37_output_array, &conv2d_37_output_array_intq)

/* Tensor #66 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_output, AI_STATIC,
  66, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_38_output_array, &conv2d_38_output_array_intq)

/* Tensor #67 */
AI_TENSOR_OBJ_DECLARE(
  pool_39_output, AI_STATIC,
  67, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &pool_39_output_array, &pool_39_output_array_intq)

/* Tensor #68 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_output, AI_STATIC,
  68, 0x1,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 1, 1, 30, 30),
  1, &conv2d_40_output_array, &conv2d_40_output_array_intq)

/* Tensor #69 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_output, AI_STATIC,
  69, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &conv2d_41_output_array, &conv2d_41_output_array_intq)

/* Tensor #70 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_42_output, AI_STATIC,
  70, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &eltwise_42_output_array, &eltwise_42_output_array_intq)

/* Tensor #71 */
AI_TENSOR_OBJ_DECLARE(
  nl_43_output, AI_STATIC,
  71, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 1, 1, 120, 120),
  1, &nl_43_output_array, &nl_43_output_array_intq)

/* Tensor #72 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_44_output, AI_STATIC,
  72, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &eltwise_44_output_array, &eltwise_44_output_array_intq)

/* Tensor #73 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_output, AI_STATIC,
  73, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_45_output_array, &conv2d_45_output_array_intq)

/* Tensor #74 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_46_output, AI_STATIC,
  74, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &eltwise_46_output_array, &eltwise_46_output_array_intq)

/* Tensor #75 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_output, AI_STATIC,
  75, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_47_output_array, &conv2d_47_output_array_intq)

/* Tensor #76 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_output, AI_STATIC,
  76, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_48_output_array, &conv2d_48_output_array_intq)

/* Tensor #77 */
AI_TENSOR_OBJ_DECLARE(
  pool_49_output, AI_STATIC,
  77, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &pool_49_output_array, &pool_49_output_array_intq)

/* Tensor #78 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_output, AI_STATIC,
  78, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 1, 1, 16, 16),
  1, &conv2d_50_output_array, &conv2d_50_output_array_intq)

/* Tensor #79 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_output, AI_STATIC,
  79, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &conv2d_51_output_array, &conv2d_51_output_array_intq)

/* Tensor #80 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_52_output, AI_STATIC,
  80, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &eltwise_52_output_array, &eltwise_52_output_array_intq)

/* Tensor #81 */
AI_TENSOR_OBJ_DECLARE(
  nl_53_output, AI_STATIC,
  81, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &nl_53_output_array, &nl_53_output_array_intq)

/* Tensor #82 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_54_output, AI_STATIC,
  82, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &eltwise_54_output_array, &eltwise_54_output_array_intq)

/* Tensor #83 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_output, AI_STATIC,
  83, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_55_output_array, &conv2d_55_output_array_intq)

/* Tensor #84 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_56_output, AI_STATIC,
  84, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &eltwise_56_output_array, &eltwise_56_output_array_intq)

/* Tensor #85 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_output, AI_STATIC,
  85, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 14, 14), AI_STRIDE_INIT(4, 1, 1, 72, 1008),
  1, &conv2d_57_output_array, &conv2d_57_output_array_intq)

/* Tensor #86 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_output, AI_STATIC,
  86, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 14, 14), AI_STRIDE_INIT(4, 1, 1, 72, 1008),
  1, &conv2d_58_output_array, &conv2d_58_output_array_intq)

/* Tensor #87 */
AI_TENSOR_OBJ_DECLARE(
  pool_59_output, AI_STATIC,
  87, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &pool_59_output_array, &pool_59_output_array_intq)

/* Tensor #88 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_output, AI_STATIC,
  88, 0x1,
  AI_SHAPE_INIT(4, 1, 18, 1, 1), AI_STRIDE_INIT(4, 1, 1, 18, 18),
  1, &conv2d_60_output_array, &conv2d_60_output_array_intq)

/* Tensor #89 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_output, AI_STATIC,
  89, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &conv2d_61_output_array, &conv2d_61_output_array_intq)

/* Tensor #90 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_62_output, AI_STATIC,
  90, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &eltwise_62_output_array, &eltwise_62_output_array_intq)

/* Tensor #91 */
AI_TENSOR_OBJ_DECLARE(
  nl_63_output, AI_STATIC,
  91, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &nl_63_output_array, &nl_63_output_array_intq)

/* Tensor #92 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_64_output, AI_STATIC,
  92, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 14, 14), AI_STRIDE_INIT(4, 1, 1, 72, 1008),
  1, &eltwise_64_output_array, &eltwise_64_output_array_intq)

/* Tensor #93 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_output, AI_STATIC,
  93, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &conv2d_65_output_array, &conv2d_65_output_array_intq)

/* Tensor #94 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_66_output, AI_STATIC,
  94, 0x1,
  AI_SHAPE_INIT(4, 1, 24, 14, 14), AI_STRIDE_INIT(4, 1, 1, 24, 336),
  1, &eltwise_66_output_array, &eltwise_66_output_array_intq)

/* Tensor #95 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_output, AI_STATIC,
  95, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_67_output_array, &conv2d_67_output_array_intq)

/* Tensor #96 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_output, AI_STATIC,
  96, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 7, 7), AI_STRIDE_INIT(4, 1, 1, 144, 1008),
  1, &conv2d_68_output_array, &conv2d_68_output_array_intq)

/* Tensor #97 */
AI_TENSOR_OBJ_DECLARE(
  pool_69_output, AI_STATIC,
  97, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &pool_69_output_array, &pool_69_output_array_intq)

/* Tensor #98 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_output, AI_STATIC,
  98, 0x1,
  AI_SHAPE_INIT(4, 1, 36, 1, 1), AI_STRIDE_INIT(4, 1, 1, 36, 36),
  1, &conv2d_70_output_array, &conv2d_70_output_array_intq)

/* Tensor #99 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_71_output, AI_STATIC,
  99, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &conv2d_71_output_array, &conv2d_71_output_array_intq)

/* Tensor #100 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_72_output, AI_STATIC,
  100, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &eltwise_72_output_array, &eltwise_72_output_array_intq)

/* Tensor #101 */
AI_TENSOR_OBJ_DECLARE(
  nl_73_output, AI_STATIC,
  101, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 1, 1, 144, 144),
  1, &nl_73_output_array, &nl_73_output_array_intq)

/* Tensor #102 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_74_output, AI_STATIC,
  102, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 7, 7), AI_STRIDE_INIT(4, 1, 1, 144, 1008),
  1, &eltwise_74_output_array, &eltwise_74_output_array_intq)

/* Tensor #103 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_75_output, AI_STATIC,
  103, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &conv2d_75_output_array, &conv2d_75_output_array_intq)

/* Tensor #104 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_output, AI_STATIC,
  104, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_76_output_array, &conv2d_76_output_array_intq)

/* Tensor #105 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_77_output, AI_STATIC,
  105, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_77_output_array, &conv2d_77_output_array_intq)

/* Tensor #106 */
AI_TENSOR_OBJ_DECLARE(
  pool_78_output, AI_STATIC,
  106, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &pool_78_output_array, &pool_78_output_array_intq)

/* Tensor #107 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_output, AI_STATIC,
  107, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &conv2d_79_output_array, &conv2d_79_output_array_intq)

/* Tensor #108 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_80_output, AI_STATIC,
  108, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &conv2d_80_output_array, &conv2d_80_output_array_intq)

/* Tensor #109 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_81_output, AI_STATIC,
  109, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &eltwise_81_output_array, &eltwise_81_output_array_intq)

/* Tensor #110 */
AI_TENSOR_OBJ_DECLARE(
  nl_82_output, AI_STATIC,
  110, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &nl_82_output_array, &nl_82_output_array_intq)

/* Tensor #111 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_83_output, AI_STATIC,
  111, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &eltwise_83_output_array, &eltwise_83_output_array_intq)

/* Tensor #112 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_84_output, AI_STATIC,
  112, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &conv2d_84_output_array, &conv2d_84_output_array_intq)

/* Tensor #113 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_85_output, AI_STATIC,
  113, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &eltwise_85_output_array, &eltwise_85_output_array_intq)

/* Tensor #114 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_86_output, AI_STATIC,
  114, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_86_output_array, &conv2d_86_output_array_intq)

/* Tensor #115 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_87_output, AI_STATIC,
  115, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_87_output_array, &conv2d_87_output_array_intq)

/* Tensor #116 */
AI_TENSOR_OBJ_DECLARE(
  pool_88_output, AI_STATIC,
  116, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &pool_88_output_array, &pool_88_output_array_intq)

/* Tensor #117 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_89_output, AI_STATIC,
  117, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 1, 1, 72, 72),
  1, &conv2d_89_output_array, &conv2d_89_output_array_intq)

/* Tensor #118 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_90_output, AI_STATIC,
  118, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &conv2d_90_output_array, &conv2d_90_output_array_intq)

/* Tensor #119 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_91_output, AI_STATIC,
  119, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &eltwise_91_output_array, &eltwise_91_output_array_intq)

/* Tensor #120 */
AI_TENSOR_OBJ_DECLARE(
  nl_92_output, AI_STATIC,
  120, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &nl_92_output_array, &nl_92_output_array_intq)

/* Tensor #121 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_93_output, AI_STATIC,
  121, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &eltwise_93_output_array, &eltwise_93_output_array_intq)

/* Tensor #122 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_94_output, AI_STATIC,
  122, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &conv2d_94_output_array, &conv2d_94_output_array_intq)

/* Tensor #123 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_95_output, AI_STATIC,
  123, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 7, 7), AI_STRIDE_INIT(4, 1, 1, 48, 336),
  1, &eltwise_95_output_array, &eltwise_95_output_array_intq)

/* Tensor #124 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_96_output, AI_STATIC,
  124, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 7, 7), AI_STRIDE_INIT(4, 1, 1, 288, 2016),
  1, &conv2d_96_output_array, &conv2d_96_output_array_intq)

/* Tensor #125 */
AI_TENSOR_OBJ_DECLARE(
  pool_97_output, AI_STATIC,
  125, 0x1,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 1, 1, 288, 288),
  1, &pool_97_output_array, &pool_97_output_array_intq)

/* Tensor #126 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_output, AI_STATIC,
  126, 0x1,
  AI_SHAPE_INIT(4, 1, 1280, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1280, 1280),
  1, &conv2d_98_output_array, &conv2d_98_output_array_intq)

/* Tensor #127 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_99_output, AI_STATIC,
  127, 0x1,
  AI_SHAPE_INIT(4, 1, 39, 1, 1), AI_STRIDE_INIT(4, 1, 1, 39, 39),
  1, &conv2d_99_output_array, &conv2d_99_output_array_intq)

/* Tensor #128 */
AI_TENSOR_OBJ_DECLARE(
  nl_101_output, AI_STATIC,
  128, 0x1,
  AI_SHAPE_INIT(4, 1, 39, 1, 1), AI_STRIDE_INIT(4, 1, 1, 39, 39),
  1, &nl_101_output_array, &nl_101_output_array_intq)

/* Tensor #129 */
AI_TENSOR_OBJ_DECLARE(
  conversion_102_output, AI_STATIC,
  129, 0x0,
  AI_SHAPE_INIT(4, 1, 39, 1, 1), AI_STRIDE_INIT(4, 4, 4, 156, 156),
  1, &conversion_102_output_array, NULL)

/* Tensor #130 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8, AI_STATIC,
  130, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array_intq)

/* Tensor #131 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7, AI_STATIC,
  131, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array_intq)

/* Tensor #132 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6, AI_STATIC,
  132, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array_intq)

/* Tensor #133 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5, AI_STATIC,
  133, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array_intq)

/* Tensor #134 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4, AI_STATIC,
  134, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array_intq)

/* Tensor #135 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3, AI_STATIC,
  135, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array_intq)

/* Tensor #136 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2, AI_STATIC,
  136, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array_intq)

/* Tensor #137 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1, AI_STATIC,
  137, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array_intq)

/* Tensor #138 */
AI_TENSOR_OBJ_DECLARE(
  mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y, AI_STATIC,
  138, 0x1,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array_intq)

/* Tensor #139 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_weights, AI_STATIC,
  139, 0x1,
  AI_SHAPE_INIT(4, 3, 3, 3, 8), AI_STRIDE_INIT(4, 1, 3, 24, 72),
  1, &conv2d_1_weights_array, &conv2d_1_weights_array_intq)

/* Tensor #140 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_bias, AI_STATIC,
  140, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_1_bias_array, NULL)

/* Tensor #141 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_weights, AI_STATIC,
  141, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 8), AI_STRIDE_INIT(4, 1, 8, 64, 64),
  1, &conv2d_2_weights_array, &conv2d_2_weights_array_intq)

/* Tensor #142 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_bias, AI_STATIC,
  142, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_2_bias_array, NULL)

/* Tensor #143 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_weights, AI_STATIC,
  143, 0x1,
  AI_SHAPE_INIT(4, 8, 3, 3, 1), AI_STRIDE_INIT(4, 1, 8, 8, 24),
  1, &conv2d_3_weights_array, &conv2d_3_weights_array_intq)

/* Tensor #144 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_bias, AI_STATIC,
  144, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_3_bias_array, NULL)

/* Tensor #145 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_weights, AI_STATIC,
  145, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 2), AI_STRIDE_INIT(4, 1, 8, 16, 16),
  1, &conv2d_5_weights_array, &conv2d_5_weights_array_intq)

/* Tensor #146 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_bias, AI_STATIC,
  146, 0x0,
  AI_SHAPE_INIT(4, 1, 2, 1, 1), AI_STRIDE_INIT(4, 4, 4, 8, 8),
  1, &conv2d_5_bias_array, NULL)

/* Tensor #147 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_weights, AI_STATIC,
  147, 0x1,
  AI_SHAPE_INIT(4, 2, 1, 1, 8), AI_STRIDE_INIT(4, 1, 2, 16, 16),
  1, &conv2d_6_weights_array, &conv2d_6_weights_array_intq)

/* Tensor #148 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_bias, AI_STATIC,
  148, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_6_bias_array, NULL)

/* Tensor #149 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_weights, AI_STATIC,
  149, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 8), AI_STRIDE_INIT(4, 1, 8, 64, 64),
  1, &conv2d_10_weights_array, &conv2d_10_weights_array_intq)

/* Tensor #150 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_bias, AI_STATIC,
  150, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_10_bias_array, NULL)

/* Tensor #151 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_weights, AI_STATIC,
  151, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 40), AI_STRIDE_INIT(4, 1, 8, 320, 320),
  1, &conv2d_11_weights_array, &conv2d_11_weights_array_intq)

/* Tensor #152 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_bias, AI_STATIC,
  152, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_11_bias_array, NULL)

/* Tensor #153 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_weights, AI_STATIC,
  153, 0x1,
  AI_SHAPE_INIT(4, 40, 3, 3, 1), AI_STRIDE_INIT(4, 1, 40, 40, 120),
  1, &conv2d_12_weights_array, &conv2d_12_weights_array_intq)

/* Tensor #154 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_bias, AI_STATIC,
  154, 0x0,
  AI_SHAPE_INIT(4, 1, 40, 1, 1), AI_STRIDE_INIT(4, 4, 4, 160, 160),
  1, &conv2d_12_bias_array, NULL)

/* Tensor #155 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_weights, AI_STATIC,
  155, 0x1,
  AI_SHAPE_INIT(4, 40, 1, 1, 16), AI_STRIDE_INIT(4, 1, 40, 640, 640),
  1, &conv2d_13_weights_array, &conv2d_13_weights_array_intq)

/* Tensor #156 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_bias, AI_STATIC,
  156, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_13_bias_array, NULL)

/* Tensor #157 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_weights, AI_STATIC,
  157, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 48), AI_STRIDE_INIT(4, 1, 16, 768, 768),
  1, &conv2d_14_weights_array, &conv2d_14_weights_array_intq)

/* Tensor #158 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_bias, AI_STATIC,
  158, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_14_bias_array, NULL)

/* Tensor #159 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_weights, AI_STATIC,
  159, 0x1,
  AI_SHAPE_INIT(4, 48, 3, 3, 1), AI_STRIDE_INIT(4, 1, 48, 48, 144),
  1, &conv2d_15_weights_array, &conv2d_15_weights_array_intq)

/* Tensor #160 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_bias, AI_STATIC,
  160, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_15_bias_array, NULL)

/* Tensor #161 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_weights, AI_STATIC,
  161, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 16), AI_STRIDE_INIT(4, 1, 48, 768, 768),
  1, &conv2d_16_weights_array, &conv2d_16_weights_array_intq)

/* Tensor #162 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_bias, AI_STATIC,
  162, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_16_bias_array, NULL)

/* Tensor #163 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_weights, AI_STATIC,
  163, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 48), AI_STRIDE_INIT(4, 1, 16, 768, 768),
  1, &conv2d_18_weights_array, &conv2d_18_weights_array_intq)

/* Tensor #164 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_bias, AI_STATIC,
  164, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_18_bias_array, NULL)

/* Tensor #165 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_weights, AI_STATIC,
  165, 0x1,
  AI_SHAPE_INIT(4, 48, 5, 5, 1), AI_STRIDE_INIT(4, 1, 48, 48, 240),
  1, &conv2d_19_weights_array, &conv2d_19_weights_array_intq)

/* Tensor #166 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_bias, AI_STATIC,
  166, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_19_bias_array, NULL)

/* Tensor #167 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_weights, AI_STATIC,
  167, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 12), AI_STRIDE_INIT(4, 1, 48, 576, 576),
  1, &conv2d_21_weights_array, &conv2d_21_weights_array_intq)

/* Tensor #168 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_bias, AI_STATIC,
  168, 0x0,
  AI_SHAPE_INIT(4, 1, 12, 1, 1), AI_STRIDE_INIT(4, 4, 4, 48, 48),
  1, &conv2d_21_bias_array, NULL)

/* Tensor #169 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_weights, AI_STATIC,
  169, 0x1,
  AI_SHAPE_INIT(4, 12, 1, 1, 48), AI_STRIDE_INIT(4, 1, 12, 576, 576),
  1, &conv2d_22_weights_array, &conv2d_22_weights_array_intq)

/* Tensor #170 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_bias, AI_STATIC,
  170, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_22_bias_array, NULL)

/* Tensor #171 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_weights, AI_STATIC,
  171, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 24), AI_STRIDE_INIT(4, 1, 48, 1152, 1152),
  1, &conv2d_26_weights_array, &conv2d_26_weights_array_intq)

/* Tensor #172 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_bias, AI_STATIC,
  172, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_26_bias_array, NULL)

/* Tensor #173 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_weights, AI_STATIC,
  173, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 120), AI_STRIDE_INIT(4, 1, 24, 2880, 2880),
  1, &conv2d_27_weights_array, &conv2d_27_weights_array_intq)

/* Tensor #174 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_bias, AI_STATIC,
  174, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_27_bias_array, NULL)

/* Tensor #175 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_weights, AI_STATIC,
  175, 0x1,
  AI_SHAPE_INIT(4, 120, 5, 5, 1), AI_STRIDE_INIT(4, 1, 120, 120, 600),
  1, &conv2d_28_weights_array, &conv2d_28_weights_array_intq)

/* Tensor #176 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_bias, AI_STATIC,
  176, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_28_bias_array, NULL)

/* Tensor #177 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_weights, AI_STATIC,
  177, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 30), AI_STRIDE_INIT(4, 1, 120, 3600, 3600),
  1, &conv2d_30_weights_array, &conv2d_30_weights_array_intq)

/* Tensor #178 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_bias, AI_STATIC,
  178, 0x0,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 4, 4, 120, 120),
  1, &conv2d_30_bias_array, NULL)

/* Tensor #179 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_weights, AI_STATIC,
  179, 0x1,
  AI_SHAPE_INIT(4, 30, 1, 1, 120), AI_STRIDE_INIT(4, 1, 30, 3600, 3600),
  1, &conv2d_31_weights_array, &conv2d_31_weights_array_intq)

/* Tensor #180 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_bias, AI_STATIC,
  180, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_31_bias_array, NULL)

/* Tensor #181 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_weights, AI_STATIC,
  181, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 24), AI_STRIDE_INIT(4, 1, 120, 2880, 2880),
  1, &conv2d_35_weights_array, &conv2d_35_weights_array_intq)

/* Tensor #182 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_bias, AI_STATIC,
  182, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_35_bias_array, NULL)

/* Tensor #183 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_weights, AI_STATIC,
  183, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 120), AI_STRIDE_INIT(4, 1, 24, 2880, 2880),
  1, &conv2d_37_weights_array, &conv2d_37_weights_array_intq)

/* Tensor #184 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_bias, AI_STATIC,
  184, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_37_bias_array, NULL)

/* Tensor #185 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_weights, AI_STATIC,
  185, 0x1,
  AI_SHAPE_INIT(4, 120, 5, 5, 1), AI_STRIDE_INIT(4, 1, 120, 120, 600),
  1, &conv2d_38_weights_array, &conv2d_38_weights_array_intq)

/* Tensor #186 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_bias, AI_STATIC,
  186, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_38_bias_array, NULL)

/* Tensor #187 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_weights, AI_STATIC,
  187, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 30), AI_STRIDE_INIT(4, 1, 120, 3600, 3600),
  1, &conv2d_40_weights_array, &conv2d_40_weights_array_intq)

/* Tensor #188 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_bias, AI_STATIC,
  188, 0x0,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 4, 4, 120, 120),
  1, &conv2d_40_bias_array, NULL)

/* Tensor #189 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_weights, AI_STATIC,
  189, 0x1,
  AI_SHAPE_INIT(4, 30, 1, 1, 120), AI_STRIDE_INIT(4, 1, 30, 3600, 3600),
  1, &conv2d_41_weights_array, &conv2d_41_weights_array_intq)

/* Tensor #190 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_bias, AI_STATIC,
  190, 0x0,
  AI_SHAPE_INIT(4, 1, 120, 1, 1), AI_STRIDE_INIT(4, 4, 4, 480, 480),
  1, &conv2d_41_bias_array, NULL)

/* Tensor #191 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_weights, AI_STATIC,
  191, 0x1,
  AI_SHAPE_INIT(4, 120, 1, 1, 24), AI_STRIDE_INIT(4, 1, 120, 2880, 2880),
  1, &conv2d_45_weights_array, &conv2d_45_weights_array_intq)

/* Tensor #192 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_bias, AI_STATIC,
  192, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_45_bias_array, NULL)

/* Tensor #193 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_weights, AI_STATIC,
  193, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 64), AI_STRIDE_INIT(4, 1, 24, 1536, 1536),
  1, &conv2d_47_weights_array, &conv2d_47_weights_array_intq)

/* Tensor #194 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_bias, AI_STATIC,
  194, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_47_bias_array, NULL)

/* Tensor #195 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_weights, AI_STATIC,
  195, 0x1,
  AI_SHAPE_INIT(4, 64, 5, 5, 1), AI_STRIDE_INIT(4, 1, 64, 64, 320),
  1, &conv2d_48_weights_array, &conv2d_48_weights_array_intq)

/* Tensor #196 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_bias, AI_STATIC,
  196, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_48_bias_array, NULL)

/* Tensor #197 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_weights, AI_STATIC,
  197, 0x1,
  AI_SHAPE_INIT(4, 64, 1, 1, 16), AI_STRIDE_INIT(4, 1, 64, 1024, 1024),
  1, &conv2d_50_weights_array, &conv2d_50_weights_array_intq)

/* Tensor #198 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_bias, AI_STATIC,
  198, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_50_bias_array, NULL)

/* Tensor #199 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_weights, AI_STATIC,
  199, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 64), AI_STRIDE_INIT(4, 1, 16, 1024, 1024),
  1, &conv2d_51_weights_array, &conv2d_51_weights_array_intq)

/* Tensor #200 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_bias, AI_STATIC,
  200, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_51_bias_array, NULL)

/* Tensor #201 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_weights, AI_STATIC,
  201, 0x1,
  AI_SHAPE_INIT(4, 64, 1, 1, 24), AI_STRIDE_INIT(4, 1, 64, 1536, 1536),
  1, &conv2d_55_weights_array, &conv2d_55_weights_array_intq)

/* Tensor #202 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_bias, AI_STATIC,
  202, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_55_bias_array, NULL)

/* Tensor #203 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_weights, AI_STATIC,
  203, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 72), AI_STRIDE_INIT(4, 1, 24, 1728, 1728),
  1, &conv2d_57_weights_array, &conv2d_57_weights_array_intq)

/* Tensor #204 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_bias, AI_STATIC,
  204, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_57_bias_array, NULL)

/* Tensor #205 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_weights, AI_STATIC,
  205, 0x1,
  AI_SHAPE_INIT(4, 72, 5, 5, 1), AI_STRIDE_INIT(4, 1, 72, 72, 360),
  1, &conv2d_58_weights_array, &conv2d_58_weights_array_intq)

/* Tensor #206 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_bias, AI_STATIC,
  206, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_58_bias_array, NULL)

/* Tensor #207 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_weights, AI_STATIC,
  207, 0x1,
  AI_SHAPE_INIT(4, 72, 1, 1, 18), AI_STRIDE_INIT(4, 1, 72, 1296, 1296),
  1, &conv2d_60_weights_array, &conv2d_60_weights_array_intq)

/* Tensor #208 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_bias, AI_STATIC,
  208, 0x0,
  AI_SHAPE_INIT(4, 1, 18, 1, 1), AI_STRIDE_INIT(4, 4, 4, 72, 72),
  1, &conv2d_60_bias_array, NULL)

/* Tensor #209 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_weights, AI_STATIC,
  209, 0x1,
  AI_SHAPE_INIT(4, 18, 1, 1, 72), AI_STRIDE_INIT(4, 1, 18, 1296, 1296),
  1, &conv2d_61_weights_array, &conv2d_61_weights_array_intq)

/* Tensor #210 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_bias, AI_STATIC,
  210, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_61_bias_array, NULL)

/* Tensor #211 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_weights, AI_STATIC,
  211, 0x1,
  AI_SHAPE_INIT(4, 72, 1, 1, 24), AI_STRIDE_INIT(4, 1, 72, 1728, 1728),
  1, &conv2d_65_weights_array, &conv2d_65_weights_array_intq)

/* Tensor #212 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_bias, AI_STATIC,
  212, 0x0,
  AI_SHAPE_INIT(4, 1, 24, 1, 1), AI_STRIDE_INIT(4, 4, 4, 96, 96),
  1, &conv2d_65_bias_array, NULL)

/* Tensor #213 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_weights, AI_STATIC,
  213, 0x1,
  AI_SHAPE_INIT(4, 24, 1, 1, 144), AI_STRIDE_INIT(4, 1, 24, 3456, 3456),
  1, &conv2d_67_weights_array, &conv2d_67_weights_array_intq)

/* Tensor #214 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_bias, AI_STATIC,
  214, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_67_bias_array, NULL)

/* Tensor #215 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_weights, AI_STATIC,
  215, 0x1,
  AI_SHAPE_INIT(4, 144, 5, 5, 1), AI_STRIDE_INIT(4, 1, 144, 144, 720),
  1, &conv2d_68_weights_array, &conv2d_68_weights_array_intq)

/* Tensor #216 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_bias, AI_STATIC,
  216, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_68_bias_array, NULL)

/* Tensor #217 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_weights, AI_STATIC,
  217, 0x1,
  AI_SHAPE_INIT(4, 144, 1, 1, 36), AI_STRIDE_INIT(4, 1, 144, 5184, 5184),
  1, &conv2d_70_weights_array, &conv2d_70_weights_array_intq)

/* Tensor #218 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_70_bias, AI_STATIC,
  218, 0x0,
  AI_SHAPE_INIT(4, 1, 36, 1, 1), AI_STRIDE_INIT(4, 4, 4, 144, 144),
  1, &conv2d_70_bias_array, NULL)

/* Tensor #219 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_71_weights, AI_STATIC,
  219, 0x1,
  AI_SHAPE_INIT(4, 36, 1, 1, 144), AI_STRIDE_INIT(4, 1, 36, 5184, 5184),
  1, &conv2d_71_weights_array, &conv2d_71_weights_array_intq)

/* Tensor #220 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_71_bias, AI_STATIC,
  220, 0x0,
  AI_SHAPE_INIT(4, 1, 144, 1, 1), AI_STRIDE_INIT(4, 4, 4, 576, 576),
  1, &conv2d_71_bias_array, NULL)

/* Tensor #221 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_75_weights, AI_STATIC,
  221, 0x1,
  AI_SHAPE_INIT(4, 144, 1, 1, 48), AI_STRIDE_INIT(4, 1, 144, 6912, 6912),
  1, &conv2d_75_weights_array, &conv2d_75_weights_array_intq)

/* Tensor #222 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_75_bias, AI_STATIC,
  222, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_75_bias_array, NULL)

/* Tensor #223 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_weights, AI_STATIC,
  223, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 288), AI_STRIDE_INIT(4, 1, 48, 13824, 13824),
  1, &conv2d_76_weights_array, &conv2d_76_weights_array_intq)

/* Tensor #224 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_76_bias, AI_STATIC,
  224, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_76_bias_array, NULL)

/* Tensor #225 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_77_weights, AI_STATIC,
  225, 0x1,
  AI_SHAPE_INIT(4, 288, 5, 5, 1), AI_STRIDE_INIT(4, 1, 288, 288, 1440),
  1, &conv2d_77_weights_array, &conv2d_77_weights_array_intq)

/* Tensor #226 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_77_bias, AI_STATIC,
  226, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_77_bias_array, NULL)

/* Tensor #227 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_weights, AI_STATIC,
  227, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 72), AI_STRIDE_INIT(4, 1, 288, 20736, 20736),
  1, &conv2d_79_weights_array, &conv2d_79_weights_array_intq)

/* Tensor #228 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_79_bias, AI_STATIC,
  228, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_79_bias_array, NULL)

/* Tensor #229 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_80_weights, AI_STATIC,
  229, 0x1,
  AI_SHAPE_INIT(4, 72, 1, 1, 288), AI_STRIDE_INIT(4, 1, 72, 20736, 20736),
  1, &conv2d_80_weights_array, &conv2d_80_weights_array_intq)

/* Tensor #230 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_80_bias, AI_STATIC,
  230, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_80_bias_array, NULL)

/* Tensor #231 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_84_weights, AI_STATIC,
  231, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 48), AI_STRIDE_INIT(4, 1, 288, 13824, 13824),
  1, &conv2d_84_weights_array, &conv2d_84_weights_array_intq)

/* Tensor #232 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_84_bias, AI_STATIC,
  232, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_84_bias_array, NULL)

/* Tensor #233 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_86_weights, AI_STATIC,
  233, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 288), AI_STRIDE_INIT(4, 1, 48, 13824, 13824),
  1, &conv2d_86_weights_array, &conv2d_86_weights_array_intq)

/* Tensor #234 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_86_bias, AI_STATIC,
  234, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_86_bias_array, NULL)

/* Tensor #235 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_87_weights, AI_STATIC,
  235, 0x1,
  AI_SHAPE_INIT(4, 288, 5, 5, 1), AI_STRIDE_INIT(4, 1, 288, 288, 1440),
  1, &conv2d_87_weights_array, &conv2d_87_weights_array_intq)

/* Tensor #236 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_87_bias, AI_STATIC,
  236, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_87_bias_array, NULL)

/* Tensor #237 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_89_weights, AI_STATIC,
  237, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 72), AI_STRIDE_INIT(4, 1, 288, 20736, 20736),
  1, &conv2d_89_weights_array, &conv2d_89_weights_array_intq)

/* Tensor #238 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_89_bias, AI_STATIC,
  238, 0x0,
  AI_SHAPE_INIT(4, 1, 72, 1, 1), AI_STRIDE_INIT(4, 4, 4, 288, 288),
  1, &conv2d_89_bias_array, NULL)

/* Tensor #239 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_90_weights, AI_STATIC,
  239, 0x1,
  AI_SHAPE_INIT(4, 72, 1, 1, 288), AI_STRIDE_INIT(4, 1, 72, 20736, 20736),
  1, &conv2d_90_weights_array, &conv2d_90_weights_array_intq)

/* Tensor #240 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_90_bias, AI_STATIC,
  240, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_90_bias_array, NULL)

/* Tensor #241 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_94_weights, AI_STATIC,
  241, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 48), AI_STRIDE_INIT(4, 1, 288, 13824, 13824),
  1, &conv2d_94_weights_array, &conv2d_94_weights_array_intq)

/* Tensor #242 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_94_bias, AI_STATIC,
  242, 0x0,
  AI_SHAPE_INIT(4, 1, 48, 1, 1), AI_STRIDE_INIT(4, 4, 4, 192, 192),
  1, &conv2d_94_bias_array, NULL)

/* Tensor #243 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_96_weights, AI_STATIC,
  243, 0x1,
  AI_SHAPE_INIT(4, 48, 1, 1, 288), AI_STRIDE_INIT(4, 1, 48, 13824, 13824),
  1, &conv2d_96_weights_array, &conv2d_96_weights_array_intq)

/* Tensor #244 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_96_bias, AI_STATIC,
  244, 0x0,
  AI_SHAPE_INIT(4, 1, 288, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1152, 1152),
  1, &conv2d_96_bias_array, NULL)

/* Tensor #245 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_weights, AI_STATIC,
  245, 0x1,
  AI_SHAPE_INIT(4, 288, 1, 1, 1280), AI_STRIDE_INIT(4, 1, 288, 368640, 368640),
  1, &conv2d_98_weights_array, &conv2d_98_weights_array_intq)

/* Tensor #246 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_98_bias, AI_STATIC,
  246, 0x0,
  AI_SHAPE_INIT(4, 1, 1280, 1, 1), AI_STRIDE_INIT(4, 4, 4, 5120, 5120),
  1, &conv2d_98_bias_array, NULL)

/* Tensor #247 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_99_weights, AI_STATIC,
  247, 0x1,
  AI_SHAPE_INIT(4, 1280, 1, 1, 39), AI_STRIDE_INIT(4, 1, 1280, 49920, 49920),
  1, &conv2d_99_weights_array, &conv2d_99_weights_array_intq)

/* Tensor #248 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_99_bias, AI_STATIC,
  248, 0x0,
  AI_SHAPE_INIT(4, 1, 39, 1, 1), AI_STRIDE_INIT(4, 4, 4, 156, 156),
  1, &conv2d_99_bias_array, NULL)

/* Tensor #249 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch0, AI_STATIC,
  249, 0x0,
  AI_SHAPE_INIT(4, 1, 652, 1, 1), AI_STRIDE_INIT(4, 1, 1, 652, 652),
  1, &conv2d_1_scratch0_array, NULL)

/* Tensor #250 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch1, AI_STATIC,
  250, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_1_scratch1_array, &conv2d_1_scratch1_array_intq)

/* Tensor #251 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_scratch0, AI_STATIC,
  251, 0x0,
  AI_SHAPE_INIT(4, 1, 112, 1, 1), AI_STRIDE_INIT(4, 1, 1, 112, 112),
  1, &conv2d_2_scratch0_array, NULL)

/* Tensor #252 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_scratch1, AI_STATIC,
  252, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &conv2d_2_scratch1_array, &conv2d_2_scratch1_array_intq)

/* Tensor #253 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_scratch0, AI_STATIC,
  253, 0x0,
  AI_SHAPE_INIT(4, 1, 297, 1, 1), AI_STRIDE_INIT(4, 1, 1, 297, 297),
  1, &conv2d_3_scratch0_array, NULL)

/* Tensor #254 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_scratch1, AI_STATIC,
  254, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 56, 56), AI_STRIDE_INIT(4, 1, 1, 8, 448),
  1, &conv2d_3_scratch1_array, &conv2d_3_scratch1_array_intq)

/* Tensor #255 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_scratch0, AI_STATIC,
  255, 0x0,
  AI_SHAPE_INIT(4, 1, 52, 1, 1), AI_STRIDE_INIT(4, 1, 1, 52, 52),
  1, &conv2d_5_scratch0_array, NULL)

/* Tensor #256 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_scratch0, AI_STATIC,
  256, 0x0,
  AI_SHAPE_INIT(4, 1, 88, 1, 1), AI_STRIDE_INIT(4, 1, 1, 88, 88),
  1, &conv2d_6_scratch0_array, NULL)

/* Tensor #257 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_scratch0, AI_STATIC,
  257, 0x0,
  AI_SHAPE_INIT(4, 1, 112, 1, 1), AI_STRIDE_INIT(4, 1, 1, 112, 112),
  1, &conv2d_10_scratch0_array, NULL)

/* Tensor #258 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_scratch0, AI_STATIC,
  258, 0x0,
  AI_SHAPE_INIT(4, 1, 432, 1, 1), AI_STRIDE_INIT(4, 1, 1, 432, 432),
  1, &conv2d_11_scratch0_array, NULL)

/* Tensor #259 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_scratch1, AI_STATIC,
  259, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 56, 56), AI_STRIDE_INIT(4, 1, 1, 40, 2240),
  1, &conv2d_11_scratch1_array, &conv2d_11_scratch1_array_intq)

/* Tensor #260 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_scratch0, AI_STATIC,
  260, 0x0,
  AI_SHAPE_INIT(4, 1, 1481, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1481, 1481),
  1, &conv2d_12_scratch0_array, NULL)

/* Tensor #261 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_scratch1, AI_STATIC,
  261, 0x1,
  AI_SHAPE_INIT(4, 1, 40, 28, 28), AI_STRIDE_INIT(4, 1, 1, 40, 1120),
  1, &conv2d_12_scratch1_array, &conv2d_12_scratch1_array_intq)

/* Tensor #262 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_scratch0, AI_STATIC,
  262, 0x0,
  AI_SHAPE_INIT(4, 1, 320, 1, 1), AI_STRIDE_INIT(4, 1, 1, 320, 320),
  1, &conv2d_13_scratch0_array, NULL)

/* Tensor #263 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_scratch0, AI_STATIC,
  263, 0x0,
  AI_SHAPE_INIT(4, 1, 544, 1, 1), AI_STRIDE_INIT(4, 1, 1, 544, 544),
  1, &conv2d_14_scratch0_array, NULL)

/* Tensor #264 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_14_scratch1, AI_STATIC,
  264, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_14_scratch1_array, &conv2d_14_scratch1_array_intq)

/* Tensor #265 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_scratch0, AI_STATIC,
  265, 0x0,
  AI_SHAPE_INIT(4, 1, 1777, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1777, 1777),
  1, &conv2d_15_scratch0_array, NULL)

/* Tensor #266 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_15_scratch1, AI_STATIC,
  266, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_15_scratch1_array, &conv2d_15_scratch1_array_intq)

/* Tensor #267 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_16_scratch0, AI_STATIC,
  267, 0x0,
  AI_SHAPE_INIT(4, 1, 352, 1, 1), AI_STRIDE_INIT(4, 1, 1, 352, 352),
  1, &conv2d_16_scratch0_array, NULL)

/* Tensor #268 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_scratch0, AI_STATIC,
  268, 0x0,
  AI_SHAPE_INIT(4, 1, 544, 1, 1), AI_STRIDE_INIT(4, 1, 1, 544, 544),
  1, &conv2d_18_scratch0_array, NULL)

/* Tensor #269 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_18_scratch1, AI_STATIC,
  269, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 28, 28), AI_STRIDE_INIT(4, 1, 1, 48, 1344),
  1, &conv2d_18_scratch1_array, &conv2d_18_scratch1_array_intq)

/* Tensor #270 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_scratch0, AI_STATIC,
  270, 0x0,
  AI_SHAPE_INIT(4, 1, 4081, 1, 1), AI_STRIDE_INIT(4, 1, 1, 4081, 4081),
  1, &conv2d_19_scratch0_array, NULL)

/* Tensor #271 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_19_scratch1, AI_STATIC,
  271, 0x1,
  AI_SHAPE_INIT(4, 1, 48, 14, 14), AI_STRIDE_INIT(4, 1, 1, 48, 672),
  1, &conv2d_19_scratch1_array, &conv2d_19_scratch1_array_intq)

/* Tensor #272 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_scratch0, AI_STATIC,
  272, 0x0,
  AI_SHAPE_INIT(4, 1, 312, 1, 1), AI_STRIDE_INIT(4, 1, 1, 312, 312),
  1, &conv2d_21_scratch0_array, NULL)

/* Tensor #273 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_21_scratch1, AI_STATIC,
  273, 0x1,
  AI_SHAPE_INIT(4, 1, 12, 1, 1), AI_STRIDE_INIT(4, 1, 1, 12, 12),
  1, &conv2d_21_scratch1_array, &conv2d_21_scratch1_array_intq)

/* Tensor #274 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_22_scratch0, AI_STATIC,
  274, 0x0,
  AI_SHAPE_INIT(4, 1, 528, 1, 1), AI_STRIDE_INIT(4, 1, 1, 528, 528),
  1, &conv2d_22_scratch0_array, NULL)

/* Tensor #275 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_26_scratch0, AI_STATIC,
  275, 0x0,
  AI_SHAPE_INIT(4, 1, 432, 1, 1), AI_STRIDE_INIT(4, 1, 1, 432, 432),
  1, &conv2d_26_scratch0_array, NULL)

/* Tensor #276 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_scratch0, AI_STATIC,
  276, 0x0,
  AI_SHAPE_INIT(4, 1, 1296, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1296, 1296),
  1, &conv2d_27_scratch0_array, NULL)

/* Tensor #277 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_27_scratch1, AI_STATIC,
  277, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_27_scratch1_array, &conv2d_27_scratch1_array_intq)

/* Tensor #278 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_scratch0, AI_STATIC,
  278, 0x0,
  AI_SHAPE_INIT(4, 1, 10201, 1, 1), AI_STRIDE_INIT(4, 1, 1, 10201, 10201),
  1, &conv2d_28_scratch0_array, NULL)

/* Tensor #279 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_28_scratch1, AI_STATIC,
  279, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_28_scratch1_array, &conv2d_28_scratch1_array_intq)

/* Tensor #280 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_scratch0, AI_STATIC,
  280, 0x0,
  AI_SHAPE_INIT(4, 1, 780, 1, 1), AI_STRIDE_INIT(4, 1, 1, 780, 780),
  1, &conv2d_30_scratch0_array, NULL)

/* Tensor #281 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_30_scratch1, AI_STATIC,
  281, 0x1,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 1, 1, 30, 30),
  1, &conv2d_30_scratch1_array, &conv2d_30_scratch1_array_intq)

/* Tensor #282 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_31_scratch0, AI_STATIC,
  282, 0x0,
  AI_SHAPE_INIT(4, 1, 1320, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1320, 1320),
  1, &conv2d_31_scratch0_array, NULL)

/* Tensor #283 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_35_scratch0, AI_STATIC,
  283, 0x0,
  AI_SHAPE_INIT(4, 1, 720, 1, 1), AI_STRIDE_INIT(4, 1, 1, 720, 720),
  1, &conv2d_35_scratch0_array, NULL)

/* Tensor #284 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_scratch0, AI_STATIC,
  284, 0x0,
  AI_SHAPE_INIT(4, 1, 1296, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1296, 1296),
  1, &conv2d_37_scratch0_array, NULL)

/* Tensor #285 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_37_scratch1, AI_STATIC,
  285, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_37_scratch1_array, &conv2d_37_scratch1_array_intq)

/* Tensor #286 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_scratch0, AI_STATIC,
  286, 0x0,
  AI_SHAPE_INIT(4, 1, 10201, 1, 1), AI_STRIDE_INIT(4, 1, 1, 10201, 10201),
  1, &conv2d_38_scratch0_array, NULL)

/* Tensor #287 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_38_scratch1, AI_STATIC,
  287, 0x1,
  AI_SHAPE_INIT(4, 1, 120, 14, 14), AI_STRIDE_INIT(4, 1, 1, 120, 1680),
  1, &conv2d_38_scratch1_array, &conv2d_38_scratch1_array_intq)

/* Tensor #288 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_scratch0, AI_STATIC,
  288, 0x0,
  AI_SHAPE_INIT(4, 1, 780, 1, 1), AI_STRIDE_INIT(4, 1, 1, 780, 780),
  1, &conv2d_40_scratch0_array, NULL)

/* Tensor #289 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_40_scratch1, AI_STATIC,
  289, 0x1,
  AI_SHAPE_INIT(4, 1, 30, 1, 1), AI_STRIDE_INIT(4, 1, 1, 30, 30),
  1, &conv2d_40_scratch1_array, &conv2d_40_scratch1_array_intq)

/* Tensor #290 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_41_scratch0, AI_STATIC,
  290, 0x0,
  AI_SHAPE_INIT(4, 1, 1320, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1320, 1320),
  1, &conv2d_41_scratch0_array, NULL)

/* Tensor #291 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_45_scratch0, AI_STATIC,
  291, 0x0,
  AI_SHAPE_INIT(4, 1, 720, 1, 1), AI_STRIDE_INIT(4, 1, 1, 720, 720),
  1, &conv2d_45_scratch0_array, NULL)

/* Tensor #292 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_scratch0, AI_STATIC,
  292, 0x0,
  AI_SHAPE_INIT(4, 1, 736, 1, 1), AI_STRIDE_INIT(4, 1, 1, 736, 736),
  1, &conv2d_47_scratch0_array, NULL)

/* Tensor #293 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_47_scratch1, AI_STATIC,
  293, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_47_scratch1_array, &conv2d_47_scratch1_array_intq)

/* Tensor #294 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_scratch0, AI_STATIC,
  294, 0x0,
  AI_SHAPE_INIT(4, 1, 5441, 1, 1), AI_STRIDE_INIT(4, 1, 1, 5441, 5441),
  1, &conv2d_48_scratch0_array, NULL)

/* Tensor #295 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_48_scratch1, AI_STATIC,
  295, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &conv2d_48_scratch1_array, &conv2d_48_scratch1_array_intq)

/* Tensor #296 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_50_scratch0, AI_STATIC,
  296, 0x0,
  AI_SHAPE_INIT(4, 1, 416, 1, 1), AI_STRIDE_INIT(4, 1, 1, 416, 416),
  1, &conv2d_50_scratch0_array, NULL)

/* Tensor #297 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_51_scratch0, AI_STATIC,
  297, 0x0,
  AI_SHAPE_INIT(4, 1, 704, 1, 1), AI_STRIDE_INIT(4, 1, 1, 704, 704),
  1, &conv2d_51_scratch0_array, NULL)

/* Tensor #298 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_55_scratch0, AI_STATIC,
  298, 0x0,
  AI_SHAPE_INIT(4, 1, 496, 1, 1), AI_STRIDE_INIT(4, 1, 1, 496, 496),
  1, &conv2d_55_scratch0_array, NULL)

/* Tensor #299 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_scratch0, AI_STATIC,
  299, 0x0,
  AI_SHAPE_INIT(4, 1, 816, 1, 1), AI_STRIDE_INIT(4, 1, 1, 816, 816),
  1, &conv2d_57_scratch0_array, NULL)

/* Tensor #300 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_57_scratch1, AI_STATIC,
  300, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 14, 14), AI_STRIDE_INIT(4, 1, 1, 72, 1008),
  1, &conv2d_57_scratch1_array, &conv2d_57_scratch1_array_intq)

/* Tensor #301 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_scratch0, AI_STATIC,
  301, 0x0,
  AI_SHAPE_INIT(4, 1, 6121, 1, 1), AI_STRIDE_INIT(4, 1, 1, 6121, 6121),
  1, &conv2d_58_scratch0_array, NULL)

/* Tensor #302 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_58_scratch1, AI_STATIC,
  302, 0x1,
  AI_SHAPE_INIT(4, 1, 72, 14, 14), AI_STRIDE_INIT(4, 1, 1, 72, 1008),
  1, &conv2d_58_scratch1_array, &conv2d_58_scratch1_array_intq)

/* Tensor #303 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_60_scratch0, AI_STATIC,
  303, 0x0,
  AI_SHAPE_INIT(4, 1, 468, 1, 1), AI_STRIDE_INIT(4, 1, 1, 468, 468),
  1, &conv2d_60_scratch0_array, NULL)

/* Tensor #304 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_61_scratch0, AI_STATIC,
  304, 0x0,
  AI_SHAPE_INIT(4, 1, 792, 1, 1), AI_STRIDE_INIT(4, 1, 1, 792, 792),
  1, &conv2d_61_scratch0_array, NULL)

/* Tensor #305 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_65_scratch0, AI_STATIC,
  305, 0x0,
  AI_SHAPE_INIT(4, 1, 528, 1, 1), AI_STRIDE_INIT(4, 1, 1, 528, 528),
  1, &conv2d_65_scratch0_array, NULL)

/* Tensor #306 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_scratch0, AI_STATIC,
  306, 0x0,
  AI_SHAPE_INIT(4, 1, 1536, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1536, 1536),
  1, &conv2d_67_scratch0_array, NULL)

/* Tensor #307 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_67_scratch1, AI_STATIC,
  307, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 14, 14), AI_STRIDE_INIT(4, 1, 1, 144, 2016),
  1, &conv2d_67_scratch1_array, &conv2d_67_scratch1_array_intq)

/* Tensor #308 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_scratch0, AI_STATIC,
  308, 0x0,
  AI_SHAPE_INIT(4, 1, 12241, 1, 1), AI_STRIDE_INIT(4, 1, 1, 12241, 12241),
  1, &conv2d_68_scratch0_array, NULL)

/* Tensor #309 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_68_scratch1, AI_STATIC,
  309, 0x1,
  AI_SHAPE_INIT(4, 1, 144, 7, 7), AI_STRIDE_INIT(4, 1, 1, 144, 1008),
  1, &conv2d_68_scratch1_array, &conv2d_68_scratch1_array_intq)



/**  Layer declarations section  **********************************************/


AI_TENSOR_CHAIN_OBJ_DECLARE(
  conversion_102_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_101_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conversion_102_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conversion_102_layer, 102,
  NL_TYPE, 0x0, NULL,
  nl, node_convert,
  &conversion_102_chain,
  NULL, &conversion_102_layer, AI_STATIC, 
)


AI_STATIC_CONST ai_i32 nl_101_nl_params_data[] = { 1676579840, 25, -62 };
AI_ARRAY_OBJ_DECLARE(
    nl_101_nl_params, AI_ARRAY_FORMAT_S32,
    nl_101_nl_params_data, nl_101_nl_params_data, 3, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_101_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_99_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_101_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_101_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  nl_101_layer, 101,
  NL_TYPE, 0x0, NULL,
  nl, forward_sm_integer,
  &nl_101_chain,
  NULL, &conversion_102_layer, AI_STATIC, 
  .nl_params = &nl_101_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_99_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_98_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_99_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_99_weights, &conv2d_99_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_99_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_99_layer, 99,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_99_chain,
  NULL, &nl_101_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_98_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_97_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_98_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_98_weights, &conv2d_98_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_98_scratch0, &conv2d_98_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_98_layer, 98,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_98_chain,
  NULL, &conv2d_99_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_97_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_96_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_97_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_97_layer, 97,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_97_chain,
  NULL, &conv2d_98_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(7, 7), 
  .pool_stride = AI_SHAPE_2D_INIT(7, 7), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_96_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_95_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_96_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_96_weights, &conv2d_96_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_96_scratch0, &conv2d_96_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_96_layer, 96,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_96_chain,
  NULL, &pool_97_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_95_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_85_output, &conv2d_94_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_95_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_95_layer, 95,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_95_chain,
  NULL, &conv2d_96_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_94_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_93_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_94_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_94_weights, &conv2d_94_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_94_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_94_layer, 94,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_94_chain,
  NULL, &eltwise_95_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_93_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_87_output, &nl_92_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_93_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_93_layer, 93,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_93_chain,
  NULL, &conv2d_94_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_92_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -124, -120, -116, -112, -108, -104, -100, -96, -93, -89, -85, -81, -77, -73, -69, -65, -61, -57, -53, -49, -45, -41, -37, -33, -29, -25, -22, -18, -14, -10, -6, -2, 2, 6, 10, 14, 18, 22, 26, 30, 34, 38, 42, 46, 49, 53, 57, 61, 65, 69, 73, 77, 81, 85, 89, 93, 97, 101, 105, 109, 113, 117, 120, 124, 127 };
AI_ARRAY_OBJ_DECLARE(
    nl_92_nl_params, AI_ARRAY_FORMAT_S8,
    nl_92_nl_params_data, nl_92_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_92_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_91_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_92_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_92_layer, 92,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_92_chain,
  NULL, &eltwise_93_layer, AI_STATIC, 
  .nl_params = &nl_92_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_91_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_90_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_91_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_91_layer, 91,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_91_chain,
  NULL, &nl_92_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_90_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_89_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_90_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_90_weights, &conv2d_90_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_90_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_90_layer, 90,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_90_chain,
  NULL, &eltwise_91_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_89_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_88_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_89_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_89_weights, &conv2d_89_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_89_scratch0, &conv2d_89_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_89_layer, 89,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_89_chain,
  NULL, &conv2d_90_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_88_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_87_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_88_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_88_layer, 88,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_88_chain,
  NULL, &conv2d_89_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(7, 7), 
  .pool_stride = AI_SHAPE_2D_INIT(7, 7), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_87_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_86_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_87_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_87_weights, &conv2d_87_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_87_scratch0, &conv2d_87_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_87_layer, 87,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_sssa8_ch,
  &conv2d_87_chain,
  NULL, &pool_88_layer, AI_STATIC, 
  .groups = 288, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 2, 2, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_86_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_85_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_86_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_86_weights, &conv2d_86_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_86_scratch0, &conv2d_86_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_86_layer, 86,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_86_chain,
  NULL, &conv2d_87_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_85_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_75_output, &conv2d_84_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_85_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_85_layer, 85,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_85_chain,
  NULL, &conv2d_86_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_84_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_83_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_84_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_84_weights, &conv2d_84_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_84_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_84_layer, 84,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_84_chain,
  NULL, &eltwise_85_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_83_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_77_output, &nl_82_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_83_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_83_layer, 83,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_83_chain,
  NULL, &conv2d_84_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_82_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -122, -119, -116, -113, -110, -107, -104, -101, -98, -95, -92, -89, -86, -83, -80, -77, -74, -71, -68, -65, -61, -58, -55, -52, -49, -46, -43, -40, -37, -34, -31, -28, -25, -22, -19, -16, -13, -10, -7, -4, -1, 2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 35, 38, 41, 44, 47, 50, 53, 56, 59, 62, 65, 69, 72, 75, 78, 81, 84, 87, 90, 93, 96, 99, 102, 105, 108, 111, 114, 117, 120, 123, 126 };
AI_ARRAY_OBJ_DECLARE(
    nl_82_nl_params, AI_ARRAY_FORMAT_S8,
    nl_82_nl_params_data, nl_82_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_82_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_81_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_82_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_82_layer, 82,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_82_chain,
  NULL, &eltwise_83_layer, AI_STATIC, 
  .nl_params = &nl_82_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_81_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_80_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_81_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_81_layer, 81,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_81_chain,
  NULL, &nl_82_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_80_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_79_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_80_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_80_weights, &conv2d_80_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_80_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_80_layer, 80,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_80_chain,
  NULL, &eltwise_81_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_79_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_78_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_79_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_79_weights, &conv2d_79_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_79_scratch0, &conv2d_79_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_79_layer, 79,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_79_chain,
  NULL, &conv2d_80_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_78_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_77_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_78_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_78_layer, 78,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_78_chain,
  NULL, &conv2d_79_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(7, 7), 
  .pool_stride = AI_SHAPE_2D_INIT(7, 7), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_77_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_76_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_77_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_77_weights, &conv2d_77_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_77_scratch0, &conv2d_77_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_77_layer, 77,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_sssa8_ch,
  &conv2d_77_chain,
  NULL, &pool_78_layer, AI_STATIC, 
  .groups = 288, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 2, 2, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_76_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_75_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_76_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_76_weights, &conv2d_76_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_76_scratch0, &conv2d_76_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_76_layer, 76,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_76_chain,
  NULL, &conv2d_77_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_75_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_74_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_75_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_75_weights, &conv2d_75_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_75_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_75_layer, 75,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_75_chain,
  NULL, &conv2d_76_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_74_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_68_output, &nl_73_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_74_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_74_layer, 74,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_74_chain,
  NULL, &conv2d_75_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_73_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -124, -123, -121, -119, -117, -115, -113, -112, -110, -108, -106, -104, -102, -101, -99, -97, -95, -93, -91, -90, -88, -86, -84, -82, -80, -79, -77, -75, -73, -71, -69, -68, -66, -64, -62, -60, -59, -57, -55, -53, -51, -49, -48, -46, -44, -42, -40, -38, -37, -35, -33, -31, -29, -27, -26, -24, -22, -20, -18, -16, -15, -13, -11, -9, -7, -5, -4, -2, 0, 2, 4, 5, 7, 9, 11, 13, 15, 16, 18, 20, 22, 24, 26, 27, 29, 31, 33, 35, 37, 38, 40, 42, 44, 46, 48, 49, 51, 53, 55, 57, 59, 60, 62, 64, 66, 68, 70, 71, 73, 75, 77, 79, 80, 82, 84, 86, 88, 90, 91, 93, 95, 97, 99, 101, 102, 104, 106, 108, 110, 112, 113, 115, 117, 119, 121, 123, 124, 126 };
AI_ARRAY_OBJ_DECLARE(
    nl_73_nl_params, AI_ARRAY_FORMAT_S8,
    nl_73_nl_params_data, nl_73_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_73_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_72_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_73_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_73_layer, 73,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_73_chain,
  NULL, &eltwise_74_layer, AI_STATIC, 
  .nl_params = &nl_73_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_72_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_71_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_72_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_72_layer, 72,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_72_chain,
  NULL, &nl_73_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_71_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_70_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_71_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_71_weights, &conv2d_71_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_71_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_71_layer, 71,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_71_chain,
  NULL, &eltwise_72_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_70_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_69_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_70_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_70_weights, &conv2d_70_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_70_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_70_layer, 70,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_70_chain,
  NULL, &conv2d_71_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_69_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_68_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_69_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_69_layer, 69,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_69_chain,
  NULL, &conv2d_70_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(7, 7), 
  .pool_stride = AI_SHAPE_2D_INIT(7, 7), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_68_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_67_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_68_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_68_weights, &conv2d_68_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_68_scratch0, &conv2d_68_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_68_layer, 68,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_sssa8_ch,
  &conv2d_68_chain,
  NULL, &pool_69_layer, AI_STATIC, 
  .groups = 144, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 3, 3), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_67_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_66_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_67_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_67_weights, &conv2d_67_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_67_scratch0, &conv2d_67_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_67_layer, 67,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_67_chain,
  NULL, &conv2d_68_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_66_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_56_output, &conv2d_65_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_66_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_66_layer, 66,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_66_chain,
  NULL, &conv2d_67_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_65_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_64_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_65_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_65_weights, &conv2d_65_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_65_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_65_layer, 65,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_65_chain,
  NULL, &eltwise_66_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_64_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_58_output, &nl_63_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_64_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_64_layer, 64,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_64_chain,
  NULL, &conv2d_65_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_63_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -125, -123, -122, -120, -118, -117, -115, -113, -112, -110, -109, -107, -105, -104, -102, -100, -99, -97, -96, -94, -92, -91, -89, -87, -86, -84, -83, -81, -79, -78, -76, -74, -73, -71, -70, -68, -66, -65, -63, -62, -60, -58, -57, -55, -53, -52, -50, -49, -47, -45, -44, -42, -40, -39, -37, -36, -34, -32, -31, -29, -27, -26, -24, -23, -21, -19, -18, -16, -15, -13, -11, -10, -8, -6, -5, -3, -2, 0, 2, 3, 5, 7, 8, 10, 11, 13, 15, 16, 18, 20, 21, 23, 24, 26, 28, 29, 31, 33, 34, 36, 37, 39, 41, 42, 44, 45, 47, 49, 50, 52, 54, 55, 57, 58, 60, 62, 63, 65, 67, 68, 70, 71, 73, 75, 76, 78, 80, 81, 83, 84, 86, 88, 89, 91, 92, 94, 96, 97, 99, 101, 102, 104, 105, 107, 109, 110, 112, 114, 115, 117, 118, 120, 122, 123, 125, 127 };
AI_ARRAY_OBJ_DECLARE(
    nl_63_nl_params, AI_ARRAY_FORMAT_S8,
    nl_63_nl_params_data, nl_63_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_63_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_62_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_63_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_63_layer, 63,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_63_chain,
  NULL, &eltwise_64_layer, AI_STATIC, 
  .nl_params = &nl_63_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_62_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_61_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_62_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_62_layer, 62,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_62_chain,
  NULL, &nl_63_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_61_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_60_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_61_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_61_weights, &conv2d_61_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_61_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_61_layer, 61,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_61_chain,
  NULL, &eltwise_62_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_60_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_59_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_60_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_60_weights, &conv2d_60_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_60_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_60_layer, 60,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_60_chain,
  NULL, &conv2d_61_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_59_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_58_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_59_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_59_layer, 59,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_59_chain,
  NULL, &conv2d_60_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(14, 14), 
  .pool_stride = AI_SHAPE_2D_INIT(14, 14), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_58_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_57_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_58_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_58_weights, &conv2d_58_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_58_scratch0, &conv2d_58_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_58_layer, 58,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_sssa8_ch,
  &conv2d_58_chain,
  NULL, &pool_59_layer, AI_STATIC, 
  .groups = 72, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 2, 2, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_57_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_56_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_57_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_57_weights, &conv2d_57_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_57_scratch0, &conv2d_57_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_57_layer, 57,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_57_chain,
  NULL, &conv2d_58_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_56_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_46_output, &conv2d_55_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_56_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_56_layer, 56,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_56_chain,
  NULL, &conv2d_57_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_55_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_54_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_55_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_55_weights, &conv2d_55_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_55_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_55_layer, 55,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_55_chain,
  NULL, &eltwise_56_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_54_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_48_output, &nl_53_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_54_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_54_layer, 54,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_54_chain,
  NULL, &conv2d_55_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_53_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -125, -123, -121, -119, -118, -116, -114, -113, -111, -109, -107, -106, -104, -102, -101, -99, -97, -95, -94, -92, -90, -89, -87, -85, -83, -82, -80, -78, -77, -75, -73, -71, -70, -68, -66, -65, -63, -61, -59, -58, -56, -54, -53, -51, -49, -47, -46, -44, -42, -41, -39, -37, -35, -34, -32, -30, -28, -27, -25, -23, -22, -20, -18, -16, -15, -13, -11, -10, -8, -6, -4, -3, -1, 1, 2, 4, 6, 8, 9, 11, 13, 14, 16, 18, 20, 21, 23, 25, 26, 28, 30, 32, 33, 35, 37, 38, 40, 42, 44, 45, 47, 49, 50, 52, 54, 56, 57, 59, 61, 62, 64, 66, 68, 69, 71, 73, 74, 76, 78, 80, 81, 83, 85, 86, 88, 90, 92, 93, 95, 97, 98, 100, 102, 104, 105, 107, 109, 110, 112, 114, 116, 117, 119, 121, 122, 124, 126, 127 };
AI_ARRAY_OBJ_DECLARE(
    nl_53_nl_params, AI_ARRAY_FORMAT_S8,
    nl_53_nl_params_data, nl_53_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_53_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_52_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_53_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_53_layer, 53,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_53_chain,
  NULL, &eltwise_54_layer, AI_STATIC, 
  .nl_params = &nl_53_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_52_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_51_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_52_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_52_layer, 52,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_52_chain,
  NULL, &nl_53_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_51_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_50_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_51_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_51_weights, &conv2d_51_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_51_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_51_layer, 51,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_51_chain,
  NULL, &eltwise_52_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_50_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_49_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_50_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_50_weights, &conv2d_50_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_50_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_50_layer, 50,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_50_chain,
  NULL, &conv2d_51_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_49_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_48_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_49_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_49_layer, 49,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_49_chain,
  NULL, &conv2d_50_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(14, 14), 
  .pool_stride = AI_SHAPE_2D_INIT(14, 14), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_48_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_47_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_48_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_48_weights, &conv2d_48_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_48_scratch0, &conv2d_48_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_48_layer, 48,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_sssa8_ch,
  &conv2d_48_chain,
  NULL, &pool_49_layer, AI_STATIC, 
  .groups = 64, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 2, 2, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_47_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_46_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_47_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_47_weights, &conv2d_47_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_47_scratch0, &conv2d_47_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_47_layer, 47,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_47_chain,
  NULL, &conv2d_48_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_46_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_36_output, &conv2d_45_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_46_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_46_layer, 46,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_46_chain,
  NULL, &conv2d_47_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_45_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_44_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_45_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_45_weights, &conv2d_45_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_45_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_45_layer, 45,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_45_chain,
  NULL, &eltwise_46_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_44_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_38_output, &nl_43_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_44_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_44_layer, 44,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_44_chain,
  NULL, &conv2d_45_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_43_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -125, -122, -119, -115, -112, -109, -106, -103, -100, -97, -94, -90, -87, -84, -81, -78, -75, -72, -69, -65, -62, -59, -56, -53, -50, -47, -44, -40, -37, -34, -31, -28, -25, -22, -19, -15, -12, -9, -6, -3, 0, 3, 6, 10, 13, 16, 19, 22, 25, 28, 31, 35, 38, 41, 44, 47, 50, 53, 56, 60, 63, 66, 69, 72, 75, 78, 81, 85, 88, 91, 94, 97, 100, 103, 106, 110, 113, 116, 119, 122, 125, 127 };
AI_ARRAY_OBJ_DECLARE(
    nl_43_nl_params, AI_ARRAY_FORMAT_S8,
    nl_43_nl_params_data, nl_43_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_43_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_42_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_43_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_43_layer, 43,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_43_chain,
  NULL, &eltwise_44_layer, AI_STATIC, 
  .nl_params = &nl_43_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_42_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_41_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_42_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_42_layer, 42,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_42_chain,
  NULL, &nl_43_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_41_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_40_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_41_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_41_weights, &conv2d_41_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_41_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_41_layer, 41,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_41_chain,
  NULL, &eltwise_42_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_40_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_39_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_40_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_40_weights, &conv2d_40_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_40_scratch0, &conv2d_40_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_40_layer, 40,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_40_chain,
  NULL, &conv2d_41_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_39_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_38_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_39_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_39_layer, 39,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_39_chain,
  NULL, &conv2d_40_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(14, 14), 
  .pool_stride = AI_SHAPE_2D_INIT(14, 14), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_38_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_37_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_38_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_38_weights, &conv2d_38_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_38_scratch0, &conv2d_38_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_38_layer, 38,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_sssa8_ch,
  &conv2d_38_chain,
  NULL, &pool_39_layer, AI_STATIC, 
  .groups = 120, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 2, 2, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_37_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_36_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_37_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_37_weights, &conv2d_37_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_37_scratch0, &conv2d_37_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_37_layer, 37,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_37_chain,
  NULL, &conv2d_38_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_36_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_26_output, &conv2d_35_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_36_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_36_layer, 36,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_36_chain,
  NULL, &conv2d_37_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_35_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_34_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_35_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_35_weights, &conv2d_35_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_35_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_35_layer, 35,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_35_chain,
  NULL, &eltwise_36_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_34_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_28_output, &nl_33_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_34_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_34_layer, 34,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_34_chain,
  NULL, &conv2d_35_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_33_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -126, -124, -122, -121, -119, -117, -115, -113, -111, -109, -107, -106, -104, -102, -100, -98, -96, -94, -93, -91, -89, -87, -85, -83, -81, -79, -78, -76, -74, -72, -70, -68, -66, -65, -63, -61, -59, -57, -55, -53, -52, -50, -48, -46, -44, -42, -40, -38, -37, -35, -33, -31, -29, -27, -25, -24, -22, -20, -18, -16, -14, -12, -10, -9, -7, -5, -3, -1, 1, 3, 4, 6, 8, 10, 12, 14, 16, 18, 19, 21, 23, 25, 27, 29, 31, 32, 34, 36, 38, 40, 42, 44, 46, 47, 49, 51, 53, 55, 57, 59, 60, 62, 64, 66, 68, 70, 72, 73, 75, 77, 79, 81, 83, 85, 87, 88, 90, 92, 94, 96, 98, 100, 101, 103, 105, 107, 109, 111, 113, 115, 116, 118, 120, 122, 124, 126, 127 };
AI_ARRAY_OBJ_DECLARE(
    nl_33_nl_params, AI_ARRAY_FORMAT_S8,
    nl_33_nl_params_data, nl_33_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_33_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_32_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_33_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_33_layer, 33,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_33_chain,
  NULL, &eltwise_34_layer, AI_STATIC, 
  .nl_params = &nl_33_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_32_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_31_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_32_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_32_layer, 32,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_32_chain,
  NULL, &nl_33_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_31_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_30_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_31_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_31_weights, &conv2d_31_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_31_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_31_layer, 31,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_31_chain,
  NULL, &eltwise_32_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_30_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_29_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_30_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_30_weights, &conv2d_30_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_30_scratch0, &conv2d_30_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_30_layer, 30,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_30_chain,
  NULL, &conv2d_31_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_29_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_28_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_29_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_29_layer, 29,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_29_chain,
  NULL, &conv2d_30_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(14, 14), 
  .pool_stride = AI_SHAPE_2D_INIT(14, 14), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_28_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_27_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_28_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_28_weights, &conv2d_28_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_28_scratch0, &conv2d_28_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_28_layer, 28,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_sssa8_ch,
  &conv2d_28_chain,
  NULL, &pool_29_layer, AI_STATIC, 
  .groups = 120, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 2, 2, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_27_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_26_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_27_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_27_weights, &conv2d_27_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_27_scratch0, &conv2d_27_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_27_layer, 27,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_27_chain,
  NULL, &conv2d_28_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_26_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_25_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_26_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_26_weights, &conv2d_26_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_26_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_26_layer, 26,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_26_chain,
  NULL, &conv2d_27_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_25_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_19_output, &nl_24_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_25_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_25_layer, 25,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_25_chain,
  NULL, &conv2d_26_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)


AI_STATIC_CONST ai_i8 nl_24_nl_params_data[] = { -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -125, -124, -123, -121, -120, -119, -117, -116, -115, -113, -112, -111, -109, -108, -107, -105, -104, -102, -101, -100, -98, -97, -96, -94, -93, -92, -90, -89, -88, -86, -85, -84, -82, -81, -80, -78, -77, -76, -74, -73, -72, -70, -69, -68, -66, -65, -64, -62, -61, -60, -58, -57, -56, -54, -53, -51, -50, -49, -47, -46, -45, -43, -42, -41, -39, -38, -37, -35, -34, -33, -31, -30, -29, -27, -26, -25, -23, -22, -21, -19, -18, -17, -15, -14, -13, -11, -10, -9, -7, -6, -5, -3, -2, 0, 1, 2, 4, 5, 6, 8, 9, 10, 12, 13, 14, 16, 17, 18, 20, 21, 22, 24, 25, 26, 28, 29, 30, 32, 33, 34, 36, 37, 38, 40, 41, 42, 44, 45, 47, 48, 49, 51, 52, 53, 55, 56, 57, 59, 60, 61, 63, 64, 65, 67, 68, 69, 71, 72, 73, 75, 76, 77, 79, 80, 81, 83, 84, 85, 87, 88, 89, 91, 92, 93, 95, 96, 98, 99, 100, 102, 103, 104, 106, 107, 108, 110, 111, 112, 114, 115, 116, 118, 119, 120, 122, 123, 124, 126, 127 };
AI_ARRAY_OBJ_DECLARE(
    nl_24_nl_params, AI_ARRAY_FORMAT_S8,
    nl_24_nl_params_data, nl_24_nl_params_data, 256, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_24_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_23_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_24_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_24_layer, 24,
  NL_TYPE, 0x0, NULL,
  nl, forward_nl_integer,
  &nl_24_chain,
  NULL, &eltwise_25_layer, AI_STATIC, 
  .nl_params = &nl_24_nl_params, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_23_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_22_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_23_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_23_layer, 23,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_23_chain,
  NULL, &nl_24_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_22_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_21_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_22_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_22_weights, &conv2d_22_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_22_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_22_layer, 22,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_22_chain,
  NULL, &eltwise_23_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_21_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_20_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_21_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_21_weights, &conv2d_21_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_21_scratch0, &conv2d_21_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_21_layer, 21,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_21_chain,
  NULL, &conv2d_22_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_20_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_19_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_20_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_20_layer, 20,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_20_chain,
  NULL, &conv2d_21_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(14, 14), 
  .pool_stride = AI_SHAPE_2D_INIT(14, 14), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_19_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_18_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_19_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_19_weights, &conv2d_19_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_19_scratch0, &conv2d_19_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_19_layer, 19,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_sssa8_ch,
  &conv2d_19_chain,
  NULL, &pool_20_layer, AI_STATIC, 
  .groups = 48, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 3, 3), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_18_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_17_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_18_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_18_weights, &conv2d_18_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_18_scratch0, &conv2d_18_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_18_layer, 18,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_18_chain,
  NULL, &conv2d_19_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_17_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_13_output, &conv2d_16_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_17_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_17_layer, 17,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_17_chain,
  NULL, &conv2d_18_layer, AI_STATIC, 
  .operation = ai_sum_f32, 
  .buffer_operation = ai_sum_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_16_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_15_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_16_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_16_weights, &conv2d_16_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_16_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_16_layer, 16,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_16_chain,
  NULL, &eltwise_17_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_15_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_15_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_15_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_15_weights, &conv2d_15_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_15_scratch0, &conv2d_15_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_15_layer, 15,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_3x3_sssa8_ch,
  &conv2d_15_chain,
  NULL, &conv2d_16_layer, AI_STATIC, 
  .groups = 48, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_15_pad_before_value_data[] = { -128 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_15_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_15_pad_before_value_data, conv2d_15_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_15_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_14_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_15_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_15_pad_before_layer, 15,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_15_pad_before_chain,
  NULL, &conv2d_15_layer, AI_STATIC, 
  .value = &conv2d_15_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_14_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_13_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_14_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_14_weights, &conv2d_14_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_14_scratch0, &conv2d_14_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_14_layer, 14,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_14_chain,
  NULL, &conv2d_15_pad_before_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_13_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_12_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_13_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_13_weights, &conv2d_13_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_13_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_13_layer, 13,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_13_chain,
  NULL, &conv2d_14_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_12_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_12_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_12_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_12_weights, &conv2d_12_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_12_scratch0, &conv2d_12_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_12_layer, 12,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_3x3_sssa8_ch,
  &conv2d_12_chain,
  NULL, &conv2d_13_layer, AI_STATIC, 
  .groups = 40, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_12_pad_before_value_data[] = { -128 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_12_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_12_pad_before_value_data, conv2d_12_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_12_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_11_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_12_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_12_pad_before_layer, 12,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_12_pad_before_chain,
  NULL, &conv2d_12_layer, AI_STATIC, 
  .value = &conv2d_12_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 0, 0, 2, 2), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_11_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_11_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_11_weights, &conv2d_11_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_11_scratch0, &conv2d_11_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_11_layer, 11,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_11_chain,
  NULL, &conv2d_12_pad_before_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_10_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_9_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_10_weights, &conv2d_10_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_10_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_10_layer, 10,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_10_chain,
  NULL, &conv2d_11_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_9_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_3_output, &eltwise_7_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_9_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_9_layer, 9,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_9_chain,
  NULL, &conv2d_10_layer, AI_STATIC, 
  .operation = ai_mul_f32, 
  .buffer_operation = ai_mul_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_7_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_6_output, &mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_7_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_7_layer, 7,
  ELTWISE_INTEGER_TYPE, 0x0, NULL,
  eltwise_integer, forward_eltwise_integer_INT8,
  &eltwise_7_chain,
  NULL, &eltwise_9_layer, AI_STATIC, 
  .operation = ai_min_f32, 
  .buffer_operation = ai_min_buffer_INT8, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_6_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_5_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_6_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_6_weights, &conv2d_6_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_6_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_6_layer, 6,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_6_chain,
  NULL, &eltwise_7_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_5_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_4_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_5_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_5_weights, &conv2d_5_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_5_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_5_layer, 5,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_5_chain,
  NULL, &conv2d_6_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_4_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_4_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_4_layer, 4,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &pool_4_chain,
  NULL, &conv2d_5_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(56, 56), 
  .pool_stride = AI_SHAPE_2D_INIT(56, 56), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_3_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_3_pad_before_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_3_weights, &conv2d_3_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_3_scratch0, &conv2d_3_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_3_layer, 3,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_3x3_sssa8_ch,
  &conv2d_3_chain,
  NULL, &pool_4_layer, AI_STATIC, 
  .groups = 8, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


AI_STATIC_CONST ai_i8 conv2d_3_pad_before_value_data[] = { -128 };
AI_ARRAY_OBJ_DECLARE(
    conv2d_3_pad_before_value, AI_ARRAY_FORMAT_S8,
    conv2d_3_pad_before_value_data, conv2d_3_pad_before_value_data, 1, AI_STATIC_CONST)
AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_3_pad_before_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_3_pad_before_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_3_pad_before_layer, 3,
  PAD_TYPE, 0x0, NULL,
  pad, forward_pad,
  &conv2d_3_pad_before_chain,
  NULL, &conv2d_3_layer, AI_STATIC, 
  .value = &conv2d_3_pad_before_value, 
  .mode = AI_PAD_CONSTANT, 
  .pads = AI_SHAPE_INIT(4, 0, 0, 2, 2), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_2_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_2_weights, &conv2d_2_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_2_scratch0, &conv2d_2_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_2_layer, 2,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_pw_sssa8_ch,
  &conv2d_2_chain,
  NULL, &conv2d_3_pad_before_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_1_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conversion_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_1_weights, &conv2d_1_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_1_scratch0, &conv2d_1_scratch1)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_1_layer, 1,
  OPTIMIZED_CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_rgb_sssa8_ch,
  &conv2d_1_chain,
  NULL, &conv2d_2_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conversion_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &serving_default_input_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conversion_0_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conversion_0_layer, 0,
  NL_TYPE, 0x0, NULL,
  nl, node_convert_integer,
  &conversion_0_chain,
  NULL, &conv2d_1_layer, AI_STATIC, 
)


#if (AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 687248, 1, 1),
    687248, NULL, NULL),
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 156600, 1, 1),
    156600, NULL, NULL),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_IN_NUM, &serving_default_input_10_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_OUT_NUM, &conversion_102_output),
  &conversion_0_layer, 0, NULL)

#else

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 687248, 1, 1),
      687248, NULL, NULL)
  ),
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 156600, 1, 1),
      156600, NULL, NULL)
  ),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_IN_NUM, &serving_default_input_10_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_OUT_NUM, &conversion_102_output),
  &conversion_0_layer, 0, NULL)

#endif	/*(AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)*/


/******************************************************************************/
AI_DECLARE_STATIC
ai_bool network_configure_activations(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  if (ai_platform_get_activations_map(g_network_activations_map, 1, params)) {
    /* Updating activations (byte) offsets */
    
    serving_default_input_10_output_array.data = AI_PTR(g_network_activations_map[0] + 5420);
    serving_default_input_10_output_array.data_start = AI_PTR(g_network_activations_map[0] + 5420);
    
    conversion_0_output_array.data = AI_PTR(g_network_activations_map[0] + 5416);
    conversion_0_output_array.data_start = AI_PTR(g_network_activations_map[0] + 5416);
    
    conv2d_1_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 155948);
    conv2d_1_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 155948);
    
    conv2d_1_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 4512);
    conv2d_1_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 4512);
    
    conv2d_1_output_array.data = AI_PTR(g_network_activations_map[0] + 4512);
    conv2d_1_output_array.data_start = AI_PTR(g_network_activations_map[0] + 4512);
    
    conv2d_2_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 104864);
    conv2d_2_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 104864);
    
    conv2d_2_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 3616);
    conv2d_2_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 3616);
    
    conv2d_2_output_array.data = AI_PTR(g_network_activations_map[0] + 3616);
    conv2d_2_output_array.data_start = AI_PTR(g_network_activations_map[0] + 3616);
    
    conv2d_3_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_3_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_3_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 103968);
    conv2d_3_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 103968);
    
    conv2d_3_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 104268);
    conv2d_3_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 104268);
    
    conv2d_3_output_array.data = AI_PTR(g_network_activations_map[0] + 129356);
    conv2d_3_output_array.data_start = AI_PTR(g_network_activations_map[0] + 129356);
    
    pool_4_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_4_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_5_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 8);
    conv2d_5_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 8);
    
    conv2d_5_output_array.data = AI_PTR(g_network_activations_map[0] + 60);
    conv2d_5_output_array.data_start = AI_PTR(g_network_activations_map[0] + 60);
    
    conv2d_6_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 64);
    conv2d_6_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 64);
    
    conv2d_6_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_6_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_7_output_array.data = AI_PTR(g_network_activations_map[0] + 8);
    eltwise_7_output_array.data_start = AI_PTR(g_network_activations_map[0] + 8);
    
    eltwise_9_output_array.data = AI_PTR(g_network_activations_map[0] + 16);
    eltwise_9_output_array.data_start = AI_PTR(g_network_activations_map[0] + 16);
    
    conv2d_10_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 25104);
    conv2d_10_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 25104);
    
    conv2d_10_output_array.data = AI_PTR(g_network_activations_map[0] + 131512);
    conv2d_10_output_array.data_start = AI_PTR(g_network_activations_map[0] + 131512);
    
    conv2d_11_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_11_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_11_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 28920);
    conv2d_11_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 28920);
    
    conv2d_11_output_array.data = AI_PTR(g_network_activations_map[0] + 28920);
    conv2d_11_output_array.data_start = AI_PTR(g_network_activations_map[0] + 28920);
    
    conv2d_12_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 19800);
    conv2d_12_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 19800);
    
    conv2d_12_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_12_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_12_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 18680);
    conv2d_12_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 18680);
    
    conv2d_12_output_array.data = AI_PTR(g_network_activations_map[0] + 18680);
    conv2d_12_output_array.data_start = AI_PTR(g_network_activations_map[0] + 18680);
    
    conv2d_13_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_13_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_13_output_array.data = AI_PTR(g_network_activations_map[0] + 320);
    conv2d_13_output_array.data_start = AI_PTR(g_network_activations_map[0] + 320);
    
    conv2d_14_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 12864);
    conv2d_14_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 12864);
    
    conv2d_14_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 13408);
    conv2d_14_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 13408);
    
    conv2d_14_output_array.data = AI_PTR(g_network_activations_map[0] + 51040);
    conv2d_14_output_array.data_start = AI_PTR(g_network_activations_map[0] + 51040);
    
    conv2d_15_pad_before_output_array.data = AI_PTR(g_network_activations_map[0] + 88672);
    conv2d_15_pad_before_output_array.data_start = AI_PTR(g_network_activations_map[0] + 88672);
    
    conv2d_15_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 12864);
    conv2d_15_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 12864);
    
    conv2d_15_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 14644);
    conv2d_15_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 14644);
    
    conv2d_15_output_array.data = AI_PTR(g_network_activations_map[0] + 87328);
    conv2d_15_output_array.data_start = AI_PTR(g_network_activations_map[0] + 87328);
    
    conv2d_16_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 12864);
    conv2d_16_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 12864);
    
    conv2d_16_output_array.data = AI_PTR(g_network_activations_map[0] + 13216);
    conv2d_16_output_array.data_start = AI_PTR(g_network_activations_map[0] + 13216);
    
    eltwise_17_output_array.data = AI_PTR(g_network_activations_map[0] + 25760);
    eltwise_17_output_array.data_start = AI_PTR(g_network_activations_map[0] + 25760);
    
    conv2d_18_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_18_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_18_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 38304);
    conv2d_18_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 38304);
    
    conv2d_18_output_array.data = AI_PTR(g_network_activations_map[0] + 75936);
    conv2d_18_output_array.data_start = AI_PTR(g_network_activations_map[0] + 75936);
    
    conv2d_19_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_19_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_19_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 4084);
    conv2d_19_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 4084);
    
    conv2d_19_output_array.data = AI_PTR(g_network_activations_map[0] + 13492);
    conv2d_19_output_array.data_start = AI_PTR(g_network_activations_map[0] + 13492);
    
    pool_20_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_20_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_21_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 48);
    conv2d_21_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 48);
    
    conv2d_21_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 360);
    conv2d_21_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 360);
    
    conv2d_21_output_array.data = AI_PTR(g_network_activations_map[0] + 372);
    conv2d_21_output_array.data_start = AI_PTR(g_network_activations_map[0] + 372);
    
    conv2d_22_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 384);
    conv2d_22_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 384);
    
    conv2d_22_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_22_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_23_output_array.data = AI_PTR(g_network_activations_map[0] + 48);
    eltwise_23_output_array.data_start = AI_PTR(g_network_activations_map[0] + 48);
    
    nl_24_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_24_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_25_output_array.data = AI_PTR(g_network_activations_map[0] + 48);
    eltwise_25_output_array.data_start = AI_PTR(g_network_activations_map[0] + 48);
    
    conv2d_26_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 9456);
    conv2d_26_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 9456);
    
    conv2d_26_output_array.data = AI_PTR(g_network_activations_map[0] + 9888);
    conv2d_26_output_array.data_start = AI_PTR(g_network_activations_map[0] + 9888);
    
    conv2d_27_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_27_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_27_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 14592);
    conv2d_27_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 14592);
    
    conv2d_27_output_array.data = AI_PTR(g_network_activations_map[0] + 38112);
    conv2d_27_output_array.data_start = AI_PTR(g_network_activations_map[0] + 38112);
    
    conv2d_28_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 14592);
    conv2d_28_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 14592);
    
    conv2d_28_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 61632);
    conv2d_28_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 61632);
    
    conv2d_28_output_array.data = AI_PTR(g_network_activations_map[0] + 85152);
    conv2d_28_output_array.data_start = AI_PTR(g_network_activations_map[0] + 85152);
    
    pool_29_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_29_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_30_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 120);
    conv2d_30_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 120);
    
    conv2d_30_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 900);
    conv2d_30_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 900);
    
    conv2d_30_output_array.data = AI_PTR(g_network_activations_map[0] + 932);
    conv2d_30_output_array.data_start = AI_PTR(g_network_activations_map[0] + 932);
    
    conv2d_31_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 964);
    conv2d_31_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 964);
    
    conv2d_31_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_31_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_32_output_array.data = AI_PTR(g_network_activations_map[0] + 120);
    eltwise_32_output_array.data_start = AI_PTR(g_network_activations_map[0] + 120);
    
    nl_33_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_33_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_34_output_array.data = AI_PTR(g_network_activations_map[0] + 14592);
    eltwise_34_output_array.data_start = AI_PTR(g_network_activations_map[0] + 14592);
    
    conv2d_35_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_35_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_35_output_array.data = AI_PTR(g_network_activations_map[0] + 720);
    conv2d_35_output_array.data_start = AI_PTR(g_network_activations_map[0] + 720);
    
    eltwise_36_output_array.data = AI_PTR(g_network_activations_map[0] + 14592);
    eltwise_36_output_array.data_start = AI_PTR(g_network_activations_map[0] + 14592);
    
    conv2d_37_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_37_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_37_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 19296);
    conv2d_37_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 19296);
    
    conv2d_37_output_array.data = AI_PTR(g_network_activations_map[0] + 42816);
    conv2d_37_output_array.data_start = AI_PTR(g_network_activations_map[0] + 42816);
    
    conv2d_38_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_38_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_38_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 19296);
    conv2d_38_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 19296);
    
    conv2d_38_output_array.data = AI_PTR(g_network_activations_map[0] + 66336);
    conv2d_38_output_array.data_start = AI_PTR(g_network_activations_map[0] + 66336);
    
    pool_39_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_39_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_40_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 120);
    conv2d_40_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 120);
    
    conv2d_40_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 900);
    conv2d_40_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 900);
    
    conv2d_40_output_array.data = AI_PTR(g_network_activations_map[0] + 932);
    conv2d_40_output_array.data_start = AI_PTR(g_network_activations_map[0] + 932);
    
    conv2d_41_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 964);
    conv2d_41_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 964);
    
    conv2d_41_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_41_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_42_output_array.data = AI_PTR(g_network_activations_map[0] + 120);
    eltwise_42_output_array.data_start = AI_PTR(g_network_activations_map[0] + 120);
    
    nl_43_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_43_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_44_output_array.data = AI_PTR(g_network_activations_map[0] + 19296);
    eltwise_44_output_array.data_start = AI_PTR(g_network_activations_map[0] + 19296);
    
    conv2d_45_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_45_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_45_output_array.data = AI_PTR(g_network_activations_map[0] + 720);
    conv2d_45_output_array.data_start = AI_PTR(g_network_activations_map[0] + 720);
    
    eltwise_46_output_array.data = AI_PTR(g_network_activations_map[0] + 5424);
    eltwise_46_output_array.data_start = AI_PTR(g_network_activations_map[0] + 5424);
    
    conv2d_47_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_47_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_47_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 10128);
    conv2d_47_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 10128);
    
    conv2d_47_output_array.data = AI_PTR(g_network_activations_map[0] + 22672);
    conv2d_47_output_array.data_start = AI_PTR(g_network_activations_map[0] + 22672);
    
    conv2d_48_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 10128);
    conv2d_48_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 10128);
    
    conv2d_48_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 35216);
    conv2d_48_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 35216);
    
    conv2d_48_output_array.data = AI_PTR(g_network_activations_map[0] + 47760);
    conv2d_48_output_array.data_start = AI_PTR(g_network_activations_map[0] + 47760);
    
    pool_49_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_49_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_50_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 64);
    conv2d_50_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 64);
    
    conv2d_50_output_array.data = AI_PTR(g_network_activations_map[0] + 480);
    conv2d_50_output_array.data_start = AI_PTR(g_network_activations_map[0] + 480);
    
    conv2d_51_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 496);
    conv2d_51_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 496);
    
    conv2d_51_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_51_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_52_output_array.data = AI_PTR(g_network_activations_map[0] + 64);
    eltwise_52_output_array.data_start = AI_PTR(g_network_activations_map[0] + 64);
    
    nl_53_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_53_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_54_output_array.data = AI_PTR(g_network_activations_map[0] + 10128);
    eltwise_54_output_array.data_start = AI_PTR(g_network_activations_map[0] + 10128);
    
    conv2d_55_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_55_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_55_output_array.data = AI_PTR(g_network_activations_map[0] + 496);
    conv2d_55_output_array.data_start = AI_PTR(g_network_activations_map[0] + 496);
    
    eltwise_56_output_array.data = AI_PTR(g_network_activations_map[0] + 10128);
    eltwise_56_output_array.data_start = AI_PTR(g_network_activations_map[0] + 10128);
    
    conv2d_57_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_57_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_57_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 14832);
    conv2d_57_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 14832);
    
    conv2d_57_output_array.data = AI_PTR(g_network_activations_map[0] + 28944);
    conv2d_57_output_array.data_start = AI_PTR(g_network_activations_map[0] + 28944);
    
    conv2d_58_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_58_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_58_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 14832);
    conv2d_58_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 14832);
    
    conv2d_58_output_array.data = AI_PTR(g_network_activations_map[0] + 43056);
    conv2d_58_output_array.data_start = AI_PTR(g_network_activations_map[0] + 43056);
    
    pool_59_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_59_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_60_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 72);
    conv2d_60_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 72);
    
    conv2d_60_output_array.data = AI_PTR(g_network_activations_map[0] + 540);
    conv2d_60_output_array.data_start = AI_PTR(g_network_activations_map[0] + 540);
    
    conv2d_61_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 560);
    conv2d_61_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 560);
    
    conv2d_61_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_61_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_62_output_array.data = AI_PTR(g_network_activations_map[0] + 72);
    eltwise_62_output_array.data_start = AI_PTR(g_network_activations_map[0] + 72);
    
    nl_63_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_63_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_64_output_array.data = AI_PTR(g_network_activations_map[0] + 14832);
    eltwise_64_output_array.data_start = AI_PTR(g_network_activations_map[0] + 14832);
    
    conv2d_65_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_65_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_65_output_array.data = AI_PTR(g_network_activations_map[0] + 528);
    conv2d_65_output_array.data_start = AI_PTR(g_network_activations_map[0] + 528);
    
    eltwise_66_output_array.data = AI_PTR(g_network_activations_map[0] + 5232);
    eltwise_66_output_array.data_start = AI_PTR(g_network_activations_map[0] + 5232);
    
    conv2d_67_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_67_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_67_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 9936);
    conv2d_67_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 9936);
    
    conv2d_67_output_array.data = AI_PTR(g_network_activations_map[0] + 38160);
    conv2d_67_output_array.data_start = AI_PTR(g_network_activations_map[0] + 38160);
    
    conv2d_68_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_68_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_68_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 12244);
    conv2d_68_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 12244);
    
    conv2d_68_output_array.data = AI_PTR(g_network_activations_map[0] + 19300);
    conv2d_68_output_array.data_start = AI_PTR(g_network_activations_map[0] + 19300);
    
    pool_69_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_69_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_70_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 144);
    conv2d_70_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 144);
    
    conv2d_70_output_array.data = AI_PTR(g_network_activations_map[0] + 1080);
    conv2d_70_output_array.data_start = AI_PTR(g_network_activations_map[0] + 1080);
    
    conv2d_71_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 1116);
    conv2d_71_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 1116);
    
    conv2d_71_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_71_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_72_output_array.data = AI_PTR(g_network_activations_map[0] + 144);
    eltwise_72_output_array.data_start = AI_PTR(g_network_activations_map[0] + 144);
    
    nl_73_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_73_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_74_output_array.data = AI_PTR(g_network_activations_map[0] + 144);
    eltwise_74_output_array.data_start = AI_PTR(g_network_activations_map[0] + 144);
    
    conv2d_75_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 7200);
    conv2d_75_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 7200);
    
    conv2d_75_output_array.data = AI_PTR(g_network_activations_map[0] + 8256);
    conv2d_75_output_array.data_start = AI_PTR(g_network_activations_map[0] + 8256);
    
    conv2d_76_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_76_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_76_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 10608);
    conv2d_76_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 10608);
    
    conv2d_76_output_array.data = AI_PTR(g_network_activations_map[0] + 24720);
    conv2d_76_output_array.data_start = AI_PTR(g_network_activations_map[0] + 24720);
    
    conv2d_77_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 38832);
    conv2d_77_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 38832);
    
    conv2d_77_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 10608);
    conv2d_77_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 10608);
    
    conv2d_77_output_array.data = AI_PTR(g_network_activations_map[0] + 63316);
    conv2d_77_output_array.data_start = AI_PTR(g_network_activations_map[0] + 63316);
    
    pool_78_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_78_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_79_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 288);
    conv2d_79_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 288);
    
    conv2d_79_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 2160);
    conv2d_79_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 2160);
    
    conv2d_79_output_array.data = AI_PTR(g_network_activations_map[0] + 2232);
    conv2d_79_output_array.data_start = AI_PTR(g_network_activations_map[0] + 2232);
    
    conv2d_80_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 2304);
    conv2d_80_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 2304);
    
    conv2d_80_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_80_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_81_output_array.data = AI_PTR(g_network_activations_map[0] + 288);
    eltwise_81_output_array.data_start = AI_PTR(g_network_activations_map[0] + 288);
    
    nl_82_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_82_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_83_output_array.data = AI_PTR(g_network_activations_map[0] + 10608);
    eltwise_83_output_array.data_start = AI_PTR(g_network_activations_map[0] + 10608);
    
    conv2d_84_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_84_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_84_output_array.data = AI_PTR(g_network_activations_map[0] + 1632);
    conv2d_84_output_array.data_start = AI_PTR(g_network_activations_map[0] + 1632);
    
    eltwise_85_output_array.data = AI_PTR(g_network_activations_map[0] + 3984);
    eltwise_85_output_array.data_start = AI_PTR(g_network_activations_map[0] + 3984);
    
    conv2d_86_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_86_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_86_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 6336);
    conv2d_86_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 6336);
    
    conv2d_86_output_array.data = AI_PTR(g_network_activations_map[0] + 20448);
    conv2d_86_output_array.data_start = AI_PTR(g_network_activations_map[0] + 20448);
    
    conv2d_87_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 34560);
    conv2d_87_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 34560);
    
    conv2d_87_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 6336);
    conv2d_87_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 6336);
    
    conv2d_87_output_array.data = AI_PTR(g_network_activations_map[0] + 59044);
    conv2d_87_output_array.data_start = AI_PTR(g_network_activations_map[0] + 59044);
    
    pool_88_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_88_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_89_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 288);
    conv2d_89_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 288);
    
    conv2d_89_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 2160);
    conv2d_89_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 2160);
    
    conv2d_89_output_array.data = AI_PTR(g_network_activations_map[0] + 2232);
    conv2d_89_output_array.data_start = AI_PTR(g_network_activations_map[0] + 2232);
    
    conv2d_90_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 6336);
    conv2d_90_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 6336);
    
    conv2d_90_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_90_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_91_output_array.data = AI_PTR(g_network_activations_map[0] + 288);
    eltwise_91_output_array.data_start = AI_PTR(g_network_activations_map[0] + 288);
    
    nl_92_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_92_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    eltwise_93_output_array.data = AI_PTR(g_network_activations_map[0] + 6336);
    eltwise_93_output_array.data_start = AI_PTR(g_network_activations_map[0] + 6336);
    
    conv2d_94_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_94_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_94_output_array.data = AI_PTR(g_network_activations_map[0] + 1632);
    conv2d_94_output_array.data_start = AI_PTR(g_network_activations_map[0] + 1632);
    
    eltwise_95_output_array.data = AI_PTR(g_network_activations_map[0] + 6336);
    eltwise_95_output_array.data_start = AI_PTR(g_network_activations_map[0] + 6336);
    
    conv2d_96_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_96_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_96_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 8688);
    conv2d_96_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 8688);
    
    conv2d_96_output_array.data = AI_PTR(g_network_activations_map[0] + 22800);
    conv2d_96_output_array.data_start = AI_PTR(g_network_activations_map[0] + 22800);
    
    pool_97_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    pool_97_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_98_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 288);
    conv2d_98_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 288);
    
    conv2d_98_scratch1_array.data = AI_PTR(g_network_activations_map[0] + 14240);
    conv2d_98_scratch1_array.data_start = AI_PTR(g_network_activations_map[0] + 14240);
    
    conv2d_98_output_array.data = AI_PTR(g_network_activations_map[0] + 15520);
    conv2d_98_output_array.data_start = AI_PTR(g_network_activations_map[0] + 15520);
    
    conv2d_99_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conv2d_99_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    conv2d_99_output_array.data = AI_PTR(g_network_activations_map[0] + 5512);
    conv2d_99_output_array.data_start = AI_PTR(g_network_activations_map[0] + 5512);
    
    nl_101_scratch0_array.data = AI_PTR(g_network_activations_map[0] + 0);
    nl_101_scratch0_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    nl_101_output_array.data = AI_PTR(g_network_activations_map[0] + 156);
    nl_101_output_array.data_start = AI_PTR(g_network_activations_map[0] + 156);
    
    conversion_102_output_array.data = AI_PTR(g_network_activations_map[0] + 0);
    conversion_102_output_array.data_start = AI_PTR(g_network_activations_map[0] + 0);
    
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_ACTIVATIONS);
  return false;
}



/******************************************************************************/
AI_DECLARE_STATIC
ai_bool network_configure_weights(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  if (ai_platform_get_weights_map(g_network_weights_map, 1, params)) {
    /* Updating weights (byte) offsets */
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array.data = AI_PTR(g_network_weights_map[0] + 0);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y8_array.data_start = AI_PTR(g_network_weights_map[0] + 0);
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array.data = AI_PTR(g_network_weights_map[0] + 4);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y7_array.data_start = AI_PTR(g_network_weights_map[0] + 4);
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array.data = AI_PTR(g_network_weights_map[0] + 8);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y6_array.data_start = AI_PTR(g_network_weights_map[0] + 8);
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array.data = AI_PTR(g_network_weights_map[0] + 12);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y5_array.data_start = AI_PTR(g_network_weights_map[0] + 12);
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array.data = AI_PTR(g_network_weights_map[0] + 16);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y4_array.data_start = AI_PTR(g_network_weights_map[0] + 16);
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array.data = AI_PTR(g_network_weights_map[0] + 20);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y3_array.data_start = AI_PTR(g_network_weights_map[0] + 20);
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array.data = AI_PTR(g_network_weights_map[0] + 24);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y2_array.data_start = AI_PTR(g_network_weights_map[0] + 24);
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array.data = AI_PTR(g_network_weights_map[0] + 28);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y1_array.data_start = AI_PTR(g_network_weights_map[0] + 28);
    
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array.format |= AI_FMT_FLAG_CONST;
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array.data = AI_PTR(g_network_weights_map[0] + 32);
    mobilenet_v3_alpha_0_5_conv2d_11_clip_by_value_Minimum_y_array.data_start = AI_PTR(g_network_weights_map[0] + 32);
    
    conv2d_1_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_1_weights_array.data = AI_PTR(g_network_weights_map[0] + 36);
    conv2d_1_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 36);
    
    conv2d_1_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_1_bias_array.data = AI_PTR(g_network_weights_map[0] + 252);
    conv2d_1_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 252);
    
    conv2d_2_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_2_weights_array.data = AI_PTR(g_network_weights_map[0] + 284);
    conv2d_2_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 284);
    
    conv2d_2_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_2_bias_array.data = AI_PTR(g_network_weights_map[0] + 348);
    conv2d_2_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 348);
    
    conv2d_3_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_3_weights_array.data = AI_PTR(g_network_weights_map[0] + 380);
    conv2d_3_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 380);
    
    conv2d_3_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_3_bias_array.data = AI_PTR(g_network_weights_map[0] + 452);
    conv2d_3_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 452);
    
    conv2d_5_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_5_weights_array.data = AI_PTR(g_network_weights_map[0] + 484);
    conv2d_5_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 484);
    
    conv2d_5_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_5_bias_array.data = AI_PTR(g_network_weights_map[0] + 500);
    conv2d_5_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 500);
    
    conv2d_6_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_6_weights_array.data = AI_PTR(g_network_weights_map[0] + 508);
    conv2d_6_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 508);
    
    conv2d_6_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_6_bias_array.data = AI_PTR(g_network_weights_map[0] + 524);
    conv2d_6_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 524);
    
    conv2d_10_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_10_weights_array.data = AI_PTR(g_network_weights_map[0] + 556);
    conv2d_10_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 556);
    
    conv2d_10_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_10_bias_array.data = AI_PTR(g_network_weights_map[0] + 620);
    conv2d_10_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 620);
    
    conv2d_11_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_11_weights_array.data = AI_PTR(g_network_weights_map[0] + 652);
    conv2d_11_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 652);
    
    conv2d_11_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_11_bias_array.data = AI_PTR(g_network_weights_map[0] + 972);
    conv2d_11_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 972);
    
    conv2d_12_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_12_weights_array.data = AI_PTR(g_network_weights_map[0] + 1132);
    conv2d_12_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 1132);
    
    conv2d_12_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_12_bias_array.data = AI_PTR(g_network_weights_map[0] + 1492);
    conv2d_12_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 1492);
    
    conv2d_13_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_13_weights_array.data = AI_PTR(g_network_weights_map[0] + 1652);
    conv2d_13_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 1652);
    
    conv2d_13_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_13_bias_array.data = AI_PTR(g_network_weights_map[0] + 2292);
    conv2d_13_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 2292);
    
    conv2d_14_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_14_weights_array.data = AI_PTR(g_network_weights_map[0] + 2356);
    conv2d_14_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 2356);
    
    conv2d_14_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_14_bias_array.data = AI_PTR(g_network_weights_map[0] + 3124);
    conv2d_14_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 3124);
    
    conv2d_15_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_15_weights_array.data = AI_PTR(g_network_weights_map[0] + 3316);
    conv2d_15_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 3316);
    
    conv2d_15_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_15_bias_array.data = AI_PTR(g_network_weights_map[0] + 3748);
    conv2d_15_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 3748);
    
    conv2d_16_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_16_weights_array.data = AI_PTR(g_network_weights_map[0] + 3940);
    conv2d_16_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 3940);
    
    conv2d_16_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_16_bias_array.data = AI_PTR(g_network_weights_map[0] + 4708);
    conv2d_16_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 4708);
    
    conv2d_18_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_18_weights_array.data = AI_PTR(g_network_weights_map[0] + 4772);
    conv2d_18_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 4772);
    
    conv2d_18_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_18_bias_array.data = AI_PTR(g_network_weights_map[0] + 5540);
    conv2d_18_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 5540);
    
    conv2d_19_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_19_weights_array.data = AI_PTR(g_network_weights_map[0] + 5732);
    conv2d_19_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 5732);
    
    conv2d_19_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_19_bias_array.data = AI_PTR(g_network_weights_map[0] + 6932);
    conv2d_19_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 6932);
    
    conv2d_21_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_21_weights_array.data = AI_PTR(g_network_weights_map[0] + 7124);
    conv2d_21_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 7124);
    
    conv2d_21_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_21_bias_array.data = AI_PTR(g_network_weights_map[0] + 7700);
    conv2d_21_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 7700);
    
    conv2d_22_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_22_weights_array.data = AI_PTR(g_network_weights_map[0] + 7748);
    conv2d_22_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 7748);
    
    conv2d_22_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_22_bias_array.data = AI_PTR(g_network_weights_map[0] + 8324);
    conv2d_22_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 8324);
    
    conv2d_26_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_26_weights_array.data = AI_PTR(g_network_weights_map[0] + 8516);
    conv2d_26_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 8516);
    
    conv2d_26_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_26_bias_array.data = AI_PTR(g_network_weights_map[0] + 9668);
    conv2d_26_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 9668);
    
    conv2d_27_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_27_weights_array.data = AI_PTR(g_network_weights_map[0] + 9764);
    conv2d_27_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 9764);
    
    conv2d_27_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_27_bias_array.data = AI_PTR(g_network_weights_map[0] + 12644);
    conv2d_27_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 12644);
    
    conv2d_28_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_28_weights_array.data = AI_PTR(g_network_weights_map[0] + 13124);
    conv2d_28_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 13124);
    
    conv2d_28_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_28_bias_array.data = AI_PTR(g_network_weights_map[0] + 16124);
    conv2d_28_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 16124);
    
    conv2d_30_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_30_weights_array.data = AI_PTR(g_network_weights_map[0] + 16604);
    conv2d_30_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 16604);
    
    conv2d_30_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_30_bias_array.data = AI_PTR(g_network_weights_map[0] + 20204);
    conv2d_30_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 20204);
    
    conv2d_31_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_31_weights_array.data = AI_PTR(g_network_weights_map[0] + 20324);
    conv2d_31_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 20324);
    
    conv2d_31_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_31_bias_array.data = AI_PTR(g_network_weights_map[0] + 23924);
    conv2d_31_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 23924);
    
    conv2d_35_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_35_weights_array.data = AI_PTR(g_network_weights_map[0] + 24404);
    conv2d_35_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 24404);
    
    conv2d_35_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_35_bias_array.data = AI_PTR(g_network_weights_map[0] + 27284);
    conv2d_35_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 27284);
    
    conv2d_37_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_37_weights_array.data = AI_PTR(g_network_weights_map[0] + 27380);
    conv2d_37_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 27380);
    
    conv2d_37_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_37_bias_array.data = AI_PTR(g_network_weights_map[0] + 30260);
    conv2d_37_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 30260);
    
    conv2d_38_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_38_weights_array.data = AI_PTR(g_network_weights_map[0] + 30740);
    conv2d_38_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 30740);
    
    conv2d_38_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_38_bias_array.data = AI_PTR(g_network_weights_map[0] + 33740);
    conv2d_38_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 33740);
    
    conv2d_40_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_40_weights_array.data = AI_PTR(g_network_weights_map[0] + 34220);
    conv2d_40_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 34220);
    
    conv2d_40_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_40_bias_array.data = AI_PTR(g_network_weights_map[0] + 37820);
    conv2d_40_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 37820);
    
    conv2d_41_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_41_weights_array.data = AI_PTR(g_network_weights_map[0] + 37940);
    conv2d_41_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 37940);
    
    conv2d_41_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_41_bias_array.data = AI_PTR(g_network_weights_map[0] + 41540);
    conv2d_41_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 41540);
    
    conv2d_45_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_45_weights_array.data = AI_PTR(g_network_weights_map[0] + 42020);
    conv2d_45_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 42020);
    
    conv2d_45_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_45_bias_array.data = AI_PTR(g_network_weights_map[0] + 44900);
    conv2d_45_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 44900);
    
    conv2d_47_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_47_weights_array.data = AI_PTR(g_network_weights_map[0] + 44996);
    conv2d_47_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 44996);
    
    conv2d_47_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_47_bias_array.data = AI_PTR(g_network_weights_map[0] + 46532);
    conv2d_47_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 46532);
    
    conv2d_48_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_48_weights_array.data = AI_PTR(g_network_weights_map[0] + 46788);
    conv2d_48_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 46788);
    
    conv2d_48_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_48_bias_array.data = AI_PTR(g_network_weights_map[0] + 48388);
    conv2d_48_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 48388);
    
    conv2d_50_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_50_weights_array.data = AI_PTR(g_network_weights_map[0] + 48644);
    conv2d_50_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 48644);
    
    conv2d_50_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_50_bias_array.data = AI_PTR(g_network_weights_map[0] + 49668);
    conv2d_50_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 49668);
    
    conv2d_51_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_51_weights_array.data = AI_PTR(g_network_weights_map[0] + 49732);
    conv2d_51_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 49732);
    
    conv2d_51_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_51_bias_array.data = AI_PTR(g_network_weights_map[0] + 50756);
    conv2d_51_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 50756);
    
    conv2d_55_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_55_weights_array.data = AI_PTR(g_network_weights_map[0] + 51012);
    conv2d_55_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 51012);
    
    conv2d_55_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_55_bias_array.data = AI_PTR(g_network_weights_map[0] + 52548);
    conv2d_55_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 52548);
    
    conv2d_57_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_57_weights_array.data = AI_PTR(g_network_weights_map[0] + 52644);
    conv2d_57_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 52644);
    
    conv2d_57_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_57_bias_array.data = AI_PTR(g_network_weights_map[0] + 54372);
    conv2d_57_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 54372);
    
    conv2d_58_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_58_weights_array.data = AI_PTR(g_network_weights_map[0] + 54660);
    conv2d_58_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 54660);
    
    conv2d_58_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_58_bias_array.data = AI_PTR(g_network_weights_map[0] + 56460);
    conv2d_58_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 56460);
    
    conv2d_60_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_60_weights_array.data = AI_PTR(g_network_weights_map[0] + 56748);
    conv2d_60_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 56748);
    
    conv2d_60_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_60_bias_array.data = AI_PTR(g_network_weights_map[0] + 58044);
    conv2d_60_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 58044);
    
    conv2d_61_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_61_weights_array.data = AI_PTR(g_network_weights_map[0] + 58116);
    conv2d_61_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 58116);
    
    conv2d_61_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_61_bias_array.data = AI_PTR(g_network_weights_map[0] + 59412);
    conv2d_61_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 59412);
    
    conv2d_65_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_65_weights_array.data = AI_PTR(g_network_weights_map[0] + 59700);
    conv2d_65_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 59700);
    
    conv2d_65_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_65_bias_array.data = AI_PTR(g_network_weights_map[0] + 61428);
    conv2d_65_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 61428);
    
    conv2d_67_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_67_weights_array.data = AI_PTR(g_network_weights_map[0] + 61524);
    conv2d_67_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 61524);
    
    conv2d_67_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_67_bias_array.data = AI_PTR(g_network_weights_map[0] + 64980);
    conv2d_67_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 64980);
    
    conv2d_68_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_68_weights_array.data = AI_PTR(g_network_weights_map[0] + 65556);
    conv2d_68_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 65556);
    
    conv2d_68_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_68_bias_array.data = AI_PTR(g_network_weights_map[0] + 69156);
    conv2d_68_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 69156);
    
    conv2d_70_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_70_weights_array.data = AI_PTR(g_network_weights_map[0] + 69732);
    conv2d_70_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 69732);
    
    conv2d_70_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_70_bias_array.data = AI_PTR(g_network_weights_map[0] + 74916);
    conv2d_70_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 74916);
    
    conv2d_71_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_71_weights_array.data = AI_PTR(g_network_weights_map[0] + 75060);
    conv2d_71_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 75060);
    
    conv2d_71_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_71_bias_array.data = AI_PTR(g_network_weights_map[0] + 80244);
    conv2d_71_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 80244);
    
    conv2d_75_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_75_weights_array.data = AI_PTR(g_network_weights_map[0] + 80820);
    conv2d_75_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 80820);
    
    conv2d_75_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_75_bias_array.data = AI_PTR(g_network_weights_map[0] + 87732);
    conv2d_75_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 87732);
    
    conv2d_76_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_76_weights_array.data = AI_PTR(g_network_weights_map[0] + 87924);
    conv2d_76_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 87924);
    
    conv2d_76_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_76_bias_array.data = AI_PTR(g_network_weights_map[0] + 101748);
    conv2d_76_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 101748);
    
    conv2d_77_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_77_weights_array.data = AI_PTR(g_network_weights_map[0] + 102900);
    conv2d_77_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 102900);
    
    conv2d_77_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_77_bias_array.data = AI_PTR(g_network_weights_map[0] + 110100);
    conv2d_77_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 110100);
    
    conv2d_79_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_79_weights_array.data = AI_PTR(g_network_weights_map[0] + 111252);
    conv2d_79_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 111252);
    
    conv2d_79_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_79_bias_array.data = AI_PTR(g_network_weights_map[0] + 131988);
    conv2d_79_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 131988);
    
    conv2d_80_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_80_weights_array.data = AI_PTR(g_network_weights_map[0] + 132276);
    conv2d_80_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 132276);
    
    conv2d_80_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_80_bias_array.data = AI_PTR(g_network_weights_map[0] + 153012);
    conv2d_80_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 153012);
    
    conv2d_84_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_84_weights_array.data = AI_PTR(g_network_weights_map[0] + 154164);
    conv2d_84_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 154164);
    
    conv2d_84_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_84_bias_array.data = AI_PTR(g_network_weights_map[0] + 167988);
    conv2d_84_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 167988);
    
    conv2d_86_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_86_weights_array.data = AI_PTR(g_network_weights_map[0] + 168180);
    conv2d_86_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 168180);
    
    conv2d_86_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_86_bias_array.data = AI_PTR(g_network_weights_map[0] + 182004);
    conv2d_86_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 182004);
    
    conv2d_87_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_87_weights_array.data = AI_PTR(g_network_weights_map[0] + 183156);
    conv2d_87_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 183156);
    
    conv2d_87_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_87_bias_array.data = AI_PTR(g_network_weights_map[0] + 190356);
    conv2d_87_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 190356);
    
    conv2d_89_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_89_weights_array.data = AI_PTR(g_network_weights_map[0] + 191508);
    conv2d_89_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 191508);
    
    conv2d_89_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_89_bias_array.data = AI_PTR(g_network_weights_map[0] + 212244);
    conv2d_89_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 212244);
    
    conv2d_90_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_90_weights_array.data = AI_PTR(g_network_weights_map[0] + 212532);
    conv2d_90_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 212532);
    
    conv2d_90_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_90_bias_array.data = AI_PTR(g_network_weights_map[0] + 233268);
    conv2d_90_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 233268);
    
    conv2d_94_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_94_weights_array.data = AI_PTR(g_network_weights_map[0] + 234420);
    conv2d_94_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 234420);
    
    conv2d_94_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_94_bias_array.data = AI_PTR(g_network_weights_map[0] + 248244);
    conv2d_94_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 248244);
    
    conv2d_96_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_96_weights_array.data = AI_PTR(g_network_weights_map[0] + 248436);
    conv2d_96_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 248436);
    
    conv2d_96_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_96_bias_array.data = AI_PTR(g_network_weights_map[0] + 262260);
    conv2d_96_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 262260);
    
    conv2d_98_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_98_weights_array.data = AI_PTR(g_network_weights_map[0] + 263412);
    conv2d_98_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 263412);
    
    conv2d_98_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_98_bias_array.data = AI_PTR(g_network_weights_map[0] + 632052);
    conv2d_98_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 632052);
    
    conv2d_99_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_99_weights_array.data = AI_PTR(g_network_weights_map[0] + 637172);
    conv2d_99_weights_array.data_start = AI_PTR(g_network_weights_map[0] + 637172);
    
    conv2d_99_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_99_bias_array.data = AI_PTR(g_network_weights_map[0] + 687092);
    conv2d_99_bias_array.data_start = AI_PTR(g_network_weights_map[0] + 687092);
    
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_WEIGHTS);
  return false;
}


/**  PUBLIC APIs SECTION  *****************************************************/


AI_DEPRECATED
AI_API_ENTRY
ai_bool ai_network_get_info(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_NETWORK_MODEL_NAME,
      .model_signature   = AI_NETWORK_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 20176174,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .params            = AI_STRUCT_INIT,
      .activations       = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x0,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}


AI_API_ENTRY
ai_bool ai_network_get_report(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_NETWORK_MODEL_NAME,
      .model_signature   = AI_NETWORK_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 20176174,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .map_signature     = AI_MAGIC_SIGNATURE,
      .map_weights       = AI_STRUCT_INIT,
      .map_activations   = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x0,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}

AI_API_ENTRY
ai_error ai_network_get_error(ai_handle network)
{
  return ai_platform_network_get_error(network);
}

AI_API_ENTRY
ai_error ai_network_create(
  ai_handle* network, const ai_buffer* network_config)
{
  return ai_platform_network_create(
    network, network_config, 
    &AI_NET_OBJ_INSTANCE,
    AI_TOOLS_API_VERSION_MAJOR, AI_TOOLS_API_VERSION_MINOR, AI_TOOLS_API_VERSION_MICRO);
}

AI_API_ENTRY
ai_error ai_network_create_and_init(
  ai_handle* network, const ai_handle activations[], const ai_handle weights[])
{
    ai_error err;
    ai_network_params params;

    err = ai_network_create(network, AI_NETWORK_DATA_CONFIG);
    if (err.type != AI_ERROR_NONE)
        return err;
    if (ai_network_data_params_get(&params) != true) {
        err = ai_network_get_error(*network);
        return err;
    }
#if defined(AI_NETWORK_DATA_ACTIVATIONS_COUNT)
    if (activations) {
        /* set the addresses of the activations buffers */
        for (int idx=0;idx<params.map_activations.size;idx++)
            AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_activations, idx, activations[idx]);
    }
#endif
#if defined(AI_NETWORK_DATA_WEIGHTS_COUNT)
    if (weights) {
        /* set the addresses of the weight buffers */
        for (int idx=0;idx<params.map_weights.size;idx++)
            AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_weights, idx, weights[idx]);
    }
#endif
    if (ai_network_init(*network, &params) != true) {
        err = ai_network_get_error(*network);
    }
    return err;
}

AI_API_ENTRY
ai_buffer* ai_network_inputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    ((ai_network *)network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_inputs_get(network, n_buffer);
}

AI_API_ENTRY
ai_buffer* ai_network_outputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    ((ai_network *)network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_outputs_get(network, n_buffer);
}

AI_API_ENTRY
ai_handle ai_network_destroy(ai_handle network)
{
  return ai_platform_network_destroy(network);
}

AI_API_ENTRY
ai_bool ai_network_init(
  ai_handle network, const ai_network_params* params)
{
  ai_network* net_ctx = ai_platform_network_init(network, params);
  if (!net_ctx) return false;

  ai_bool ok = true;
  ok &= network_configure_weights(net_ctx, params);
  ok &= network_configure_activations(net_ctx, params);

  ok &= ai_platform_network_post_init(network);

  return ok;
}


AI_API_ENTRY
ai_i32 ai_network_run(
  ai_handle network, const ai_buffer* input, ai_buffer* output)
{
  return ai_platform_network_process(network, input, output);
}

AI_API_ENTRY
ai_i32 ai_network_forward(ai_handle network, const ai_buffer* input)
{
  return ai_platform_network_process(network, input, NULL);
}



#undef AI_NETWORK_MODEL_SIGNATURE
#undef AI_NET_OBJ_INSTANCE
#undef AI_TOOLS_DATE_TIME
#undef AI_TOOLS_COMPILE_TIME

>>>>>>> 1460700 (com)
