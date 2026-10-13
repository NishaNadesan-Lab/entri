/*
 * GPIO Pull up circuit.c
 *
 * Created: 11-10-2026 00:24:07
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
		if (!(PIND&(1<<PIND5)))
		{
			PORTB^=(1<<PORTB5);
	    }
		while(!(PIND&(1<<PIND5)));
		
		
	}
}
