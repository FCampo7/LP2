#include <stdint.h>

uint32_t cuenta_ms = 0;

void timer_isr_handler() {
    cuenta_ms++;

    // if(cuenta_ms > 100) {
    //     cuenta_ms = 0;
    //     cambiar_estado_led();
    // }

    return;
}