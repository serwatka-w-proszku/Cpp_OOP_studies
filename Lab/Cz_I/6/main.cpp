#include "stepper.h"

Stepper MyStepper(2);

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 12000 * iTimeInMs;
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{
	while(1){
		Delay(2000);
		MyStepper.StepLeft();
	}
}
