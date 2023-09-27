#ifndef TIMER_H
#define TIMER_H

#include <stdint.h>

uint32_t delay_ms=0;

void timer_isr_handler(){
	delay_ms++;
}

#endif