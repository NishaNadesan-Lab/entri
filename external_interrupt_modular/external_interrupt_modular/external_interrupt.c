/*
 * external_interrupt.c
 *
 * Created: 06-11-2026 00:31:10
 *  Author: ajith
 */ 

#include <avr/interrupt.h>
#include "external_interrupt.h"

ISR(INT0_vect)
{
//Toggle the LED connected to port B5
PORTB^=(1<<PORTB5);
	
}
void external_interrupt_INT0_init()
{
	//1.configuring INT0 as interrupt
	EIMSK|=(1<<INT0);
	//2.configuring PD2 as input for external interrupt
	DDRD&=~(1<<DDD2);
	//3.configuring interrupt trigger:rising edge
	EICRA|=((1<<ISC01)|(1<<ISC00));
	//4.enabling global interrupt
	sei();
};
