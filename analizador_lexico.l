%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_IDENTIFICADORES 1000

struct Identificador {
    char nombre[500];
    int valor_inicial;
};

struct Identificador tablaIdentificadores[MAX_IDENTIFICADORES];

int numIdentificadores = 0;
int buscarIdentificador(const char* identificador);
int agregarIdentificador(const char* identificador);
%}

%option noyywrap
/* TOKENS NÚCLEOS */
DIGITO [0-9]
LETRA [a-zA-Z]
GUIONES [-_]

/* TOKENS COMENTARIOS */
INI_COMENTARIO1 "//"
INI_COMENTARIO2 "/*"
FIN_COMENTARIO2 "*/"

/* TOKENS 1 CARÁCTER */
CHAR_COMA [,]
CHAR_PUNTO [.]
CHAR_MONEY [$]
CHAR_EXCLAMATION [!]
CHAR_ANDPARSER [&]
CHAR_ARROBA “@”
CHAR_PUNTOCOMA [;]
CHAR_DOSPUNTOS [:]
INI_LLAVE ["{"]
FIN_LLAVE ["}"]
INI_PARENTESIS ["("]
FIN_PARENTESIS [")"]
INI_CORCHETE "["
FIN_CORCHETE "]"
CHAR_DOBLEMENOR "<<"
CHAR_DOBLEMAYOR ">>"

/* RESULTADO DE TOKENS NÚCLEOS */
IDENTIFICADOR {LETRA}({LETRA}|{DIGITO}|{GUIONES})*
CONST_INTEGER (-?[1-9]{DIGITO}{0,4})|0+
CONST_FLOAT {DIGITO}{0,8}{CHAR_PUNTO}{DIGITO}{1,8}+
CONST_CADENA \"[^\n"]*\"

/* RESULTADO DE TOKENS COMENTARIOS */
CONST_COMENTARIO {INI_COMENTARIO2}[^(\*\/)]*{FIN_COMENTARIO2}|{INI_COMENTARIO1}[^\n]*\n?

/* TOKENS LÓGICOS */
OP_MATEMATICO [+*/-]
OP_LOGICO "<>"|"||"|"&&"|"and"|"not"|"or"
OP_RELACIONAL "=="|">="|"<"|">"|"<="|"!"|"!="|"==="|"==!"|"=!!"|"!!"
OP_IGUAL [=]

