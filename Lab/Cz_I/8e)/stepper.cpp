#include "stepper.h"

void Stepper::SetLed(Led &MyLed){
	pMyLed=&MyLed;	
}

void Stepper::Step(enum LedState eLedState){	
	if(eLedState == LED_LEFT){
		ucLedCtr++;
	}
	else{
		ucLedCtr--;
	}
	pMyLed->On(ucLedCtr%4);
}

void Stepper::StepLeft(void){
	Step(LED_LEFT);
}

void Stepper::StepRight(void){
	Step(LED_RIGHT);
}
