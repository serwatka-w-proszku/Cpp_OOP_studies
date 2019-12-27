#ifndef STEPPER_H
#define STEPPER_H

#include "ledinv.h"

enum LedState { LED_LEFT, LED_RIGHT };

class Stepper{
	private:
	unsigned char ucLedCtr;
	unsigned char ucInversion;
	void Step(enum LedState);
	Led MyLed;
	LedInv MyLedInv;
	
	public:
	void StepLeft(void);
	void StepRight(void);
	void SetMode(unsigned char);

};

#endif