/* MÁS TOKENS */
FUN_ITERABLE "yield"|"alignof"
INCREMENTO "++"|"+="
DECREMENTO "--"|"-="
FUN_LIMPIAR "cls"|"clear"|"clrscr"
CHAR "char"
KEY "key"
TYPE_KEY "foreign key"|"primary key"
TIPO_DATO "unsigned char"|"signed char"|"wchar_t"|"float"|"double"|"int"|"int8"|"int16"|"int32"|"int64"|"unsigned int"|"signed int"|"short int"|"unsigned short int "|"signed short int "|"long int"|"signed long int"|"unsigned long int"|"long double"|"m64"|"m128"|"m128d"|"m128i"|"string"|"list"|"bool"|"bytes"|"bytearray"
TIPO_CONJUNTO "tuple"|"range"|"dict"|"set"|"frozenset"|"memoryview"
DATO_BOOL "false"|"none"|"true"|"null"
ENTRADA "input"|"readline"|"getchar"|"gets"|"getch"|"cin"|"scanf"|"scanner"
SALIDA "cout"|"puts"|"print"|"printf"|"putchar"|"put"|"getche"
ERR_SALIDA "cerr"
IND_FORMATO "internal"|"dec"|"oct"|"hex"|"showbase"|"showpoint"|"uppercase"|"showpos"|"scientific"|"fixed"|"unitbuf"|"adjustfield"|"basefield"|"floatfield"|"skipws"|"left"|"right"
MAN_FORMATO "setfill"|"setiosflag"|"unsetiosflag"|"endl"|"flush"|"setw"|"setprecision"
OP_ESPECIAL "streambuf"|"istream"|"ostream"|"iostream"
CLASE "ios"|"ifstream"|"ofstream"|"fstream"
FUN_CADENA "index"|"strcpy"|"strncpy"|"strcat"|"strncat"|"strcmp"|"strncmp"|"strchr"|"strrchr"|"strcspn"|"strpbrk"|"strspn"|"strstr"|"strtok"|"strerror"|"strlen"|"tolower"
LIBRERIA "flags"
REPRESENTACION_DE_DATO "width"|"precision"|"fill"|"find"|"count"|"reverse"|"swap"|"sort"
FUN_TRIGONOMETRIA "acos"|"asin"|"atan"|"atan2"|"ceil"|"cos"|"cosh"|"sin"|"sinh"|"tan"|"tanh"
FUN_ALGORITMO "complex"|"sqrt"|"exp"|"fabs"|"floor"|"fmod"|"frexp"|"labs"|"ldexp"|"log"|"log10"|"modf"|"pow"|"strictfp"
FUN_TEMPORAL "asctime"|"clock"|"ctime"|"difftime"|"gmtime"|"localtime"|"mktime"|"strftime"|"time"
OP_UNION "merge"
FUN_MATEMATICA "min"|"max"
FUN_CTYPE "toupper"
EXCEPCION "finally"|"except"|"throw"|"throws"|"raise"|"with"
DEF_CLASE "extends"|"new"|"implements"|"instanceof"|"this"|"class"|"union"|"nothrow"|"mutable"|"super"|"abstract"
LIBRERIAS_NATIVAS "native"|"static"|"synchronized"|"fastcall"|"forceinline"|"inline"|"explicit"|"extern"|"transient"|"box"|"declspec"|"dllimport"|"thread "|"typeid"
DEF_VARIABLE "typedef"|"register"|"selectany"|"volatile"|"auto"|"var"|"identifier"
DEF_FUN "def "
DEF_ATRIBUTO "deprecated"
LIBRERIA_1 "include"
LIBRERIA_2 "requires"
FUN_ESCRIBIR "async"|"await"
FUN_REGISTRAR "struct"
FUN_RECOLECTAR "gc"
FUN_ELIMINAR "del"
FUN "virtual "|"sizeof"
ATRAPAR "catch"
INTENTAR "try"
DIRECTORIO "package"|"stream"
COMPARAR "if"
SINO_1 "else"
SINO_2 "elif"
MIENTRAS "while"
HACER "do"
PARA "for"
CAMBIAR "switch"
CASO "case"
SENTENCIA "default"|"asm"
FUN_NO_RETORNO "void"|"noreturn"|"return"|"hook"
IMPORTA "from"|"import"
VERIFICA "in"|"is"|"as"
EXPORTA "exports"
TERMINAR "break"
CONTINUAR "continue"
FUN_DIAGNOSTICO "assert"|"assume"
REFERENCIA "final"|"delegate"|"cdecl"|"pass"
TIPO_ACCESO "private"|"protected"|"public"
TIPO_VARIABLE "global"|"nonlocal"|"local"
CONSTANTE "const"|"enum"|"define"
PUNTERO "based"
EVENTO "event"
SALTO "goto"
PRINCIPAL "main"
CONTENEDOR "namespace"

