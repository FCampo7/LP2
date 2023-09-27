#include "ejercicio2.h"


//Parte A

void imprimirEtext(){
    printf("Direccion de memoria etext: %p\nExpresa el fin de la region de memoria text, que es donde se encunetra cargado el codigo del programa.\n", &etext);
}

int32_t Sumar2(int32_t a, int32_t b){
    return a+b;
}

int32_t (*pSumar2)(int32_t, int32_t)=&Sumar2;
int (*pMain)()=&main;

//Parte B
/*
**Problemas para acceder al segmento de memoria .data, no se reconoce
void imprimirEdata(){
    printf("Direccion de memoria edata: %p\nExpresa el fin de la region de memoria de \n", &edata);
}
*/

//Parte C

void imprimirEnd(){
    printf("Direccion de memoria end: %p\nExpresa el fin de la region de memoria de datos (bss), que es donde se encunetran las variables no inicializadas.\n", &end);
}

//Parte D

int32_t Sumar2D(int32_t a, int32_t b){
    printf("Direccion de memoria a: %p\nDireccion de memoria b: %p\n", &a, &b);
    return a+b;
}