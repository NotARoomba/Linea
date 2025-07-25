/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32wbxx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define S2_Pin GPIO_PIN_14
#define S2_GPIO_Port GPIOA
#define S1_Pin GPIO_PIN_15
#define S1_GPIO_Port GPIOA
#define S0_Pin GPIO_PIN_10
#define S0_GPIO_Port GPIOC
#define E5_Pin GPIO_PIN_12
#define E5_GPIO_Port GPIOC
#define E4_Pin GPIO_PIN_0
#define E4_GPIO_Port GPIOD
#define E3_Pin GPIO_PIN_1
#define E3_GPIO_Port GPIOD
#define E2_Pin GPIO_PIN_3
#define E2_GPIO_Port GPIOB
#define E1_Pin GPIO_PIN_4
#define E1_GPIO_Port GPIOB
#define E0_Pin GPIO_PIN_5
#define E0_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
