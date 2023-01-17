#ifndef __DEFINICIONES_H
  #define __DEFINICIONES_H

typedef enum tiposBase{
    pr_entero,
    pr_real,
    pr_booleano,
    pr_caracter,
    pr_cadena
}tiposBase;
typedef struct bool_ts{
    int trues[40];
    int falses[40];
    int ultimoT;
    int ultimoF;
}bool_ts;
typedef struct ts_exp{
    int tipo;
    int place;
    int entero;
    float real;
    bool_ts paraSaltos;
} ts_exp;

typedef enum opRels{
    op_relacionales_mayor,
    op_relacionales_menor,
    op_relacionales_igual,
    op_relacionales_distinto,
    op_relacionales_mayor_igual,
    op_relacionales_menor_igual

}opRels;
#endif
