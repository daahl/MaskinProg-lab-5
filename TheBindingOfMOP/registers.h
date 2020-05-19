#ifndef REGISTERS_H
#define REGISTERS_H

/* ---- Registers - GPIO E ---- */
#define GPIO_E			0x40021000
#define GPIO_E_IDR		((volatile unsigned short*)	(GPIO_E+0x10))	// The entire IDR
#define GPIO_E_IDR_LOW	((volatile unsigned char*)	(GPIO_E+0x10))	// The LOW values un the IDR
#define GPIO_E_IDR_HIGH	((volatile unsigned char*)	(GPIO_E+0x11))	// The HIGH values un the IDR

#define GPIO_E_ODR		((volatile unsigned short*)	(GPIO_E+0x14))	// The entire ODR
#define GPIO_E_ODR_LOW	((volatile unsigned char*)	(GPIO_E+0x14))	// The LOW values in the ODR, E0-7
#define GPIO_E_ODR_HIGH	((volatile unsigned char*)	(GPIO_E+0x15))	// The HIGH values in the ODR, E8-15

#define GPIO_E_MODER	((volatile unsigned int*)	GPIO_E)			// I/O config
#define GPIO_E_OTYPER	((volatile unsigned char*)	(GPIO_E+5))		// Push-pull/open-drain config
#define GPIO_E_SPEEDR	((volatile unsigned int*)	(GPIO_E+0x08))	// Output speed
#define GPIO_E_PUPDR	((volatile unsigned short*)	(GPIO_E+0x0E))	// Pull-up/pull-down config

/* ---- Registers - GPIO D ---- */
#define GPIO_D				0x40020C00
#define GPIO_D_IDR		((volatile unsigned short*)	(GPIO_D+0x10))	// The entire IDR
#define GPIO_D_IDR_LOW	((volatile unsigned char*)	(GPIO_D+0x10))	// The LOW values un the IDR
#define GPIO_D_IDR_HIGH	((volatile unsigned char*)	(GPIO_D+0x11))	// The HIGH values un the IDR

#define GPIO_D_ODR		((volatile unsigned short*)	(GPIO_D+0x14))	// The entire ODR
#define GPIO_D_ODR_LOW	((volatile unsigned char*)	(GPIO_D+0x14))	// The LOW values in the ODR, D0-7
#define GPIO_D_ODR_HIGH	((volatile unsigned char*)	(GPIO_D+0x15))	// The HIGH values in the ODR, D8-15

#define GPIO_D_MODER	((volatile unsigned int*)	GPIO_D)			// I/O config
#define GPIO_D_OTYPER	((volatile unsigned char*)	(GPIO_D+5))		// Push-pull/open-drain config
#define GPIO_D_SPEEDR	((volatile unsigned int*)	(GPIO_D+0x08))	// Output speed
#define GPIO_D_PUPDR	((volatile unsigned short*)	(GPIO_D+0x0E))	// Pull-up/pull-down config

/* ---- Registers - SysTick ---- */
#define STK			 0xE000E010
#define STK_CTRL	 ((volatile unsigned int*) STK)			// (De)activation and status of SysTick
#define STK_CTRL_END ((volatile unsigned char*) (STK + 2))	// (De)activation and status of SysTick
#define STK_LOAD	 ((volatile unsigned int*) (STK + 4))	// Start value
#define STK_VAL		 ((volatile unsigned int*) (STK + 8))	// Current value
#define SIMULATOR

#endif