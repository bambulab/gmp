/* gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 2019 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of either:

  * the GNU Lesser General Public License as published by the Free
    Software Foundation; either version 3 of the License, or (at your
    option) any later version.

or

  * the GNU General Public License as published by the Free Software
    Foundation; either version 2 of the License, or (at your option) any
    later version.

or both in parallel, as here.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received copies of the GNU General Public License and the
GNU Lesser General Public License along with the GNU MP Library.  If not,
see https://www.gnu.org/licenses/.  */

#define GMP_LIMB_BITS 32
#define GMP_LIMB_BYTES 4

/* 1000 MHz Cortex-A8 (beaglebone black) */
/* FFT tuning limit = 9,464,348 */
/* Generated by tuneup.c, 2019-10-23, gcc 6.3 */

#define MOD_1_NORM_THRESHOLD                 0  /* always */
#define MOD_1_UNNORM_THRESHOLD               0  /* always */
#define MOD_1N_TO_MOD_1_1_THRESHOLD          5
#define MOD_1U_TO_MOD_1_1_THRESHOLD          5
#define MOD_1_1_TO_MOD_1_2_THRESHOLD     MP_SIZE_T_MAX
#define MOD_1_2_TO_MOD_1_4_THRESHOLD         0  /* never mpn_mod_1s_2p */
#define PREINV_MOD_1_TO_MOD_1_THRESHOLD     12
#define USE_PREINV_DIVREM_1                  1  /* native */
#define DIV_QR_1N_PI1_METHOD                 1  /* 50.65% faster than 2 */
#define DIV_QR_1_NORM_THRESHOLD          MP_SIZE_T_MAX  /* never */
#define DIV_QR_1_UNNORM_THRESHOLD        MP_SIZE_T_MAX  /* never */
#define DIV_QR_2_PI2_THRESHOLD           MP_SIZE_T_MAX  /* never */
#define DIVEXACT_1_THRESHOLD                 0  /* always (native) */
#define BMOD_1_TO_MOD_1_THRESHOLD           31

#define DIV_1_VS_MUL_1_PERCENT             192

#define MUL_TOOM22_THRESHOLD                39
#define MUL_TOOM33_THRESHOLD               129
#define MUL_TOOM44_THRESHOLD               226
#define MUL_TOOM6H_THRESHOLD               366
#define MUL_TOOM8H_THRESHOLD               620

#define MUL_TOOM32_TO_TOOM43_THRESHOLD     141
#define MUL_TOOM32_TO_TOOM53_THRESHOLD     183
#define MUL_TOOM42_TO_TOOM53_THRESHOLD     154
#define MUL_TOOM42_TO_TOOM63_THRESHOLD     160
#define MUL_TOOM43_TO_TOOM54_THRESHOLD     193

#define SQR_BASECASE_THRESHOLD               0  /* always (native) */
#define SQR_TOOM2_THRESHOLD                 46
#define SQR_TOOM3_THRESHOLD                145
#define SQR_TOOM4_THRESHOLD                375
#define SQR_TOOM6_THRESHOLD                  0  /* always */
#define SQR_TOOM8_THRESHOLD                547

#define MULMID_TOOM42_THRESHOLD             38

#define MULMOD_BNM1_THRESHOLD               22
#define SQRMOD_BNM1_THRESHOLD               23

