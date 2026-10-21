/*
 * Timer 0 delay Normal mode 2.c
 *
 * Created: 21-10-2026 23:57:14
 * Author : ajith
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>

void timer0_normal_mode_init()
{
	
	TCCR0A&= ~((1<<WGM00)|(WGM01));
	TCNT0=6;
	TCCR0B |=((1<<CS01)|(1<<CS00));
	TCCR0B&= ~(CS02);
	}
	void delay_1sec()
	{
		
		for(uint16_t i=0;i<1000;++i)
		{
			TCNT0=6;
			TIFR0|=(1<<TOV0);
			while(!(TIFR0) &(1<<TOV0));
		}
	}
int main(void)
{
    timer0_normal_mode_init();
	DDRB|=(1<<DDB5);
	PORTB &=~(1<<PORTB5);
    while (1) 
    {
		PORTB^=(1<<PORTB5);
		delay_1sec();
    }
}

