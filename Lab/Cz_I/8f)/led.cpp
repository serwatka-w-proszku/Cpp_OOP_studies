#include <LPC21xx.H>
#include "led.h"

#define mLED0 0x1<<16
#define mLED1 0x1<<17
#define mLED2 0x1<<18
#define mLED3 0x1<<19

Led::Led(){
	IO1DIR |= (mLED0 | mLED1 | mLED2 | mLED3);
}
