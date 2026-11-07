/*
 * gpio.c
 *
 * Created: 07-11-2026 01:04:55
 *  Author: ajith
 */ 
#include "gpio.h"
void gpio_init()
{
	
	DDRB|=(1<<DDB5);
	PORTB&=~(1<<PORTB5);
}