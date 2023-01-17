#ifndef __TABLACUADRUPLAS_H
  #define __TABLACUADRUPLAS_H

#define OPNULO -1
#include <stdio.h>
#include "definiciones.h"
typedef enum TCtiposBase{
    OPrelacionales_mayor,
    OPrelacionales_menor,
    OPrelacionales_igual,
    OPrelacionales_distinto,
    OPrelacionales_mayor_igual,
    OPrelacionales_menor_igual,
    OPsuma,
    OPresta,
    OPmultiplica,
    OPdivision,
    OPdivisionEnt,
    OPasigna,
    OPmod
}TCtiposBase;

typedef struct tablaCuadruplas{
    int matriz[100][4];
    int nextquad;
}tablaCuadruplas;

void inicializaTC();

void imprimirTablaCuadruplas();

void gen(int operador, int operando1/*EL SID de un simbolo*/, int operando2, int destino);

void backpatch(int* lista,int fin,int quad);

void makelist(int* lista,int fin,int quad);

void merge(int* lista,int* listax,int finx, int* listay,int finy);

int nextquad();


#endif
