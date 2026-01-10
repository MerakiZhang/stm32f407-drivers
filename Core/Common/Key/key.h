/*
 * key.h
 *
 *  Created on: Jan 10, 2026
 *      Author: Meraki Zhang
 */

#ifndef COMMON_KEY_KEY_H_
#define COMMON_KEY_KEY_H_

#include "main.h"

//枚举类型，哪个按键被按下
typedef enum {
	KEY_NONE = 0,
	KEY_UP,
	KEY_0,
	KEY_1,
	KEY_2
} KEYS;

#define	KEY_WAIT_ALWAYS	0
//timeout = KEY_WAIT_ALWAYS 表示一直扫描，等待按键输入；非0值是等待时间timeout ms；
KEYS	ScanPressedKey(uint32_t timeout);



#endif /* COMMON_KEY_KEY_H_ */
