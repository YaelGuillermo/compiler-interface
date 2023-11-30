/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "semantico.y"

#include <stdio.h>
#include <stdlib.h>
int yylex();
void yyerror(const char* s);

#line 78 "semantico.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "semantico.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_OP_RELACIONAL = 3,              /* OP_RELACIONAL  */
  YYSYMBOL_OP_LOGICO = 4,                  /* OP_LOGICO  */
  YYSYMBOL_OP_MATEMATICO = 5,              /* OP_MATEMATICO  */
  YYSYMBOL_FUN_ITERABLE = 6,               /* FUN_ITERABLE  */
  YYSYMBOL_INCREMENTO = 7,                 /* INCREMENTO  */
  YYSYMBOL_DECREMENTO = 8,                 /* DECREMENTO  */
  YYSYMBOL_INI_PARENTESIS = 9,             /* INI_PARENTESIS  */
  YYSYMBOL_FIN_PARENTESIS = 10,            /* FIN_PARENTESIS  */
  YYSYMBOL_INI_LLAVE = 11,                 /* INI_LLAVE  */
  YYSYMBOL_FIN_LLAVE = 12,                 /* FIN_LLAVE  */
  YYSYMBOL_INI_CORCHETE = 13,              /* INI_CORCHETE  */
  YYSYMBOL_FIN_CORCHETE = 14,              /* FIN_CORCHETE  */
  YYSYMBOL_CHAR_DOBLEMENOR = 15,           /* CHAR_DOBLEMENOR  */
  YYSYMBOL_CHAR_DOBLEMAYOR = 16,           /* CHAR_DOBLEMAYOR  */
  YYSYMBOL_CHAR_COMA = 17,                 /* CHAR_COMA  */
  YYSYMBOL_CHAR_MONEY = 18,                /* CHAR_MONEY  */
  YYSYMBOL_CHAR_EXCLAMATION = 19,          /* CHAR_EXCLAMATION  */
  YYSYMBOL_CHAR_ANDPARSER = 20,            /* CHAR_ANDPARSER  */
  YYSYMBOL_CHAR_ARROBA = 21,               /* CHAR_ARROBA  */
  YYSYMBOL_KEY = 22,                       /* KEY  */
  YYSYMBOL_TYPE_KEY = 23,                  /* TYPE_KEY  */
  YYSYMBOL_FUN_LIMPIAR = 24,               /* FUN_LIMPIAR  */
  YYSYMBOL_CHAR = 25,                      /* CHAR  */
  YYSYMBOL_OP_IGUAL = 26,                  /* OP_IGUAL  */
  YYSYMBOL_CHAR_PUNTOCOMA = 27,            /* CHAR_PUNTOCOMA  */
  YYSYMBOL_CHAR_DOSPUNTOS = 28,            /* CHAR_DOSPUNTOS  */
  YYSYMBOL_CHAR_GUIONBAJO = 29,            /* CHAR_GUIONBAJO  */
  YYSYMBOL_CHAR_PUNTO = 30,                /* CHAR_PUNTO  */
  YYSYMBOL_COMENTARIO = 31,                /* COMENTARIO  */
  YYSYMBOL_INI_COMENTARIO = 32,            /* INI_COMENTARIO  */
  YYSYMBOL_FIN_COMENTARIO = 33,            /* FIN_COMENTARIO  */
  YYSYMBOL_TIPO_DATO = 34,                 /* TIPO_DATO  */
  YYSYMBOL_TIPO_CONJUNTO = 35,             /* TIPO_CONJUNTO  */
  YYSYMBOL_DATO_BOOL = 36,                 /* DATO_BOOL  */
  YYSYMBOL_ENTRADA = 37,                   /* ENTRADA  */
  YYSYMBOL_SALIDA = 38,                    /* SALIDA  */
  YYSYMBOL_ERR_SALIDA = 39,                /* ERR_SALIDA  */
  YYSYMBOL_IND_FORMATO = 40,               /* IND_FORMATO  */
  YYSYMBOL_MAN_FORMATO = 41,               /* MAN_FORMATO  */
  YYSYMBOL_OP_ESPECIAL = 42,               /* OP_ESPECIAL  */
  YYSYMBOL_CLASE = 43,                     /* CLASE  */
  YYSYMBOL_FUN_CADENA = 44,                /* FUN_CADENA  */
  YYSYMBOL_LIBRERIA = 45,                  /* LIBRERIA  */
  YYSYMBOL_REPRESENTACION_DE_DATO = 46,    /* REPRESENTACION_DE_DATO  */
  YYSYMBOL_FUN_TRIGONOMETRIA = 47,         /* FUN_TRIGONOMETRIA  */
  YYSYMBOL_FUN_ALGORITMO = 48,             /* FUN_ALGORITMO  */
  YYSYMBOL_FUN_TEMPORAL = 49,              /* FUN_TEMPORAL  */
  YYSYMBOL_OP_UNION = 50,                  /* OP_UNION  */
  YYSYMBOL_FUN_MATEMATICA = 51,            /* FUN_MATEMATICA  */
  YYSYMBOL_FUN_CTYPE = 52,                 /* FUN_CTYPE  */
  YYSYMBOL_EXCEPCION = 53,                 /* EXCEPCION  */
  YYSYMBOL_DEF_CLASE = 54,                 /* DEF_CLASE  */
  YYSYMBOL_LIBRERIAS_NATIVAS = 55,         /* LIBRERIAS_NATIVAS  */
  YYSYMBOL_DEF_VARIABLE = 56,              /* DEF_VARIABLE  */
  YYSYMBOL_DEF_FUN = 57,                   /* DEF_FUN  */
  YYSYMBOL_DEF_ATRIBUTO = 58,              /* DEF_ATRIBUTO  */
  YYSYMBOL_LIBRERIA_1 = 59,                /* LIBRERIA_1  */
  YYSYMBOL_LIBRERIA_2 = 60,                /* LIBRERIA_2  */
  YYSYMBOL_FUN_ESCRIBIR = 61,              /* FUN_ESCRIBIR  */
  YYSYMBOL_FUN_REGISTRAR = 62,             /* FUN_REGISTRAR  */
  YYSYMBOL_FUN_RECOLECTAR = 63,            /* FUN_RECOLECTAR  */
  YYSYMBOL_FUN_ELIMINAR = 64,              /* FUN_ELIMINAR  */
  YYSYMBOL_FUN = 65,                       /* FUN  */
  YYSYMBOL_ATRAPAR = 66,                   /* ATRAPAR  */
  YYSYMBOL_INTENTAR = 67,                  /* INTENTAR  */
  YYSYMBOL_DIRECTORIO = 68,                /* DIRECTORIO  */
  YYSYMBOL_COMPARAR = 69,                  /* COMPARAR  */
  YYSYMBOL_SINO_1 = 70,                    /* SINO_1  */
  YYSYMBOL_SINO_2 = 71,                    /* SINO_2  */
  YYSYMBOL_MIENTRAS = 72,                  /* MIENTRAS  */
  YYSYMBOL_HACER = 73,                     /* HACER  */
  YYSYMBOL_PARA = 74,                      /* PARA  */
  YYSYMBOL_CAMBIAR = 75,                   /* CAMBIAR  */
  YYSYMBOL_CASO = 76,                      /* CASO  */
  YYSYMBOL_SENTENCIA = 77,                 /* SENTENCIA  */
  YYSYMBOL_FUN_MET = 78,                   /* FUN_MET  */
  YYSYMBOL_FUN_NO_RETORNO = 79,            /* FUN_NO_RETORNO  */
  YYSYMBOL_RETORNO = 80,                   /* RETORNO  */
  YYSYMBOL_IMPORTA = 81,                   /* IMPORTA  */
  YYSYMBOL_VERIFICA = 82,                  /* VERIFICA  */
  YYSYMBOL_EXPORTA = 83,                   /* EXPORTA  */
  YYSYMBOL_TERMINAR = 84,                  /* TERMINAR  */
  YYSYMBOL_CONTINUAR = 85,                 /* CONTINUAR  */
  YYSYMBOL_FUN_DIAGNOSTICO = 86,           /* FUN_DIAGNOSTICO  */
  YYSYMBOL_REFERENCIA = 87,                /* REFERENCIA  */
  YYSYMBOL_TIPO_ACCESO = 88,               /* TIPO_ACCESO  */
  YYSYMBOL_TIPO_VARIABLE = 89,             /* TIPO_VARIABLE  */
  YYSYMBOL_CONSTANTE = 90,                 /* CONSTANTE  */
  YYSYMBOL_PUNTERO = 91,                   /* PUNTERO  */
  YYSYMBOL_EVENTO = 92,                    /* EVENTO  */
  YYSYMBOL_SALTO = 93,                     /* SALTO  */
  YYSYMBOL_PRINCIPAL = 94,                 /* PRINCIPAL  */
  YYSYMBOL_CONTENEDOR = 95,                /* CONTENEDOR  */
  YYSYMBOL_IDENTIFICADOR = 96,             /* IDENTIFICADOR  */
  YYSYMBOL_CONST_FLOAT = 97,               /* CONST_FLOAT  */
  YYSYMBOL_CONST_INTEGER = 98,             /* CONST_INTEGER  */
  YYSYMBOL_CONST_CADENA = 99,              /* CONST_CADENA  */
  YYSYMBOL_DEF_MET = 100,                  /* DEF_MET  */
  YYSYMBOL_EN = 101,                       /* EN  */
  YYSYMBOL_FINALIZAR = 102,                /* FINALIZAR  */
  YYSYMBOL_CON = 103,                      /* CON  */
  YYSYMBOL_COMO = 104,                     /* COMO  */
  YYSYMBOL_DESDE = 105,                    /* DESDE  */
  YYSYMBOL_RANGO = 106,                    /* RANGO  */
  YYSYMBOL_ES = 107,                       /* ES  */
  YYSYMBOL_YYACCEPT = 108,                 /* $accept  */
  YYSYMBOL_SIMBOLO = 109,                  /* SIMBOLO  */
  YYSYMBOL_PROCEDIMIENTO_ = 110,           /* PROCEDIMIENTO_  */
  YYSYMBOL_VARIABLE_ = 111,                /* VARIABLE_  */
  YYSYMBOL_BIBLIOTECA_ = 112,              /* BIBLIOTECA_  */
  YYSYMBOL_EXTERNO = 113,                  /* EXTERNO  */
  YYSYMBOL_INSTRUCCIONES_ = 114,           /* INSTRUCCIONES_  */
  YYSYMBOL_INSTRUCCIONES = 115,            /* INSTRUCCIONES  */
  YYSYMBOL_F_INIPAR = 116,                 /* F_INIPAR  */
  YYSYMBOL_FACT_1 = 117,                   /* FACT_1  */
  YYSYMBOL_F_ID = 118,                     /* F_ID  */
  YYSYMBOL_FACT_2 = 119,                   /* FACT_2  */
  YYSYMBOL_FACT_3 = 120,                   /* FACT_3  */
  YYSYMBOL_F_COMPA = 121,                  /* F_COMPA  */
  YYSYMBOL_FACT_4 = 122,                   /* FACT_4  */
  YYSYMBOL_BIBLIOTECA = 123,               /* BIBLIOTECA  */
  YYSYMBOL_ASIGVAR = 124,                  /* ASIGVAR  */
  YYSYMBOL_ASIGVALOR = 125,                /* ASIGVALOR  */
  YYSYMBOL_DECVAR = 126,                   /* DECVAR  */
  YYSYMBOL_MAIN = 127,                     /* MAIN  */
  YYSYMBOL_FUNCION = 128,                  /* FUNCION  */
  YYSYMBOL_ENTRECORCH = 129,               /* ENTRECORCH  */
  YYSYMBOL_PALABRA = 130,                  /* PALABRA  */
  YYSYMBOL_METODO = 131,                   /* METODO  */
  YYSYMBOL_IMPRESION = 132,                /* IMPRESION  */
  YYSYMBOL_LLAMADA = 133,                  /* LLAMADA  */
  YYSYMBOL_ASIGPROC = 134,                 /* ASIGPROC  */
  YYSYMBOL_COMPARADOR2 = 135,              /* COMPARADOR2  */
  YYSYMBOL_ASIGCOMP = 136,                 /* ASIGCOMP  */
  YYSYMBOL_ASIGCOMPSINO2 = 137,            /* ASIGCOMPSINO2  */
  YYSYMBOL_MASCOMPARADOR2_ = 138,          /* MASCOMPARADOR2_  */
  YYSYMBOL_BUCLEWH = 139,                  /* BUCLEWH  */
  YYSYMBOL_COMPL = 140,                    /* COMPL  */
  YYSYMBOL_BUCLEFO = 141,                  /* BUCLEFO  */
  YYSYMBOL_RES = 142,                      /* RES  */
  YYSYMBOL_LANZAMIENTO1 = 143,             /* LANZAMIENTO1  */
  YYSYMBOL_LANZAMIENTO2 = 144,             /* LANZAMIENTO2  */
  YYSYMBOL_MODULO = 145,                   /* MODULO  */
  YYSYMBOL_GESTION = 146,                  /* GESTION  */
  YYSYMBOL_COMPARADOR1 = 147,              /* COMPARADOR1  */
  YYSYMBOL_LECTURA = 148,                  /* LECTURA  */
  YYSYMBOL_OPCION = 149,                   /* OPCION  */
  YYSYMBOL_MASOPCION = 150,                /* MASOPCION  */
  YYSYMBOL_MASOPCION_ = 151,               /* MASOPCION_  */
  YYSYMBOL_DOSARG = 152,                   /* DOSARG  */
  YYSYMBOL_ACIERTO = 153                   /* ACIERTO  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   342

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  108
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  196

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   362


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   117,   117,   120,   120,   123,   123,   125,   125,   127,
     127,   129,   129,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   133,
     134,   134,   136,   137,   137,   137,   138,   138,   140,   141,
     141,   143,   145,   147,   147,   147,   149,   152,   155,   157,
     158,   158,   160,   163,   166,   168,   168,   170,   172,   173,
     174,   174,   176,   178,   178,   180,   182,   184,   187,   190,
     192,   195,   198,   201,   203,   204,   204,   206,   209
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "OP_RELACIONAL",
  "OP_LOGICO", "OP_MATEMATICO", "FUN_ITERABLE", "INCREMENTO", "DECREMENTO",
  "INI_PARENTESIS", "FIN_PARENTESIS", "INI_LLAVE", "FIN_LLAVE",
  "INI_CORCHETE", "FIN_CORCHETE", "CHAR_DOBLEMENOR", "CHAR_DOBLEMAYOR",
  "CHAR_COMA", "CHAR_MONEY", "CHAR_EXCLAMATION", "CHAR_ANDPARSER",
  "CHAR_ARROBA", "KEY", "TYPE_KEY", "FUN_LIMPIAR", "CHAR", "OP_IGUAL",
  "CHAR_PUNTOCOMA", "CHAR_DOSPUNTOS", "CHAR_GUIONBAJO", "CHAR_PUNTO",
  "COMENTARIO", "INI_COMENTARIO", "FIN_COMENTARIO", "TIPO_DATO",
  "TIPO_CONJUNTO", "DATO_BOOL", "ENTRADA", "SALIDA", "ERR_SALIDA",
  "IND_FORMATO", "MAN_FORMATO", "OP_ESPECIAL", "CLASE", "FUN_CADENA",
  "LIBRERIA", "REPRESENTACION_DE_DATO", "FUN_TRIGONOMETRIA",
  "FUN_ALGORITMO", "FUN_TEMPORAL", "OP_UNION", "FUN_MATEMATICA",
  "FUN_CTYPE", "EXCEPCION", "DEF_CLASE", "LIBRERIAS_NATIVAS",
  "DEF_VARIABLE", "DEF_FUN", "DEF_ATRIBUTO", "LIBRERIA_1", "LIBRERIA_2",
  "FUN_ESCRIBIR", "FUN_REGISTRAR", "FUN_RECOLECTAR", "FUN_ELIMINAR", "FUN",
  "ATRAPAR", "INTENTAR", "DIRECTORIO", "COMPARAR", "SINO_1", "SINO_2",
  "MIENTRAS", "HACER", "PARA", "CAMBIAR", "CASO", "SENTENCIA", "FUN_MET",
  "FUN_NO_RETORNO", "RETORNO", "IMPORTA", "VERIFICA", "EXPORTA",
  "TERMINAR", "CONTINUAR", "FUN_DIAGNOSTICO", "REFERENCIA", "TIPO_ACCESO",
  "TIPO_VARIABLE", "CONSTANTE", "PUNTERO", "EVENTO", "SALTO", "PRINCIPAL",
  "CONTENEDOR", "IDENTIFICADOR", "CONST_FLOAT", "CONST_INTEGER",
  "CONST_CADENA", "DEF_MET", "EN", "FINALIZAR", "CON", "COMO", "DESDE",
  "RANGO", "ES", "$accept", "SIMBOLO", "PROCEDIMIENTO_", "VARIABLE_",
  "BIBLIOTECA_", "EXTERNO", "INSTRUCCIONES_", "INSTRUCCIONES", "F_INIPAR",
  "FACT_1", "F_ID", "FACT_2", "FACT_3", "F_COMPA", "FACT_4", "BIBLIOTECA",
  "ASIGVAR", "ASIGVALOR", "DECVAR", "MAIN", "FUNCION", "ENTRECORCH",
  "PALABRA", "METODO", "IMPRESION", "LLAMADA", "ASIGPROC", "COMPARADOR2",
  "ASIGCOMP", "ASIGCOMPSINO2", "MASCOMPARADOR2_", "BUCLEWH", "COMPL",
  "BUCLEFO", "RES", "LANZAMIENTO1", "LANZAMIENTO2", "MODULO", "GESTION",
  "COMPARADOR1", "LECTURA", "OPCION", "MASOPCION", "MASOPCION_", "DOSARG",
  "ACIERTO", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-81)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -13,   -45,   -78,    21,    -8,   -81,   -81,   -81,    10,   -52,
     -81,    23,    -5,   -81,   -81,   -65,   -63,    24,   -81,   -81,
     -81,   -81,   -81,    11,   -81,    27,   -81,   -55,    25,   -81,
     -51,     9,   239,   -17,   -55,   -81,   -81,    28,    38,   -47,
      41,    42,   -81,    26,   -11,    40,   -38,    50,   -36,   -17,
     -81,    30,   -35,    -2,   -81,   -81,   -81,   -81,   -81,   -81,
     -33,   -81,     0,   -81,    61,   -81,    -4,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -31,    66,    70,   -81,   -81,   -81,
     -81,   -81,   -14,    59,    -9,   -72,   239,    35,   -81,   -81,
     -81,   -81,   -72,     1,   -72,    76,    91,    96,    92,   -81,
     100,   101,   -81,   -43,   -72,    26,   -81,   -81,   -81,   239,
     239,    97,    29,   109,   107,   239,    32,   123,    31,   120,
      34,   -80,   112,   124,   -81,   128,   -81,   140,   -81,    26,
      48,    43,    90,   -81,   137,   -81,   -72,    26,   -72,   143,
     144,   -81,   -81,   -81,   142,   -81,    54,   141,   239,    84,
      26,    91,   149,   160,   157,   -81,   154,   -72,    94,   -81,
      75,   -81,   135,    26,   -81,   161,   155,   166,   -81,   167,
     169,    82,   -81,    -7,    26,   162,   -81,   163,   -81,   239,
     239,    26,    26,   -81,   -81,   -81,   -81,   -81,   186,   199,
     -81,   103,   -81,   170,   -81,   -81
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     8,     9,    10,     0,     0,
       1,     0,     0,     7,     6,     0,     0,     0,    44,    43,
      45,    29,    30,     0,    31,     0,     5,     0,     0,    69,
       0,     0,     0,     0,     2,     4,    41,     0,     0,     0,
       0,     0,    56,     0,     0,     0,     0,     0,     0,    63,
      64,    55,     0,     0,    12,    13,    14,    15,    16,    17,
       0,    18,     0,    19,     0,    20,    21,    22,    23,    24,
      25,    27,    26,    28,     0,     0,     0,    32,    33,    34,
       3,    46,     0,     0,     0,     0,     0,     0,    63,    38,
      40,    39,     0,     0,     0,     0,     0,     0,     0,    11,
       0,     0,    61,     0,     0,     0,    35,    36,    37,     0,
       0,     0,     0,     0,     0,    66,     0,     0,     0,     0,
       0,     0,     0,     0,    47,     0,    59,     0,    60,     0,
       0,     0,     0,    42,     0,    72,     0,     0,     0,     0,
       0,    78,    50,    51,     0,    53,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    67,     0,     0,     0,    49,
       0,    54,     0,     0,    68,     0,     0,     0,    77,     0,
       0,     0,    76,     0,     0,     0,    71,     0,    52,     0,
       0,     0,     0,    73,    75,    70,    57,    48,     0,     0,
      65,     0,    58,     0,    74,    62
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -81,   -81,   -81,   -81,   -81,   187,   -73,   -53,     8,   -81,
     -12,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,    46,   -81,   -81,   -81,   -81,   -81,   150,    99,    95,
     -81,   -81,   -62,   -81,     3,   -81,   -81,   -81,   -81,   159,
     127,   -81,    33,   -81,   131,   -81
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,    34,    12,     4,     5,    53,    54,    55,    21,
      56,    77,   106,    57,    89,     6,    22,    23,    24,    27,
      78,   122,   144,    79,    58,    59,    60,    61,    62,   102,
     103,    63,    64,    65,    87,    66,    67,     7,    68,    69,
      70,    71,   172,   173,    72,    73
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      99,    11,    39,     1,    11,   183,    40,    11,     1,    74,
      98,    39,    14,   115,     8,    35,   142,    41,     9,   143,
      26,    10,    80,   114,    88,    15,    50,   127,   101,    16,
     117,    28,   119,    29,    30,    40,   131,   132,    32,    31,
      75,    33,   129,    38,    36,    37,    41,    81,    82,    83,
      84,    85,    11,    92,    86,    42,    39,    17,    93,    94,
      95,    97,    99,   100,   104,    43,   105,    44,    96,   171,
      45,   101,    46,    47,   154,   162,   156,   109,    99,    99,
      40,   110,   111,    76,    48,    88,   112,    50,   116,    25,
     113,    41,     2,   120,    49,   170,    50,     2,    51,    11,
      42,    52,   118,    39,   121,   123,   188,   189,   130,    99,
      43,   124,    44,   125,    39,    45,   133,    46,    47,   135,
      18,    19,    20,   151,   136,   134,   138,    40,   137,    48,
     140,   145,   149,   141,   146,    99,    99,   139,    41,    49,
     155,    50,   147,    51,    11,   175,    52,    42,    39,   148,
     150,   153,   157,   164,   163,   158,   159,    43,   160,    44,
     161,   166,    45,   167,    46,    47,   176,   168,   169,   152,
     171,   174,    40,   177,   178,   179,    48,   185,   180,   181,
     182,   186,   187,    41,   190,   191,    49,   194,    50,   195,
      51,    13,    42,    52,    90,    11,   192,   165,   128,    39,
     126,   107,    43,    91,    44,   108,   184,    45,    11,    46,
      47,   193,    39,     0,     0,     0,     0,     0,     0,     0,
       0,    48,     0,    40,     0,     0,     0,     0,     0,     0,
       0,    49,     0,    50,    41,    51,    40,     0,    52,     0,
       0,     0,     0,    42,     0,     0,     0,    41,    11,     0,
       0,     0,    39,    43,     0,    44,    42,     0,    45,     0,
      46,    47,     0,     0,     0,     0,    43,     0,    44,     0,
       0,    45,    48,    46,    47,     0,    40,     0,     0,     0,
       0,     0,    49,     0,    50,    48,    51,    41,     0,    52,
       0,     0,     0,     0,     0,    49,    42,    50,     0,    51,
       0,     0,    52,     0,     0,     0,    43,     0,    44,     0,
       0,    45,     0,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,     0,    50,     0,    51,
       0,     0,    52
};

static const yytype_int16 yycheck[] =
{
      53,     9,    13,    16,     9,    12,    37,     9,    16,    26,
      12,    13,     4,    86,    59,    27,    96,    48,    96,    99,
      12,     0,    34,    85,    96,    15,    98,    70,    71,    81,
      92,    96,    94,    96,    10,    37,   109,   110,    11,    28,
      57,    96,   104,    34,    19,    96,    48,    19,    10,    96,
       9,     9,     9,    13,    28,    57,    13,    34,    96,     9,
      96,    96,   115,    96,     3,    67,    70,    69,    38,    76,
      72,    71,    74,    75,   136,   148,   138,    11,   131,   132,
      37,    11,    96,   100,    86,    96,    27,    98,    53,    94,
      99,    48,   105,    17,    96,   157,    98,   105,   100,     9,
      57,   103,   101,    13,    13,     9,   179,   180,   105,   162,
      67,    19,    69,    13,    13,    72,    19,    74,    75,    10,
      97,    98,    99,    80,    17,    96,     3,    37,    96,    86,
      10,    19,   129,    99,    10,   188,   189,   106,    48,    96,
     137,    98,    14,   100,     9,    10,   103,    57,    13,     9,
     102,    14,     9,   150,    70,    11,    14,    67,   104,    69,
      19,    12,    72,     3,    74,    75,   163,    10,    14,    79,
      76,    96,    37,    12,    19,     9,    86,   174,    11,    10,
      98,    19,    19,    48,   181,   182,    96,    84,    98,    19,
     100,     4,    57,   103,    44,     9,    10,   151,   103,    13,
     101,    74,    67,    44,    69,    74,   173,    72,     9,    74,
      75,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    98,    48,   100,    37,    -1,   103,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    48,     9,    -1,
      -1,    -1,    13,    67,    -1,    69,    57,    -1,    72,    -1,
      74,    75,    -1,    -1,    -1,    -1,    67,    -1,    69,    -1,
      -1,    72,    86,    74,    75,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    98,    86,   100,    48,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    96,    57,    98,    -1,   100,
      -1,    -1,   103,    -1,    -1,    -1,    67,    -1,    69,    -1,
      -1,    72,    -1,    74,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    98,    -1,   100,
      -1,    -1,   103
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,   105,   109,   112,   113,   123,   145,    59,    96,
       0,     9,   111,   113,   116,    15,    81,    34,    97,    98,
      99,   117,   124,   125,   126,    94,   116,   127,    96,    96,
      10,    28,    11,    96,   110,   118,    19,    96,    34,    13,
      37,    48,    57,    67,    69,    72,    74,    75,    86,    96,
      98,   100,   103,   114,   115,   116,   118,   121,   132,   133,
     134,   135,   136,   139,   140,   141,   143,   144,   146,   147,
     148,   149,   152,   153,    26,    57,   100,   119,   128,   131,
     118,    19,    10,    96,     9,     9,    28,   142,    96,   122,
     135,   147,    13,    96,     9,    96,    38,    96,    12,   115,
      96,    71,   137,   138,     3,    70,   120,   148,   152,    11,
      11,    96,    27,    99,   140,   114,    53,   140,   101,   140,
      17,    13,   129,     9,    19,    13,   136,    70,   137,   140,
     142,   114,   114,    19,    96,    10,    17,    96,     3,   106,
      10,    99,    96,    99,   130,    19,    10,    14,     9,   142,
     102,    80,    79,    14,   140,   142,   140,     9,    11,    14,
     104,    19,   114,    70,   142,   129,    12,     3,    10,    14,
     140,    76,   150,   151,    96,    10,   142,    12,    19,     9,
      11,    10,    98,    12,   150,   142,    19,    19,   114,   114,
     142,   142,    10,    12,    84,    19
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   108,   109,   110,   110,   111,   111,   112,   112,   113,
     113,   114,   114,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   116,
     117,   117,   118,   119,   119,   119,   120,   120,   121,   122,
     122,   123,   124,   125,   125,   125,   126,   127,   128,   129,
     130,   130,   131,   132,   133,   134,   134,   135,   136,   137,
     138,   138,   139,   140,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   151,   152,   153
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     2,     1,     2,     1,     2,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     2,     1,     1,     2,     1,     1,     2,     1,
       1,     5,     6,     1,     1,     1,     4,     5,     7,     3,
       1,     1,     6,     4,     5,     1,     1,     7,     9,     2,
       2,     1,    10,     1,     1,     8,     2,     5,     5,     4,
       7,     6,     4,     7,     4,     2,     1,     6,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* SIMBOLO: BIBLIOTECA_ VARIABLE_ MAIN PROCEDIMIENTO_  */
