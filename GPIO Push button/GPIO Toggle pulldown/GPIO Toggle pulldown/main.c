/*
 * GPIO Toggle pulldown.c
 *
 * Created: 10-10-2026 23:30:53
 * Author : ajith
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
   DDRD&= ~(1<<DDD5);
   DDRB|=(1<<DDB5);
	  while (1) 
    {
		if(PIND&(1<<PIND5))
		{
			PORTB=~(1<<PORTB5);
			_delay_ms(1000);
		}
		else
		{
			PORTB&=(1<<PORTB5);
			_delay_ms(1000);
		}
    }
}

