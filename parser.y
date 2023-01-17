/* Reverse Polish Notation calculator. */
%{
  #include <stdio.h>
  #include <stdbool.h>
  #include <math.h>
  #include "definiciones.h"
  #include "colaDobleCaracteres.h"
  #include "tablaCuadruplas.h"
  #include "tablaSimbolos.h"
  #define YYDEBUG 1
  int yylex (void);
  extern FILE *yyin;
  void yyerror (char const *);

%}


/*%define api.value.type {double}*/

%token <paraNombres> id
%token id_bool

%token op_asignacion 
%token op_composicion_secuencial 
%token op_separador 
%token op_subrango 
%token op_definicion_tipo_variable 
%token op_entonces 
%token op_si_no_si 
/*op_creacion_tipo "="*/
%token op_inicio_array 
%token op_fin_array 
%token op_negativo 
%token op_positivo
%token op_div
%token op_mult 
/*OPERADORES RELACIONALES*/

%token op_relacional
%token simbolo_igual 



/*PALABRAS RESERVADAS*/

%token pr_accion 
%token pr_algoritmo 
%token pr_const 
%token pr_continuar 
%token pr_de 
%token pr_dev 
%right pr_div 
%token pr_ent  
%token pr_ent_sal 
%token pr_faccion 
%token pr_falgoritmo 
%token pr_falso 
%token pr_fconst 
%token pr_ffuncion 
%token pr_fmientras 
%token pr_fpara 
%token pr_fsi 
%token pr_ftipo 
%token pr_ftupla 
%token pr_funcion 
%token pr_fvar 
%token pr_hacer 
%token pr_hasta 
%token pr_mientras 
%right pr_mod 
%token pr_no 
%right pr_o 
%token pr_para 
%token pr_ref 
%token pr_sal 
%token pr_si 
%token pr_tabla 
%token pr_tipo 
%token pr_tupla 
%token pr_var 
%token pr_verdadero 
%right pr_y 


/*LITERALES*/

%token <paraLiterales> t_literal_entero
%token <paraLiterales> t_literal_real 
%token t_literal_caracter
%token t_literal
%token <paraTipos>t_tipo_base 

%token t_comentario

 /*%right t_opa_nivel1*/ 
%right t_opa_nivel2 

%token ce_punto 
%token ce_parentesis_apertura 
%token ce_parentesis_cierre 

%token ce_llave_apertura
%token ce_llave_cierre
%token ce_barra_baja
/*
%token op_relacionales_mayor
%token op_relacionales_menor
%token op_relacionales_menor_igual
%token op_relacionales_mayor_igual
%token op_relacionales_distinto
*/
%token t_literal_booleano
%token t_literal_string
/*%token t_postcondicion
%token t_precondicion*/

%union{
 struct tipo_base_pruba{
    int entero;
    bool booleano;
    char caracter;
    float real;
    char cadena[128];
 } paraLiterales;
 ts_exp paraExp;
 tiposBase paraTipos; 
 opRels paraOpRel;
 char paraNombres[128];
 int next;
 int quad;
 tipoColaDobleC miCola;
}

%type <paraTipos> d_tipo

%type <miCola> lista_id
%type <paraExp> exp_a
%type <paraExp> exp_b
%type <paraExp> expresion
%type <paraExp> operando
%type <paraOpRel> op_relacional
%type <paraOpRel> simbolo_igual
%type <quad> M
%type <next> N
/*%type <cadena> pr_cadena
%type <booleano> pr_booleano
%type <caracter> pr_caracter
%type <entero> pr_entero
%type <real> pr_real*/


%% /* Grammar rules and actions follow. */


desc_algoritmo:
	pr_algoritmo id op_composicion_secuencial cabecera_alg bloque_alg pr_falgoritmo ce_punto {printf("desc_algoritmo");}
	;

cabecera_alg:
	decl_globales decl_a_f decl_ent_sal t_comentario {printf("cabecera_alg");}
	;

bloque_alg:
	bloque t_comentario {printf("bloque_alg");}
	;

decl_globales:
	declaracion_tipo decl_globales	{printf("decl_globales 1");} 
	| declaracion_cte decl_globales {printf("decl_globales 2");}
	| %empty {printf("decl_globales 3");}
	;

decl_a_f:
	accion_d decl_a_f {printf("decl_a_f 1");}
	| funcion_d decl_a_f {printf("decl_a_f 2");}
	|%empty {printf("decl_a_f 3");}
	;

