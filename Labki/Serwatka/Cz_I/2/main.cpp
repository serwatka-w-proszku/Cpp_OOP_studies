#include "stepper.h"

Stepper MyStepper;

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 12000 * iTimeInMs;
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{
	MyStepper.Init();
	while(1){
		Delay(100);
		MyStepper.StepLeft();
	}
}
