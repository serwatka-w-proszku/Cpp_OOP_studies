#include "stepper.h"
#include "keyboard.h"

Stepper MyStepper;

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 12000 * iTimeInMs;
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{	
	Keyboard MyKeyboard;
	while(1){
		Delay(2000);
		if(MyKeyboard.eRead()==BUTTON_4){
			MyStepper.StepLeft();
		}
	}
}