#line 118 "semantico.y"
    { printf("[FIN DEL PROGRAMA]\n"); }
#line 1398 "semantico.tab.c"
    break;

  case 4: /* PROCEDIMIENTO_: F_ID  */
#line 121 "semantico.y"
    { printf("[BLOQUE PROCEDIMIENTO]\n"); }
#line 1404 "semantico.tab.c"
    break;

  case 8: /* BIBLIOTECA_: EXTERNO  */
#line 126 "semantico.y"
    { printf("[CONJUNTO DE BIBLIOTECA(S)]\n"); }
#line 1410 "semantico.tab.c"
    break;

  case 12: /* INSTRUCCIONES_: INSTRUCCIONES  */
#line 130 "semantico.y"
    { printf("[BLOQUE INSTRUCCIONES]\n"); }
#line 1416 "semantico.tab.c"
    break;

  case 42: /* ASIGVAR: ASIGVALOR CHAR_DOSPUNTOS TIPO_DATO FIN_PARENTESIS IDENTIFICADOR CHAR_EXCLAMATION  */
#line 146 "semantico.y"
    { printf("[ASIGNACIÓN DE VARIABLE]\n"); }
#line 1422 "semantico.tab.c"
    break;

  case 46: /* DECVAR: TIPO_DATO FIN_PARENTESIS IDENTIFICADOR CHAR_EXCLAMATION  */
