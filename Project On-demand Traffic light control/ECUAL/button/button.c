/*
 * button.c
 *
 * Created: 9/9/2022 5:19:34 PM
 *  Author: ali yasser ali abdallah
 */ 
#include "button.h"

//initialize
void BUTTON_init(EN_port buttonPort, EN_pin buttonPin){
	DIO_init(buttonPort,buttonPin,IN);
}

// button read
void BUTTON_read(EN_port buttonPort, EN_pin buttonPin,EN_value* value){
	DIO_read(buttonPort,buttonPin,value);
}