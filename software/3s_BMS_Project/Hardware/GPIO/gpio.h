/**
  ******************************************************************************
  * @file    gpio.h 
  * @author  junwei-lin
  * @version V1.0.0
  * @date    04/27/2023
  * @brief   This file contains all the functions prototypes for the  GPIO 
  *          firmware library.
  ******************************************************************************
*/

#ifndef __GPIO_H__
#define __GPIO_H__

#include "main.h"



void SetPowerHld(u8 state);
void PowerHLD_GPIO_Init(void);
void PowerKey_GPIO_Init(void);
#endif