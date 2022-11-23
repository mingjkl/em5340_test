/*
 * @Author: emmovo
 * @Date: 2022-11-11 14:27:18
 * @LastEditors: emmovo
 * @LastEditTime: 2022-11-11 16:34:16
 * @FilePath: \EM5340_test\hello_world\src\main.c
 * @Description: 
 * 
 * Copyright (c) 2022 by mingjkl@live.com/emmovo.com, All Rights Reserved. 
 */
/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/zephyr.h>
#include "drivers/gpio.h"
#include "hal/nrf_gpio.h"

void main(void)
{
	nrf_gpio_cfg_output(NRF_GPIO_PIN_MAP(1,15));


	while(1)
	{
		nrf_gpio_pin_clear(NRF_GPIO_PIN_MAP(1,15));
		k_msleep(1000);
		printk("Hello World! %s\r\n", CONFIG_BOARD);
		nrf_gpio_pin_set(NRF_GPIO_PIN_MAP(1,15));
		k_msleep(1000);
	}
	
}