bloque:
	declaraciones instrucciones {printf("bloque");}
	;

declaraciones:
	declaracion_tipo declaraciones {printf("declaraciones 1");}
	| declaracion_cte declaraciones {printf("declaraciones 2");}
	| declaracion_var declaraciones {printf("declaraciones 3");}
	| %empty {printf("declaraciones 4");}
	;

declaracion_tipo:
	pr_tipo lista_d_tipo pr_ftipo op_composicion_secuencial {printf("declaracion_tipo");}
	;

declaracion_cte:
	pr_const lista_d_cte pr_fconst op_composicion_secuencial {printf("declaracion_cte");}
	;

declaracion_var:
	pr_var lista_d_var pr_fvar op_composicion_secuencial {printf("declaracion_var");}
	;

lista_d_tipo:
	id simbolo_igual d_tipo op_composicion_secuencial lista_d_tipo {printf("lista_d_tipo 1");}
	| %empty {printf("lista_d_tipo 2");}
	;

d_tipo:
	pr_tupla lista_campos pr_ftupla {printf("d_tipo 1");}
	| pr_tabla op_inicio_array expresion_t op_subrango expresion_t op_fin_array pr_de d_tipo {printf("d_tipo 2");}
	| id {printf("d_tipo 3");}
	| expresion_t op_subrango expresion_t {printf("d_tipo 4");}
	| pr_ref d_tipo {printf("d_tipo 5");}
	| t_tipo_base {$$=$1;}
	;

expresion_t:
	expresion {printf("expresion_t 1");}
	| t_literal_caracter {printf("expresion_t 2");}
	;

lista_campos:
	id op_definicion_tipo_variable d_tipo op_composicion_secuencial lista_campos {printf("lista_campos 1");}
	| %empty {printf("lista_campos 2");}
	;

lista_d_cte:
	id simbolo_igual t_literal op_composicion_secuencial lista_d_cte {printf("lista_d_cte 1");}
	| %empty {printf("lista_d_cte 2");}
	;

lista_d_var:
	lista_id op_definicion_tipo_variable d_tipo op_composicion_secuencial lista_d_var {
        while(!esNulaColaDoble($1)) { 
            printf("IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIID %s\n",elemUltimo($1));
            insertarSimboloTS(elemUltimo($1), $3);
            desencolarUltimo(&($1));
        }
	}
	| %empty {printf("lista_d_var 3");}
	;

lista_id:
	id op_separador lista_id {encolarPrimero(&($3), $1);$$ = $3; printf("IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIID4 %s\n",elemPrimero($$));
                                printf("IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIID6 %s\n",elemUltimo($3));
                                printf("IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIID4 %s\n",elemPrimero($$));}                                                                                                                                                                                                              
	| id {nuevaColaDoble(&($$));
        encolarPrimero(&($$), $1); printf("IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIID3 %s\n",$1);printf("IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIID5 %s\n",elemUltimo($$));}
	;

decl_ent_sal:
	decl_ent {printf("decl_ent_sal 1");}
	| decl_ent decl_sal {printf("decl_ent_sal 2");}
	| decl_sal {printf("decl_ent_sal 3");}
	;

decl_ent:
	pr_ent lista_d_var {printf("decl_ent");}
	;

decl_sal:
	pr_sal lista_d_var {printf("decl_sal");}
	;
	