#line 150 "semantico.y"
    { printf("[DECLARACIÓN DE VARIABLE]\n"); }
#line 1428 "semantico.tab.c"
    break;

  case 47: /* MAIN: PRINCIPAL INI_LLAVE INSTRUCCIONES_ FIN_LLAVE CHAR_EXCLAMATION  */
#line 153 "semantico.y"
    { printf("[BLOQUE DE MENÚ]\n"); }
#line 1434 "semantico.tab.c"
    break;

  case 48: /* FUNCION: DEF_FUN INI_LLAVE INSTRUCCIONES_ RETORNO ENTRECORCH FIN_LLAVE CHAR_EXCLAMATION  */
#line 156 "semantico.y"
    { printf("[BLOQUE DE FUNCIÓN]\n"); }
#line 1440 "semantico.tab.c"
    break;

  case 52: /* METODO: DEF_MET INI_LLAVE INSTRUCCIONES_ FUN_NO_RETORNO FIN_LLAVE CHAR_EXCLAMATION  */
#line 161 "semantico.y"
    { printf("[BLOQUE DE MÉTODO]\n"); }
#line 1446 "semantico.tab.c"
    break;

  case 53: /* IMPRESION: DEF_MET SALIDA ENTRECORCH CHAR_EXCLAMATION  */
