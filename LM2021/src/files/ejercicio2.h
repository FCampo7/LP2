#ifndef EJERCICIO2_H
#define EJERCICIO2_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


//Parte A
extern char etext;
extern int main(void);
void imprimirEtext();

int32_t Sumar2(int32_t a, int32_t b);
int32_t (*pSumar2)(int32_t, int32_t);
int (*pMain)();

//Parte B
/*
**Problemas para acceder al segmento de memoria .data, no se reconoce
extern char edata;
void imprimirEdata();
*/

//Parte C

extern char end;
void imprimirEnd();

//Parte D
int32_t Sumar2D(int32_t a, int32_t b);

#endif