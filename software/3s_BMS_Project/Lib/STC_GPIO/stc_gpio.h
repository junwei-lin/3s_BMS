/**
  ******************************************************************************
  * @file    stc_gpio.h 
  * @author  junwei-lin
  * @version V1.0.0
  * @date    04/27/2023
  * @brief   This file contains all the functions prototypes for the STC GPIO 
  *          firmware library.
  ******************************************************************************
*/

#ifndef __STC_GPIO_H__
#define __STC_GPIO_H__

#include "main.h"

/*
 ***************************************************************************************************************
 *	GPIO CONFIG REG DESCRIPTION                                               _________________________________
 *		                                                                     |                                 |                
 *		   Pn.7    Pn.6    Pn.5    Pn.4    Pn.3    Pn.2    Pn.1    Pn.0      |	0	|	0	|	DUALDIRECTION  |													
 *			¡ý      ¡ý      ¡ý      ¡ý      ¡ý      ¡ý      ¡ý      ¡ý       |_________________________________|
 *		 _______________________________________________________________     |                                 |
 *		|																|    |	0	|	1	|	   OUT_PP      |
 *	PnM0|   7	|	6	|	5	|	4	|	3	|	2	|	1	|	0	|    |_________________________________|
 *		|_______________________________________________________________|    |                                 |
 *		|                                                               |    |	1	|	0	|	    HI_Z	   |
 *	PnM1|	7	|	6	|	5	|	4	|	3	|	2	|	1	|	0	|    |_________________________________|
 *		|_______________________________________________________________|    |                                 |
 *		                                                                     |	1	|	1	|	   OUT_OD	   |
 *		                                                                     |_________________________________|
 *		                                                                      
 *************************************************************************************************************** 
*/

typedef enum _STC_GPIO_PROT{
	STC_GPIO_PROT0,
	STC_GPIO_PROT1,
	STC_GPIO_PROT2,
	STC_GPIO_PROT3,
	STC_GPIO_PROT4,
	STC_GPIO_PROT5,
	STC_GPIO_PROT6,
	STC_GPIO_PROT7,
}STC_GPIO_PROT_TYPEDEF;

typedef enum _STC_GPIO_PIN{
	STC_GPIO_PIN0,
	STC_GPIO_PIN1,
	STC_GPIO_PIN2,
	STC_GPIO_PIN3,
	STC_GPIO_PIN4,
	STC_GPIO_PIN5,
	STC_GPIO_PIN6,
	STC_GPIO_PIN7,
}STC_GPIO_PIN_TYPEDEF;

typedef enum _STC_GPIO_MODE{
	STC_GPIO_MODE_DUAL,
	STC_GPIO_MODE_OUTPP,
	STC_GPIO_MODE_OUTOD,
	STC_GPIO_MODE_HRES,
}STC_GPIO_MODE_TYPEDEF;

typedef struct _STC_GPIO_INIT_STRUCT{
	u8 STC_GPIO_ROLL_SPEED_STATE;
	u8 STC_GPIO_DRIVER_CUR_STATE;
	STC_GPIO_PROT_TYPEDEF STC_GPIO_PROT;
	STC_GPIO_PIN_TYPEDEF  STC_GPIO_PIN;
	STC_GPIO_MODE_TYPEDEF STC_GPIO_MODE;
}STC_GPIO_INIT_STRUCT;



void STC_GPIO_Init(STC_GPIO_INIT_STRUCT* STC_GPIO_InitStruct);
u8   STC_GPIO_GetState(STC_GPIO_PROT_TYPEDEF GPIO_PROT,STC_GPIO_PIN_TYPEDEF GPIO_PIN);
void STC_GPIO_SetState(STC_GPIO_PROT_TYPEDEF GPIO_PROT,STC_GPIO_PIN_TYPEDEF GPIO_PIN,u8 STATE);
#endif