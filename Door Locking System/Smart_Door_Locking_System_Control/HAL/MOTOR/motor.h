/*
 * motor.h
 *
 *  Created on: Oct 6, 2024
 *      Author: hp
 */

#ifndef HAL_MOTOR_MOTOR_H_
#define HAL_MOTOR_MOTOR_H_

#include "../../MCAL/GPIO/gpio.h"

#define IN1_PIN		PIN6_ID
#define IN1_PORT	PORTD_ID

#define IN2_PIN		PIN7_ID
#define IN2_PORT	PORTD_ID

#define EN1_PIN		PIN2_ID
#define EN1_PORT	PORTD_ID

#define STOP			0
#define CLKWISE			1
#define ANTICLKWISE		2

void DcMotor_Init(void);
void DcMotor_Rotate(uint8 state, uint8 speed);
#endif /* HAL_MOTOR_MOTOR_H_ */
