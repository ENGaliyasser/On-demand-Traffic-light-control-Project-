/*
 * interrupt.c
 *
 * Created: 9/9/2022 11:50:59 PM
 *  Author: hp
 */ 
#include "interrupt.h"
void RISING_EDGE_SETUP()
{
	SET_BIT(MCUCR,0);
	SET_BIT(MCUCR,1);
}
void SETUP_INT0()
{
	SET_BIT(GICR,6);
}
