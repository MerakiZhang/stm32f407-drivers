/*
 * led.h
 *
 *  Created on: Jan 10, 2026
 *      Author: Meraki Zhang
 */

#ifndef COMMON_LED_LED_H_
#define COMMON_LED_LED_H_

#include "main.h"

#ifdef	LED0_Pin

	#define	 LED0_Toggle()	HAL_GPIO_TogglePin(LED0_GPIO_Port, LED0_Pin)    //LED0 亮灭翻转
	#define	 LED0_ON()		HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, GPIO_PIN_RESET)  //LED0 亮
	#define	 LED0_OFF()		HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, GPIO_PIN_SET)  //LED0 灭

#endif


#ifdef	LED1_Pin

	#define	 LED1_Toggle()	HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin)    //LED1 亮灭翻转
	#define	 LED1_ON()		HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET)  //LED1 亮
	#define	 LED1_OFF()		HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET)  //LED1 灭

#endif



#endif /* COMMON_LED_LED_H_ */