%%
{CONST_CADENA} { printf("\nCONST_CADENA"); }
{CONST_INTEGER} { printf("\nCONST_INTEGER"); }
{CONST_FLOAT} { printf("\nCONST_FLOAT"); }
{CHAR_COMA} { printf("\nCHAR_COMA");}
{INI_LLAVE} { printf("\nINI_LLAVE");}
{FIN_LLAVE} { printf("\nFIN_LLAVE");}
{INI_CORCHETE} { printf("\nINI_CORCHETE");}
{FIN_CORCHETE} { printf("\nFIN_CORCHETE");}
{CHAR} { printf("\nCHAR");}
{KEY} { printf("\nKEY");}
{CHAR_MONEY} { printf("\nCHAR_MONEY");}
{CHAR_EXCLAMATION} { printf("\nCHAR_EXCLAMATION");}
{CHAR_ANDPARSER} { printf("\nANDPARSER");}
{TYPE_KEY} {printf("\nTYPE_KEY\t\t\t%s",yytext); }
{OP_RELACIONAL} {printf("\nOP_RELACIONAL\t\t\t%s",yytext); }
{OP_LOGICO} {printf("\nOP_LOGICO\t\t\t%s",yytext); }
{OP_MATEMATICO} {printf("\nOP_MATEMATICO\t\t\t%s",yytext); }
{FUN_ITERABLE} {printf("\nFUN_ITERABLE\t\t\t%s",yytext); }
{INCREMENTO} {printf("\nINCREMENTO\t\t\t%s",yytext); }
{DECREMENTO} {printf("\nDECREMENTO\t\t\t%s",yytext); }
{INI_PARENTESIS} {printf("\nINI_PARENTESIS\t\t\t"); }
{FIN_PARENTESIS} {printf("\nFIN_PARENTESIS\t\t\t"); }
{CHAR_DOBLEMENOR} {printf("\nCHAR_DOBLEMENOR"); }
{CHAR_DOBLEMAYOR} {printf("\nCHAR_DOBLEMAYOR"); }
{CHAR_ARROBA} {printf("\nCHAR_ARROBA\t\t\t"); }
{FUN_LIMPIAR} {printf("\nFUN_LIMPIAR\t\t\t%s",yytext); }
{OP_IGUAL} {printf("\nCHAR_IGUAL\t\t\t"); }
{CHAR_PUNTOCOMA} {printf("\nCHAR_PUNTOCOMA\t\t\t"); }
{CHAR_DOSPUNTOS} {printf("\nCHAR_DOSPUNTOS\t\t\t"); }
{CHAR_PUNTO} {printf("\nCHAR_PUNTO\t\t\t"); }
{TIPO_DATO} {printf("\nTIPO_DATO\t\t\t%s",yytext); }
{TIPO_CONJUNTO} {printf("\nTIPO_CONJUNTO\t\t\t%s",yytext); }
{DATO_BOOL} {printf("\nDATO_BOOL\t\t\t%s",yytext); }
{ENTRADA} {printf("\nENTRADA\t\t\t%s",yytext); }
{SALIDA} {printf("\nSALIDA\t\t\t%s",yytext); }
{ERR_SALIDA} {printf("\nERR_SALIDA\t\t\t%s",yytext); }
{IND_FORMATO} {printf("\nIND_FORMATO\t\t\t%s",yytext); }
{MAN_FORMATO} {printf("\nMAN_FORMATO\t\t\t%s",yytext); }
{OP_ESPECIAL} {printf("\nOP_ESPECIAL\t\t\t%s",yytext); }
{CLASE} {printf("\nCLASE\t\t\t%s",yytext); }
{FUN_CADENA} {printf("\nFUN_CADENA\t\t\t%s",yytext); }
{LIBRERIA} {printf("\nLIBRERIA\t\t\t%s",yytext); }
{REPRESENTACION_DE_DATO} {printf("\nREPRESENTACION_DE_DATO\t\t\t%s",yytext); }
{FUN_TRIGONOMETRIA} {printf("\nFUN_TRIGONOMETRIA\t\t\t%s",yytext); }
{FUN_ALGORITMO} {printf("\nFUN_ALGORITMO\t\t\t%s",yytext); }
{FUN_TEMPORAL} {printf("\nFUN_TEMPORAL\t\t\t%s",yytext); }
{OP_UNION} {printf("\nOP_UNION\t\t\t%s",yytext); }
{FUN_MATEMATICA} {printf("\nFUN_MATEMATICA\t\t\t%s",yytext); }
{FUN_CTYPE} {printf("\nFUN_CTYPE\t\t\t%s",yytext); }
{EXCEPCION} {printf("\nEXCEPCION\t\t\t%s",yytext); }
{DEF_CLASE} {printf("\nDEF_CLASE\t\t\t%s",yytext); }
{LIBRERIAS_NATIVAS} {printf("\nLIBRERIAS_NATIVAS\t\t\t%s",yytext); }
{DEF_VARIABLE} {printf("\nDEF_VARIABLE\t\t\t%s",yytext); }
{DEF_FUN} {printf("\nDEF_FUN\t\t\t%s",yytext); }
{DEF_ATRIBUTO} {printf("\nDEF_ATRIBUTO\t\t\t%s",yytext); }
{LIBRERIA_1} {printf("\nLIBRERIA_1\t\t\t%s",yytext); }
{LIBRERIA_2} {printf("\nLIBRERIA_2\t\t\t%s",yytext); }
{FUN_ESCRIBIR} {printf("\nFUN_ESCRIBIR\t\t\t%s",yytext); }
{FUN_REGISTRAR} {printf("\nFUN_REGISTRAR\t\t\t%s",yytext); }
{FUN_RECOLECTAR} {printf("\nFUN_RECOLECTAR\t\t\t%s",yytext); }
{FUN_ELIMINAR} {printf("\nFUN_ELIMINAR\t\t\t%s",yytext); }
{FUN} {printf("\nFUN\t\t\t%s",yytext); }
{ATRAPAR} {printf("\nATRAPAR\t\t\t%s",yytext); }
{INTENTAR} {printf("\nINTENTAR\t\t\t%s",yytext); }
{DIRECTORIO} {printf("\nDIRECTORIO\t\t\t%s",yytext); }
{COMPARAR} {printf("\nCOMPARAR\t\t\t%s",yytext); }
{SINO_1} {printf("\nSINO_1\t\t\t%s",yytext); }
{SINO_2} {printf("\nSINO_2\t\t\t%s",yytext); }
{MIENTRAS} {printf("\nMIENTRAS\t\t\t%s",yytext); }
{HACER} {printf("\nHACER\t\t\t%s",yytext); }
{PARA} {printf("\nPARA\t\t\t%s",yytext); }
{CAMBIAR} {printf("\nCAMBIAR\t\t\t%s",yytext); }
{CASO} {printf("\nCASO\t\t\t%s",yytext); }
{SENTENCIA} {printf("\nSENTENCIA\t\t\t%s",yytext); }
{FUN_NO_RETORNO} {printf("\nFUN_NO_RETORNO\t\t\t%s",yytext); }
{IMPORTA} {printf("\nIMPORTA\t\t\t%s",yytext); }
{VERIFICA} {printf("\nVERIFICA\t\t\t%s",yytext); }
{EXPORTA} {printf("\nEXPORTA\t\t\t%s",yytext); }
{TERMINAR} {printf("\nTERMINAR\t\t\t%s",yytext); }
{CONTINUAR} {printf("\nCONTINUAR\t\t\t%s",yytext); }
{FUN_DIAGNOSTICO} {printf("\nFUN_DIAGNOSTICO\t\t\t%s",yytext); }
{REFERENCIA} {printf("\nREFERENCIA\t\t\t%s",yytext); }
{TIPO_ACCESO} {printf("\nTIPO_ACCESO\t\t\t%s",yytext); }
{TIPO_VARIABLE} {printf("\nTIPO_VARIABLE\t\t\t%s",yytext); }
{CONSTANTE} {printf("\nCONSTANTE\t\t\t%s",yytext); }
{PUNTERO} {printf("\nPUNTERO\t\t\t%s",yytext); }
{EVENTO} {printf("\nEVENTO\t\t\t%s",yytext); }
{SALTO} {printf("\nSALTO\t\t\t%s",yytext); }
{PRINCIPAL} {printf("\nPRINCIPAL\t\t\t%s",yytext); }
{CONTENEDOR} {printf("\nCONTENEDOR\t\t\t%s",yytext); }
{IDENTIFICADOR} {
    // Obtener el identificador reconocido por Flex
    char identificador[500];
    strncpy(identificador, yytext, yyleng);
    identificador[yyleng] = '\0';
   
    // Buscar el identificador en la tabla
    int indice = buscarIdentificador(identificador);


    if (indice != -1) {
        // El identificador ya existe en la tabla, mostrar su valor inicial
        printf("\nIDENTIFICADOR\t\t\t%d", tablaIdentificadores[indice].valor_inicial);
        /*printf("Identificador existente: %s, Valor inicial: %d\n", tablaIdentificadores[indice].nombre, tablaIdentificadores[indice].valor_inicial);*/
    } else {
        // El identificador no existe en la tabla, agregarlo con un valor único y aumentar el contador
        indice = agregarIdentificador(identificador);
        printf("\nIDENTIFICADOR\t\t\t%d", tablaIdentificadores[indice].valor_inicial);
        /*printf("Nuevo identificador: %s, Valor inicial: %d\n", tablaIdentificadores[indice].nombre, tablaIdentificadores[indice].valor_inicial);*/
        tablaIdentificadores[indice].valor_inicial = numIdentificadores - 1; // Actualizar el valor inicial
    }
}

