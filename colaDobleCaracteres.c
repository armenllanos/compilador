/*
    Fichero: colaDobleCaracteres.c
    Historico:
        Creado por Maria Noemi Gonzalez Portillo el 14/10/2020
            Version 1.0.0
*/

#include "colaDobleCaracteres.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void nuevaColaDoble(tipoColaDobleC * cola){
    cola->ini = NULL;
    cola->fin = NULL;
}

void encolarPrimero(tipoColaDobleC * cola, tipoElementoColaDoble elem){
    celdaColaDoble * nueva = (celdaColaDoble *)malloc(sizeof(celdaColaDoble));
    //nueva->elem = elem;
    strcpy(nueva->elem,elem);
    nueva->ant = NULL;
    if(esNulaColaDoble(*cola)){
        cola->ini = nueva;
        cola->fin = nueva;
        nueva->sig = NULL;
    }
    else{
        nueva->sig = cola->ini;
        cola->ini->ant = nueva;
        cola->ini = nueva;
    }
}

void encolarUltimo(tipoColaDobleC * cola, tipoElementoColaDoble elem){
    celdaColaDoble * nueva = (celdaColaDoble *)malloc(sizeof(celdaColaDoble));
    //nueva->elem = elem;
    strcpy(nueva->elem,elem);
    nueva->sig = NULL;
    if(esNulaColaDoble(*cola)){
        cola->ini = nueva;
        cola->fin = nueva;
        nueva->ant = NULL;
    }
    else{
        nueva->ant = cola->fin;
        cola->fin->sig = nueva;
        cola->fin = nueva;
    }
}

void desencolarPrimero(tipoColaDobleC * cola){
    celdaColaDoble * aux = (celdaColaDoble *)malloc(sizeof(celdaColaDoble));
    if(esNulaColaDoble(*cola)){
        printf("ERROR: la cola no tiene elementos para desencolar\n");
        exit(-1);
    }
    else if(cola->ini == cola->fin){
        aux = cola->fin;
        nuevaColaDoble(cola);
        free(aux);
    }
    else{
        aux = cola->ini;
        cola->ini = aux->sig;
        cola->ini->ant = NULL;
        free(aux);
    }
}

void desencolarUltimo(tipoColaDobleC * cola){
    celdaColaDoble * aux = (celdaColaDoble *)malloc(sizeof(celdaColaDoble));
    if(esNulaColaDoble(*cola)){
        printf("ERROR: la cola no tiene elementos para desencolar\n");
        exit(-1);
    }
    else if(cola->ini == cola->fin){
        aux = cola->fin;
        nuevaColaDoble(cola);
        free(aux);
    }
    else{
        aux = cola->fin;
        cola->fin = aux->ant;
        cola->fin->sig = NULL;
        free(aux);
    }
}

char* elemPrimero(tipoColaDobleC cola){
    if(esNulaColaDoble(cola)){
        printf("ERROR: la cola no tiene elementos que mostrar\n");
        exit(-1);
    }
    return cola.ini->elem;
}

char* elemUltimo(tipoColaDobleC cola){
    if(esNulaColaDoble(cola)){
        printf("ERROR: la cola no tiene elementos que mostrar\n");
        exit(-1);
    }
    return cola.fin->elem;
}

bool esNulaColaDoble(tipoColaDobleC cola){
    return ((cola.fin == NULL) && (cola.ini == NULL));
}
