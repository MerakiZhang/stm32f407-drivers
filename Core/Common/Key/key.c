/*
 * key.c
 *
 *  Created on: Jan 10, 2026
 *      Author: Meraki Zhang
 */

#include "key.h"

KEYS ScanPressedKey(uint32_t timeout)
{
	KEYS key = KEY_NONE;
	uint32_t tickStart = HAL_GetTick();
	const uint32_t debounceDelay = 10;	//去抖动时间
	GPIO_PinState keyState;

	while(1)
	{
#ifdef KEY_UP_Pin
	   keyState = HAL_GPIO_ReadPin(KEY_UP_GPIO_Port, KEY_UP_Pin);
	   if (keyState == GPIO_PIN_SET)
	   {
		   HAL_Delay(debounceDelay);
		   keyState = HAL_GPIO_ReadPin(KEY_UP_GPIO_Port, KEY_UP_Pin);
		   if (keyState == GPIO_PIN_SET)
			   return KEY_UP;
	   }
#endif

#ifdef KEY_0_Pin
	   keyState = HAL_GPIO_ReadPin(KEY_0_GPIO_Port, KEY_0_Pin);
	   if (keyState == GPIO_PIN_RESET)
	   {
		   HAL_Delay(debounceDelay);
		   keyState = HAL_GPIO_ReadPin(KEY_0_GPIO_Port, KEY_0_Pin);
		   if (keyState == GPIO_PIN_RESET)
			   return KEY_0;
	   }
#endif

#ifdef KEY_1_Pin
	   keyState = HAL_GPIO_ReadPin(KEY_1_GPIO_Port, KEY_1_Pin);
	   if (keyState == GPIO_PIN_RESET)
	   {
		   HAL_Delay(debounceDelay);
		   keyState = HAL_GPIO_ReadPin(KEY_1_GPIO_Port, KEY_1_Pin);
		   if (keyState == GPIO_PIN_RESET)
			   return KEY_1;
	   }
#endif

#ifdef KEY_2_Pin
	   keyState = HAL_GPIO_ReadPin(KEY_2_GPIO_Port, KEY_2_Pin);
	   if (keyState == GPIO_PIN_RESET)
	   {
		   HAL_Delay(debounceDelay);
		   keyState = HAL_GPIO_ReadPin(KEY_2_GPIO_Port, KEY_2_Pin);
		   if (keyState == GPIO_PIN_RESET)
			   return KEY_2;
	   }
#endif

	   if (timeout != KEY_WAIT_ALWAYS)  //没有按键按下时，timeout时退出
	   {
		   if ((HAL_GetTick() - tickStart) > timeout)
			   break;
	   }

	}

	return	key;
}
