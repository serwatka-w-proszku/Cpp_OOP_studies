#include "stepper.h"

extern void On(unsigned char);

void Stepper::Step(enum LedState eLedState){
	static unsigned int uiLedState = 0;
	
	if(eLedState == LED_LEFT){
		uiLedState++;
		On(uiLedState%4);
	}
	else{
		uiLedState--;
		On(uiLedState%4);
	}
}

void Stepper::StepLeft(void){
	Step(LED_LEFT);
}

void Stepper::StepRight(void){
	Step(LED_RIGHT);
}
