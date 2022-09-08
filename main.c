#include <avr/delay.h>
#include"STD_TYPES.h"
#include "bit_math.h"
#include "DIO_interface.h"

void main (void){
	DIO_VidSetPortDirection(1,0b11111111);


    	while(1){
    		DIO_VidSetPinDirection(1,5,1);
    		DIO_VidSetPinValue(1,5,1);
    		//DIO_VidSetPortValue(3,0b11111111);
    			_delay_ms(100);


    	}



	//while(1){}
}
