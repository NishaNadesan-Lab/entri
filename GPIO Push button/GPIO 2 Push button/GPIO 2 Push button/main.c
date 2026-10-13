/*
 * GPIO 2 Push button.c
 *
 * Created: 10-10-2026 00:33:57
 * Author : ajith
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>


int main(void)
{
    DDRD&= ~(1<<DDD5);
	DDRB|=(1<<DDB5);
    while (1) 
    {
		if(PIND& (1<<PIND5))
		{
		PORTB|=(1<<PORTB5);
		}
		else
		{
		PORTB&=~(1<<PORTB5);
		}
    }
}

