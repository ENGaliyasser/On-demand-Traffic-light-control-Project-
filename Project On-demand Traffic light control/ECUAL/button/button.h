/*
 * button.h
 *
 * Created: 9/9/2022 5:19:54 PM
 *  Author: ali yasser ali abdallah
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#include "../../MCAL/DIO/dio.h"
//Button port and pin
#define button1Port PORT_D
#define button1Pin PIN2


//initialize
void BUTTON_init(EN_port buttonPort, EN_pin buttonPin);

// button read
void BUTTON_read(EN_port buttonPort, EN_pin buttonPin,EN_value* value);




#endif /* BUTTON_H_ */