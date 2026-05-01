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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    LITERAL_integer = 258,         /* LITERAL_integer  */
    LITERAL_floatingpoint = 259,   /* LITERAL_floatingpoint  */
    LITERAL_boolean = 260,         /* LITERAL_boolean  */
    LITERAL_char = 261,            /* LITERAL_char  */
    LITERAL_string = 262,          /* LITERAL_string  */
    LITERAL_textblock = 263,       /* LITERAL_textblock  */
    OPERATOR_assignment = 264,     /* OPERATOR_assignment  */
    LITERAL_null = 265,            /* LITERAL_null  */
    KEYWORD_class = 266,           /* KEYWORD_class  */
    KEYWORD_extends = 267,         /* KEYWORD_extends  */
    KEYWORD_super = 268,           /* KEYWORD_super  */
    KEYWORD_package = 269,         /* KEYWORD_package  */
    KEYWORD_public = 270,          /* KEYWORD_public  */
    KEYWORD_private = 271,         /* KEYWORD_private  */
    KEYWORD_abstract = 272,        /* KEYWORD_abstract  */
    KEYWORD_static = 273,          /* KEYWORD_static  */
    KEYWORD_final = 274,           /* KEYWORD_final  */
    KEYWORD_sealed = 275,          /* KEYWORD_sealed  */
    KEYWORD_nonsealed = 276,       /* KEYWORD_nonsealed  */
    KEYWORD_strictfp = 277,        /* KEYWORD_strictfp  */
    KEYWORD_implements = 278,      /* KEYWORD_implements  */
    KEYWORD_import = 279,          /* KEYWORD_import  */
    KEYWORD_permits = 280,         /* KEYWORD_permits  */
    KEYWORD_transient = 281,       /* KEYWORD_transient  */
    KEYWORD_volatile = 282,        /* KEYWORD_volatile  */
    KEYWORD_synchronized = 283,    /* KEYWORD_synchronized  */
    KEYWORD_native = 284,          /* KEYWORD_native  */
    KEYWORD_void = 285,            /* KEYWORD_void  */
    KEYWORD_this = 286,            /* KEYWORD_this  */
    KEYWORD_enum = 287,            /* KEYWORD_enum  */
    KEYWORD_if = 288,              /* KEYWORD_if  */
    KEYWORD_else = 289,            /* KEYWORD_else  */
    KEYWORD_assert = 290,          /* KEYWORD_assert  */
    KEYWORD_while = 291,           /* KEYWORD_while  */
    KEYWORD_for = 292,             /* KEYWORD_for  */
    KEYWORD_break = 293,           /* KEYWORD_break  */
    KEYWORD_yield = 294,           /* KEYWORD_yield  */
    KEYWORD_continue = 295,        /* KEYWORD_continue  */
    KEYWORD_return = 296,          /* KEYWORD_return  */
    KEYWORD_throw = 297,           /* KEYWORD_throw  */
    KEYWORD_try = 298,             /* KEYWORD_try  */
    KEYWORD_catch = 299,           /* KEYWORD_catch  */
    KEYWORD_finally = 300,         /* KEYWORD_finally  */
    KEYWORD_boolean = 301,         /* KEYWORD_boolean  */
    KEYWORD_new = 302,             /* KEYWORD_new  */
    KEYWORD_var = 303,             /* KEYWORD_var  */
    KEYWORD_byte = 304,            /* KEYWORD_byte  */
    KEYWORD_short = 305,           /* KEYWORD_short  */
    KEYWORD_int = 306,             /* KEYWORD_int  */
    KEYWORD_long = 307,            /* KEYWORD_long  */
    KEYWORD_char = 308,            /* KEYWORD_char  */
    KEYWORD_float = 309,           /* KEYWORD_float  */
    KEYWORD_double = 310,          /* KEYWORD_double  */
    KEYWORD_protected = 311,       /* KEYWORD_protected  */
    KEYWORD_throws = 312,          /* KEYWORD_throws  */
    KEYWORD_do = 313,              /* KEYWORD_do  */
    STMT_print = 314,              /* STMT_print  */
    Identifier = 315,              /* Identifier  */
    DELIM_semicolon = 316,         /* DELIM_semicolon  */
    DELIM_period = 317,            /* DELIM_period  */
    DELIM_lpar = 318,              /* DELIM_lpar  */
    DELIM_rpar = 319,              /* DELIM_rpar  */
    DELIM_lsq = 320,               /* DELIM_lsq  */
    DELIM_rsq = 321,               /* DELIM_rsq  */
    DELIM_lcurl = 322,             /* DELIM_lcurl  */
    DELIM_rcurl = 323,             /* DELIM_rcurl  */
    DELIM_comma = 324,             /* DELIM_comma  */
    DELIM_ellipsis = 325,          /* DELIM_ellipsis  */
    DELIM_proportion = 326,        /* DELIM_proportion  */
    DELIM_attherate = 327,         /* DELIM_attherate  */
    PREC_reduce_VariableDeclaratorList = 328, /* PREC_reduce_VariableDeclaratorList  */
    PREC_reduce_VariableInitializerList = 329, /* PREC_reduce_VariableInitializerList  */
    PREC_reduce_ResourceList = 330, /* PREC_reduce_ResourceList  */
    PREC_reduce_Dims = 331,        /* PREC_reduce_Dims  */
    PREC_shift_Dims = 332,         /* PREC_shift_Dims  */
    PREC_excor_to_and = 333,       /* PREC_excor_to_and  */
    PREC_incor_to_excor = 334,     /* PREC_incor_to_excor  */
    PREC_condor_to_condand = 335,  /* PREC_condor_to_condand  */
    PREC_condand_to_incor = 336,   /* PREC_condand_to_incor  */
    PREC_cond_to_condor = 337,     /* PREC_cond_to_condor  */
    PREC_and_to_equality = 338,    /* PREC_and_to_equality  */
    PREC_equality_to_relational = 339, /* PREC_equality_to_relational  */
    OPERATOR_equal = 340,          /* OPERATOR_equal  */
    OPERATOR_ternarycolon = 341,   /* OPERATOR_ternarycolon  */
    OPERATOR_ternaryquestion = 342, /* OPERATOR_ternaryquestion  */
    OPERATOR_logicalor = 343,      /* OPERATOR_logicalor  */
    OPERATOR_logicaland = 344,     /* OPERATOR_logicaland  */
    OPERATOR_bitwiseor = 345,      /* OPERATOR_bitwiseor  */
    OPERATOR_xor = 346,            /* OPERATOR_xor  */
    OPERATOR_bitwiseand = 347,     /* OPERATOR_bitwiseand  */
    OPERATOR_logicalequal = 348,   /* OPERATOR_logicalequal  */
    OPERATOR_neq = 349,            /* OPERATOR_neq  */
    OPERATOR_lt = 350,             /* OPERATOR_lt  */
    OPERATOR_gt = 351,             /* OPERATOR_gt  */
    OPERATOR_leq = 352,            /* OPERATOR_leq  */
    OPERATOR_geq = 353,            /* OPERATOR_geq  */
    KEYWORD_instanceof = 354,      /* KEYWORD_instanceof  */
    OPERATOR_leftshift = 355,      /* OPERATOR_leftshift  */
    OPERATOR_rightshift = 356,     /* OPERATOR_rightshift  */
    OPERATOR_unsignedrightshift = 357, /* OPERATOR_unsignedrightshift  */
    OPERATOR_plus = 358,           /* OPERATOR_plus  */
    OPERATOR_minus = 359,          /* OPERATOR_minus  */
    OPERATOR_multiply = 360,       /* OPERATOR_multiply  */
    OPERATOR_divide = 361,         /* OPERATOR_divide  */
    OPERATOR_mod = 362,            /* OPERATOR_mod  */
    UNARY_minus = 363,             /* UNARY_minus  */
    UNARY_plus = 364,              /* UNARY_plus  */
    OPERATOR_not = 365,            /* OPERATOR_not  */
    OPERATOR_bitwisecomp = 366,    /* OPERATOR_bitwisecomp  */
    OPERATOR_increment = 367,      /* OPERATOR_increment  */
    OPERATOR_decrement = 368       /* OPERATOR_decrement  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 21 "parser.y"

    char* strval;
    struct node* treenode;

#line 182 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
