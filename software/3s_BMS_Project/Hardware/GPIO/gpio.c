/**
  ******************************************************************************
  * @file    gpio.c
  * @author  junwei-lin
  * @version V1.0.0
  * @date    04/27/2023
  * @brief   This file contains all the functions prototypes for the GPIO 
  *          firmware functions.
  ******************************************************************************
*/
#include "gpio.h"
#include "stc_gpio.h"


void SetPowerHld(u8 state){
	P37 = state;
}
void PowerHLD_GPIO_Init(void){
	STC_GPIO_INIT_STRUCT PowerHldGPIO_InitStruct;
	
	PowerHldGPIO_InitStruct.STC_GPIO_PROT = STC_GPIO_PROT3;
	PowerHldGPIO_InitStruct.STC_GPIO_PIN = STC_GPIO_PIN7;
	PowerHldGPIO_InitStruct.STC_GPIO_MODE = STC_GPIO_MODE_OUTPP;
	PowerHldGPIO_InitStruct.STC_GPIO_ROLL_SPEED_STATE = STC_DISABLE;
	PowerHldGPIO_InitStruct.STC_GPIO_DRIVER_CUR_STATE = STC_DISABLE;
	
	STC_GPIO_Init(&PowerHldGPIO_InitStruct);
}

void PowerKey_GPIO_Init(void){
	STC_GPIO_INIT_STRUCT PowerKeyGPIO_InitStruct;
	
	PowerKeyGPIO_InitStruct.STC_GPIO_PROT = STC_GPIO_PROT4;
	PowerKeyGPIO_InitStruct.STC_GPIO_PIN = STC_GPIO_PIN1;
	PowerKeyGPIO_InitStruct.STC_GPIO_MODE = STC_GPIO_MODE_DUAL;
	PowerKeyGPIO_InitStruct.STC_GPIO_ROLL_SPEED_STATE = STC_DISABLE;
	PowerKeyGPIO_InitStruct.STC_GPIO_DRIVER_CUR_STATE = STC_DISABLE;
	
	STC_GPIO_Init(&PowerKeyGPIO_InitStruct);
}