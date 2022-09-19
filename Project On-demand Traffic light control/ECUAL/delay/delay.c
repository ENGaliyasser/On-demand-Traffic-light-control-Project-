/*
 * delay.c
 *
 * Created: 9/10/2022 12:52:03 PM
 *  Author: ali yasser ali abdallah
 */ 

#include "delay.h"
void millisec_delay_init(){
	
	TIMER0_init();
	
}

void millisec_delay(uint16_t millisec){
	
	
	TIMER0_delay(millisec);
	
	
}
