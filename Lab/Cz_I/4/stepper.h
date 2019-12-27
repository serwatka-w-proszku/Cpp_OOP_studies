#ifndef STEPPER_H
#define STEPPER_H


enum LedState { LED_LEFT, LED_RIGHT };

class Stepper{
	private:
	unsigned char LedCtr;
	
	void Step(enum LedState);
	
	public:
	void StepLeft(void);
	void StepRight(void);
	
};

#endif
