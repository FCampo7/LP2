#include "ejercicio3.h"

//*Parte A

pcola init_colaDatos(int8_t d){
    pcola nn=NULL;
    nn=(pcola)calloc(1, sizeof(coladatos_t));
    
    if(nn!=NULL){
        nn->dato=d;
        nn->next=NULL;
    }
    
    return nn;
}

void agregar_dato(pcola *cd, int8_t d){
    if(*cd==NULL) *cd = init_colaDatos(d);
    else agregar_dato(&((*cd)->next), d);
}

int8_t sacar_dato(pcola *cd){
    pcola aux=NULL;
    aux = *cd;
    
    *cd = (*cd)->next;
    int8_t val = aux->dato;
    free(aux);
    
    return val;
}

void limpiar_cola(pcola *cd) {
    if((*cd) == NULL) return;
    limpiar_cola(&((*cd)->next));
    free(cd);
}

//*Parte B

void init_bCircular(bufferCircular_t *bc){
    bc->buffer=(int8_t*)calloc(BUFFER_SIZE, sizeof(int8_t));
    bc->lIndex=0;
    bc->eIndex=0;
    bc->largoBuffer=0;
}

void escribir_bCircular(bufferCircular_t *bc, int8_t dato){
    if(bc->largoBuffer==BUFFER_SIZE)
        printf("El buffer esta lleno.\nValor no ingresado.\n");
    else{
        bc->buffer[bc->eIndex]=dato;
        bc->eIndex++;
        bc->largoBuffer++;
        if(bc->eIndex==BUFFER_SIZE)
            bc->eIndex=0;
    }
}

int8_t leer_bCircular(bufferCircular_t *bc){
    if(bc->largoBuffer==0){
        printf("El buffer esta vacio.\n");
        return 0;
    }
    else{
        int8_t dato=bc->buffer[bc->lIndex];
        bc->lIndex++;
        bc->largoBuffer--;
        if(bc->lIndex==BUFFER_SIZE)
            bc->lIndex=0;
        return dato;
    }
}

void liberar_bCircular(bufferCircular_t *bc){
    free(bc->buffer);
    bc->buffer=NULL;
}

//*Parte C

void init_dobleBuffer(dobleBuffer_t *db){
    db->bufferEscritura=(int8_t*)calloc(BUFFER_SIZE, sizeof(int8_t));
    db->bufferLectura=(int8_t*)calloc(BUFFER_SIZE, sizeof(int8_t));
    db->eIndex=0;
    db->lIndex=0;
}

void escribir_dBuffer(dobleBuffer_t *db, int8_t dato){
    db->bufferEscritura[db->eIndex]=dato;
    db->eIndex++;

    if(db->eIndex==BUFFER_SIZE){
        int8_t *aux=db->bufferEscritura;
        db->bufferEscritura=db->bufferLectura;
        db->bufferLectura=aux;
        db->eIndex=0;
        db->lIndex=0;
        leer_dBuffer(db);
    }
}

void leer_dBuffer(dobleBuffer_t *db){
    while(db->lIndex<BUFFER_SIZE){
        printf("%d\n", db->bufferLectura[db->lIndex]);
        db->lIndex++;
    }
    db->lIndex=0;
}

void liberar_dBuffer(dobleBuffer_t *db){
    free(db->bufferEscritura);
    free(db->bufferLectura);
    db->bufferEscritura=NULL;
    db->bufferLectura=NULL;
}