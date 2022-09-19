/*
 * app.c
 *
 * Created: 9/9/2022 5:21:32 PM
 *  Author: hp
 */ 
#include "app.h"
int button = 0 ,led ;
EN_value* x ;
void appInit(void){
		//Car LED initialization
		LED_init(ledCarPort,greenLedCarPin);
		LED_init(ledCarPort,yellowLedCarPin);
		LED_init(ledCarPort,redLedCarPin);
		
		//Pedestrian LED initialization
		LED_init(ledPedPort,greenLedPedPin);
		LED_init(ledPedPort,yellowLedPedPin);
		LED_init(ledPedPort,redLedPedPin);
		
		//Button initialization
		BUTTON_init(button1Port,button1Pin);
		
		//Timer initialization
		millisec_delay_init();
		
		//interrupt initialization
		INTERRUPT_init();
}
void appStart(void){
	if(!button){
		led = 0 ;
		LED_off(ledPedPort,greenLedPedPin);
		LED_off(ledPedPort,yellowLedPedPin);
		//LED_on(ledPedPort,redLedPedPin);//*
				
		LED_on(ledCarPort,greenLedCarPin);
		LED_off(ledCarPort,yellowLedCarPin);
		LED_off(ledCarPort,redLedCarPin);
		//millisec_delay(5000);
		for(int i=0 ;i<50 ;i++){
			if(!button){
				millisec_delay(100);
			}
			else{
				buttonPressed();
				return 0 ;
			}
		}
	}
	else{
		buttonPressed();
		return 0 ;
	}
	if(!button){
		    led = 1 ;
			//LED_off(ledPedPort,redLedPedPin);
			//LED_off(ledCarPort,greenLedCarPin);
			for(int i=0;i<5;i++){
				LED_on(ledCarPort,yellowLedCarPin);
				//LED_on(ledPedPort,yellowLedPedPin);
				//millisec_delay(390);
				if(!button){
					millisec_delay(390);
				}
				else{
					buttonPressed();
					return 0 ;
				}
				LED_off(ledCarPort,yellowLedCarPin);
				LED_off(ledPedPort,yellowLedPedPin);
				//millisec_delay(190);
				if(!button){
					millisec_delay(190);
				}
				else{
					buttonPressed();
					return 0 ;
				}
				LED_on(ledCarPort,yellowLedCarPin);
				//LED_on(ledPedPort,yellowLedPedPin);
				//millisec_delay(390);
				if(!button){
					millisec_delay(390);
				}
				else{
					buttonPressed();
					return 0 ;
				}
			}
	}
	else{
		buttonPressed();
		return 0 ;
	}
	if(!button){
		led = 2;
		//LED_on(ledPedPort,greenLedPedPin);//*
		LED_off(ledPedPort,yellowLedPedPin);
		LED_off(ledPedPort,redLedPedPin);
		
		LED_off(ledCarPort,greenLedCarPin);
		LED_off(ledCarPort,yellowLedCarPin);
		LED_on(ledCarPort,redLedCarPin);
		//millisec_delay(5000);
		for(int i=0 ;i<50 ;i++){
			if(!button){
				millisec_delay(100);
			}
			else{
				buttonPressed();
				return 0 ;
			}
		}
	}
	else{
		buttonPressed();
		return 0 ;
	}	
	if(!button){
		led=4;
		//LED_off(ledPedPort,greenLedPedPin);
		//LED_off(ledCarPort,redLedCarPin);
		for(int i=0;i<5;i++){
			LED_on(ledCarPort,yellowLedCarPin);
			//LED_on(ledPedPort,yellowLedPedPin);
			//millisec_delay(390);
			if(!button){
				millisec_delay(390);
			}
			else{
				buttonPressed();
				return 0 ;
			}
			LED_off(ledCarPort,yellowLedCarPin);
			LED_off(ledPedPort,yellowLedPedPin);
			//millisec_delay(190);
			if(!button){
				millisec_delay(190);
			}
			else{
				buttonPressed();
				return 0 ;
			}
			LED_on(ledCarPort,yellowLedCarPin);
			//LED_on(ledPedPort,yellowLedPedPin);
			//millisec_delay(390);
			if(!button){
				millisec_delay(390);
			}
			else{
				buttonPressed();
				return 0 ;
			}
		}
	}
	else{
		buttonPressed();
		return 0 ;
	}	
	
	
}
void buttonPressed(void){
	button=0 ;
	millisec_delay(500);
	BUTTON_read(PORT_D,PIN2,x);
	if(*x){return 0;}
	switch(led){
		case 0 :
		case 1 :
			LED_off(ledPedPort,greenLedPedPin);
			LED_off(ledPedPort,yellowLedPedPin);
			LED_on(ledPedPort,redLedPedPin);
					
			LED_on(ledCarPort,greenLedCarPin);
			LED_off(ledCarPort,yellowLedCarPin);
			LED_off(ledCarPort,redLedCarPin); 			
		    //millisec_delay(5000);
			//LED_off(ledPedPort,redLedPedPin);
			//LED_off(ledCarPort,greenLedCarPin);				
			for(int i=0;i<5;i++){
				LED_on(ledCarPort,yellowLedCarPin);
				LED_on(ledPedPort,yellowLedPedPin);
				millisec_delay(390);
				LED_off(ledCarPort,yellowLedCarPin);
				LED_off(ledPedPort,yellowLedPedPin);
				millisec_delay(190);
				LED_on(ledCarPort,yellowLedCarPin);
				LED_on(ledPedPort,yellowLedPedPin);
				millisec_delay(390);
			}	
				LED_off(ledPedPort,redLedPedPin);
				LED_off(ledCarPort,greenLedCarPin);
				
				LED_on(ledPedPort,greenLedPedPin);
				LED_off(ledPedPort,yellowLedPedPin);
				LED_off(ledCarPort,yellowLedCarPin);
				LED_on(ledCarPort,redLedCarPin);
				millisec_delay(5000);
				//LED_off(ledPedPort,greenLedPedPin);
				//LED_off(ledCarPort,redLedCarPin);
			for(int i=0;i<5;i++){
				LED_on(ledCarPort,yellowLedCarPin);
				LED_on(ledPedPort,yellowLedPedPin);
				millisec_delay(390);
				LED_off(ledCarPort,yellowLedCarPin);
				LED_off(ledPedPort,yellowLedPedPin);
				millisec_delay(190);
				LED_on(ledCarPort,yellowLedCarPin);
				LED_on(ledPedPort,yellowLedPedPin);
				millisec_delay(390);
			}
			break;
		case 2 :
				LED_on(ledPedPort,greenLedPedPin);
				LED_off(ledPedPort,yellowLedPedPin);
				LED_off(ledCarPort,yellowLedCarPin);
				LED_on(ledCarPort,redLedCarPin);
				millisec_delay(5000);
				//LED_off(ledPedPort,greenLedPedPin);
				//LED_off(ledCarPort,redLedCarPin);
				for(int i=0;i<5;i++){
					LED_on(ledCarPort,yellowLedCarPin);
					LED_on(ledPedPort,yellowLedPedPin);
					millisec_delay(390);
					LED_off(ledCarPort,yellowLedCarPin);
					LED_off(ledPedPort,yellowLedPedPin);
					millisec_delay(190);
					LED_on(ledCarPort,yellowLedCarPin);
					LED_on(ledPedPort,yellowLedPedPin);
					millisec_delay(390);
				}
				break;
		case 4 :
				LED_on(ledPedPort,greenLedPedPin);
				LED_off(ledPedPort,yellowLedPedPin);
				LED_off(ledPedPort,redLedPedPin);
				
				LED_off(ledCarPort,greenLedCarPin);
				LED_off(ledCarPort,yellowLedCarPin);
				LED_on(ledCarPort,redLedCarPin);
				//millisec_delay(5000);
				//LED_off(ledPedPort,redLedPedPin);
				//LED_off(ledCarPort,greenLedCarPin);
				for(int i=0;i<5;i++){
					LED_on(ledCarPort,yellowLedCarPin);
					LED_on(ledPedPort,yellowLedPedPin);
					millisec_delay(390);
					LED_off(ledCarPort,yellowLedCarPin);
					LED_off(ledPedPort,yellowLedPedPin);
					millisec_delay(190);
					LED_on(ledCarPort,yellowLedCarPin);
					LED_on(ledPedPort,yellowLedPedPin);
					millisec_delay(390);
				}
				LED_off(ledPedPort,redLedPedPin);
				LED_off(ledCarPort,greenLedCarPin);
				
				LED_on(ledPedPort,greenLedPedPin);
				LED_off(ledPedPort,yellowLedPedPin);
				LED_off(ledCarPort,yellowLedCarPin);
				LED_on(ledCarPort,redLedCarPin);
				millisec_delay(5000);
				for(int i=0;i<5;i++){
					LED_on(ledCarPort,yellowLedCarPin);
					LED_on(ledPedPort,yellowLedPedPin);
					millisec_delay(390);
					LED_off(ledCarPort,yellowLedCarPin);
					LED_off(ledPedPort,yellowLedPedPin);
					millisec_delay(190);
					LED_on(ledCarPort,yellowLedCarPin);
					LED_on(ledPedPort,yellowLedPedPin);
					millisec_delay(390);
				}
				break;
	}
	button = 0;
	
}

ISR(INT_0){
	button=1;
}