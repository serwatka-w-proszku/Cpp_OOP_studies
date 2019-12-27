#ifndef STEPPER_H
#define STEPPER_H

#include "ledinv.h"

enum LedState { LED_LEFT, LED_RIGHT };

class Stepper{
	private:
	unsigned char ucLedCtr;
	void Step(enum LedState);
	Led MyLed;
	LedInv MyLedInv;
	
	public:
	void StepLeft(void);
	void StepRight(void);
};

#endif
