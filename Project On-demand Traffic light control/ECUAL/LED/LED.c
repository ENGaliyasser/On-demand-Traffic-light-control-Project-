/*
 * LED.c
 *
 * Created: 9/9/2022 4:42:44 PM
 *  Author: ali yasser ali abdallah
 */ 
#include "LED.h"
void LED_init(EN_port ledPort, EN_pin ledPin){
	DIO_init(ledPort,ledPin,OUT);
}
void LED_on(EN_port ledPort, EN_pin ledPin){
	DIO_write(ledPort,ledPin,HIGH);
}
void LED_off(EN_port ledPort, EN_pin ledPin){
	DIO_write(ledPort,ledPin,LOW);
}
void LED_toggle(EN_port ledPort, EN_pin ledPin){
	DIO_toggle(ledPort,ledPin);
}
