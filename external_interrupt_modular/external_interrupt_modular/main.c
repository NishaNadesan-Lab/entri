/*
 * main.c
 *
 * Created: 07-11-2026 01:20:38
 *  Author: ajith
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
//#include <avr/interrupt.h>
#include "gpio.h"
#include "external_interrupt.h"
int main(void)
{
	gpio_init();
	external_interrupt_INT0_init();
while(1)
 {	
 }

}