/*
    Política de nombrado:
    - operador -> op_
    - todo separado con _ y sin mayúsculas
    - token -> t_
    - indicadores -> ind_
    - palabras reservadas -> pr_
    - producciones -> prod_
    - operaciones aritmeticas -> opa_
    - carácteres especiales -> ce_
*/
/*
COSAS POR MIRAR:

    NUMEROS NEGATIVOS NO CONTEMPLADOS
    BOOLEANOS
    EL =
    POSTCONDICION ?
*/
%{
#include <stdbool.h>
#include "colaDobleCaracteres.h"
#include "definiciones.h"
#include "parser.tab.h"

%}




cifra [0-9]
letra [A-Za-z]


id {letra}({letra}|{cifra})*



/*OPERADORES*/


op_asignacion ":="
op_composicion_secuencial ";"
op_separador ","
op_subrango ".."
op_definicion_tipo_variable ":"
op_entonces "->"
op_si_no_si "[]"
/*op_creacion_tipo "="*/
op_inicio_array "["
op_fin_array "]"
op_negativo "-"
op_positivo "+"
op_div "/"
op_mult "*"


/*OPERADORES RELACIONALES*/
op_relacional ({op_relacionales_mayor}|{op_relacionales_menor}|{simbolo_igual}|{op_relacionales_distinto}|{op_relacionales_mayor_igual}|{op_relacionales_menor_igual})
op_relacionales_mayor ">"
op_relacionales_menor "<"
/*op_relacionales_igual "="*/
simbolo_igual "="
op_relacionales_distinto "<>"
op_relacionales_mayor_igual ">="
op_relacionales_menor_igual "<="

/*PALABRAS RESERVADAS*/

pr_accion "accion"
pr_algoritmo "algoritmo"
pr_booleano "booleano"
pr_cadena "cadena"
pr_caracter "caracter"
pr_const "const"
pr_continuar "continuar"
pr_de "de"
pr_dev "dev"
pr_div "div"
pr_ent "ent"
pr_entero "entero"
pr_ent_sal "e/s"
pr_faccion "faccion" 
pr_falgoritmo "falgoritmo"
pr_falso "falso"
pr_fconst "fconst"
pr_ffuncion "ffuncion"
pr_fmientras "fmientras"
pr_fpara "fpara"
pr_fsi "fsi"
pr_ftipo "ftipo"
pr_ftupla "ftupla"
pr_funcion "funcion"
pr_fvar "fvar"
pr_hacer "hacer"
pr_hasta "hasta"
pr_mientras "mientras"
pr_mod "mod"
pr_no "no"
pr_o "o"
pr_para "para"
pr_real "real"
pr_ref "ref"
pr_sal "sal"
pr_si "si"
pr_tabla "tabla"
pr_tipo "tipo"
pr_tupla "tupla"
pr_var "var"
pr_verdadero "verdadero"
pr_y "y"


/*LITERALES*/

t_literal_entero {cifra}{cifra}*((e|E){cifra}{cifra})? 
t_literal_real {cifra}{cifra}*(\.{cifra}{cifra}*)?((e|E){cifra}{cifra}*)?
t_literal_booleano ({pr_verdadero}|{pr_falso})
t_literal_caracter \'{letra}\'
t_literal_string \"([^\"]|\/\")*\"

t_tipo_base ("entero"|"bool"|"char"|"float"|"string")


t_comentario \{([^\}]|\/\})*\} 
    /*t_postcondicion \{(?i:POST)([^\}]|\/\})*\} 
    t_precondicion \{(?i:PREC)([^\}]|\/\})*\}*/

t_espacio_tobulador_barra_n (" "|\t|\n)


    /*t_opa_nivel1 ("+"|"-")*/
    /*t_opa_nivel2 ("*"|"/")*/

ce_llave_apertura ("{")
ce_llave_cierre ("}")
ce_barra_baja ("_")
ce_punto (".")
ce_parentesis_apertura ("(")
ce_parentesis_cierre (")")


