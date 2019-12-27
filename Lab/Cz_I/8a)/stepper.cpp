#include "stepper.h"

void Stepper::Step(enum LedState eLedState){	
	if(eLedState == LED_LEFT){
		LedCtr++;
	}
	else{
		LedCtr--;
	}
	MyLed.On(LedCtr%4);
}

void Stepper::StepLeft(void){
	Step(LED_LEFT);
}

void Stepper::StepRight(void){
	Step(LED_RIGHT);
}
