/*
 * _7_segment.c
 *
 * Created: 7/8/2024 2:48:58 PM
 *  Author: elsawah
 */ 


#include <avr/io.h>
#define F_CPU 8000000UL 
#include <util/delay.h>
#include "seven.h"
int main(void)
{
	seven_seg_init('A');
	unsigned char counter=0;
    while(1)
    {
        for(counter=0;counter<=9;counter++)
		{
			seven_seg_write('A',counter);
			_delay_ms(2000);	
		}		
    }
}