#line 164 "semantico.y"
    { printf("[OPERACIÓN DE IMPRESIÓN]\n"); }
#line 1452 "semantico.tab.c"
    break;

  case 54: /* LLAMADA: ASIGPROC IDENTIFICADOR INI_CORCHETE FIN_CORCHETE CHAR_EXCLAMATION  */
#line 167 "semantico.y"
    { printf("[OPERACIÓN DE LLAMADA]\n"); }
#line 1458 "semantico.tab.c"
    break;

  case 57: /* COMPARADOR2: ASIGCOMP MASCOMPARADOR2_ SINO_1 INI_PARENTESIS INSTRUCCIONES_ FIN_PARENTESIS CHAR_EXCLAMATION  */
#line 171 "semantico.y"
    { printf("[COMPARACIÓN]\n"); }
#line 1464 "semantico.tab.c"
    break;

  case 62: /* BUCLEWH: MIENTRAS INI_CORCHETE COMPL OP_RELACIONAL COMPL FIN_CORCHETE INI_LLAVE INSTRUCCIONES_ FIN_LLAVE CHAR_EXCLAMATION  */
#line 177 "semantico.y"
    { printf("[BUCLE WHILE]\n"); }
#line 1470 "semantico.tab.c"
    break;

  case 65: /* BUCLEFO: PARA IDENTIFICADOR EN RANGO INI_PARENTESIS COMPL FIN_PARENTESIS RES  */
