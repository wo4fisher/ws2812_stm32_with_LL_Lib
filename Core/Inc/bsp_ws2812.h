/********************************Copyright (c)**********************************\
**
**                   (c) Copyright 2020, Main, China, QD.
**                           All Rights Reserved
**
**                                By(wo4fisher)
**                           http://www.wo4fisher.com
**
**----------------------------------文件信息------------------------------------
** 文件名称: bsp_ws2812.h
** 创建人员: wht
** 创建日期: 2020-01-20
** 文档描述: 
**
**----------------------------------版本信息------------------------------------
** 版本代号: V0.1
** 版本说明: 初始版本
**
**------------------------------------------------------------------------------
\********************************End of Head************************************/
 
#ifndef __BSP_WS2812_H_
#define __BSP_WS2812_H_
#include "main.h"


#define PIXEL_NUM  13
#define GRB  24   //3*8
#define  LEN        (PIXEL_NUM*GRB)
#define WS_LOW  31
#define WS_HIGH 60

extern volatile uint8_t  ws2812_xfer_flag;
extern           uint8_t  pixelBuffer[PIXEL_NUM][GRB];


void WS281x_Init(void);
void WS281x_CloseAll(void);
uint32_t WS281x_Color(uint8_t red, uint8_t green, uint8_t blue);
void WS281x_SetPixelColor(uint16_t n, uint32_t GRBColor);
void WS281x_SetPixelRGB(uint16_t n ,uint8_t red, uint8_t green, uint8_t blue);
void WS281x_Show(void);

void WS281x_RainbowCycle(uint8_t wait);
void WS281x_TheaterChase(uint32_t c, uint8_t wait);
void WS281x_ColorWipe(uint32_t c, uint8_t wait);
void WS281x_Rainbow(uint8_t wait);
void WS281x_TheaterChaseRainbow(uint8_t wait);

#endif

 
/********************************End of File************************************/

