/**
  ******************************************************************************
  * @file    stc_gpio.C
  * @author  junwei-lin
  * @version V1.0.0
  * @date    04/27/2023
  * @brief   This file contains all the functions prototypes for the STC GPIO 
  *          firmware functions.
  ******************************************************************************
*/

#include "stc_gpio.h"


void STC_GPIO_Init(STC_GPIO_INIT_STRUCT *STC_GPIO_InitStruct){
	switch(STC_GPIO_InitStruct->STC_GPIO_PROT){
		case STC_GPIO_PROT0:{
			switch(STC_GPIO_InitStruct->STC_GPIO_MODE){
				case STC_GPIO_MODE_DUAL:{
					P0M0 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P0M1 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
				}break;
				case STC_GPIO_MODE_OUTPP:{
					P0M0 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P0M1 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);		
				}break;
				case STC_GPIO_MODE_OUTOD:{
					P0M0 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P0M1 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
				}break;
				case STC_GPIO_MODE_HRES:{
					P0M0 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P0M1 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
				}break;
				default: break;
			}	
			if(!STC_GPIO_InitStruct->STC_GPIO_ROLL_SPEED_STATE)
				P0SR |= (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
			else
				P0SR &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
			if(!STC_GPIO_InitStruct->STC_GPIO_DRIVER_CUR_STATE)
				P0DR |= (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
			else
				P0DR &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);				
		}break;
		case STC_GPIO_PROT1:{
			switch(STC_GPIO_InitStruct->STC_GPIO_MODE){
				case STC_GPIO_MODE_DUAL:{
					P1M0 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P1M1 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
				}break;
				case STC_GPIO_MODE_OUTPP:{
					P1M0 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P1M1 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);		
				}break;
				case STC_GPIO_MODE_OUTOD:{
					P1M0 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P1M1 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
				}break;
				case STC_GPIO_MODE_HRES:{
					P1M0 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P1M1 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
				}break;
				default: break;
			}			
			if(!STC_GPIO_InitStruct->STC_GPIO_ROLL_SPEED_STATE)
				P1SR |= (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
			else
				P1SR &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
			if(!STC_GPIO_InitStruct->STC_GPIO_DRIVER_CUR_STATE)
				P1DR |= (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
			else
				P1DR &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);				
		}break;
		case STC_GPIO_PROT2:{
			switch(STC_GPIO_InitStruct->STC_GPIO_MODE){
				case STC_GPIO_MODE_DUAL:{
					P2M0 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P2M1 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
				}break;
				case STC_GPIO_MODE_OUTPP:{
					P2M0 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P2M1 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);		
				}break;
				case STC_GPIO_MODE_OUTOD:{
					P2M0 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P2M1 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
				}break;
				case STC_GPIO_MODE_HRES:{
					P2M0 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P2M1 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
				}break;
				default: break;
			}			
			if(!STC_GPIO_InitStruct->STC_GPIO_ROLL_SPEED_STATE)
				P2SR |= (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
			else
				P2SR &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
			if(!STC_GPIO_InitStruct->STC_GPIO_DRIVER_CUR_STATE)
				P2DR |= (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
			else
				P2DR &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);				
		}break;
		case STC_GPIO_PROT3:{
			switch(STC_GPIO_InitStruct->STC_GPIO_MODE){
				case STC_GPIO_MODE_DUAL:{
					P3M0 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P3M1 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
				}break;
				case STC_GPIO_MODE_OUTPP:{
					P3M0 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P3M1 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);		
				}break;
				case STC_GPIO_MODE_OUTOD:{
					P3M0 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P3M1 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
				}break;
				case STC_GPIO_MODE_HRES:{
					P3M0 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P3M1 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
				}break;
				default: break;
			}			
			if(!STC_GPIO_InitStruct->STC_GPIO_ROLL_SPEED_STATE)
				P3SR |= (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
			else
				P3SR &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
			if(!STC_GPIO_InitStruct->STC_GPIO_DRIVER_CUR_STATE)
				P3DR |= (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
			else
				P3DR &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);				
		}break;
		case STC_GPIO_PROT4:{
			switch(STC_GPIO_InitStruct->STC_GPIO_MODE){
				case STC_GPIO_MODE_DUAL:{
					P4M0 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P4M1 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
				}break;
				case STC_GPIO_MODE_OUTPP:{
					P4M0 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P4M1 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);		
				}break;
				case STC_GPIO_MODE_OUTOD:{
					P4M0 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P4M1 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
				}break;
				case STC_GPIO_MODE_HRES:{
					P4M0 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P4M1 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
				}break;
				default: break;
			}			
			if(!STC_GPIO_InitStruct->STC_GPIO_ROLL_SPEED_STATE)
				P4SR |= (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
			else
				P4SR &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
			if(!STC_GPIO_InitStruct->STC_GPIO_DRIVER_CUR_STATE)
				P4DR |= (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
			else
				P4DR &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);				
		}break;
		case STC_GPIO_PROT5:{
			switch(STC_GPIO_InitStruct->STC_GPIO_MODE){
				case STC_GPIO_MODE_DUAL:{
					P5M0 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P5M1 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
				}break;
				case STC_GPIO_MODE_OUTPP:{
					P5M0 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P5M1 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);		
				}break;
				case STC_GPIO_MODE_OUTOD:{
					P5M0 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P5M1 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
				}break;
				case STC_GPIO_MODE_HRES:{
					P5M0 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P5M1 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
				}break;
				default: break;
			}	
			if(!STC_GPIO_InitStruct->STC_GPIO_ROLL_SPEED_STATE)
				P5SR |= (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
			else
				P5SR &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
			if(!STC_GPIO_InitStruct->STC_GPIO_DRIVER_CUR_STATE)
				P5DR |= (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
			else
				P5DR &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);				
		}break;
		case STC_GPIO_PROT6:{
			switch(STC_GPIO_InitStruct->STC_GPIO_MODE){
				case STC_GPIO_MODE_DUAL:{
					P6M0 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P6M1 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
				}break;
				case STC_GPIO_MODE_OUTPP:{
					P6M0 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P6M1 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);		
				}break;
				case STC_GPIO_MODE_OUTOD:{
					P6M0 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P6M1 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
				}break;
				case STC_GPIO_MODE_HRES:{
					P6M0 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P6M1 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
				}break;
				default: break;
			}			
			if(!STC_GPIO_InitStruct->STC_GPIO_ROLL_SPEED_STATE)
				P6SR |= (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
			else
				P6SR &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
			if(!STC_GPIO_InitStruct->STC_GPIO_DRIVER_CUR_STATE)
				P6DR |= (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
			else
				P6DR &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);				
		}break;
		case STC_GPIO_PROT7:{
			switch(STC_GPIO_InitStruct->STC_GPIO_MODE){
				case STC_GPIO_MODE_DUAL:{
					P7M0 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P7M1 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
				}break;
				case STC_GPIO_MODE_OUTPP:{
					P7M0 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P7M1 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);		
				}break;
				case STC_GPIO_MODE_OUTOD:{
					P7M0 &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P7M1 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
				}break;
				case STC_GPIO_MODE_HRES:{
					P7M0 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
					P7M1 |=  (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
				}break;
				default: break;
			}			
			if(!STC_GPIO_InitStruct->STC_GPIO_ROLL_SPEED_STATE)
				P7SR |= (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
			else
				P7SR &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
			if(!STC_GPIO_InitStruct->STC_GPIO_DRIVER_CUR_STATE)
				P7DR |= (0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);
			else
				P7DR &= ~(0x01 << STC_GPIO_InitStruct->STC_GPIO_PIN);				
		}break;	
		default: break;
	}
}

u8 STC_GPIO_GetState(STC_GPIO_PROT_TYPEDEF GPIO_PROT,STC_GPIO_PIN_TYPEDEF GPIO_PIN){
	u8 state;              
	switch(GPIO_PROT){
		case STC_GPIO_PROT0: state = P0; break;
		case STC_GPIO_PROT1: state = P1; break;
		case STC_GPIO_PROT2: state = P2; break;
		case STC_GPIO_PROT3: state = P3; break;
		case STC_GPIO_PROT4: state = P4; break;
		case STC_GPIO_PROT5: state = P5; break;
		case STC_GPIO_PROT6: state = P6; break;
		case STC_GPIO_PROT7: state = P7; break;
	}
	return ((state >> GPIO_PIN) & 0x01);
}
void STC_GPIO_SetState(STC_GPIO_PROT_TYPEDEF GPIO_PROT,STC_GPIO_PIN_TYPEDEF GPIO_PIN,u8 STATE){

}