%%
	/* Zona de definición de reglas */
	
	
{ce_llave_apertura} {printf("ce_llave_apertura %s\n",yytext);return ce_llave_apertura;}
{ce_llave_cierre} {printf("ce_llave_cierre %s\n",yytext);return ce_llave_cierre;}
{ce_barra_baja} {printf("ce_barra_baja %s\n",yytext);return ce_barra_baja;}
{ce_punto} {printf("ce_punto %s\n",yytext);return ce_punto;}

{t_espacio_tobulador_barra_n} {}
{op_asignacion} {printf("op_asignacion %s\n",yytext);return op_asignacion;}
{op_composicion_secuencial} {printf("op_composicion_secuencial %s\n",yytext);return op_composicion_secuencial;}
{op_separador} {printf("op_separador %s\n",yytext);return op_separador;}
{op_subrango} {printf("op_subrango %s\n",yytext);return op_subrango;}
{op_definicion_tipo_variable} {printf("op_definicion_tipo_variable %s\n",yytext);return op_definicion_tipo_variable;}
{op_entonces} {printf("op_entonces %s\n",yytext);return op_entonces;}
{op_si_no_si} {printf("op_si_no_si %s\n",yytext);return op_si_no_si;}
    /*{op_creacion_tipo} {printf("op_creacion_tipo %s/n",yytext())}*/
{op_inicio_array} {printf("op_inicio_array %s\n",yytext);return op_inicio_array;}
{op_fin_array} {printf("op_fin_array %s\n",yytext);return op_fin_array;}
{op_negativo} {printf("op_negativo %s\n",yytext);return op_negativo;}
{op_positivo} {printf("op_positivo %s\n",yytext);return op_positivo;}
{op_div} {printf("op_div %s\n",yytext);return op_div;}
{op_mult} {printf("op_mult %s\n",yytext);return op_mult;}

{op_relacionales_mayor} {printf("op_relacionales_mayor %s\n",yytext);yylval.paraOpRel = op_relacionales_mayor;return op_relacional;}
{op_relacionales_menor} {printf("op_relacionales_menor %s\n",yytext);yylval.paraOpRel = op_relacionales_menor;return op_relacional;}
{op_relacionales_menor_igual} {printf("op_relacionales_menor_igual %s\n",yytext);yylval.paraOpRel = op_relacionales_menor_igual;return op_relacional;}
{op_relacionales_distinto} {printf("op_relacionales_distinto %s\n",yytext);yylval.paraOpRel = op_relacionales_distinto;return op_relacional;}
{op_relacionales_mayor_igual} {printf("op_relacionales_mayor_igual %s\n",yytext);yylval.paraOpRel = op_relacionales_mayor_igual;return op_relacional;}
    /*{op_relacionales_igual} {printf("op_relacionales_igual %s/n",yytext())}*/

{simbolo_igual} {printf("simbolo_igual %s\n", yytext);yylval.paraOpRel = op_relacionales_igual;return simbolo_igual;}

