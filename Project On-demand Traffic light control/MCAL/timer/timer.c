/*
 * timer.c
 *
 * Created: 9/9/2022 5:24:29 PM
 *  Author: ali yasser ali abdallah
 */ 
#include "timer.h"
void TIMER0_init(){
	TCCR0 = 0x00; //normal mode
}
void TIMER0_delay(uint16_t millisec){
	uint16_t noOverFlows,TimerInitial;
	double maxdelay,tick;
	uint32_t count=0;

	tick = 1.024; //ms    Ttick = Presc/FCPU
	maxdelay= 262.144; //ms		Tmaxdelay = Ttick * 2^8
	if(millisec<maxdelay){
		TimerInitial = (maxdelay-millisec)/tick;
		noOverFlows = 1;
		
		}else if(millisec == (int)maxdelay){
		TimerInitial=0;
		noOverFlows=1;
		}else{
		noOverFlows = ceil((double)millisec/maxdelay);
		TimerInitial = (pow(2,8))-((double)millisec/tick)/noOverFlows;
		
	}
	TCNT0 = TimerInitial;
	SET_BIT(TCCR0,0);
	CLEAR_BIT(TCCR0,1);
	SET_BIT(TCCR0,2); //set 1024 prescaler
	while(count<noOverFlows){
		//busy wait
		while(READ_BIT(TIFR,0)==0);
		//clear overflow flag
		SET_BIT(TIFR,0);
		//increment counter
		count++;
	}
	//Timer stop
	TCCR0 = 0x00;
}
