#include <stdio.h>
#include <stdlib.h>
#include "files/ejercicio3.h"

int main(void){

    pcola cDato=NULL;
    bufferCircular_t bDato;
    dobleBuffer_t dBuff;
    int8_t entrada=-1;
    int8_t opcion=-1;
    int lectura=-1; //! Variable utilizada para poder leer con scanf y que no se produzcan errores en los punteros

    init_dobleBuffer(&dBuff); //Inicializo el doble buffer
    init_bCircular(&bDato); //Inicializo el struct

    do{
        printf("1- Agregar dato a la cola\n2- Mostrar el primer elemento de la CD\n3- Mostrar todos los elementos de la CD\n");//* Parte A
        printf("4- Agregar dato a el buffer circular\n5- Leer buffer circular\n");//* Parte B
        printf("6- Agregar dato a el doble buffer\n0- Salir\n\nOpción: ");//* Parte C
        scanf("%d", &lectura);

        opcion = lectura;
        
        switch(opcion){
            //* Parte A
            case 1:
                printf("Ingrese un dato: ");
                scanf("%d", &lectura);
                entrada=lectura;
                agregar_dato(&cDato, (int8_t)entrada);
                break;
            case 2:
                (cDato!=NULL) ? printf("dato: %d\n", sacar_dato(&cDato)) : printf("No hay datos en la cola\n");
                break;
            case 3:
                if(cDato==NULL) printf("No hay datos en la cola\n");
                else 
                while(cDato!=NULL)
                    printf("%d\n", sacar_dato(&cDato));
                break;
            //* Parte B
            case 4:
                printf("Ingrese un dato: ");
                scanf("%d", &lectura);
                entrada=lectura;
                escribir_bCircular(&bDato, (int8_t)entrada);
                break;
            case 5:
                printf("%d\n", leer_bCircular(&bDato));
                break;
            //* Parte C
            case 6:
                printf("Ingrese un dato: ");
                scanf("%d", &lectura);
                entrada=lectura;
                escribir_dBuffer(&dBuff, (int8_t)entrada);
                break;
            case 0:
                liberar_bCircular(&bDato);
                liberar_dBuffer(&dBuff);
                limpiar_cola(&cDato);
                break;
        }
        printf("\n-----------\n\n");
    } while(opcion!=0);
    
    system("PAUSE");

    return 0;
}