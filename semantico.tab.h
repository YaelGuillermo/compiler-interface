/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SEMANTICO_TAB_H_INCLUDED
# define YY_YY_SEMANTICO_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    OP_RELACIONAL = 258,           /* OP_RELACIONAL  */
    OP_LOGICO = 259,               /* OP_LOGICO  */
    OP_MATEMATICO = 260,           /* OP_MATEMATICO  */
    FUN_ITERABLE = 261,            /* FUN_ITERABLE  */
    INCREMENTO = 262,              /* INCREMENTO  */
    DECREMENTO = 263,              /* DECREMENTO  */
    INI_PARENTESIS = 264,          /* INI_PARENTESIS  */
    FIN_PARENTESIS = 265,          /* FIN_PARENTESIS  */
    INI_LLAVE = 266,               /* INI_LLAVE  */
    FIN_LLAVE = 267,               /* FIN_LLAVE  */
    INI_CORCHETE = 268,            /* INI_CORCHETE  */
    FIN_CORCHETE = 269,            /* FIN_CORCHETE  */
    CHAR_DOBLEMENOR = 270,         /* CHAR_DOBLEMENOR  */
    CHAR_DOBLEMAYOR = 271,         /* CHAR_DOBLEMAYOR  */
    CHAR_COMA = 272,               /* CHAR_COMA  */
    CHAR_MONEY = 273,              /* CHAR_MONEY  */
    CHAR_EXCLAMATION = 274,        /* CHAR_EXCLAMATION  */
    CHAR_ANDPARSER = 275,          /* CHAR_ANDPARSER  */
    CHAR_ARROBA = 276,             /* CHAR_ARROBA  */
    KEY = 277,                     /* KEY  */
    TYPE_KEY = 278,                /* TYPE_KEY  */
    FUN_LIMPIAR = 279,             /* FUN_LIMPIAR  */
    CHAR = 280,                    /* CHAR  */
    OP_IGUAL = 281,                /* OP_IGUAL  */
    CHAR_PUNTOCOMA = 282,          /* CHAR_PUNTOCOMA  */
    CHAR_DOSPUNTOS = 283,          /* CHAR_DOSPUNTOS  */
    CHAR_GUIONBAJO = 284,          /* CHAR_GUIONBAJO  */
    CHAR_PUNTO = 285,              /* CHAR_PUNTO  */
    COMENTARIO = 286,              /* COMENTARIO  */
    INI_COMENTARIO = 287,          /* INI_COMENTARIO  */
    FIN_COMENTARIO = 288,          /* FIN_COMENTARIO  */
    TIPO_DATO = 289,               /* TIPO_DATO  */
    TIPO_CONJUNTO = 290,           /* TIPO_CONJUNTO  */
    DATO_BOOL = 291,               /* DATO_BOOL  */
    ENTRADA = 292,                 /* ENTRADA  */
    SALIDA = 293,                  /* SALIDA  */
    ERR_SALIDA = 294,              /* ERR_SALIDA  */
    IND_FORMATO = 295,             /* IND_FORMATO  */
    MAN_FORMATO = 296,             /* MAN_FORMATO  */
    OP_ESPECIAL = 297,             /* OP_ESPECIAL  */
    CLASE = 298,                   /* CLASE  */
    FUN_CADENA = 299,              /* FUN_CADENA  */
    LIBRERIA = 300,                /* LIBRERIA  */
    REPRESENTACION_DE_DATO = 301,  /* REPRESENTACION_DE_DATO  */
    FUN_TRIGONOMETRIA = 302,       /* FUN_TRIGONOMETRIA  */
    FUN_ALGORITMO = 303,           /* FUN_ALGORITMO  */
    FUN_TEMPORAL = 304,            /* FUN_TEMPORAL  */
    OP_UNION = 305,                /* OP_UNION  */
    FUN_MATEMATICA = 306,          /* FUN_MATEMATICA  */
    FUN_CTYPE = 307,               /* FUN_CTYPE  */
    EXCEPCION = 308,               /* EXCEPCION  */
    DEF_CLASE = 309,               /* DEF_CLASE  */
    LIBRERIAS_NATIVAS = 310,       /* LIBRERIAS_NATIVAS  */
    DEF_VARIABLE = 311,            /* DEF_VARIABLE  */
    DEF_FUN = 312,                 /* DEF_FUN  */
    DEF_ATRIBUTO = 313,            /* DEF_ATRIBUTO  */
    LIBRERIA_1 = 314,              /* LIBRERIA_1  */
    LIBRERIA_2 = 315,              /* LIBRERIA_2  */
    FUN_ESCRIBIR = 316,            /* FUN_ESCRIBIR  */
    FUN_REGISTRAR = 317,           /* FUN_REGISTRAR  */
    FUN_RECOLECTAR = 318,          /* FUN_RECOLECTAR  */
    FUN_ELIMINAR = 319,            /* FUN_ELIMINAR  */
    FUN = 320,                     /* FUN  */
    ATRAPAR = 321,                 /* ATRAPAR  */
    INTENTAR = 322,                /* INTENTAR  */
    DIRECTORIO = 323,              /* DIRECTORIO  */
    COMPARAR = 324,                /* COMPARAR  */
    SINO_1 = 325,                  /* SINO_1  */
    SINO_2 = 326,                  /* SINO_2  */
    MIENTRAS = 327,                /* MIENTRAS  */
    HACER = 328,                   /* HACER  */
    PARA = 329,                    /* PARA  */
    CAMBIAR = 330,                 /* CAMBIAR  */
    CASO = 331,                    /* CASO  */
    SENTENCIA = 332,               /* SENTENCIA  */
    FUN_MET = 333,                 /* FUN_MET  */
    FUN_NO_RETORNO = 334,          /* FUN_NO_RETORNO  */
    RETORNO = 335,                 /* RETORNO  */
    IMPORTA = 336,                 /* IMPORTA  */
    VERIFICA = 337,                /* VERIFICA  */
    EXPORTA = 338,                 /* EXPORTA  */
    TERMINAR = 339,                /* TERMINAR  */
    CONTINUAR = 340,               /* CONTINUAR  */
    FUN_DIAGNOSTICO = 341,         /* FUN_DIAGNOSTICO  */
    REFERENCIA = 342,              /* REFERENCIA  */
    TIPO_ACCESO = 343,             /* TIPO_ACCESO  */
    TIPO_VARIABLE = 344,           /* TIPO_VARIABLE  */
    CONSTANTE = 345,               /* CONSTANTE  */
    PUNTERO = 346,                 /* PUNTERO  */
    EVENTO = 347,                  /* EVENTO  */
    SALTO = 348,                   /* SALTO  */
    PRINCIPAL = 349,               /* PRINCIPAL  */
    CONTENEDOR = 350,              /* CONTENEDOR  */
    IDENTIFICADOR = 351,           /* IDENTIFICADOR  */
    CONST_FLOAT = 352,             /* CONST_FLOAT  */
    CONST_INTEGER = 353,           /* CONST_INTEGER  */
    CONST_CADENA = 354,            /* CONST_CADENA  */
    DEF_MET = 355,                 /* DEF_MET  */
    EN = 356,                      /* EN  */
    FINALIZAR = 357,               /* FINALIZAR  */
    CON = 358,                     /* CON  */
    COMO = 359,                    /* COMO  */
    DESDE = 360,                   /* DESDE  */
    RANGO = 361,                   /* RANGO  */
    ES = 362                       /* ES  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SEMANTICO_TAB_H_INCLUDED  */
