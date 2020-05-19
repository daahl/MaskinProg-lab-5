#include "registers.h"

void delay_250ns(void){
	*STK_CTRL = 0;			// Reset SysTick
	*STK_LOAD = 0x00000029; // Set load value, 42 Hz = 250 ns, 42 (dec) = 29 (hex)
	*STK_VAL = 0;			// Reset counter register
	*STK_CTRL = 5;			// Set SysTick and enable counter
	
	// Run until counter == 0
	while(!*STK_CTRL_END){
		break;
	}
}

void delay_micro(unsigned int us){
	for(unsigned int i = 0; i <= us; i++){
		delay_250ns();
		delay_250ns();
		delay_250ns();
		delay_250ns();
	}
}

void delay_milli(unsigned int ms){
	#ifdef SIMULATOR
		ms = ms/250;
		ms++;
	#endif
	for(unsigned int i = 0; i < ms; i++)
		delay_micro(1000);

}