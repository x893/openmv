#ifndef _BL_BOARD_H__
#define _BL_BOARD_H__

#ifdef OPENMV1
	#define LED_PORT	GPIOD
	#define LED_RED     GPIO_PIN_4
	#define LED_GREEN   GPIO_PIN_6
	#define LED_BLUE    GPIO_PIN_5
#else
	#define LED_RED     GPIO_PIN_0
	#define LED_GREEN   GPIO_PIN_2
	#define LED_BLUE    GPIO_PIN_1
#endif

#endif
