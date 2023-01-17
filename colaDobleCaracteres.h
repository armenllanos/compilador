#ifndef __COLADOBLECARACTERES_H
  #define __COLADOBLECARACTERES_H

#include <stdbool.h>

typedef char tipoElementoColaDoble[128];
typedef struct celdaCD{
	tipoElementoColaDoble elem;
	struct celdaCD *ant;
	struct celdaCD *sig;
}celdaColaDoble; 
typedef struct tipoCD{
	celdaColaDoble* ini;
	celdaColaDoble* fin;
}tipoColaDobleC;

void nuevaColaDoble(tipoColaDobleC *);

void encolarPrimero(tipoColaDobleC *, tipoElementoColaDoble);

void encolarUltimo(tipoColaDobleC *, tipoElementoColaDoble);

void desencolarPrimero(tipoColaDobleC *);

void desencolarUltimo(tipoColaDobleC *);

char* elemPrimero(tipoColaDobleC);

char* elemUltimo(tipoColaDobleC);

bool esNulaColaDoble(tipoColaDobleC);

#endif
