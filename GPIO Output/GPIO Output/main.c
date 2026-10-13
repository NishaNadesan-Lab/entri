/*
 * GPIO Output.c
 *
 * Created: 08-10-2026 23:33:45
 * Author : ajith
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRB|=((1<<DDB5)|(1<<DDB4));/* Replace with your application code */
    while (1) 
    {
		PORTB|=(1<<PORTB5);
		_delay_ms(1000);
		PORTB&= ~(1<<PORTB5);
		_delay_ms(1000);
    }
}

