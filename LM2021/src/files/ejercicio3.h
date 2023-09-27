#ifndef EJERCICIO3_H
#define EJERCICIO3_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define BUFFER_SIZE 5 //Define el tamaño de los buffers


//*Parte A


/** 
* *struct colaDatos_t \ 
* !no perder referencia al primer nodo
* @param dato variable entera de 8bits
* @param *next puntero al proximo nodo
*/
typedef struct colaDatos_t{
    int8_t dato;
    struct colaDatos_t *next;
} coladatos_t;


//*typedef para facilitar el manejo de punteros dobles en las funciones
typedef coladatos_t* pcola;


/**
* *init_colaDatos: agrega nodos a la cola de datos
* @param d es el valor a agregar en el nuevo nodo
*/
pcola init_colaDatos(int8_t d);


/** 
* *agregar_dato
* @param *bc es un puntero doble de tipo colaDatos_t
* @param d valor a ingresar
*/
void agregar_dato(pcola *cd, int8_t d);


/** 
* *agregar_dato
* @param *bc es un puntero doble de tipo colaDatos_t
*/
int8_t sacar_dato(pcola *cd);


/**
* *limpiar_cola
* @param *bc es un puntero doble de tipo colaDatos_t
*/
void limpiar_cola(pcola *cd);


//*Parte B


/**
* *bufferCircular_t
* @param buffer[BUFFER_SIZE] es el buffer y BUFFER_SIZE es el tamaño que va a tener el buffer, se pude ajustar cambiando el valor de la definicion
* @param lIndex es el indice de lectura
* @param eIndex es el indice de escritura
* @param largoBuffer es el largo ocupado por el buffer
*/
typedef struct bufferCircular_t{
    int8_t *buffer;
    uint8_t lIndex;
    uint8_t eIndex;
    uint8_t largoBuffer;
} bufferCircular_t;


/**
* *init_bCircular: inicializa el struct bufferCircular_t en 0
* @param *bc recibe la direccion de memoria de la estructura
*/
void init_bCircular(bufferCircular_t *bc);


/**
* *escribir_bCircular: escribe un valor en el buffer
* @param *bc recibe la direccion de memoria de la estructura
* @param dato es el valor a ingresar en buffer
*/
void escribir_bCircular(bufferCircular_t *bc, int8_t dato);


/**
* *leer_bCircular: lee un valor del buffer
* @param *bc recibe la direccion de memoria de la estructura
*/
int8_t leer_bCircular(bufferCircular_t *bc);


/**
* *liberar_bCircular: libera la memoria reservada por el buffer circular
* @param *bc recibe la direccion de memoria de la estructura
*/
void liberar_bCircular(bufferCircular_t *bc);


//*Parte C


/**
* *dobleBuffer_t
* @param *bufferLectura es el buffer de lectura, va a tener un tamaño definido por BUFFER_SIZE
* @param *bufferEscritura es el buffer de escritura, va a tener un tamaño definido por BUFFER_SIZE
* @param lIndex es el indice de lectura
* @param eIndex es el indice de escritura
*/
typedef struct dobleBuffer_t{
    int8_t *bufferLectura;
    int8_t *bufferEscritura;
    uint8_t lIndex;
    uint8_t eIndex;
} dobleBuffer_t;


/**
* *init_dobleBuffer: inicializa la estructura doble buffer
* @param *db recibe la direccion de memoria de la estructura
*/
void init_dobleBuffer(dobleBuffer_t *db);


/**
* *escribir_dBuffer: escribe un valor al buffer de escritura
* @param *db recibe la direccion de memoria de la estructura
* @param dato recibe el valor a escribir en el buffer
*/
void escribir_dBuffer(dobleBuffer_t *db, int8_t dato);


/**
* *leer_dBuffer: muestra en consola el buffer de lectura entero
* @param *db recibe la direccion de memoria de la estructura
*/
void leer_dBuffer(dobleBuffer_t *db);


/**
* *liberar_dBuffer: libera la memoria reservado por el doble buffer
* @param *db es un puntero doble de tipo colaDatos_t
*/
void liberar_dBuffer(dobleBuffer_t *db);

#endif