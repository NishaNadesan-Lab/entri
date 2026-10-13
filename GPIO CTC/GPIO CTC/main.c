/*
 * GPIO CTC.c
 *
 * Created: 13-10-2026 23:56:30
 * Author : ajith
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>

void gpio_init()
{
	DDRB|= (1<<DDB5);
}
void timer0_ctc_init()
{
	TCCR0A|=(1<<WGM01);
	TCCR0A&=~(1<<WGM00);
    TCCR0B|=((1<<CS01)|(1<<CS00));
	TCCR0B&=~(1<<CS02);
	OCR0A=249;
}
void delay_1sec()
{
	for(uint16_t i=0;i<1000;i++)
	{
    while (!(TIFR0 &(1<<OCF0A))) ;
	TIFR0|=(1<<OCF0A);
	}
}
int main(void)
{
	gpio_init();
	timer0_ctc_init();
	while (1)
	{
		PORTB^=(1<<PORTB5);
		delay_1sec();
	}
}