\n {
    // Ignorar los saltos de línea
}

{INI_COMENTARIO1}          /* Ignorar los comentarios de una línea */
{INI_COMENTARIO2}          /* Ignorar los comentarios de una línea */
{FIN_COMENTARIO2}          /* Ignorar los comentarios de una línea */
{CONST_COMENTARIO}         /* Ignorar los comentarios de una línea */

. {
    // Ignorar cualquier otro carácter
}

%%
int buscarIdentificador(const char* identificador) {
    for (int i = 0; i < numIdentificadores; i++) {
        if (strcmp(tablaIdentificadores[i].nombre, identificador) == 0) {
            return i; // El identificador ya existe en la tabla, devuelve su índice
        }
    }
    return -1; // El identificador no existe en la tabla
}

int agregarIdentificador(const char* identificador) {
    if (numIdentificadores < MAX_IDENTIFICADORES) {
        strncpy(tablaIdentificadores[numIdentificadores].nombre, identificador, 500);
        tablaIdentificadores[numIdentificadores].valor_inicial = numIdentificadores; // Valor inicial único
        numIdentificadores++;
        return numIdentificadores - 1; // Devuelve el índice del nuevo identificador en la tabla
    }
    return -1; // La tabla de identificadores está llena
}

struct Identificador* obtenerIdentificadores() {
    struct Identificador* identificadores = malloc(numIdentificadores * sizeof(struct Identificador));
    if (identificadores == NULL) {
        return NULL; // Error de asignación de memoria
    }
    
    for (int i = 0; i < numIdentificadores; i++) {
        strncpy(identificadores[i].nombre, tablaIdentificadores[i].nombre, 500);
        identificadores[i].valor_inicial = tablaIdentificadores[i].valor_inicial;
    }
    
    return identificadores;
}

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
    yyin = archivo;
    printf("Espere...");
    printf("\nEjecutando analizador léxico...");
    printf("\n\n\tCORRIDA DEL PROGRAMA");
    printf("\nNombre del Token\t\tValor de atributo");
    yylex();
    // Obtener los identificadores encontrados
    struct Identificador* identificadores = obtenerIdentificadores();
    if (identificadores != NULL) {
        printf("\n\n\tTABLA DE SIMBOLOS");
        printf("\nIDENTIFICADOR\t\t\tValor de atributo");
        for (int i = 0; i < numIdentificadores; i++) {
            printf("\n%s\t\t\t%d", identificadores[i].nombre, identificadores[i].valor_inicial);
        }
        free(identificadores); // Liberar la memoria asignada al arreglo de identificadores
    } else {
        printf("\nNo se pudo obtener la lista de identificadores.");
    }    
    fclose(archivo);
    return 0;
}
