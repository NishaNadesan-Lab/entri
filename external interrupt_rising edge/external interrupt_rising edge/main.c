/*
 * external interrupt_rising edge.c
 *
 * Created: 03-11-2026 00:05:09
 * Author : ajith
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
 
 ISR(INT0_vect)
 {
	 //toggle LED when pressed
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
void gpio_init()
{
	//configuring PB5 as output
    DDRB|=(1<<DDB5);
}
int main(void)
{
	gpio_init();
	external_interrupt_INT0_init();
    while (1) 
    {
    }
}

