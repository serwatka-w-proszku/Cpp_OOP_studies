#include "stepper.h"
#include "led.h"

Stepper MyStepper;
Led MyLed;

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 12000 * iTimeInMs;
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{
	while(1){
		Delay(100);
		MyStepper.StepLeft();
	}
}
