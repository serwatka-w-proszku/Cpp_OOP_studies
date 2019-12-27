#include "stepper.h"
#include "keyboard.h"

Keyboard MyKeyboard;
Led MyLed;
LedInv MyLedInv;
Stepper MyStepper;

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 12000 * iTimeInMs;
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{	
	if (MyKeyboard.eRead()==BUTTON_4){
		MyStepper.SetLed(MyLedInv);
	}
	else{
		MyStepper.SetLed(MyLed);
	}
	while(1){
		Delay(2000);
		MyStepper.StepLeft();
	}
}
