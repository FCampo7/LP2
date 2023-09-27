#include "led.h"

Led::Led(int8_t p){
	Apagar_Led(p);
	e=Apagado;
	delay_ms=0;
	pin=p;
}

Led::~Led(){}

void Led::Init(){
	Apagar_Led(pin);
	e=Apagado;
	delay_ms=0;
}

void Led::Mde_Led(){
	switch (e)
	{
		case Apagado:
			if(delay_ms>=cuenta_max){
				e=Prendido;
				Encender_Led(pin);
				delay_ms=0;
			}
			break;
		case Prendido:
			if(delay_ms>=cuenta_max){
				e=Apagado;
				Apagar_Led(pin);
				delay_ms=0;
			}
			break;
		default:
			this->Init();
	}
}