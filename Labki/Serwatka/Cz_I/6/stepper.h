#ifndef STEPPER_H
#define STEPPER_H

#include "led.h"

enum LedState { LED_LEFT, LED_RIGHT };

class Stepper :private Led{

	private:
	unsigned char LedCtr;
	
	void Step(enum LedState);
	
	public:
	void StepLeft(void);
	void StepRight(void);
	Stepper (unsigned char);
};

#endif
