#define F_CPU 4000000UL
#include <avr/io.h>
#include "util/delay.h"


#define stepPin PA4            //Define Step pin
#define dirPin PA6             //Define Direction pin
#define Enable PA5              //Define Enable pin


int main(void)
{
	               
	PORTA.DIR |= PIN4_bm | PIN5_bm | PIN6_bm ;
	PORTA.DIRSET |= PIN6_bm;
	while (1)
	{


		PORTA.OUTSET = PIN4_bm;
		_delay_us(2000);
		/* LED0 off */
		PORTA.OUTCLR = PIN4_bm;
		_delay_us(2000);
	}
}
