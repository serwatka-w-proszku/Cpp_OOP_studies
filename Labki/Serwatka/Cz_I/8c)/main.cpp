#include "stepper.h"
#include "keyboard.h"

unsigned char ucInversion;
Stepper MyStepper;
Keyboard MyKeyboard;

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 12000 * iTimeInMs;
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{	
	if (MyKeyboard.eRead()==BUTTON_4){
		ucInversion=1;
	}
	else{
		ucInversion=0;
	}
	
	while(1){
		Delay(2000);
		MyStepper.StepLeft();
	}
}
