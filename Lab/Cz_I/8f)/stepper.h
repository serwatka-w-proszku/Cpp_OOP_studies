#ifndef STEPPER_H
#define STEPPER_H

#include "led.h"

enum LedState { LED_LEFT, LED_RIGHT };

class Stepper{
	private:
	unsigned char ucLedCtr;
	void Step(enum LedState);
	Led *pMyLed;
	
	public:
	
	void StepLeft(void);
	void StepRight(void);
	void SetLed(Led &MyLed);
};

#endif
