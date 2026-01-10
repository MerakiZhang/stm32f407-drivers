/*
 * exit.c
 *
 *  Created on: Jan 10, 2026
 *      Author: Meraki Zhang
 */

#include "exitCallback.h"

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {

	if (GPIO_Pin == KEY_UP_Pin) {

		HAL_GPIO_TogglePin(LED0_GPIO_Port, LED0_Pin);
		HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
		HAL_Delay(500);

	} else if (GPIO_Pin == KEY_0_Pin) {

		HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
		HAL_Delay(1000);

	} else if (GPIO_Pin == KEY_1_Pin) {

		__HAL_GPIO_EXTI_GENERATE_SWIT(GPIO_PIN_0);
		HAL_Delay(1000);

	} else if (GPIO_Pin == KEY_2_Pin) {

		HAL_GPIO_TogglePin(LED0_GPIO_Port, LED0_Pin);
		HAL_Delay(1000);

	}

}
