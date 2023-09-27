#ifndef LED_H
#define LED_H

#include "driver.h"

class Led{
	public:
		Led(int8_t p);
		~Led();
		void Mde_Led();
	private:
		void Init();
		static constexpr uint32_t cuenta_max=100;
		enum estado {Prendido, Apagado} e;
		int8_t pin;
};

#endif