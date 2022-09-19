/*
 * DIO.h
 *
 * Created: 9/9/2022 5:23:48 PM
 *  Author: hp
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "../../utilities/registers.h"
#include "../../utilities/bitManipulation.h"
 
//PortNumber ENUM 
typedef enum portNumber {PORT_A,PORT_B,PORT_C,PORT_D} EN_port;
	
//Direction ENUM
typedef enum direction {IN, OUT} EN_dir;

//Value ENUM
typedef enum value {LOW, HIGH} EN_value;

//PinNumber ENUM
typedef enum pinNumber {PIN0 ,PIN1 ,PIN2 ,PIN3 ,PIN4 ,PIN5 ,PIN6 ,PIN7} EN_pin;

void DIO_init(EN_port portNumber, EN_pin pinNumber, EN_dir direction);// Initialize dio direction
void DIO_write(EN_port portNumber, EN_pin pinNumber, EN_value value); //write data to dio
void DIO_toggle(EN_port portNumber, EN_pin pinNumber); //toggle dio
void DIO_read(EN_port portNumber, EN_pin pinNumber, EN_value* value); //read dio




#endif /* DIO_H_ */