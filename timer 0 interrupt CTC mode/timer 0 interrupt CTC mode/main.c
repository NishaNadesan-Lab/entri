/*
 * timer 0 interrupt CTC mode.c
 *
 * Created: 30-10-2026 14:51:16
 * Author : ajith
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/interrupt.h>//used when using interrupt

volatile uint16_t overflow_count=0;

void gpio_init()
{
	
	//configuring direction as output
	DDRB|=(1<<DDB5);
	//making it low during start
	PORTB&=~(1<<PORTB5);
}

void timer0_ctc_mode_init()
{
//loading value to TCNT0
TCNT0=0;
//step1:
TCCR0A|=(1<<WGM01);
TCCR0A&=~((1<<WGM00));
TCCR0B&=~(1<<WGM02)	;
/*-------------------Calculation-------------------------------
F_CPU=16000000
prescaler value=64
F_timer=16000000/64
       =250000=250MHz
1 t_tick=1/250000=4us
required delay=1ms=1000us
required ticks=(required delay/t-ticks)-1	 
              = 1000/4 -1
			  =250-1
			  =249 ticks
 */
//step2:configuring prescaler value as 64
TCCR0B|=((1<<CS00) |(1<<CS01));
TCCR0B&=~(1<<CS02);
//step3:loading OCR0A with required ticks
OCR0A=249;
//Step4:enable compare match A interrupt
TIMSK0|=(1<<OCIE0A);
}
ISR(TIMER0_COMPA_vect)
{
	overflow_count++;
	if(overflow_count>=1000)
	{
		PORTB^=(1<<PORTB5);//ON->OFF,OFF->ON
		overflow_count=0;//resetting the overflow count
	}
}
int main(void)
{
	gpio_init();
	sei();//global interrupt enable
	timer0_ctc_mode_init();
    while (1) 
    {
    }
}

