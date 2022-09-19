/*
 * app.h
 *
 * Created: 9/9/2022 5:21:15 PM
 *  Author: hp
 */ 


#ifndef APP_H_
#define APP_H_
#include "../ECUAL/button/button.h"
#include "../ECUAL/LED/LED.h"
#include "../ECUAL/delay/delay.h"
#include "../ECUAL/intINITIALIZER/intINITIALIZER.h"

void appInit(void);
void appStart(void);
void buttonPressed(void);

#endif /* APP_H_ */