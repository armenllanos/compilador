all:
	gcc -c colaDobleSimbolo.c
	gcc -c colaDobleCaracteres.c
	gcc -c tablaCuadruplas.c
	gcc -c tablaSimbolos.c
	bison -v -d --debug parser.y
	flex scanner.l
	gcc -c lex.yy.c 
	gcc parser.tab.c lex.yy.o -lfl -lm -o compilador tablaCuadruplas.o colaDobleSimbolo.o tablaSimbolos.o colaDobleCaracteres.o
