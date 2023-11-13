%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "sintactico.tab.h"
void yyerror (char * s);
int yylex();
int empty_lines_count = 0;
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
%option yylineno
/* TOKENS NÚCLEOS */
DIGITO [0-9]
LETRA [a-zA-Z]
GUIONES [-_]
/*IDENTIFICADOR {LETRA}({LETRA}|{DIGITO}|{GUIONES})**/

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
OP_RELACIONAL "=="|">="|"<"|">"|"<="|"!="|"==="|"==!"|"=!!"|"!!"
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
TIPO_CONJUNTO "tuple"|"dict"|"set"|"frozenset"|"memoryview"
RANGO "range"
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
EXCEPCION "except"|"throw"|"throws"|"raise"
CON "with"
EN "in"
COMO "as"
FINALIZAR "finally"
DEF_CLASE "extends"|"new"|"implements"|"instanceof"|"this"|"class"|"union"|"nothrow"|"mutable"|"super"|"abstract"
LIBRERIAS_NATIVAS "native"|"static"|"synchronized"|"fastcall"|"forceinline"|"inline"|"explicit"|"extern"|"transient"|"box"|"declspec"|"dllimport"|"thread "|"typeid"
DEF_VARIABLE "typedef"|"register"|"selectany"|"volatile"|"auto"|"var"|"identifier"
DEF_FUN "def"
DEF_MET "void"
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
RETORNO "return"
FUN_NO_RETORNO "noreturn"|"hook"
DESDE "from"
IMPORTA "import"
ES "is"
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
{CONST_CADENA} { return CONST_CADENA; }
{CONST_INTEGER} { return(CONST_INTEGER); }
{CONST_FLOAT} { return(CONST_FLOAT);; }
{CHAR_COMA} { return(CHAR_COMA);}
{INI_LLAVE} { return(INI_LLAVE);}
{FIN_LLAVE} { return(FIN_LLAVE);}
{INI_CORCHETE} { return(INI_CORCHETE);}
{FIN_CORCHETE} { return(FIN_CORCHETE);}
{CHAR} { return(CHAR);}
{KEY} { return(KEY);}
{CHAR_MONEY} { return(CHAR_MONEY);}
{CHAR_EXCLAMATION} { return(CHAR_EXCLAMATION);}
{CHAR_ANDPARSER} { return(CHAR_ANDPARSER);}
{TYPE_KEY} {return(TYPE_KEY); }
{OP_RELACIONAL} {return(OP_RELACIONAL); }
{OP_LOGICO} {return(OP_LOGICO); }
{OP_MATEMATICO} {return(OP_MATEMATICO); }
{FUN_ITERABLE} {return(FUN_ITERABLE); }
{INCREMENTO} {return(INCREMENTO); }
{DECREMENTO} {return(DECREMENTO); }
{INI_PARENTESIS} {return(INI_PARENTESIS); }
{FIN_PARENTESIS} {return(FIN_PARENTESIS); }
{CHAR_DOBLEMENOR} {return(CHAR_DOBLEMENOR); }
{CHAR_DOBLEMAYOR} {return(CHAR_DOBLEMAYOR); }
{CHAR_ARROBA} {return(CHAR_ARROBA); }
{FUN_LIMPIAR} {return(FUN_LIMPIAR); }
{OP_IGUAL} {return(OP_IGUAL); }
{CHAR_PUNTOCOMA} {return(CHAR_PUNTOCOMA); }
{CHAR_DOSPUNTOS} {return(CHAR_DOSPUNTOS); }
{CHAR_PUNTO} {return(CHAR_PUNTO); }
{TIPO_DATO} {return(TIPO_DATO); }
{TIPO_CONJUNTO} {return(TIPO_CONJUNTO); }
{DATO_BOOL} {return(DATO_BOOL); }
{ENTRADA} {return(ENTRADA); }
{SALIDA} {return(SALIDA); }
{ERR_SALIDA} {return(ERR_SALIDA); }
{IND_FORMATO} {return(IND_FORMATO); }
{MAN_FORMATO} {return(MAN_FORMATO); }
{OP_ESPECIAL} {return(OP_ESPECIAL); }
{CLASE} {return(CLASE); }
{FUN_CADENA} {return(FUN_CADENA); }
{LIBRERIA} {return(LIBRERIA); }
{REPRESENTACION_DE_DATO} {return(REPRESENTACION_DE_DATO); }
{FUN_TRIGONOMETRIA} {return(FUN_TRIGONOMETRIA); }
{FUN_ALGORITMO} {return(FUN_ALGORITMO); }
{FUN_TEMPORAL} {return(FUN_TEMPORAL); }
{OP_UNION} {return(OP_UNION); }
{FUN_MATEMATICA} {return(FUN_MATEMATICA); }
{FUN_CTYPE} {return(FUN_CTYPE); }
{EXCEPCION} {return(EXCEPCION); }
{DEF_CLASE} {return(DEF_CLASE); }
{LIBRERIAS_NATIVAS} {return(LIBRERIAS_NATIVAS); }
{DEF_VARIABLE} {return(DEF_VARIABLE); }
{DEF_FUN} {return(DEF_FUN); }
{DEF_MET} {return(DEF_MET); }
{DEF_ATRIBUTO} {return(DEF_ATRIBUTO); }
{LIBRERIA_1} {return(LIBRERIA_1); }
{LIBRERIA_2} {return(LIBRERIA_2); }
{FUN_ESCRIBIR} {return(FUN_ESCRIBIR); }
{FUN_REGISTRAR} {return(FUN_REGISTRAR); }
{FUN_RECOLECTAR} {return(FUN_RECOLECTAR); }
{FUN_ELIMINAR} {return(FUN_ELIMINAR); }
{FUN} {return(FUN); }
{ATRAPAR} {return(ATRAPAR); }
{INTENTAR} {return(INTENTAR); }
{DIRECTORIO} {return(DIRECTORIO); }
{COMPARAR} {return(COMPARAR); }
{SINO_1} {return(SINO_1); }
{SINO_2} {return(SINO_2); }
{MIENTRAS} {return(MIENTRAS); }
{HACER} {return(HACER); }
{PARA} {return(PARA); }
{CAMBIAR} {return(CAMBIAR); }
{CASO} {return(CASO); }
{SENTENCIA} {return(SENTENCIA); }
{RETORNO} {return(RETORNO); }
{FUN_NO_RETORNO} {return(FUN_NO_RETORNO); }
{IMPORTA} {return(IMPORTA); }
{RANGO} {return(RANGO); }
{DESDE} {return(DESDE); }
{ES} {return(ES); }
{CON} {return(CON); }
{EN} {return(EN); }
{COMO} {return(COMO); }
{FINALIZAR} {return(FINALIZAR); }
{EXPORTA} {return(EXPORTA); }
{TERMINAR} {return(TERMINAR); }
{CONTINUAR} {return(CONTINUAR); }
{FUN_DIAGNOSTICO} {return(FUN_DIAGNOSTICO); }
{REFERENCIA} {return(REFERENCIA); }
{TIPO_ACCESO} {return(TIPO_ACCESO); }
{TIPO_VARIABLE} {return(TIPO_VARIABLE); }
{CONSTANTE} {return(CONSTANTE); }
{PUNTERO} {return(PUNTERO); }
{EVENTO} {return(EVENTO); }
{SALTO} {return(SALTO); }
{PRINCIPAL} {return(PRINCIPAL); }
{CONTENEDOR} {return(CONTENEDOR); }
{IDENTIFICADOR} {return(IDENTIFICADOR); }
\n {
    empty_lines_count++;
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

int yywrap (void) {return 1;}