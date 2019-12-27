#include "stepper.h"

void Stepper::SetMode(unsigned char ucSetModeInversion){
	ucInversion=ucSetModeInversion;
}

void Stepper::Step(enum LedState eLedState){	
	if(eLedState == LED_LEFT){
		ucLedCtr++;
	}
	else{
		ucLedCtr--;
	}
	if(ucInversion==1){
		MyLedInv.On(ucLedCtr%4);
	}
	else{
		MyLed.On(ucLedCtr%4);
	}	
}

void Stepper::StepLeft(void){
	Step(LED_LEFT);
}

void Stepper::StepRight(void){
	Step(LED_RIGHT);
}
