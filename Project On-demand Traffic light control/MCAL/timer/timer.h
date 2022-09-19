/*
 * timer.h
 *
 * Created: 9/9/2022 5:24:02 PM
 *  Author: hp
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include <math.h>
#include "../../utilities/bitManipulation.h"
#include "../../utilities/registers.h"


void TIMER0_init();//initialize Timer0
void TIMER0_delay(uint16_t millisec); //delay of specific amount default uses 256 prescalar

#endif /* TIMER_H_ */