/*
 * interrupt.h
 *
 * Created: 9/9/2022 11:51:16 PM
 *  Author: hp
 */ 


#ifndef INTERRUPT_H_
#define INTERRUPT_H_

#include "../../utilities/bitManipulation.h"
#include "../../utilities/registers.h"
//Interrupt vectors
#define INT_0 __vector_1
#define INT_1 __vector_2

//Enable interrupts
#define sei()  __asm__ __volatile__ ("sei" ::: "memory")
#define cli()  __asm__ __volatile__ ("cli" ::: "memory")



void RISING_EDGE_SETUP(void);
void SETUP_INT0(void);


//ISR macro
#define ISR(INT_VECT) \
void INT_VECT(void) __attribute__ ((signal,used)); \
void INT_VECT(void)



#endif /* INTERRUPT_H_ */