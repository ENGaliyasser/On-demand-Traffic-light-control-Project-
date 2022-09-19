/*
 * LED.h
 *
 * Created: 9/9/2022 4:43:24 PM
 *  Author: ali yasser ali abdallah
 */ 


#ifndef LED_H_
#define LED_H_
#include "../../MCAL/DIO/dio.h"

// Car port and pins
#define ledCarPort PORT_A
#define greenLedCarPin PIN0
#define yellowLedCarPin PIN1
#define redLedCarPin PIN2

// Pedestrian port and pins
#define ledPedPort PORT_B
#define greenLedPedPin PIN0
#define yellowLedPedPin PIN1
#define redLedPedPin PIN2

void LED_init(EN_port ledPort, EN_pin ledPin);
void LED_on(EN_port ledPort, EN_pin ledPin);
void LED_off(EN_port ledPort, EN_pin ledPin);
void LED_toggle(EN_port ledPort, EN_pin ledPin);


#endif /* LED_H_ */