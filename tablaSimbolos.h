
#ifndef __TABLASIMBOLOS_H
    #define __TABLASIMBOLOS_H
#include <stdbool.h>
#include "definiciones.h"
typedef struct ts_simbolo{
    int tipo; 
    int sid; 
    char id[128];
    int entero;
    float real;
    bool booleano;
}ts_simbolo;
// 
void inicializarTS();

int insertarSimboloAnonimo(int tipo);

int insertarSimboloTS(char* id, int tipo);

void modificarSimboloTS();

void insertarValorEnteroSimbolo(int sid, int valor);

void insertarValorRealSimbolo(int sid, float valor);

void imprimirTablaTS();

ts_simbolo  buscarSimboloTS(char* id);
#endif
