#include <LPC21xx.H>
#include "led.h"

#define mLED0 0x1<<16
#define mLED1 0x1<<17
#define mLED2 0x1<<18
#define mLED3 0x1<<19

extern unsigned char ucInversion;

Led::Led(){
	IO1DIR |= (mLED0 | mLED1 | mLED2 | mLED3);
}

void Led::On(unsigned char ucNumerDiody){
	if(ucInversion==1){
		IO1SET = (mLED0 | mLED1 | mLED2 | mLED3);
		switch (ucNumerDiody){	
			case 0:
				IO1CLR = mLED0;
				break;		
			case 1:
				IO1CLR = mLED1;
				break;		
			case 2:
				IO1CLR = mLED2;
				break;		
			case 3:
				IO1CLR = mLED3;
				break;
			default:
				break;
		}
	}
	else{
		IO1CLR = (mLED0 | mLED1 | mLED2 | mLED3);
		switch (ucNumerDiody){
			case 0:
				IO1SET = mLED0;
				break;		
			case 1:
				IO1SET = mLED1;
				break;		
			case 2:
				IO1SET = mLED2;
				break;		
			case 3:
				IO1SET = mLED3;
				break;
			default:
				break;
		}
	}
}
