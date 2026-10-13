/*
 * Delay of 1sec Normal.c
 *
 * Created: 11-10-2026 13:57:24
 * Author : ajith
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#define LED PORTB5

void timer0_init()
{
	
	TCCR0A&= ~((1<<WGM00)|(WGM01));
	TCCR0B |= ((1<<CS02) |(1<<CS00));
}
void delay_1sec()
{
	
	for(uint8_t i=1;i<=61;++i)
	{
		while(!(TIFR0 &(1<<TOV0)));
		TIFR0 |= (1<<TOV0);
	}
}
int main(void)
{
    timer0_init();
	DDRB |=(1<<DDB5);
	while (1) 
    {
		PORTB^=(1<<LED);
		delay_1sec();
    }
}

