#include "matematica.h"

//* Parte A
int32_t Sumar_Array(int16_t* x, int16_t xn){
    int32_t resultado=0;
    
    for(int16_t i=0; i<xn; i++)
        resultado+=x[i];

    return resultado;
}

//* Parte C
uint16_t Cuenta_Accesos(void){
    printf("Direccion de la variable veces: %p\n", &veces);
    return ++veces;
}