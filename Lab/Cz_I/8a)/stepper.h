#ifndef STEPPER_H
#define STEPPER_H

#include "led.h"

enum LedState { LED_LEFT, LED_RIGHT };

class Stepper{
	private:
	unsigned char LedCtr;
	void Step(enum LedState);
	Led MyLed;
	
	public:
	void StepLeft(void);
	void StepRight(void);
	
};

#endif