{pr_accion} {printf("pr_accion %s\n",yytext);return pr_accion;}
{pr_algoritmo} {printf("pr_algoritmo %s\n",yytext);return pr_algoritmo;}
{pr_booleano} {yylval.paraTipos=pr_booleano;
                return t_tipo_base;}
{pr_cadena} {yylval.paraTipos=pr_cadena;
                return t_tipo_base;}
{pr_caracter} {yylval.paraTipos=pr_caracter;
                return t_tipo_base;}
{pr_const} {printf("pr_const %s\n",yytext);return pr_const;}
{pr_continuar} {printf("pr_continuar %s\n",yytext);return pr_continuar;}
{pr_de} {printf("pr_de %s\n",yytext);return pr_de;}
{pr_dev} {printf("pr_dev %s\n",yytext);return pr_dev;}
{pr_div} {printf("pr_div %s\n",yytext);return pr_div;}
{pr_ent} {printf("pr_ent %s\n",yytext);return pr_ent;}
{pr_entero} {yylval.paraTipos=pr_entero;
                return t_tipo_base;}
{pr_ent_sal} {printf("pr_ent_sal %s\n",yytext);return pr_ent_sal;}
{pr_faccion} {printf("pr_faccion %s\n",yytext);return pr_faccion;}
{pr_falgoritmo} {printf("pr_falgoritmo %s\n",yytext);return pr_falgoritmo;}
{pr_falso} {printf("pr_falso %s\n",yytext);return pr_falso;}
{pr_fconst} {printf("pr_fconst %s\n",yytext);return pr_fconst;}
{pr_ffuncion} {printf("pr_ffuncion %s\n",yytext);return pr_ffuncion;}
{pr_fmientras} {printf("pr_fmientras %s\n",yytext);return pr_fmientras;}
{pr_fpara} {printf("pr_fpara %s\n",yytext);return pr_fpara;}
{pr_fsi} {printf("pr_fsi %s\n",yytext);return pr_fsi;}
{pr_ftipo} {printf("pr_ftipo %s\n",yytext);return pr_ftipo;}
{pr_ftupla} {printf("pr_ftupla %s\n",yytext);return pr_ftupla;}
{pr_funcion} {printf("pr_funcion %s\n",yytext);return pr_funcion;}
{pr_fvar} {printf("pr_fvar %s\n",yytext);return pr_fvar;}
{pr_hacer} {printf("pr_hacer %s\n",yytext);return pr_hacer;}
{pr_hasta} {printf("pr_hasta %s\n",yytext);return pr_hasta;}
{pr_mientras} {printf("pr_mientras %s\n",yytext);return pr_mientras;}
{pr_mod} {printf("pr_mod %s\n",yytext);return pr_mod;} 
{pr_no} {printf("pr_no %s\n",yytext);return pr_no;}
{pr_o} {printf("pr_o %s\n",yytext);return pr_o;}
{pr_para} {printf("pr_para %s\n",yytext);return pr_para;}
{pr_real} {yylval.paraTipos=pr_real;
            return t_tipo_base;}
{pr_ref} {printf("pr_ref %s\n",yytext);return pr_ref;}
{pr_sal} {printf("pr_sal %s\n",yytext);return pr_sal;}
{pr_si} {printf("pr_si %s\n",yytext);return pr_si;}
{pr_tabla} {printf("pr_tabla %s\n",yytext);return pr_tabla;}
{pr_tipo} {printf("pr_tipo %s\n",yytext);return pr_tipo;}
{pr_tupla} {printf("pr_tupla %s\n",yytext);return pr_tupla;}
{pr_var} {printf("pr_var %s\n",yytext);return pr_var;}
{pr_verdadero} {printf("pr_verdadero %s\n",yytext);return pr_verdadero;}
{pr_y} {printf("pr_y %s\n",yytext);return pr_y;}

{t_literal_entero} {/*yytype.entero = atoi(yytext);*/printf("t_literal_entero %d\n", atoi(yytext));return t_literal_entero;}
{t_literal_real} {/*yytype.real = atof(yytext);*/printf("t_literal_real %f\n", atof(yytext));return t_literal_real;}
{t_literal_booleano} {printf("t_literal_booleano %s\n", yytext);return t_literal_booleano;}
{t_literal_caracter} {/*yytype.caracter = yytext[1];*/printf("t_literal_caracter %s\n", yytext);return t_literal_caracter;}
{t_literal_string} {printf("t_literal_string %s\n", yytext);return t_literal_string;}

    /*{t_tipo_base} {printf("t_tipo_base %s\n", yytext);return t_tipo_base;}*/

    /*{t_postcondicion} {printf("t_postcondicion %s\n", yytext);return t_postcondicion;}
    {t_precondicion} {printf("t_precondicion %s\n", yytext);return t_precondicion;}*/
{t_comentario} {printf("t_comentario %s\n", yytext);return t_comentario;}


    /*{t_opa_nivel1} {printf("t_opa_nivel1 %s\n", yytext);return t_opa_nivel1;}*/
    /*{t_opa_nivel2} {printf("t_opa_nivel2 %s\n", yytext);return t_opa_nivel2;}*/	


{ce_parentesis_apertura} {printf("ce_parentesis_apertura %s\n", yytext);return ce_parentesis_apertura;}
{ce_parentesis_cierre} {printf("ce_parentesis_cierre %s\n", yytext);return ce_parentesis_cierre;}


    /*{id_bool} {printf("identificador_bool %s\n", yytext);}*/
{id} {printf("identificador %s\n", yytext);strcpy(yylval.paraNombres, yytext);return id;}



%%



