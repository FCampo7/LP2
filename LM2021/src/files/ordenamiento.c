#include "ordenamiento.h"

//* PARTE A
//* Ambos archivos creados

//* PARTE B
static void swap(int32_t *p1, int32_t *p2){
    int32_t aux=*p1;
    *p1=*p2;
    *p2=aux;
}

//* PARTE C
void ordenarBurbuja(int32_t p[], int32_t size){
    for(int32_t i=0; i<size; i++)
        for(int32_t j=i; j<size; j++)
            if(p[i]>p[j])
                swap(&p[i], &p[j]);
}

//* PARTE D
void (*pswap)(int32_t*, int32_t*)=&swap;

void poredenarBurbuja(int32_t p[], int32_t size){
    for(int32_t i=0; i<size; i++)
        for(int32_t j=i; j<size; j++)
            if(p[i]>p[j])
                pswap(&p[i], &p[j]);
}

//* PARTE E
//! Para el punto E la Funcion ordenarBurbuja no va a funcionar pero pordenarBurbuja si, ya que el puntero a la funcion swap no es static
//! lo que significa que sí esta linkeada la funcion