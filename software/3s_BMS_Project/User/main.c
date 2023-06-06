#include "main.h"
#include "gpio.h"




void main (void){

	PowerHLD_GPIO_Init();
	PowerKey_GPIO_Init();
	SetPowerHld(1);
	while(1){
	
	
	}
}