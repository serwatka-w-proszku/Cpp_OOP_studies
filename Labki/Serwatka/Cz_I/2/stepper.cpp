#include <LPC21xx.H>
#include "stepper.h"

#define mLED0 0x1<<16
#define mLED1 0x1<<17
#define mLED2 0x1<<18
#define mLED3 0x1<<19

void Stepper::Init(void){
	IO1DIR |= (mLED0 | mLED1 | mLED2 | mLED3);
	IO1CLR = (mLED0 | mLED1 | mLED2 | mLED3);
	IO1SET = mLED0;
}

void Stepper::On(unsigned char ucNumerDiody){
	IO1CLR = (mLED0 | mLED1 | mLED2 | mLED3);

	switch (ucNumerDiody){
		case 0:
			IO1SET = mLED0;
			break;		
		case 1:
			IO1SET = mLED1;
			break;		
		case 2:
			IO1SET = mLED2;
			break;		
		case 3:
			IO1SET = mLED3;
			break;
		default:
			break;
	}
}

void Stepper::Step(enum LedState eLedState){
	static unsigned int uiLedState = 0;
	
	if(eLedState == LED_LEFT){
			uiLedState++;
			On((uiLedState%4));
	}
	else{
			uiLedState--;
			On((uiLedState%4));
	}
}

void Stepper::StepLeft(void){
	Step(LED_LEFT);
}

void Stepper::StepRight(void){
	Step(LED_RIGHT);
}

