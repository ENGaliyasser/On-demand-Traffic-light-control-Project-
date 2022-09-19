/*
 * intINITIALIZER.c
 *
 * Created: 9/10/2022 2:57:11 PM
 *  Author: hp
 */ 
#include "intINITIALIZER.h"
void INTERRUPT_init(void){
	
		sei();
		RISING_EDGE_SETUP();
		SETUP_INT0();
	
	
}