#define MUL_FFT_MODF_THRESHOLD             476  /* k = 5 */
#define MUL_FFT_TABLE3                                      \
  { {    476, 5}, {     28, 6}, {     15, 5}, {     31, 6}, \
    {     28, 7}, {     15, 6}, {     33, 7}, {     19, 6}, \
    {     39, 7}, {     27, 8}, {     15, 7}, {     35, 8}, \
    {     19, 7}, {     43, 8}, {     23, 7}, {     51, 8}, \
    {     27, 7}, {     55, 8}, {     31, 7}, {     63, 8}, \
    {     43, 9}, {     23, 8}, {     55, 9}, {     31, 8}, \
    {     71, 9}, {     39, 8}, {     83, 9}, {     47, 8}, \
    {     99, 9}, {     55,10}, {     31, 9}, {     87,10}, \
    {     47, 9}, {    103,11}, {     31,10}, {     63, 9}, \
    {    135,10}, {     79, 9}, {    167,10}, {     95, 9}, \
    {    199,10}, {    111,11}, {     63,10}, {    127, 9}, \
    {    255,10}, {    143, 9}, {    287, 8}, {    575,10}, \
    {    159, 9}, {    319,11}, {     95,10}, {    191, 9}, \
    {    383, 8}, {    767, 9}, {    399,10}, {    207,12}, \
    {     63,11}, {    127,10}, {    255, 9}, {    511,10}, \
    {    271, 9}, {    543,10}, {    287, 9}, {    575,11}, \
    {    159,10}, {    319, 9}, {    639,10}, {    335, 9}, \
    {    671,10}, {    351, 9}, {    703,10}, {    367,11}, \
    {    191,10}, {    399, 9}, {    799,10}, {    415,11}, \
    {    223,12}, {    127,11}, {    255,10}, {    543,11}, \
    {    287,10}, {    607, 9}, {   1215,11}, {    319,10}, \
    {    671,11}, {    351,10}, {    703,12}, {    191,11}, \
    {    383,10}, {    799,11}, {    415,10}, {    863,11}, \
    {    447,13}, {    127,12}, {    255,11}, {    543,10}, \
    {   1087,11}, {    607,12}, {    319,11}, {    671,10}, \
    {   1343,11}, {    735,12}, {    383,11}, {    799,10}, \
    {   1599,11}, {    863,12}, {    447,11}, {    959,13}, \
    {    255,12}, {    511,11}, {   1087,12}, {    575,11}, \
    {   1215,12}, {    639,11}, {   1343,12}, {    703,13}, \
    {    383,12}, {    767,11}, {   1599,12}, {    831,11}, \
    {   1663,12}, {    959,14}, {    255,13}, {    511,12}, \
    {   1215,13}, {    639,12}, {   1407,13}, {    767,12}, \
    {   1663,13}, {    895,12}, {   1791,14}, {    511,13}, \
    {   1023,12}, {   2111,13}, {   1151,12}, {   4096,13}, \
    {   8192,14}, {  16384,15}, {  32768,16} }
#define MUL_FFT_TABLE3_SIZE 139
#define MUL_FFT_THRESHOLD                 6784

