/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2025 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

 #include <stdint.h>
 #include "stm32f4xx.h"
 
 int i;
 
 int main(void)
 {
     /* Loop forever */
 
     RCC->AHB1ENR |= (1<<3);  // activar reloj GPIOD
     GPIOD->MODER |= (1<<(15*2)) | (1<<(14*2)) | (1<<(13*2)) | (1<<(12*2));
 
     while(1)
     {
         for(i=0;i<1000000;i++);
         GPIOD->ODR ^= (1<<13);
         
     }
 }
 