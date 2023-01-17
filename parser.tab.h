/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    id = 258,
    id_bool = 259,
    op_asignacion = 260,
    op_composicion_secuencial = 261,
    op_separador = 262,
    op_subrango = 263,
    op_definicion_tipo_variable = 264,
    op_entonces = 265,
    op_si_no_si = 266,
    op_inicio_array = 267,
    op_fin_array = 268,
    op_negativo = 269,
    op_positivo = 270,
    op_div = 271,
    op_mult = 272,
    op_relacional = 273,
    simbolo_igual = 274,
    pr_accion = 275,
    pr_algoritmo = 276,
    pr_const = 277,
    pr_continuar = 278,
    pr_de = 279,
    pr_dev = 280,
    pr_div = 281,
    pr_ent = 282,
    pr_ent_sal = 283,
    pr_faccion = 284,
    pr_falgoritmo = 285,
    pr_falso = 286,
    pr_fconst = 287,
    pr_ffuncion = 288,
    pr_fmientras = 289,
    pr_fpara = 290,
    pr_fsi = 291,
    pr_ftipo = 292,
    pr_ftupla = 293,
    pr_funcion = 294,
    pr_fvar = 295,
    pr_hacer = 296,
    pr_hasta = 297,
    pr_mientras = 298,
    pr_mod = 299,
    pr_no = 300,
    pr_o = 301,
    pr_para = 302,
    pr_ref = 303,
    pr_sal = 304,
    pr_si = 305,
    pr_tabla = 306,
    pr_tipo = 307,
    pr_tupla = 308,
    pr_var = 309,
    pr_verdadero = 310,
    pr_y = 311,
    t_literal_entero = 312,
    t_literal_real = 313,
    t_literal_caracter = 314,
    t_literal = 315,
    t_tipo_base = 316,
    t_comentario = 317,
    t_opa_nivel2 = 318,
    ce_punto = 319,
    ce_parentesis_apertura = 320,
    ce_parentesis_cierre = 321,
    ce_llave_apertura = 322,
    ce_llave_cierre = 323,
    ce_barra_baja = 324,
    t_literal_booleano = 325,
    t_literal_string = 326
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 117 "parser.y"

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

#line 146 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