#line 181 "semantico.y"
    { printf("[BUCLE FOR]\n"); }
#line 1476 "semantico.tab.c"
    break;

  case 67: /* LANZAMIENTO1: INTENTAR RES EXCEPCION IDENTIFICADOR RES  */
#line 185 "semantico.y"
    { printf("[THROW]\n"); }
#line 1482 "semantico.tab.c"
    break;

  case 68: /* LANZAMIENTO2: LANZAMIENTO1 SINO_1 RES FINALIZAR RES  */
#line 188 "semantico.y"
    { printf("[THROW]\n"); }
#line 1488 "semantico.tab.c"
    break;

  case 70: /* GESTION: CON IDENTIFICADOR INI_PARENTESIS FIN_PARENTESIS COMO IDENTIFICADOR RES  */
#line 193 "semantico.y"
    { printf("[MANAGEMENT]\n"); }
#line 1494 "semantico.tab.c"
    break;

  case 71: /* COMPARADOR1: COMPL OP_RELACIONAL COMPL RES SINO_1 RES  */
#line 196 "semantico.y"
    { printf("[COMPARACIÓN]\n"); }
#line 1500 "semantico.tab.c"
    break;

  case 72: /* LECTURA: ENTRADA INI_PARENTESIS CONST_CADENA FIN_PARENTESIS  */
#line 199 "semantico.y"
{ printf("[OPERACIÓN DE LECTURA]\n"); }
#line 1506 "semantico.tab.c"
    break;

  case 73: /* OPCION: CAMBIAR INI_PARENTESIS COMPL FIN_PARENTESIS INI_LLAVE MASOPCION_ FIN_LLAVE  */
#line 202 "semantico.y"
    { printf("[BLOQUE SWITCH]\n"); }
#line 1512 "semantico.tab.c"
    break;

  case 77: /* DOSARG: FUN_ALGORITMO INI_PARENTESIS COMPL CHAR_COMA COMPL FIN_PARENTESIS  */
#line 207 "semantico.y"
{ printf("[DOS ARGUMENTOS]\n"); }
#line 1518 "semantico.tab.c"
    break;

  case 78: /* ACIERTO: FUN_DIAGNOSTICO IDENTIFICADOR CHAR_COMA CONST_CADENA  */
#line 210 "semantico.y"
    { printf("[ASSERT]\n"); }
#line 1524 "semantico.tab.c"
    break;


#line 1528 "semantico.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 212 "semantico.y"

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