exp_b:
	exp_b pr_y M exp_b {backpatch($1.paraSaltos.falses,$1.paraSaltos.ultimoF,$3);
                        merge($$.paraSaltos.trues,$1.paraSaltos.trues,$1.paraSaltos.ultimoT,$4.paraSaltos.trues,$4.paraSaltos.ultimoT);
                        $$.paraSaltos.ultimoT = $1.paraSaltos.ultimoT+$4.paraSaltos.ultimoT;
                        merge($$.paraSaltos.falses, $4.paraSaltos.falses,$4.paraSaltos.ultimoF,$4.paraSaltos.trues,0);
                        $$.paraSaltos.ultimoF = $4.paraSaltos.ultimoF;
                        }
	| exp_b pr_o M exp_b {backpatch($1.paraSaltos.trues,$1.paraSaltos.ultimoT,$3);
                        merge($$.paraSaltos.falses,$1.paraSaltos.falses,$1.paraSaltos.ultimoF,$4.paraSaltos.falses,$4.paraSaltos.ultimoF);
                        $$.paraSaltos.ultimoF = $1.paraSaltos.ultimoF+$4.paraSaltos.ultimoF;
                        merge($$.paraSaltos.trues, $4.paraSaltos.trues,$4.paraSaltos.ultimoT,$4.paraSaltos.trues,0);
                        $$.paraSaltos.ultimoT = $4.paraSaltos.ultimoT;
                            
                        }
	| pr_no exp_b { 
                    merge($$.paraSaltos.trues, $2.paraSaltos.falses,$2.paraSaltos.ultimoF,$2.paraSaltos.trues,0);
                    $$.paraSaltos.ultimoT = $2.paraSaltos.ultimoF;
                    merge($$.paraSaltos.falses, $2.paraSaltos.trues,$2.paraSaltos.ultimoT,$2.paraSaltos.trues,0);
                    $$.paraSaltos.ultimoF = $2.paraSaltos.ultimoT;
                }
	| pr_verdadero {printf("exp_b 4");}
	| pr_falso {printf("exp_b 5");}
	| expresion op_relacional expresion {makelist($$.paraSaltos.trues,1,nextquad());
                                        makelist($$.paraSaltos.falses,1,nextquad()+1);
                                        $$.paraSaltos.ultimoT = 1;
                                        $$.paraSaltos.ultimoF = 1;
                                        $$.tipo = pr_booleano;
                                        gen($2,$1.place,$3.place,OPNULO);
                                        gen(OPNULO,OPNULO,OPNULO,OPNULO);
                                        }
    | expresion simbolo_igual expresion {makelist($$.paraSaltos.trues,1,nextquad());
                                        makelist($$.paraSaltos.falses,1,nextquad()+1);
                                        $$.paraSaltos.ultimoT = 1;
                                        $$.paraSaltos.ultimoF = 1;
                                        $$.tipo = pr_booleano;
                                        gen($2,$1.place,$3.place,OPNULO);
                                        gen(OPNULO,OPNULO,OPNULO,OPNULO);
                                        }
	| ce_parentesis_apertura exp_b ce_parentesis_cierre {
                                                            merge($$.paraSaltos.trues, $2.paraSaltos.trues,$2.paraSaltos.ultimoT,$2.paraSaltos.trues,0);
                                                            $$.paraSaltos.ultimoT = $2.paraSaltos.ultimoT;
                                                            merge($$.paraSaltos.falses, $2.paraSaltos.falses,$2.paraSaltos.ultimoF,$2.paraSaltos.trues,0);
                                                            $$.paraSaltos.ultimoF = $2.paraSaltos.ultimoT;
                                                        }
	;

M:
	%empty {$$=nextquad();}
N:
	%empty {}
	
expresion:
	exp_a {printf("expresion 1");}
	| exp_b {printf("expresion 2");}
    | funcion_ll {printf("expresion 3");}
	;

