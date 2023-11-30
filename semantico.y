%defines "semantico.tab.h"
%{
#include <stdio.h>
#include <stdlib.h>
int yylex();
void yyerror(const char* s);
%}

%token OP_RELACIONAL
OP_LOGICO
OP_MATEMATICO
FUN_ITERABLE
INCREMENTO
DECREMENTO
INI_PARENTESIS
FIN_PARENTESIS
INI_LLAVE
FIN_LLAVE
INI_CORCHETE
FIN_CORCHETE
CHAR_DOBLEMENOR
CHAR_DOBLEMAYOR
CHAR_COMA
CHAR_MONEY
CHAR_EXCLAMATION
CHAR_ANDPARSER
CHAR_ARROBA
KEY
TYPE_KEY
FUN_LIMPIAR
CHAR
OP_IGUAL
CHAR_PUNTOCOMA
CHAR_DOSPUNTOS
CHAR_GUIONBAJO
CHAR_PUNTO
COMENTARIO
INI_COMENTARIO
FIN_COMENTARIO
TIPO_DATO
TIPO_CONJUNTO
DATO_BOOL
ENTRADA
SALIDA
ERR_SALIDA
IND_FORMATO
MAN_FORMATO
OP_ESPECIAL
CLASE
FUN_CADENA
LIBRERIA
REPRESENTACION_DE_DATO
FUN_TRIGONOMETRIA
FUN_ALGORITMO
FUN_TEMPORAL
OP_UNION
FUN_MATEMATICA
FUN_CTYPE
EXCEPCION
DEF_CLASE
LIBRERIAS_NATIVAS
DEF_VARIABLE
DEF_FUN
DEF_ATRIBUTO
LIBRERIA_1
LIBRERIA_2
FUN_ESCRIBIR
FUN_REGISTRAR
FUN_RECOLECTAR
FUN_ELIMINAR
FUN
ATRAPAR
INTENTAR
DIRECTORIO
COMPARAR
SINO_1
SINO_2
MIENTRAS
HACER
PARA
CAMBIAR
CASO
SENTENCIA
FUN_MET
FUN_NO_RETORNO
RETORNO
IMPORTA
VERIFICA
EXPORTA
TERMINAR
CONTINUAR
FUN_DIAGNOSTICO
REFERENCIA
TIPO_ACCESO
TIPO_VARIABLE
CONSTANTE
PUNTERO
EVENTO
SALTO
PRINCIPAL
CONTENEDOR
IDENTIFICADOR
CONST_FLOAT
CONST_INTEGER
CONST_CADENA
DEF_MET
EN
FINALIZAR
CON
COMO
DESDE
RANGO
ES

%start SIMBOLO;
%%
SIMBOLO: BIBLIOTECA_ VARIABLE_ MAIN PROCEDIMIENTO_
    { printf("[FIN DEL PROGRAMA]\n"); };

PROCEDIMIENTO_: PROCEDIMIENTO_ F_ID | F_ID
    { printf("[BLOQUE PROCEDIMIENTO]\n"); };

VARIABLE_: VARIABLE_ F_INIPAR | F_INIPAR;

BIBLIOTECA_: BIBLIOTECA_ EXTERNO | EXTERNO
    { printf("[CONJUNTO DE BIBLIOTECA(S)]\n"); };
EXTERNO: BIBLIOTECA | MODULO

INSTRUCCIONES_: INSTRUCCIONES_ INSTRUCCIONES | INSTRUCCIONES
    { printf("[BLOQUE INSTRUCCIONES]\n"); };
INSTRUCCIONES: F_INIPAR | F_ID | F_COMPA | IMPRESION | LLAMADA | COMPARADOR2 | BUCLEWH | BUCLEFO | LANZAMIENTO1 | LANZAMIENTO2 | GESTION | COMPARADOR1 | LECTURA |  DOSARG | OPCION | ACIERTO; 

F_INIPAR: INI_PARENTESIS FACT_1;
FACT_1: ASIGVAR | DECVAR; 

F_ID: IDENTIFICADOR FACT_2;
FACT_2: FUNCION | METODO | OP_IGUAL FACT_3;
FACT_3: LECTURA | DOSARG;

F_COMPA: COMPARAR FACT_4;
FACT_4: COMPARADOR1 | COMPARADOR2;

BIBLIOTECA: CHAR_DOBLEMAYOR LIBRERIA_1 CHAR_DOBLEMENOR IDENTIFICADOR CHAR_EXCLAMATION;

ASIGVAR: ASIGVALOR CHAR_DOSPUNTOS TIPO_DATO FIN_PARENTESIS IDENTIFICADOR CHAR_EXCLAMATION
    { printf("[ASIGNACIÓN DE VARIABLE]\n"); };
ASIGVALOR: CONST_INTEGER | CONST_FLOAT | CONST_CADENA;

DECVAR: TIPO_DATO FIN_PARENTESIS IDENTIFICADOR CHAR_EXCLAMATION
    { printf("[DECLARACIÓN DE VARIABLE]\n"); };

