#ifndef ORDENAMIENTO_H
#define ORDENAMIENTO_H

#include <stdint.h>
#include <stdlib.h>

//* PARTE A
//* Ambos archivos creados

//* PARTE B
static void swap(int32_t *p1, int32_t *p2);

//* PARTE C
void ordenarBurbuja(int32_t p[], int32_t size);

//* PARTE D
void (*pswap)(int32_t*, int32_t*);
void poredenarBurbuja(int32_t p[], int32_t size);

//* PARTE E
//! Para el punto E la Funcion ordenarBurbuja no va a funcionar pero pordenarBurbuja si, ya que el puntero a la funcion swap no es static
//! lo que significa que sí esta linkeada la funcion

#endif