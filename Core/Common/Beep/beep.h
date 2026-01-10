/*
 * beep.h
 *
 *  Created on: Jan 10, 2026
 *      Author: Meraki Zhang
 */

#ifndef COMMON_BEEP_BEEP_H_
#define COMMON_BEEP_BEEP_H_

#include "main.h"

#ifdef	BEEP_Pin

	#define	 BEEP_Toggle()	HAL_GPIO_TogglePin(BEEP_GPIO_Port, BEEP_Pin)  //蜂鸣器响与不响翻转
	#define	 BEEP_ON()		HAL_GPIO_WritePin(BEEP_GPIO_Port, BEEP_Pin, GPIO_PIN_SET)    //蜂鸣器响
	#define	 BEEP_OFF()		HAL_GPIO_WritePin(BEEP_GPIO_Port, BEEP_Pin, GPIO_PIN_RESET)  //蜂鸣器不响

#endif


#endif /* COMMON_BEEP_BEEP_H_ */
