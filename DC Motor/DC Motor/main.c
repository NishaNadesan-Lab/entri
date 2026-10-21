/*
 * DC Motor.c
 *
 * Created: 22-10-2026 00:26:02
 * Author : ajith
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

void dc_motor_init()
{
	DDRD|=((1<<DDD1)|(1<<DDD2)|(1<<DDD3));
	PORTD|=(1<<PORTD3);
}
void forward_rotate()
{
	PORTD|=(1<<PORTD1);
	PORTD&=~(1<<PORTD2);
}
void stop_rotate()
{
	
	PORTD&=~((1<<PORTD1)|(1<<PORTD2));
}
void backward_rotate()
{
	
	PORTD|=(1<<PORTD2);
	PORTD&=~(1<<PORTD1);
}
int main(void)
{
   dc_motor_init();
    while (1) 
	{
		forward_rotate();
		_delay_ms(3000);
		stop_rotate();
		_delay_ms(1500);
		backward_rotate();
		_delay_ms(3000);
    }
}