#define SQR_FFT_MODF_THRESHOLD             436  /* k = 5 */
#define SQR_FFT_TABLE3                                      \
  { {    436, 5}, {     25, 6}, {     13, 5}, {     27, 6}, \
    {     28, 7}, {     15, 6}, {     32, 7}, {     17, 6}, \
    {     35, 7}, {     19, 6}, {     39, 7}, {     29, 8}, \
    {     15, 7}, {     35, 8}, {     19, 7}, {     41, 8}, \
    {     23, 7}, {     49, 8}, {     27, 9}, {     15, 8}, \
    {     43, 9}, {     23, 8}, {     55,10}, {     15, 9}, \
    {     31, 8}, {     67, 9}, {     39, 8}, {     79, 9}, \
    {     47, 8}, {     95, 9}, {     55,10}, {     31, 9}, \
    {     79,10}, {     47, 9}, {    103,11}, {     31,10}, \
    {     63, 9}, {    135,10}, {     79, 9}, {    159, 8}, \
    {    319, 9}, {    167,10}, {     95, 9}, {    191,10}, \
    {    111,11}, {     63,10}, {    127, 9}, {    255, 8}, \
    {    511, 9}, {    271,10}, {    143, 9}, {    287, 8}, \
    {    575, 9}, {    303,10}, {    159, 9}, {    319,11}, \
    {     95,10}, {    191, 9}, {    383, 8}, {    767, 9}, \
    {    399,12}, {     63,11}, {    127,10}, {    255, 9}, \
    {    511,10}, {    271, 9}, {    543,10}, {    287, 9}, \
    {    575,10}, {    303,11}, {    159,10}, {    319, 9}, \
    {    639,10}, {    335, 9}, {    671,10}, {    351, 9}, \
    {    703,10}, {    367,11}, {    191,10}, {    383, 9}, \
    {    767,10}, {    399, 9}, {    799,10}, {    415, 9}, \
    {    831,11}, {    223,10}, {    447,12}, {    127,11}, \
    {    255,10}, {    511, 9}, {   1023,10}, {    543,11}, \
    {    287,10}, {    607,11}, {    319,10}, {    671,11}, \
    {    351,10}, {    735,12}, {    191,11}, {    383,10}, \
    {    799,11}, {    415,10}, {    863,11}, {    447,10}, \
    {    895,13}, {    127,12}, {    255,11}, {    511,10}, \
    {   1023,11}, {    543,10}, {   1087,11}, {    607,12}, \
    {    319,11}, {    671,10}, {   1343,11}, {    735,12}, \
    {    383,11}, {    863,12}, {    447,11}, {    959,13}, \
    {    255,12}, {    511,11}, {   1087,12}, {    575,11}, \
    {   1215,12}, {    639,11}, {   1343,12}, {    703,11}, \
    {   1407,13}, {    383,12}, {    767,11}, {   1599,12}, \
    {    831,11}, {   1663,12}, {    959,14}, {    255,13}, \
    {    511,12}, {   1215,13}, {    639,12}, {   1471,13}, \
    {    767,12}, {   1663,13}, {    895,12}, {   1855,14}, \
    {    511,13}, {   1023,12}, {   2111,13}, {   1151,12}, \
    {   4096,13}, {   8192,14}, {  16384,15}, {  32768,16} }
#define SQR_FFT_TABLE3_SIZE 152
#define SQR_FFT_THRESHOLD                 3712

#define MULLO_BASECASE_THRESHOLD            21
#define MULLO_DC_THRESHOLD                   0  /* never mpn_mullo_basecase */
#define MULLO_MUL_N_THRESHOLD            13463
#define SQRLO_BASECASE_THRESHOLD             9
#define SQRLO_DC_THRESHOLD                  17
#define SQRLO_SQR_THRESHOLD               7246

#define DC_DIV_QR_THRESHOLD                 27
#define DC_DIVAPPR_Q_THRESHOLD              74
#define DC_BDIV_QR_THRESHOLD                21
#define DC_BDIV_Q_THRESHOLD                 64

#define INV_MULMOD_BNM1_THRESHOLD           78
#define INV_NEWTON_THRESHOLD                31
#define INV_APPR_THRESHOLD                  37

#define BINV_NEWTON_THRESHOLD              167
#define REDC_1_TO_REDC_2_THRESHOLD           4
#define REDC_2_TO_REDC_N_THRESHOLD         198

#define MU_DIV_QR_THRESHOLD               1858
#define MU_DIVAPPR_Q_THRESHOLD            1685
#define MUPI_DIV_QR_THRESHOLD               43
#define MU_BDIV_QR_THRESHOLD              1589
#define MU_BDIV_Q_THRESHOLD               1685

#define POWM_SEC_TABLE  1,13,96,487,1378

#define GET_STR_DC_THRESHOLD                18
#define GET_STR_PRECOMPUTE_THRESHOLD        36
#define SET_STR_DC_THRESHOLD               145
#define SET_STR_PRECOMPUTE_THRESHOLD       505

#define FAC_DSC_THRESHOLD                  137
#define FAC_ODD_THRESHOLD                   29

#define MATRIX22_STRASSEN_THRESHOLD         24
#define HGCD2_DIV1_METHOD                    5  /* 4.29% faster than 4 */
#define HGCD_THRESHOLD                      39
#define HGCD_APPR_THRESHOLD                 50
#define HGCD_REDUCE_THRESHOLD             3524
#define GCD_DC_THRESHOLD                   116
#define GCDEXT_DC_THRESHOLD                124
#define JACOBI_BASE_METHOD                   4  /* 5.89% faster than 1 */

/* Tuneup completed successfully, took 48230 seconds */
