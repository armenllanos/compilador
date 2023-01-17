#ifndef __COLADOBLESIMBOLO_H
  #define __COLADOBLESIMBOLO_H
  
#include <stdbool.h>
#include "tablaSimbolos.h"

typedef ts_simbolo tipoElementoColaDoble;
typedef struct celdaCD{
	tipoElementoColaDoble elem;
	struct celdaCD *ant;
	struct celdaCD *sig;
}celdaColaDoble; 
typedef struct tipoCD{
	celdaColaDoble* ini;
	celdaColaDoble* fin;
}tipoColaDobleS;

void nuevaColaDobleSim(tipoColaDobleS *);

void encolarPrimeroSim(tipoColaDobleS *, tipoElementoColaDoble);

void encolarUltimoSim(tipoColaDobleS *, tipoElementoColaDoble);

void desencolarPrimeroSim(tipoColaDobleS *);

void desencolarUltimoSim(tipoColaDobleS *);

tipoElementoColaDoble elemPrimeroSim(tipoColaDobleS);

tipoElementoColaDoble elemUltimoSim(tipoColaDobleS);

bool esNulaColaDobleSim(tipoColaDobleS);

#endif
