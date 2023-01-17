#include "tablaSimbolos.h"
#include "colaDobleSimbolo.h"
#include <string.h>
#include <stdio.h>

tipoColaDobleS simbolos;
int ts_contador_sid = 0;
void inicializarTS(){
	nuevaColaDobleSim(&simbolos);
}

int insertarSimboloTS(char* id,int tipo)
{
    tipoElementoColaDoble sim;
	sim.sid = ts_contador_sid++;
	sim.tipo = tipo;
	strcpy(sim.id, id);
	/* metemos símbolo en la cola */
	encolarPrimeroSim(&simbolos, sim);
	return sim.sid;
}

int insertarSimboloAnonimo(int tipo){
    tipoElementoColaDoble sim;
	sim.sid = ts_contador_sid++;
	sim.tipo = tipo;
	
	/* metemos símbolo en la cola */
	encolarPrimeroSim(&simbolos, sim);
	
	return sim.sid;
}

void modificarSimboloTS(int sid, int tipo)
{
    int cont = 1;
    ts_simbolo aux = elemPrimeroSim(simbolos);
     while(cont<=ts_contador_sid && aux.sid != sid){
        encolarUltimoSim(&simbolos,aux);
        desencolarPrimeroSim(&simbolos);
        aux = elemPrimeroSim(simbolos);
        cont++;
    }
    if(cont > ts_contador_sid){
        printf("error, simbolo no insertado");
    }else{
        ts_simbolo ts = elemPrimeroSim(simbolos);
        ts.tipo = tipo;
        desencolarPrimeroSim(&simbolos);
        encolarUltimoSim(&simbolos,ts);
    }
}
void insertarValorEnteroSimbolo(int sid, int valor){
    int cont = 1;
    ts_simbolo aux = elemPrimeroSim(simbolos);
     while(cont<=ts_contador_sid && aux.sid != sid){
        encolarUltimoSim(&simbolos,aux);
        desencolarPrimeroSim(&simbolos);
        aux = elemPrimeroSim(simbolos);
        cont++;
    }
    if(cont > ts_contador_sid){
        printf("error, simbolo no insertado");
    }else{
        ts_simbolo ts = elemPrimeroSim(simbolos);
        ts.entero = valor;
        ts.tipo = pr_entero;
        desencolarPrimeroSim(&simbolos);
        encolarUltimoSim(&simbolos,ts);
    }
}

void insertarValorRealSimbolo(int sid, float valor){
    int cont = 1;
    ts_simbolo aux = elemPrimeroSim(simbolos);
    while(cont<=ts_contador_sid && aux.sid != sid){
        encolarUltimoSim(&simbolos,aux);
        desencolarPrimeroSim(&simbolos);
        aux = elemPrimeroSim(simbolos);
        cont++;
    }
    if(cont > ts_contador_sid){
        printf("error, simbolo no insertado");
    }else{
        ts_simbolo ts = elemPrimeroSim(simbolos);
        ts.real = valor;
        ts.tipo = pr_real;
        desencolarPrimeroSim(&simbolos);
        encolarUltimoSim(&simbolos,ts);
    }
}
void imprimirTablaTS(){
    int cont = 1;
    ts_simbolo aux = elemPrimeroSim(simbolos);
     while(cont<=ts_contador_sid){
        encolarUltimoSim(&simbolos,aux);
        desencolarPrimeroSim(&simbolos);
        aux = elemPrimeroSim(simbolos);
        printf("\nsid %d, tipo %d id %s\n",aux.sid,aux.tipo,aux.id);
        cont++;
    }
    if(cont == 1){
        printf("tabla de símbolos vacía\n");
    }
}

ts_simbolo  buscarSimboloTS(char* id){
    int cont = 1;
    ts_simbolo aux = elemPrimeroSim(simbolos);
     while(cont<=ts_contador_sid && !(strcmp(aux.id,id) == 0)){
        encolarUltimoSim(&simbolos,aux);
        desencolarPrimeroSim(&simbolos);
        aux = elemPrimeroSim(simbolos);
        printf("\nsid %d, tipo %d id %s\n",aux.sid,aux.tipo,aux.id);
        cont++;
    }
    if(cont > ts_contador_sid){
        aux.sid = -1;
        return aux;
    }return aux;
    
}

