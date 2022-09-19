/*
 * DIO.c
 *
 * Created: 9/9/2022 5:23:32 PM
 *  Author: hp
 */ 
#include "DIO.h"

void DIO_init(EN_port portNumber, EN_pin pinNumber, EN_dir direction)
{
	switch(portNumber){
		case PORT_A:
			if(direction == IN){
				CLEAR_BIT(DDRA,pinNumber);
			}else if (direction == OUT){
				SET_BIT(DDRA,pinNumber);
			}
			else{
				//ERROR
			}
			break;
		case PORT_B:
			if(direction == IN){
				CLEAR_BIT(DDRB,pinNumber);
			}else if (direction == OUT){
				SET_BIT(DDRB,pinNumber);
			}
			else{
				//ERROR
			}
			break;
		case PORT_C:
			if(direction == IN){
				CLEAR_BIT(DDRC,pinNumber);
			}else if (direction == OUT){
				SET_BIT(DDRC,pinNumber);
			}
			else{
				//ERROR
			}
			break;
		case PORT_D:
			if(direction == IN){
				CLEAR_BIT(DDRD,pinNumber);
			}else if (direction == OUT){
				SET_BIT(DDRD,pinNumber);
			}
			else{
				//ERROR
			}
			break;
	}
}
void DIO_write(EN_port portNumber, EN_pin pinNumber, EN_value value)
{
	switch(portNumber){
		case PORT_A:
			if(value == LOW){
				//PORTA &= ~(1<<pinNumber); //write 0
				CLEAR_BIT(PORTA,pinNumber);
			}else if (value == HIGH){
				//PORTA |= (1<<pinNumber); //write 1
				SET_BIT(PORTA,pinNumber);
			}
			else{
				//ERROR
			}
		break;
		case PORT_B:
			if(value == LOW){
				//PORTB &= ~(1<<pinNumber); //write 0
				CLEAR_BIT(PORTB,pinNumber);
			}else if (value == HIGH){
				//PORTB |= (1<<pinNumber); //write 1
				SET_BIT(PORTB,pinNumber);
			}
			else{
				//ERROR
			}
		break;
		case PORT_C:
			if(value == LOW){
				//PORTC &= ~(1<<pinNumber); //write 0
				CLEAR_BIT(PORTC,pinNumber);
			}else if (value == HIGH){
				//PORTC |= (1<<pinNumber); //write 1
				SET_BIT(PORTC,pinNumber);
			}
			else{
				//ERROR
			}
		break;
		case PORT_D:
			if(value == LOW){
				//PORTD &= ~(1<<pinNumber); //write 0
				CLEAR_BIT(PORTD,pinNumber);
			}else if (value == HIGH){
				//PORTD |= (1<<pinNumber); //write 1
				SET_BIT(PORTD,pinNumber);
			}
			else{
				//ERROR
			}
		break;
	}
}
void DIO_toggle(EN_port portNumber, EN_pin pinNumber)
{
	switch(portNumber){
		case PORT_A:
			//PORTA ^= (1<<pinNumber);
			TOGGLE_BIT(PORTA,pinNumber);
		break;
		case PORT_B:
			//PORTB ^= (1<<pinNumber);
			TOGGLE_BIT(PORTB,pinNumber);
		break;
		case PORT_C:
			//PORTC ^= (1<<pinNumber);
			TOGGLE_BIT(PORTC,pinNumber);
		break;
		case PORT_D:
			//PORTD ^= (1<<pinNumber);
			TOGGLE_BIT(PORTD,pinNumber);
		break;
	}
}
void DIO_read(EN_port portNumber, EN_pin pinNumber, EN_value* value)
{
	switch(portNumber){
		case PORT_A:
			//*value = ((PINA&(1<<pinNumber))>>pinNumber);
			*value = READ_BIT(PINA,pinNumber);
		break;
		case PORT_B:
			//*value = ((PINB&(1<<pinNumber))>>pinNumber);
			*value = READ_BIT(PINB,pinNumber);
		break;
		case PORT_C:
			//*value = ((PINC&(1<<pinNumber))>>pinNumber);
			*value = READ_BIT(PINC,pinNumber);
		break;
		case PORT_D:
			//*value = ((PIND&(1<<pinNumber))>>pinNumber);
			*value = READ_BIT(PIND,pinNumber);
		break;
	}
}
