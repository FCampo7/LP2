#include <stdio.h>
#include <drivers.h>

class led {

public:

    led(uint8_t l) //: led_nro(l) {
    {
       led_nro = l; 
       init();
    }

    ~led() {

    }

    void init(void) {
        estado = apagado;
        ApagarLed(led_nro);
    }

    void fsm()  {
        switch(estado) {
            case apagado:
                if(cuenta_ms >= cuenta_max) {
                    estado = encendido;
                    EncenderLed(led_nro);
                    cuenta_ms = 0;
                }

            case encendido:
                if(cuenta_ms >= cuenta_ms) {
                    estado = apagado;
                    ApagarLed(led_nro);
                    cuenta_ms = 0;
                }
            
            default:
                init();
        }
    }


private:

    static constexpr uint32_t cuenta_max = 100;
    uint8_t led_nro;
    enum Estado {
        apagado,
        encendido
    } estado;


};