exp_a:
	exp_a op_positivo exp_a {int T = insertarSimboloAnonimo(pr_entero);
                                $$.place = T;
                                $$.tipo = pr_entero;
                                printf("SSSSSSSSSSSSSSSSSSSSSSSSSsuma de %d y %d \n",$1.tipo,$3.tipo);
                                if($1.tipo == pr_entero && $3.tipo == pr_entero){
                                    printf("suma 1\n");
                                    gen(OPsuma,$1.place,$3.place,T);
                                    $$.tipo = pr_entero;
                                }
                                if($1.tipo == pr_entero && $3.tipo == pr_real){
                                    printf("suma 2\n");
                                    gen(OPsuma,$1.place,$3.place,T);
                                    $$.tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                                if($1.tipo == pr_real && $3.tipo == pr_entero){
                                    printf("suma 3\n");
                                    gen(OPsuma,$1.place,$3.place,T);
                                    $$.tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                                if($1.tipo == pr_real && $3.tipo == pr_real){
                                    printf("suma 4\n");
                                    gen(OPsuma,$1.place,$3.place,T);
                                    $$.tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                            }
	| exp_a op_negativo exp_a {int T = insertarSimboloAnonimo(pr_entero);
                                $$.place = T;
                                $$.tipo = pr_entero;
                                if($1.tipo == pr_entero && $3.tipo == pr_entero){
                                    gen(OPresta,$1.place,$3.place,T);
                                    $$.tipo = pr_entero;
                                }
                                if($1.tipo == pr_entero && $3.tipo == pr_real){
                                    gen(OPresta,$1.place,$3.place,T);
                                    $$.tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                                if($1.tipo == pr_real && $3.tipo == pr_entero){
                                    gen(OPresta,$1.place,$3.place,T);
                                    $$.tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                                if($1.tipo == pr_real && $3.tipo == pr_real){
                                    gen(OPresta,$1.place,$3.place,T);
                                    $$.tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                               }
	| exp_a op_div exp_a { int T = insertarSimboloAnonimo(pr_entero);
                                $$.place = T;
                                $$.tipo = pr_entero;
                                if($1.tipo == pr_entero && $3.tipo == pr_entero){
                                    gen(OPdivision,$1.place,$3.place,T);
                                    $$.tipo = pr_entero;
                                }
                                if($1.tipo == pr_entero && $3.tipo == pr_real){
                                    gen(OPdivision,$1.place,$3.place,T);
                                    $$.tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                                if($1.tipo == pr_real && $3.tipo == pr_entero){
                                    gen(OPdivision,$1.place,$3.place,T);
                                    $$.tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                                if($1.tipo == pr_real && $3.tipo == pr_real){
                                    gen(OPdivision,$1.place,$3.place,T);
                                    $$.tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                                }
    | exp_a op_mult exp_a { int T = insertarSimboloAnonimo(pr_entero);
                                $$.place = T;
                                $$.tipo = pr_entero;
                                printf("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMULTIPLICA de %d y %d \n",$1.tipo,$3.tipo);
                                if($1.tipo == pr_entero && $3.tipo == pr_entero){
                                    gen(OPmultiplica,$1.place,$3.place,T);
                                    $$.tipo = pr_entero;
                                }
                                if($1.tipo == pr_entero && $3.tipo == pr_real){
                                    gen(OPmultiplica,$1.place,$3.place,T);
                                    $$.tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                                if($1.tipo == pr_real && $3.tipo == pr_entero){
                                    gen(OPmultiplica,$1.place,$3.place,T);
                                    $$.tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                                if($1.tipo == pr_real && $3.tipo == pr_real){
                                    gen(OPmultiplica,$1.place,$3.place,T);
                                    $$.tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                                }
	| exp_a pr_mod exp_a {
                            int T = insertarSimboloAnonimo(pr_entero);
                                $$.place = T;
                                $$.tipo = pr_entero;
                                if($1.tipo == pr_entero && $3.tipo == pr_entero){
                                    gen(OPmod,$1.place,$3.place,T);
                                    $$.tipo = pr_entero;
                                }else{
                                    printf("error, módulo entre reales");
                                }
                         }
	| exp_a pr_div exp_a {int T = insertarSimboloAnonimo(pr_entero);
                                $$.place = T;
                                $$.tipo = pr_entero;
                                if($1.tipo == pr_entero && $3.tipo == pr_entero){
                                    gen(OPdivisionEnt,$1.place,$3.place,T);
                                    $$.tipo = pr_entero;
                                }
                                if($1.tipo == pr_entero && $3.tipo == pr_real){
                                    gen(OPdivisionEnt,$1.place,$3.place,T);
                                    $$.tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                                if($1.tipo == pr_real && $3.tipo == pr_entero){
                                    gen(OPdivisionEnt,$1.place,$3.place,T);
                                    $$.tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                                if($1.tipo == pr_real && $3.tipo == pr_real){
                                    gen(OPdivisionEnt,$1.place,$3.place,T);
                                    $$.tipo = pr_real;
                                    modificarSimboloTS(T,pr_real);
                                }
                                }
	| ce_parentesis_apertura exp_a ce_parentesis_cierre {$$.place = $2.place;
                                                         $$.tipo = $2.tipo;
                                                        }
	| operando {$$.place = $1.place;
                $$.tipo = $1.tipo;
                }
	| t_literal_entero {int T=insertarSimboloAnonimo(pr_entero);
                        insertarValorEnteroSimbolo(T,$1.entero);
                        $$.place = T;
                        $$.tipo = pr_entero;
                        }
	| t_literal_real {int T=insertarSimboloAnonimo(pr_real);
                        insertarValorRealSimbolo(T,$1.real);
                        $$.place = T;
                        $$.tipo = pr_real;
                      }
	| op_negativo exp_a {int T = insertarSimboloAnonimo($2.tipo);
                            gen(OPresta,0,$2.place,$$.place);
                            $$.place = T;
                            $$.tipo = $2.tipo;
                        }
    |op_positivo exp_a{int T = insertarSimboloAnonimo($2.tipo);
                            gen(OPsuma,0,$2.place,$$.place);
                            $$.place = T;
                            $$.tipo = $2.tipo;
                        }
	;


operando:
	id {ts_simbolo id; 
        id= buscarSimboloTS($1);
		if((id.sid) == -1) 
		{ 
			printf("error\n");
		} 
		else 
		{  
			$$.place = id.sid;
			$$.tipo = id.tipo; 
		}  
    }
	| operando ce_punto operando {printf("operando 2");}
	| operando op_inicio_array expresion op_fin_array {printf("operando 3");}
	| operando pr_ref {printf("operando 4");}
	;

instrucciones:
	instruccion op_composicion_secuencial instrucciones {printf("instrucciones 1");}
	| instruccion {printf("instrucciones 2");}
	;

instruccion:
	pr_continuar {printf("instruccion 1");}
	| asignacion {printf("instruccion 2");}
	| alternativa {printf("instruccion 3");}
	| iteracion {printf("instruccion 4");}
	| accion_ll {printf("instruccion 5");}
	;

asignacion:
	operando op_asignacion expresion {
	    if($1.tipo == $3. tipo){
                gen(OPasigna,$3.place,OPNULO,$1.place); 
        }
        if(($1.tipo == pr_real) && ($3.tipo == pr_entero)){
                $3.tipo = pr_real;
                modificarSimboloTS($3,pr_real);
                gen(OPasigna,$3.place,OPNULO,$1.place); 
	
	    }if(($1.tipo == pr_entero) && ($3.tipo == pr_real)){
             printf("error, tipos distintos en la asignacion\n");
	    }
	}

alternativa:
	pr_si expresion op_entonces instrucciones lista_opciones pr_fsi {printf("instruccion 1");}
	;

lista_opciones:
	op_si_no_si expresion op_entonces instrucciones lista_opciones {printf("instruccion 1");}
	| %empty {printf("instruccion 1");}
	;

iteracion:
	it_cota_fija {printf("instruccion 1");}
	| it_cota_exp {printf("instruccion 1");}
	;

it_cota_exp:
	pr_mientras expresion pr_hacer instrucciones pr_fmientras {}
	;

it_cota_fija:
	pr_para id op_asignacion expresion pr_hasta expresion pr_hacer instrucciones pr_fpara {}
	;

accion_d:
	pr_accion a_cabecera bloque pr_faccion {}
	;

funcion_d:
	pr_funcion f_cabecera bloque pr_dev expresion pr_ffuncion {}
	;

a_cabecera:
	id ce_parentesis_apertura d_par_form ce_parentesis_cierre op_composicion_secuencial {}
	;

f_cabecera:
	id ce_parentesis_apertura lista_d_var ce_parentesis_cierre pr_dev d_tipo op_composicion_secuencial {}
	;

d_par_form:
	d_p_form op_composicion_secuencial d_par_form {}
	| %empty {}
	;

d_p_form:
	pr_ent lista_id op_definicion_tipo_variable d_tipo {}
	| pr_sal lista_id op_definicion_tipo_variable d_tipo {}
	| pr_ent_sal lista_id op_definicion_tipo_variable d_tipo {}
	;

accion_ll:
	id ce_parentesis_apertura l_ll ce_parentesis_cierre {}
	;

funcion_ll:
	id ce_parentesis_apertura l_ll ce_parentesis_cierre {}
	;

l_ll:
	expresion op_separador l_ll {}
	| expresion {}
	;

%%

/*
int main (void)
{
  return yyparse ();
}*/
#include <stdio.h>

/* Called by yyparse on error. */
void yyerror (char const *s)
{
  fprintf (stderr, "%s\n", s);
}

int main( int argc, char **argv )
{
    
    ++argv, --argc;  
    yydebug = 2;
    inicializarTS();
    inicializaTC();
    if ( argc > 0 )
        yyin = fopen( argv[0], "r" );
    else
        yyin = stdin;
    yyparse();
    printf("SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS");
    imprimirTablaTS();
    imprimirTablaCuadruplas();
}
    
