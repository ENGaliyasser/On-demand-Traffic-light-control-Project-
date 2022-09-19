/*
 * registers.h
 *
 * Created: 9/9/2022 4:36:20 PM
 *  Author: ali yasser ali abdallah
 */ 


#ifndef REGISTERS_H_
#define REGISTERS_H_

#include "types.h"
//**********************************************************************
// DIO REGISTERS

//PortA registers
#define PORTA (*(volatile uint8_t*)(0x3B))
#define DDRA (*(volatile uint8_t*)(0x3A))
#define PINA (*(volatile uint8_t*)(0x39))

//PortB registers
#define PORTB (*(volatile uint8_t*)(0x38))
#define DDRB (*(volatile uint8_t*)(0x37))
#define PINB (*(volatile uint8_t*)(0x36))

//PortC registers
#define PORTC (*(volatile uint8_t*)(0x35))
#define DDRC (*(volatile uint8_t*)(0x34))
#define PINC (*(volatile uint8_t*)(0x33))

//PortD registers
#define PORTD (*(volatile uint8_t*)(0x32))
#define DDRD (*(volatile uint8_t*)(0x31))
#define PIND (*(volatile uint8_t*)(0x30))

//**********************************************************************
//Timer0 REGISTERS

#define TCCR0 (*(volatile uint8_t*)(0x53))
#define TCNT0 (*(volatile uint8_t*)(0x52))
#define TIFR (*(volatile uint8_t*)(0x58))
#define TIMSK (*(volatile uint8_t*)(0x59))
#define OCR0 (*(volatile uint8_t*)(0x5C))

//**********************************************************************
// Interrupt REGISTERS

#define SREG (*(volatile uint8_t*)(0x5F))
#define GIFR (*(volatile uint8_t*)(0x5A))
#define GICR (*(volatile uint8_t*)(0x5B))
#define MCUCR (*(volatile uint8_t*)(0x55))

#endif /* REGISTERS_H_ */