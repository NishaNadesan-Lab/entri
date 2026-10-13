/*
 * GPIO.c
 *
 * Created: 09-10-2026 00:53:54
 * Author : ajith
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRD&= ~(1<<DDD5);
	DDRB|=(1>>DDB5);
/* Replace with your application code */
    while (1) 
    {
		if(PIND&(1<<PIND5))
		{
			PORTB|=(1<<PORTB5);
		}
		else
		{
			PORTB&= ~(1<<PORTB5);
		}
    }
}