MAIN: PRINCIPAL INI_LLAVE INSTRUCCIONES_ FIN_LLAVE CHAR_EXCLAMATION
    { printf("[BLOQUE DE MENÚ]\n"); };

FUNCION: DEF_FUN INI_LLAVE INSTRUCCIONES_ RETORNO ENTRECORCH FIN_LLAVE CHAR_EXCLAMATION
    { printf("[BLOQUE DE FUNCIÓN]\n"); };
ENTRECORCH: INI_CORCHETE PALABRA FIN_CORCHETE;
PALABRA : IDENTIFICADOR | CONST_CADENA;

METODO: DEF_MET INI_LLAVE INSTRUCCIONES_ FUN_NO_RETORNO FIN_LLAVE CHAR_EXCLAMATION
    { printf("[BLOQUE DE MÉTODO]\n"); };

IMPRESION: DEF_MET SALIDA ENTRECORCH CHAR_EXCLAMATION
    { printf("[OPERACIÓN DE IMPRESIÓN]\n"); };

LLAMADA: ASIGPROC IDENTIFICADOR INI_CORCHETE FIN_CORCHETE CHAR_EXCLAMATION
    { printf("[OPERACIÓN DE LLAMADA]\n"); };
ASIGPROC: DEF_MET | DEF_FUN;

COMPARADOR2: ASIGCOMP MASCOMPARADOR2_ SINO_1 INI_PARENTESIS INSTRUCCIONES_ FIN_PARENTESIS CHAR_EXCLAMATION
    { printf("[COMPARACIÓN]\n"); };
ASIGCOMP: INI_CORCHETE IDENTIFICADOR CHAR_PUNTOCOMA IDENTIFICADOR FIN_CORCHETE OP_RELACIONAL INI_PARENTESIS INSTRUCCIONES_ FIN_PARENTESIS;
ASIGCOMPSINO2: SINO_2 ASIGCOMP
MASCOMPARADOR2_: MASCOMPARADOR2_ ASIGCOMPSINO2 | ASIGCOMPSINO2

BUCLEWH: MIENTRAS INI_CORCHETE COMPL OP_RELACIONAL COMPL FIN_CORCHETE INI_LLAVE INSTRUCCIONES_ FIN_LLAVE CHAR_EXCLAMATION
    { printf("[BUCLE WHILE]\n"); };
COMPL: IDENTIFICADOR | CONST_INTEGER;

BUCLEFO: PARA IDENTIFICADOR EN RANGO INI_PARENTESIS COMPL FIN_PARENTESIS RES
    { printf("[BUCLE FOR]\n"); };
RES: CHAR_DOSPUNTOS INSTRUCCIONES_;

LANZAMIENTO1: INTENTAR RES EXCEPCION IDENTIFICADOR RES
    { printf("[THROW]\n"); };

LANZAMIENTO2: LANZAMIENTO1 SINO_1 RES FINALIZAR RES
    { printf("[THROW]\n"); };

MODULO: DESDE IDENTIFICADOR IMPORTA IDENTIFICADOR;

GESTION: CON IDENTIFICADOR INI_PARENTESIS FIN_PARENTESIS COMO IDENTIFICADOR RES
    { printf("[MANAGEMENT]\n"); };

COMPARADOR1: COMPL OP_RELACIONAL COMPL RES SINO_1 RES
    { printf("[COMPARACIÓN]\n"); };

LECTURA: ENTRADA INI_PARENTESIS CONST_CADENA FIN_PARENTESIS
{ printf("[OPERACIÓN DE LECTURA]\n"); };

OPCION: CAMBIAR INI_PARENTESIS COMPL FIN_PARENTESIS INI_LLAVE MASOPCION_ FIN_LLAVE
    { printf("[BLOQUE SWITCH]\n"); };
MASOPCION: CASO CONST_INTEGER RES TERMINAR
MASOPCION_: MASOPCION_ MASOPCION | MASOPCION

DOSARG: FUN_ALGORITMO INI_PARENTESIS COMPL CHAR_COMA COMPL FIN_PARENTESIS
{ printf("[DOS ARGUMENTOS]\n"); };

ACIERTO: FUN_DIAGNOSTICO IDENTIFICADOR CHAR_COMA CONST_CADENA
    { printf("[ASSERT]\n"); };

%%
extern int yyparse(); // Declaración de la función yyparse generada por Bison
extern FILE* yyin; // Declaración de yyin
extern int yylineno;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Uso: %s archivo.txt\n", argv[0]);
        return 1;
    }
    
    FILE* archivo = fopen(argv[1], "r");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo: %s\n", argv[1]);
        return 1;
    }
    
    yyin = archivo; // Asignar el archivo de entrada al puntero yyin
    
    printf("Espere...");
    printf("\nEjecutando analizador semántico...\n\n");
    
    int resultado = yyparse(); // Ejecutar el analizador sintáctico
    fclose(archivo);
    return resultado;
}

void yyerror(const char* s) {
    printf("Error semántico");
}