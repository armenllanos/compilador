

#include "colaDobleSimbolo.h"
#include <stdio.h>
#include <stdlib.h>

void nuevaColaDobleSim(tipoColaDobleS * cola){
    cola->ini = NULL;
    cola->fin = NULL;
}

void encolarPrimeroSim(tipoColaDobleS * cola, tipoElementoColaDoble elem){
    celdaColaDoble * nueva = (celdaColaDoble *)malloc(sizeof(celdaColaDoble));
    nueva->elem = elem;
    nueva->ant = NULL;
    if(esNulaColaDobleSim(*cola)){
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

void encolarUltimoSim(tipoColaDobleS * cola, tipoElementoColaDoble elem){
    celdaColaDoble * nueva = (celdaColaDoble *)malloc(sizeof(celdaColaDoble));
    nueva->elem = elem;
    nueva->sig = NULL;
    if(esNulaColaDobleSim(*cola)){
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

void desencolarPrimeroSim(tipoColaDobleS * cola){
    celdaColaDoble * aux = (celdaColaDoble *)malloc(sizeof(celdaColaDoble));
    if(esNulaColaDobleSim(*cola)){
        printf("ERROR: la cola no tiene elementos para desencolar\n");
        exit(-1);
    }
    else if(cola->ini == cola->fin){
        aux = cola->fin;
        nuevaColaDobleSim(cola);
        free(aux);
    }
    else{
        aux = cola->ini;
        cola->ini = aux->sig;
        cola->ini->ant = NULL;
        free(aux);
    }
}

void desencolarUltimoSim(tipoColaDobleS * cola){
    celdaColaDoble * aux = (celdaColaDoble *)malloc(sizeof(celdaColaDoble));
    if(esNulaColaDobleSim(*cola)){
        printf("ERROR: la cola no tiene elementos para desencolar\n");
        exit(-1);
    }
    else if(cola->ini == cola->fin){
        aux = cola->fin;
        nuevaColaDobleSim(cola);
        free(aux);
    }
    else{
        aux = cola->fin;
        cola->fin = aux->ant;
        cola->fin->sig = NULL;
        free(aux);
    }
}

tipoElementoColaDoble elemPrimeroSim(tipoColaDobleS cola){
    if(esNulaColaDobleSim(cola)){
        printf("ERROR: la cola no tiene elementos que mostrar\n");
        exit(-1);
    }
    return cola.ini->elem;
}

tipoElementoColaDoble elemUltimoSim(tipoColaDobleS cola){
    if(esNulaColaDobleSim(cola)){
        printf("ERROR: la cola no tiene elementos que mostrar\n");
        exit(-1);
    }
    return cola.fin->elem;
}

bool esNulaColaDobleSim(tipoColaDobleS cola){
    return ((cola.fin == NULL) && (cola.ini == NULL));
}
