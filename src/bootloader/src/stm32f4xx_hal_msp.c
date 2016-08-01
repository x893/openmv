/*
 * This file is part of the OpenMV project.
 * Copyright (c) 2013/2014 Ibrahim Abdelkader <i.abdalkader@gmail.com>
 * This work is licensed under the MIT license, see the file LICENSE for details.
 *
 * HAL MSP.
 *
 */
#include <stm32f4xx_hal.h>
#include "bl_board.h"

void SystemClock_Config();

void HAL_MspInit()
{
    // Set the system clock
    SystemClock_Config();

    // Config Systick
    HAL_NVIC_SetPriority(SysTick_IRQn, 0, 0);

    __GPIOA_CLK_ENABLE();
    __GPIOB_CLK_ENABLE();
    __GPIOC_CLK_ENABLE();
    __GPIOD_CLK_ENABLE();
    __GPIOE_CLK_ENABLE();

    GPIO_InitTypeDef  GPIO_InitStructure;
    GPIO_InitStructure.Pull  = GPIO_NOPULL;
    GPIO_InitStructure.Speed = GPIO_SPEED_LOW;
    GPIO_InitStructure.Mode  = GPIO_MODE_OUTPUT_OD;

    GPIO_InitStructure.Pin = (LED_RED | LED_GREEN | LED_BLUE);
    HAL_GPIO_Init(LED_PORT, &GPIO_InitStructure);

    HAL_GPIO_WritePin(LED_PORT, LED_RED, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_PORT, LED_GREEN, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_PORT, LED_BLUE, GPIO_PIN_SET);
}
