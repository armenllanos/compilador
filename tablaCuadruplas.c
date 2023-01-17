#include "tablaCuadruplas.h"

tablaCuadruplas cuadruplas; // tiene matriz(100x4) y nextquad

void inicializaTC(){
    cuadruplas.nextquad = 0;
}
void gen(int operador, int operando1, int operando2, int destino){
    int pos = cuadruplas.nextquad;
    cuadruplas.matriz[pos][0] = operador;
    cuadruplas.matriz[pos][1] = operando1;
    cuadruplas.matriz[pos][2] = operando2;
    cuadruplas.matriz[pos][3] = destino;
    cuadruplas.nextquad++;
    printf("nueva cuadrupla %d\n",cuadruplas.nextquad);
}
void imprimirTablaCuadruplas(){
    if(cuadruplas.nextquad == 0){
        printf("tabla de cuadruplas vacía\n");
    }
    for(int i = 0; i < cuadruplas.nextquad;i++){
        for(int j = 0; j < 4; j++){
             printf(" %d",cuadruplas.matriz[i][j]);
        }
        printf("\n");
    }
}
void backpatch(int* lista,int fin,int quad){
    for(int i = 0; i < fin; i++){
        cuadruplas.matriz[lista[i]][3] = quad;
    }
}

void makelist(int* lista,int fin,int quad){
    lista[fin] = quad;
}
void merge(int* lista,int* listax,int finx, int* listay,int finy){
    int cont = 0;
    for(int i = 0;i < finx;i++){
        lista[cont] = listax[i];
        cont++;
    }
    for(int j = 0;j < finy;j++){
        lista[cont] = listay[j];
        cont++;
    }
}


int nextquad(){
    return cuadruplas.nextquad;
}
