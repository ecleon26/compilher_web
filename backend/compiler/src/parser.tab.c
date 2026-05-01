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
#line 1 "parser.y"


    #include <cstdio> 
    #include <cstring>
    #include <iostream>
    #include <vector>
    #include <stdio.h>
    #include "../include/global_vars.hpp"

    using namespace std;

    extern "C" int yylex();
    extern "C" int yylineno;

    unsigned long long int count_semicolon;
    void yyerror(const char* s);
    void add_child(node* parent, node* child);

#line 90 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LITERAL_integer = 3,            /* LITERAL_integer  */
  YYSYMBOL_LITERAL_floatingpoint = 4,      /* LITERAL_floatingpoint  */
  YYSYMBOL_LITERAL_boolean = 5,            /* LITERAL_boolean  */
  YYSYMBOL_LITERAL_char = 6,               /* LITERAL_char  */
  YYSYMBOL_LITERAL_string = 7,             /* LITERAL_string  */
  YYSYMBOL_LITERAL_textblock = 8,          /* LITERAL_textblock  */
  YYSYMBOL_OPERATOR_assignment = 9,        /* OPERATOR_assignment  */
  YYSYMBOL_LITERAL_null = 10,              /* LITERAL_null  */
  YYSYMBOL_KEYWORD_class = 11,             /* KEYWORD_class  */
  YYSYMBOL_KEYWORD_extends = 12,           /* KEYWORD_extends  */
  YYSYMBOL_KEYWORD_super = 13,             /* KEYWORD_super  */
  YYSYMBOL_KEYWORD_package = 14,           /* KEYWORD_package  */
  YYSYMBOL_KEYWORD_public = 15,            /* KEYWORD_public  */
  YYSYMBOL_KEYWORD_private = 16,           /* KEYWORD_private  */
  YYSYMBOL_KEYWORD_abstract = 17,          /* KEYWORD_abstract  */
  YYSYMBOL_KEYWORD_static = 18,            /* KEYWORD_static  */
  YYSYMBOL_KEYWORD_final = 19,             /* KEYWORD_final  */
  YYSYMBOL_KEYWORD_sealed = 20,            /* KEYWORD_sealed  */
  YYSYMBOL_KEYWORD_nonsealed = 21,         /* KEYWORD_nonsealed  */
  YYSYMBOL_KEYWORD_strictfp = 22,          /* KEYWORD_strictfp  */
  YYSYMBOL_KEYWORD_implements = 23,        /* KEYWORD_implements  */
  YYSYMBOL_KEYWORD_import = 24,            /* KEYWORD_import  */
  YYSYMBOL_KEYWORD_permits = 25,           /* KEYWORD_permits  */
  YYSYMBOL_KEYWORD_transient = 26,         /* KEYWORD_transient  */
  YYSYMBOL_KEYWORD_volatile = 27,          /* KEYWORD_volatile  */
  YYSYMBOL_KEYWORD_synchronized = 28,      /* KEYWORD_synchronized  */
  YYSYMBOL_KEYWORD_native = 29,            /* KEYWORD_native  */
  YYSYMBOL_KEYWORD_void = 30,              /* KEYWORD_void  */
  YYSYMBOL_KEYWORD_this = 31,              /* KEYWORD_this  */
  YYSYMBOL_KEYWORD_enum = 32,              /* KEYWORD_enum  */
  YYSYMBOL_KEYWORD_if = 33,                /* KEYWORD_if  */
  YYSYMBOL_KEYWORD_else = 34,              /* KEYWORD_else  */
  YYSYMBOL_KEYWORD_assert = 35,            /* KEYWORD_assert  */
  YYSYMBOL_KEYWORD_while = 36,             /* KEYWORD_while  */
  YYSYMBOL_KEYWORD_for = 37,               /* KEYWORD_for  */
  YYSYMBOL_KEYWORD_break = 38,             /* KEYWORD_break  */
  YYSYMBOL_KEYWORD_yield = 39,             /* KEYWORD_yield  */
  YYSYMBOL_KEYWORD_continue = 40,          /* KEYWORD_continue  */
  YYSYMBOL_KEYWORD_return = 41,            /* KEYWORD_return  */
  YYSYMBOL_KEYWORD_throw = 42,             /* KEYWORD_throw  */
  YYSYMBOL_KEYWORD_try = 43,               /* KEYWORD_try  */
  YYSYMBOL_KEYWORD_catch = 44,             /* KEYWORD_catch  */
  YYSYMBOL_KEYWORD_finally = 45,           /* KEYWORD_finally  */
  YYSYMBOL_KEYWORD_boolean = 46,           /* KEYWORD_boolean  */
  YYSYMBOL_KEYWORD_new = 47,               /* KEYWORD_new  */
  YYSYMBOL_KEYWORD_var = 48,               /* KEYWORD_var  */
  YYSYMBOL_KEYWORD_byte = 49,              /* KEYWORD_byte  */
  YYSYMBOL_KEYWORD_short = 50,             /* KEYWORD_short  */
  YYSYMBOL_KEYWORD_int = 51,               /* KEYWORD_int  */
  YYSYMBOL_KEYWORD_long = 52,              /* KEYWORD_long  */
  YYSYMBOL_KEYWORD_char = 53,              /* KEYWORD_char  */
  YYSYMBOL_KEYWORD_float = 54,             /* KEYWORD_float  */
  YYSYMBOL_KEYWORD_double = 55,            /* KEYWORD_double  */
  YYSYMBOL_KEYWORD_protected = 56,         /* KEYWORD_protected  */
  YYSYMBOL_KEYWORD_throws = 57,            /* KEYWORD_throws  */
  YYSYMBOL_KEYWORD_do = 58,                /* KEYWORD_do  */
  YYSYMBOL_STMT_print = 59,                /* STMT_print  */
  YYSYMBOL_Identifier = 60,                /* Identifier  */
  YYSYMBOL_DELIM_semicolon = 61,           /* DELIM_semicolon  */
  YYSYMBOL_DELIM_period = 62,              /* DELIM_period  */
  YYSYMBOL_DELIM_lpar = 63,                /* DELIM_lpar  */
  YYSYMBOL_DELIM_rpar = 64,                /* DELIM_rpar  */
  YYSYMBOL_DELIM_lsq = 65,                 /* DELIM_lsq  */
  YYSYMBOL_DELIM_rsq = 66,                 /* DELIM_rsq  */
  YYSYMBOL_DELIM_lcurl = 67,               /* DELIM_lcurl  */
  YYSYMBOL_DELIM_rcurl = 68,               /* DELIM_rcurl  */
  YYSYMBOL_DELIM_comma = 69,               /* DELIM_comma  */
  YYSYMBOL_DELIM_ellipsis = 70,            /* DELIM_ellipsis  */
  YYSYMBOL_DELIM_proportion = 71,          /* DELIM_proportion  */
  YYSYMBOL_DELIM_attherate = 72,           /* DELIM_attherate  */
  YYSYMBOL_PREC_reduce_VariableDeclaratorList = 73, /* PREC_reduce_VariableDeclaratorList  */
  YYSYMBOL_PREC_reduce_VariableInitializerList = 74, /* PREC_reduce_VariableInitializerList  */
  YYSYMBOL_PREC_reduce_ResourceList = 75,  /* PREC_reduce_ResourceList  */
  YYSYMBOL_PREC_reduce_Dims = 76,          /* PREC_reduce_Dims  */
  YYSYMBOL_PREC_shift_Dims = 77,           /* PREC_shift_Dims  */
  YYSYMBOL_PREC_excor_to_and = 78,         /* PREC_excor_to_and  */
  YYSYMBOL_PREC_incor_to_excor = 79,       /* PREC_incor_to_excor  */
  YYSYMBOL_PREC_condor_to_condand = 80,    /* PREC_condor_to_condand  */
  YYSYMBOL_PREC_condand_to_incor = 81,     /* PREC_condand_to_incor  */
  YYSYMBOL_PREC_cond_to_condor = 82,       /* PREC_cond_to_condor  */
  YYSYMBOL_PREC_and_to_equality = 83,      /* PREC_and_to_equality  */
  YYSYMBOL_PREC_equality_to_relational = 84, /* PREC_equality_to_relational  */
  YYSYMBOL_OPERATOR_equal = 85,            /* OPERATOR_equal  */
  YYSYMBOL_OPERATOR_ternarycolon = 86,     /* OPERATOR_ternarycolon  */
  YYSYMBOL_OPERATOR_ternaryquestion = 87,  /* OPERATOR_ternaryquestion  */
  YYSYMBOL_OPERATOR_logicalor = 88,        /* OPERATOR_logicalor  */
  YYSYMBOL_OPERATOR_logicaland = 89,       /* OPERATOR_logicaland  */
  YYSYMBOL_OPERATOR_bitwiseor = 90,        /* OPERATOR_bitwiseor  */
  YYSYMBOL_OPERATOR_xor = 91,              /* OPERATOR_xor  */
  YYSYMBOL_OPERATOR_bitwiseand = 92,       /* OPERATOR_bitwiseand  */
  YYSYMBOL_OPERATOR_logicalequal = 93,     /* OPERATOR_logicalequal  */
  YYSYMBOL_OPERATOR_neq = 94,              /* OPERATOR_neq  */
  YYSYMBOL_OPERATOR_lt = 95,               /* OPERATOR_lt  */
  YYSYMBOL_OPERATOR_gt = 96,               /* OPERATOR_gt  */
  YYSYMBOL_OPERATOR_leq = 97,              /* OPERATOR_leq  */
  YYSYMBOL_OPERATOR_geq = 98,              /* OPERATOR_geq  */
  YYSYMBOL_KEYWORD_instanceof = 99,        /* KEYWORD_instanceof  */
  YYSYMBOL_OPERATOR_leftshift = 100,       /* OPERATOR_leftshift  */
  YYSYMBOL_OPERATOR_rightshift = 101,      /* OPERATOR_rightshift  */
  YYSYMBOL_OPERATOR_unsignedrightshift = 102, /* OPERATOR_unsignedrightshift  */
  YYSYMBOL_OPERATOR_plus = 103,            /* OPERATOR_plus  */
  YYSYMBOL_OPERATOR_minus = 104,           /* OPERATOR_minus  */
  YYSYMBOL_OPERATOR_multiply = 105,        /* OPERATOR_multiply  */
  YYSYMBOL_OPERATOR_divide = 106,          /* OPERATOR_divide  */
  YYSYMBOL_OPERATOR_mod = 107,             /* OPERATOR_mod  */
  YYSYMBOL_UNARY_minus = 108,              /* UNARY_minus  */
  YYSYMBOL_UNARY_plus = 109,               /* UNARY_plus  */
  YYSYMBOL_OPERATOR_not = 110,             /* OPERATOR_not  */
  YYSYMBOL_OPERATOR_bitwisecomp = 111,     /* OPERATOR_bitwisecomp  */
  YYSYMBOL_OPERATOR_increment = 112,       /* OPERATOR_increment  */
  YYSYMBOL_OPERATOR_decrement = 113,       /* OPERATOR_decrement  */
  YYSYMBOL_YYACCEPT = 114,                 /* $accept  */
  YYSYMBOL_IntegralType = 115,             /* IntegralType  */
  YYSYMBOL_FloatingPointType = 116,        /* FloatingPointType  */
  YYSYMBOL_PrimitiveType = 117,            /* PrimitiveType  */
  YYSYMBOL_NumericTypeDims = 118,          /* NumericTypeDims  */
  YYSYMBOL_BooleanDims = 119,              /* BooleanDims  */
  YYSYMBOL_NumericType = 120,              /* NumericType  */
  YYSYMBOL_ArrayType = 121,                /* ArrayType  */
  YYSYMBOL_Dims = 122,                     /* Dims  */
  YYSYMBOL_qDims = 123,                    /* qDims  */
  YYSYMBOL_Name = 124,                     /* Name  */
  YYSYMBOL_sCommaName = 125,               /* sCommaName  */
  YYSYMBOL_NameList = 126,                 /* NameList  */
  YYSYMBOL_CompilationUnit = 127,          /* CompilationUnit  */
  YYSYMBOL_OrdinaryCompilationUnit = 128,  /* OrdinaryCompilationUnit  */
  YYSYMBOL_sImportDeclaration = 129,       /* sImportDeclaration  */
  YYSYMBOL_ImportDeclaration = 130,        /* ImportDeclaration  */
  YYSYMBOL_importName = 131,               /* importName  */
  YYSYMBOL_PackageDeclaration = 132,       /* PackageDeclaration  */
  YYSYMBOL_sTopLevelClassOrInterfaceDeclaration = 133, /* sTopLevelClassOrInterfaceDeclaration  */
  YYSYMBOL_TopLevelClassOrInterfaceDeclaration = 134, /* TopLevelClassOrInterfaceDeclaration  */
  YYSYMBOL_Modifiers = 135,                /* Modifiers  */
  YYSYMBOL_Modifier = 136,                 /* Modifier  */
  YYSYMBOL_NormalClassDeclaration = 137,   /* NormalClassDeclaration  */
  YYSYMBOL_ClassExtends = 138,             /* ClassExtends  */
  YYSYMBOL_qClassExtends = 139,            /* qClassExtends  */
  YYSYMBOL_ClassImplements = 140,          /* ClassImplements  */
  YYSYMBOL_qClassImplements = 141,         /* qClassImplements  */
  YYSYMBOL_ClassPermits = 142,             /* ClassPermits  */
  YYSYMBOL_qClassPermits = 143,            /* qClassPermits  */
  YYSYMBOL_ClassBody = 144,                /* ClassBody  */
  YYSYMBOL_qClassBody = 145,               /* qClassBody  */
  YYSYMBOL_ClassBodyDeclaration = 146,     /* ClassBodyDeclaration  */
  YYSYMBOL_sClassBodyDeclaration = 147,    /* sClassBodyDeclaration  */
  YYSYMBOL_ClassMemberDeclaration = 148,   /* ClassMemberDeclaration  */
  YYSYMBOL_FieldDeclaration = 149,         /* FieldDeclaration  */
  YYSYMBOL_VariableDeclaratorList = 150,   /* VariableDeclaratorList  */
  YYSYMBOL_sCommaVariableDeclarator = 151, /* sCommaVariableDeclarator  */
  YYSYMBOL_VariableDeclarator = 152,       /* VariableDeclarator  */
  YYSYMBOL_VariableDeclaratorId = 153,     /* VariableDeclaratorId  */
  YYSYMBOL_qEqualVariableInitializer = 154, /* qEqualVariableInitializer  */
  YYSYMBOL_VariableInitializer = 155,      /* VariableInitializer  */
  YYSYMBOL_UnannType = 156,                /* UnannType  */
  YYSYMBOL_MethodDeclaration = 157,        /* MethodDeclaration  */
  YYSYMBOL_MethodHeader = 158,             /* MethodHeader  */
  YYSYMBOL_MethodDeclarator = 159,         /* MethodDeclarator  */
  YYSYMBOL_ReceiverParameterComma = 160,   /* ReceiverParameterComma  */
  YYSYMBOL_ReceiverParameter = 161,        /* ReceiverParameter  */
  YYSYMBOL_IdentifierDot = 162,            /* IdentifierDot  */
  YYSYMBOL_qIdentifierDot = 163,           /* qIdentifierDot  */
  YYSYMBOL_FormalParameterList = 164,      /* FormalParameterList  */
  YYSYMBOL_qFormalParameterList = 165,     /* qFormalParameterList  */
  YYSYMBOL_FormalParameter = 166,          /* FormalParameter  */
  YYSYMBOL_sCommaFormalParameter = 167,    /* sCommaFormalParameter  */
  YYSYMBOL_VariableArityParameter = 168,   /* VariableArityParameter  */
  YYSYMBOL_Throws = 169,                   /* Throws  */
  YYSYMBOL_qThrows = 170,                  /* qThrows  */
  YYSYMBOL_MethodBody = 171,               /* MethodBody  */
  YYSYMBOL_InstanceInitializer = 172,      /* InstanceInitializer  */
  YYSYMBOL_StaticInitializer = 173,        /* StaticInitializer  */
  YYSYMBOL_ConstructorDeclaration = 174,   /* ConstructorDeclaration  */
  YYSYMBOL_ConstructorDeclarator = 175,    /* ConstructorDeclarator  */
  YYSYMBOL_ConstructorBody = 176,          /* ConstructorBody  */
  YYSYMBOL_ExplicitConstructorInvocation = 177, /* ExplicitConstructorInvocation  */
  YYSYMBOL_BracketArgumentList = 178,      /* BracketArgumentList  */
  YYSYMBOL_ArrayInitializer = 179,         /* ArrayInitializer  */
  YYSYMBOL_qComma = 180,                   /* qComma  */
  YYSYMBOL_sCommaVariableInitializer = 181, /* sCommaVariableInitializer  */
  YYSYMBOL_VariableInitializerList = 182,  /* VariableInitializerList  */
  YYSYMBOL_qVariableInitializerList = 183, /* qVariableInitializerList  */
  YYSYMBOL_Block = 184,                    /* Block  */
  YYSYMBOL_qBlockStatements = 185,         /* qBlockStatements  */
  YYSYMBOL_BlockStatements = 186,          /* BlockStatements  */
  YYSYMBOL_BlockStatement = 187,           /* BlockStatement  */
  YYSYMBOL_LocalClassOrInterfaceDeclaration = 188, /* LocalClassOrInterfaceDeclaration  */
  YYSYMBOL_LocalVariableDeclarationStatement = 189, /* LocalVariableDeclarationStatement  */
  YYSYMBOL_LocalVariableDeclaration = 190, /* LocalVariableDeclaration  */
  YYSYMBOL_LocalVariableType = 191,        /* LocalVariableType  */
  YYSYMBOL_Statement = 192,                /* Statement  */
  YYSYMBOL_PrintStatement = 193,           /* PrintStatement  */
  YYSYMBOL_StatementNoShortIf = 194,       /* StatementNoShortIf  */
  YYSYMBOL_StatementWithoutTrailingSubstatement = 195, /* StatementWithoutTrailingSubstatement  */
  YYSYMBOL_EmptyStatement = 196,           /* EmptyStatement  */
  YYSYMBOL_LabeledStatement = 197,         /* LabeledStatement  */
  YYSYMBOL_LabeledStatementNoShortIf = 198, /* LabeledStatementNoShortIf  */
  YYSYMBOL_ExpressionStatement = 199,      /* ExpressionStatement  */
  YYSYMBOL_StatementExpression = 200,      /* StatementExpression  */
  YYSYMBOL_IfThenStatement = 201,          /* IfThenStatement  */
  YYSYMBOL_IfThenElseStatement = 202,      /* IfThenElseStatement  */
  YYSYMBOL_IfThenElseStatementNoShortIf = 203, /* IfThenElseStatementNoShortIf  */
  YYSYMBOL_AssertStatement = 204,          /* AssertStatement  */
  YYSYMBOL_WhileStatement = 205,           /* WhileStatement  */
  YYSYMBOL_WhileStatementNoShortIf = 206,  /* WhileStatementNoShortIf  */
  YYSYMBOL_DoStatement = 207,              /* DoStatement  */
  YYSYMBOL_ForStatement = 208,             /* ForStatement  */
  YYSYMBOL_ForStatementNoShortIf = 209,    /* ForStatementNoShortIf  */
  YYSYMBOL_BasicForStatement = 210,        /* BasicForStatement  */
  YYSYMBOL_BasicForStatementNoShortIf = 211, /* BasicForStatementNoShortIf  */
  YYSYMBOL_qForInit = 212,                 /* qForInit  */
  YYSYMBOL_qForUpdate = 213,               /* qForUpdate  */
  YYSYMBOL_ForInit = 214,                  /* ForInit  */
  YYSYMBOL_ForUpdate = 215,                /* ForUpdate  */
  YYSYMBOL_StatementExpressionList = 216,  /* StatementExpressionList  */
  YYSYMBOL_sCommaStatementExpression = 217, /* sCommaStatementExpression  */
  YYSYMBOL_EnhancedForStatement = 218,     /* EnhancedForStatement  */
  YYSYMBOL_EnhancedForStatementNoShortIf = 219, /* EnhancedForStatementNoShortIf  */
  YYSYMBOL_BreakStatement = 220,           /* BreakStatement  */
  YYSYMBOL_qIdentifier = 221,              /* qIdentifier  */
  YYSYMBOL_YieldStatement = 222,           /* YieldStatement  */
  YYSYMBOL_ContinueStatement = 223,        /* ContinueStatement  */
  YYSYMBOL_ReturnStatement = 224,          /* ReturnStatement  */
  YYSYMBOL_qExpression = 225,              /* qExpression  */
  YYSYMBOL_ThrowStatement = 226,           /* ThrowStatement  */
  YYSYMBOL_SynchronizedStatement = 227,    /* SynchronizedStatement  */
  YYSYMBOL_TryStatement = 228,             /* TryStatement  */
  YYSYMBOL_qCatches = 229,                 /* qCatches  */
  YYSYMBOL_pCatches = 230,                 /* pCatches  */
  YYSYMBOL_Catches = 231,                  /* Catches  */
  YYSYMBOL_CatchClause = 232,              /* CatchClause  */
  YYSYMBOL_CatchFormalParameter = 233,     /* CatchFormalParameter  */
  YYSYMBOL_CatchType = 234,                /* CatchType  */
  YYSYMBOL_sOrName = 235,                  /* sOrName  */
  YYSYMBOL_Finally = 236,                  /* Finally  */
  YYSYMBOL_TryWithResourcesStatement = 237, /* TryWithResourcesStatement  */
  YYSYMBOL_qFinally = 238,                 /* qFinally  */
  YYSYMBOL_ResourceSpecification = 239,    /* ResourceSpecification  */
  YYSYMBOL_qSemicolon = 240,               /* qSemicolon  */
  YYSYMBOL_ResourceList = 241,             /* ResourceList  */
  YYSYMBOL_ssemicolonResource = 242,       /* ssemicolonResource  */
  YYSYMBOL_Resource = 243,                 /* Resource  */
  YYSYMBOL_VariableAccess = 244,           /* VariableAccess  */
  YYSYMBOL_Pattern = 245,                  /* Pattern  */
  YYSYMBOL_TypePattern = 246,              /* TypePattern  */
  YYSYMBOL_Expression = 247,               /* Expression  */
  YYSYMBOL_AssignmentExpression = 248,     /* AssignmentExpression  */
  YYSYMBOL_ConditionalExpression = 249,    /* ConditionalExpression  */
  YYSYMBOL_ConditionalOrExpression = 250,  /* ConditionalOrExpression  */
  YYSYMBOL_ConditionalAndExpression = 251, /* ConditionalAndExpression  */
  YYSYMBOL_InclusiveOrExpression = 252,    /* InclusiveOrExpression  */
  YYSYMBOL_ExclusiveOrExpression = 253,    /* ExclusiveOrExpression  */
  YYSYMBOL_AndExpression = 254,            /* AndExpression  */
  YYSYMBOL_EqualityExpression = 255,       /* EqualityExpression  */
  YYSYMBOL_RelationalExpression = 256,     /* RelationalExpression  */
  YYSYMBOL_ShiftExpression = 257,          /* ShiftExpression  */
  YYSYMBOL_AdditiveExpression = 258,       /* AdditiveExpression  */
  YYSYMBOL_MultiplicativeExpression = 259, /* MultiplicativeExpression  */
  YYSYMBOL_UnaryExpression = 260,          /* UnaryExpression  */
  YYSYMBOL_PreIncrementExpression = 261,   /* PreIncrementExpression  */
  YYSYMBOL_PreDecrementExpression = 262,   /* PreDecrementExpression  */
  YYSYMBOL_UnaryExpressionNotPlusMinus = 263, /* UnaryExpressionNotPlusMinus  */
  YYSYMBOL_PostfixExpression = 264,        /* PostfixExpression  */
  YYSYMBOL_Primary = 265,                  /* Primary  */
  YYSYMBOL_PrimaryNoNewArray = 266,        /* PrimaryNoNewArray  */
  YYSYMBOL_Literal = 267,                  /* Literal  */
  YYSYMBOL_ClassLiteral = 268,             /* ClassLiteral  */
  YYSYMBOL_ClassInstanceCreationExpression = 269, /* ClassInstanceCreationExpression  */
  YYSYMBOL_UnqualifiedClassInstanceCreationExpression = 270, /* UnqualifiedClassInstanceCreationExpression  */
  YYSYMBOL_qArgumentList = 271,            /* qArgumentList  */
  YYSYMBOL_ArgumentList = 272,             /* ArgumentList  */
  YYSYMBOL_sCommaExpression = 273,         /* sCommaExpression  */
  YYSYMBOL_FieldAccess = 274,              /* FieldAccess  */
  YYSYMBOL_ArrayAccess = 275,              /* ArrayAccess  */
  YYSYMBOL_MethodInvocation = 276,         /* MethodInvocation  */
  YYSYMBOL_MethodReference = 277,          /* MethodReference  */
  YYSYMBOL_ArrayCreationExpression = 278,  /* ArrayCreationExpression  */
  YYSYMBOL_DimExprs = 279,                 /* DimExprs  */
  YYSYMBOL_DimExpr = 280,                  /* DimExpr  */
  YYSYMBOL_PostIncrementExpression = 281,  /* PostIncrementExpression  */
  YYSYMBOL_PostDecrementExpression = 282,  /* PostDecrementExpression  */
  YYSYMBOL_CastExpression = 283,           /* CastExpression  */
  YYSYMBOL_InstanceofExpression = 284,     /* InstanceofExpression  */
  YYSYMBOL_Assignment = 285,               /* Assignment  */
  YYSYMBOL_LeftHandSide = 286              /* LeftHandSide  */
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
typedef yytype_int16 yy_state_t;

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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2264

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  114
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  173
/* YYNRULES -- Number of rules.  */
#define YYNRULES  374
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  645

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   368


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
     105,   106,   107,   108,   109,   110,   111,   112,   113
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    81,    81,    85,    89,    93,    97,   104,   108,   115,
     120,   128,   137,   147,   152,   160,   169,   180,   196,   199,
     212,   235,   243,   246,   256,   266,   281,   289,   301,   304,
     313,   327,   334,   345,   354,   362,   376,   379,   390,   397,
     408,   415,   433,   439,   445,   451,   457,   463,   469,   475,
     481,   487,   496,   552,   575,   585,   588,   596,   606,   609,
     617,   628,   631,   639,   651,   654,   662,   667,   672,   677,
     685,   688,   697,   702,   707,   712,   721,   765,   789,   809,
     812,   829,   840,   855,   858,   870,   875,   883,   891,   900,
     909,   922,  1013,  1046,  1058,  1073,  1092,  1112,  1122,  1133,
    1146,  1149,  1157,  1177,  1180,  1190,  1206,  1216,  1224,  1227,
    1243,  1260,  1274,  1284,  1287,  1295,  1300,  1309,  1317,  1327,
    1352,  1371,  1389,  1406,  1415,  1428,  1439,  1450,  1464,  1481,
    1495,  1508,  1511,  1518,  1521,  1532,  1541,  1544,  1554,  1564,
    1578,  1581,  1589,  1594,  1603,  1608,  1613,  1621,  1629,  1641,
    1662,  1681,  1688,  1697,  1702,  1707,  1712,  1717,  1722,  1727,
    1735,  1756,  1761,  1766,  1771,  1776,  1784,  1789,  1794,  1799,
    1804,  1809,  1814,  1819,  1824,  1829,  1834,  1839,  1847,  1856,
    1870,  1884,  1896,  1901,  1906,  1911,  1916,  1921,  1926,  1934,
    1949,  1967,  1985,  1996,  2013,  2028,  2043,  2062,  2067,  2075,
    2080,  2088,  2111,  2134,  2137,  2145,  2148,  2156,  2161,  2169,
    2177,  2186,  2189,  2200,  2220,  2240,  2254,  2257,  2266,  2280,
    2294,  2308,  2311,  2319,  2333,  2348,  2356,  2365,  2373,  2376,
    2384,  2389,  2398,  2406,  2421,  2434,  2443,  2452,  2455,  2466,
    2476,  2489,  2492,  2500,  2513,  2516,  2525,  2534,  2537,  2550,
    2555,  2563,  2568,  2576,  2584,  2594,  2609,  2621,  2636,  2648,
    2666,  2678,  2697,  2709,  2728,  2740,  2759,  2771,  2790,  2802,
    2821,  2833,  2849,  2868,  2880,  2892,  2908,  2924,  2940,  2959,
    2971,  2987,  3003,  3022,  3034,  3050,  3069,  3081,  3097,  3113,
    3132,  3144,  3156,  3170,  3184,  3199,  3215,  3231,  3243,  3255,
    3270,  3285,  3300,  3312,  3324,  3339,  3351,  3366,  3378,  3390,
    3394,  3403,  3419,  3424,  3429,  3434,  3439,  3447,  3467,  3481,
    3494,  3507,  3520,  3533,  3543,  3552,  3563,  3573,  3584,  3597,
    3602,  3610,  3621,  3633,  3636,  3644,  3653,  3656,  3667,  3678,
    3690,  3708,  3718,  3731,  3737,  3749,  3762,  3781,  3792,  3803,
    3814,  3826,  3841,  3850,  3862,  3879,  3896,  3909,  3925,  3933,
    3946,  3958,  3971,  3987,  4000,  4017,  4027,  4040,  4048,  4056,
    4067,  4080,  4095,  4100,  4105
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "LITERAL_integer",
  "LITERAL_floatingpoint", "LITERAL_boolean", "LITERAL_char",
  "LITERAL_string", "LITERAL_textblock", "OPERATOR_assignment",
  "LITERAL_null", "KEYWORD_class", "KEYWORD_extends", "KEYWORD_super",
  "KEYWORD_package", "KEYWORD_public", "KEYWORD_private",
  "KEYWORD_abstract", "KEYWORD_static", "KEYWORD_final", "KEYWORD_sealed",
  "KEYWORD_nonsealed", "KEYWORD_strictfp", "KEYWORD_implements",
  "KEYWORD_import", "KEYWORD_permits", "KEYWORD_transient",
  "KEYWORD_volatile", "KEYWORD_synchronized", "KEYWORD_native",
  "KEYWORD_void", "KEYWORD_this", "KEYWORD_enum", "KEYWORD_if",
  "KEYWORD_else", "KEYWORD_assert", "KEYWORD_while", "KEYWORD_for",
  "KEYWORD_break", "KEYWORD_yield", "KEYWORD_continue", "KEYWORD_return",
  "KEYWORD_throw", "KEYWORD_try", "KEYWORD_catch", "KEYWORD_finally",
  "KEYWORD_boolean", "KEYWORD_new", "KEYWORD_var", "KEYWORD_byte",
  "KEYWORD_short", "KEYWORD_int", "KEYWORD_long", "KEYWORD_char",
  "KEYWORD_float", "KEYWORD_double", "KEYWORD_protected", "KEYWORD_throws",
  "KEYWORD_do", "STMT_print", "Identifier", "DELIM_semicolon",
  "DELIM_period", "DELIM_lpar", "DELIM_rpar", "DELIM_lsq", "DELIM_rsq",
  "DELIM_lcurl", "DELIM_rcurl", "DELIM_comma", "DELIM_ellipsis",
  "DELIM_proportion", "DELIM_attherate",
  "PREC_reduce_VariableDeclaratorList",
  "PREC_reduce_VariableInitializerList", "PREC_reduce_ResourceList",
  "PREC_reduce_Dims", "PREC_shift_Dims", "PREC_excor_to_and",
  "PREC_incor_to_excor", "PREC_condor_to_condand", "PREC_condand_to_incor",
  "PREC_cond_to_condor", "PREC_and_to_equality",
  "PREC_equality_to_relational", "OPERATOR_equal", "OPERATOR_ternarycolon",
  "OPERATOR_ternaryquestion", "OPERATOR_logicalor", "OPERATOR_logicaland",
  "OPERATOR_bitwiseor", "OPERATOR_xor", "OPERATOR_bitwiseand",
  "OPERATOR_logicalequal", "OPERATOR_neq", "OPERATOR_lt", "OPERATOR_gt",
  "OPERATOR_leq", "OPERATOR_geq", "KEYWORD_instanceof",
  "OPERATOR_leftshift", "OPERATOR_rightshift",
  "OPERATOR_unsignedrightshift", "OPERATOR_plus", "OPERATOR_minus",
  "OPERATOR_multiply", "OPERATOR_divide", "OPERATOR_mod", "UNARY_minus",
  "UNARY_plus", "OPERATOR_not", "OPERATOR_bitwisecomp",
  "OPERATOR_increment", "OPERATOR_decrement", "$accept", "IntegralType",
  "FloatingPointType", "PrimitiveType", "NumericTypeDims", "BooleanDims",
  "NumericType", "ArrayType", "Dims", "qDims", "Name", "sCommaName",
  "NameList", "CompilationUnit", "OrdinaryCompilationUnit",
  "sImportDeclaration", "ImportDeclaration", "importName",
  "PackageDeclaration", "sTopLevelClassOrInterfaceDeclaration",
  "TopLevelClassOrInterfaceDeclaration", "Modifiers", "Modifier",
  "NormalClassDeclaration", "ClassExtends", "qClassExtends",
  "ClassImplements", "qClassImplements", "ClassPermits", "qClassPermits",
  "ClassBody", "qClassBody", "ClassBodyDeclaration",
  "sClassBodyDeclaration", "ClassMemberDeclaration", "FieldDeclaration",
  "VariableDeclaratorList", "sCommaVariableDeclarator",
  "VariableDeclarator", "VariableDeclaratorId",
  "qEqualVariableInitializer", "VariableInitializer", "UnannType",
  "MethodDeclaration", "MethodHeader", "MethodDeclarator",
  "ReceiverParameterComma", "ReceiverParameter", "IdentifierDot",
  "qIdentifierDot", "FormalParameterList", "qFormalParameterList",
  "FormalParameter", "sCommaFormalParameter", "VariableArityParameter",
  "Throws", "qThrows", "MethodBody", "InstanceInitializer",
  "StaticInitializer", "ConstructorDeclaration", "ConstructorDeclarator",
  "ConstructorBody", "ExplicitConstructorInvocation",
  "BracketArgumentList", "ArrayInitializer", "qComma",
  "sCommaVariableInitializer", "VariableInitializerList",
  "qVariableInitializerList", "Block", "qBlockStatements",
  "BlockStatements", "BlockStatement", "LocalClassOrInterfaceDeclaration",
  "LocalVariableDeclarationStatement", "LocalVariableDeclaration",
  "LocalVariableType", "Statement", "PrintStatement", "StatementNoShortIf",
  "StatementWithoutTrailingSubstatement", "EmptyStatement",
  "LabeledStatement", "LabeledStatementNoShortIf", "ExpressionStatement",
  "StatementExpression", "IfThenStatement", "IfThenElseStatement",
  "IfThenElseStatementNoShortIf", "AssertStatement", "WhileStatement",
  "WhileStatementNoShortIf", "DoStatement", "ForStatement",
  "ForStatementNoShortIf", "BasicForStatement",
  "BasicForStatementNoShortIf", "qForInit", "qForUpdate", "ForInit",
  "ForUpdate", "StatementExpressionList", "sCommaStatementExpression",
  "EnhancedForStatement", "EnhancedForStatementNoShortIf",
  "BreakStatement", "qIdentifier", "YieldStatement", "ContinueStatement",
  "ReturnStatement", "qExpression", "ThrowStatement",
  "SynchronizedStatement", "TryStatement", "qCatches", "pCatches",
  "Catches", "CatchClause", "CatchFormalParameter", "CatchType", "sOrName",
  "Finally", "TryWithResourcesStatement", "qFinally",
  "ResourceSpecification", "qSemicolon", "ResourceList",
  "ssemicolonResource", "Resource", "VariableAccess", "Pattern",
  "TypePattern", "Expression", "AssignmentExpression",
  "ConditionalExpression", "ConditionalOrExpression",
  "ConditionalAndExpression", "InclusiveOrExpression",
  "ExclusiveOrExpression", "AndExpression", "EqualityExpression",
  "RelationalExpression", "ShiftExpression", "AdditiveExpression",
  "MultiplicativeExpression", "UnaryExpression", "PreIncrementExpression",
  "PreDecrementExpression", "UnaryExpressionNotPlusMinus",
  "PostfixExpression", "Primary", "PrimaryNoNewArray", "Literal",
  "ClassLiteral", "ClassInstanceCreationExpression",
  "UnqualifiedClassInstanceCreationExpression", "qArgumentList",
  "ArgumentList", "sCommaExpression", "FieldAccess", "ArrayAccess",
  "MethodInvocation", "MethodReference", "ArrayCreationExpression",
  "DimExprs", "DimExpr", "PostIncrementExpression",
  "PostDecrementExpression", "CastExpression", "InstanceofExpression",
  "Assignment", "LeftHandSide", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-572)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-375)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      46,    14,    40,  -572,    58,  -572,  -572,    38,  -572,    18,
    -572,   663,    58,  -572,    60,    14,    76,   139,   135,  -572,
    -572,  -572,  -572,  -572,  -572,  -572,  -572,  -572,  -572,  -572,
    -572,   753,  -572,  -572,   663,  -572,   226,   -12,  -572,   284,
     246,  -572,    -8,  -572,    14,  -572,   285,   284,  -572,   254,
      14,  -572,   315,   285,   254,  -572,    14,  -572,   279,   315,
     283,   254,  -572,  -572,   279,    14,   283,  2096,  -572,   254,
     287,   321,   323,  -572,  -572,  -572,  -572,  -572,  -572,  -572,
     328,  -572,  1184,  -572,  -572,  -572,  -572,  -572,  -572,   323,
     157,  1238,  -572,  -572,  -572,  -572,   326,  -572,   132,  -572,
    -572,  -572,   342,  -572,  -572,   346,   342,   345,  -572,  2204,
    -572,  -572,  -572,  -572,  -572,  -572,  -572,   -20,   355,   357,
    -572,   359,  1776,   360,   361,   366,  1776,   366,  1776,  1776,
     140,   172,   240,  -572,  1436,   364,   334,  -572,  1776,  -572,
    1776,  1776,   172,   363,    50,  2143,  -572,  -572,  -572,   362,
    1300,  -572,  -572,   367,   371,  -572,  -572,  -572,  -572,  -572,
    -572,   374,  -572,  -572,  -572,  -572,  -572,  -572,  -572,  -572,
    -572,  -572,  -572,  -572,  -572,  -572,  -572,  -572,  -572,  -572,
      54,    84,   372,  -572,  -572,   191,  -572,     0,    21,   195,
    -572,  -572,    98,   189,  -572,    26,  -572,  -572,  -572,   326,
     132,   342,   180,   375,  -572,   347,   342,  -572,  -572,  -572,
      14,  -572,   381,  2204,  -572,   323,  2204,    -3,  2204,   369,
    -572,   377,  -572,  -572,   379,   382,  1776,   438,  1776,   323,
    1844,  1776,  1776,  1776,  1776,   323,    63,   -33,  -572,  -572,
     223,   365,   370,   378,   373,   235,   318,    77,   280,   173,
    -572,  -572,  -572,  -572,    54,  -572,  -572,  -572,  -572,  -572,
    -572,  -572,  1776,  1572,  -572,   390,   392,   394,   395,  -572,
     396,  2046,   417,   287,   406,   408,  -572,   407,  -572,   206,
     355,    24,   435,  1776,  1436,   409,    24,  -572,  -572,  -572,
    -572,   406,   413,    -2,   134,  1776,  1640,     9,  -572,  -572,
     158,  -572,   371,  -572,  -572,  -572,   323,  -572,  -572,  -572,
    -572,    16,   414,  1776,  1776,  1776,   418,  -572,   381,  -572,
    -572,   411,  1708,  -572,  -572,  -572,  1368,  -572,  2204,   419,
    -572,    28,   222,   421,  -572,  -572,   447,    82,   420,  -572,
    -572,   416,   423,  -572,   424,  -572,   425,   172,   426,   172,
     -25,  -572,  -572,  -572,  -572,   172,  -572,  1776,  1776,  1776,
    1776,  1776,  1776,  1776,  1776,  1776,  1776,  1776,  1776,  1776,
    2158,  1776,  1776,  1776,  1776,  1776,  1776,  1776,  1776,   428,
    2158,   410,  -572,   434,  -572,  -572,  -572,  -572,  -572,  -572,
    -572,   252,  -572,   436,  -572,  -572,    84,   243,   437,   454,
     417,   456,  -572,   417,   491,  1640,   439,   407,  -572,   439,
     279,   407,   442,   443,  -572,  -572,   499,  -572,  -572,  -572,
     120,  -572,    14,  -572,   449,   448,  -572,   453,  -572,  -572,
     458,  -572,   423,  -572,  -572,   455,  -572,  -572,  -572,  -572,
     371,  1708,  -572,  -572,  -572,     8,   423,   164,  1300,   462,
    -572,   143,   470,   323,   476,  -572,  -572,  -572,  -572,  -572,
    2204,  -572,   287,  1504,  1776,  1980,   461,   459,   365,   370,
     378,   373,   235,   318,   318,    77,    77,    77,    77,  -572,
     176,  -572,  -572,  -572,   280,   280,   280,   173,   173,  -572,
    -572,  -572,  1436,  1776,   471,  1776,  -572,   475,   480,   498,
     287,  -572,  -572,   454,  -572,  -572,   481,  -572,  -572,  -572,
    -572,  -572,  -572,  -572,  1776,  -572,  -572,   482,   488,   281,
    1776,  -572,  -572,  -572,   540,  -572,  -572,  -572,  -572,  -572,
     483,   492,   495,   161,   497,  -572,   111,   323,  -572,  -572,
    -572,  -572,   496,   500,   507,   474,  -572,   539,   542,  -572,
    -572,  -572,  -572,  -572,  -572,  -572,  -572,  -572,  1776,   514,
    -572,   513,  1912,   521,  -572,  2046,   254,   498,   519,   371,
    -572,  -572,  -572,  -572,   524,   423,  -572,   449,  -572,   516,
    -572,   526,  -572,  -572,   127,  -572,   423,  -572,  1776,  1776,
    1572,  1504,  1436,  -572,  1436,  -572,  1912,  -572,   502,   371,
     287,  -572,   535,  -572,  -572,  1708,  -572,   536,   538,   541,
     543,   515,   547,  -572,  -572,  -572,   548,  -572,  -572,    14,
    -572,  -572,  -572,  -572,  -572,  -572,  1504,  1504,  1776,  1776,
    1436,   254,   568,  -572,   550,   556,  -572,  1504,  1504,  1912,
    -572,  -572,   557,  1504,  -572
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      28,     0,     0,    25,    36,    28,    21,     0,     1,     0,
      29,    26,    36,    35,     0,     0,    34,     0,     0,    42,
      43,    46,    45,    51,    49,    50,    48,    47,    44,    39,
      37,     0,    40,    38,    27,    20,    31,     0,    30,    55,
       0,    41,     0,    33,     0,    56,    58,    55,    32,    54,
       0,    59,    61,    58,    22,    57,     0,    62,     0,    61,
      24,    22,    70,    53,     0,     0,    60,     0,    52,    23,
      45,     0,    10,     2,     3,     4,     5,     6,     7,     8,
      21,    75,     0,    63,    13,    14,    87,    88,    89,     9,
      18,     0,    74,    71,    66,    72,     0,    73,     0,    67,
      68,    69,   113,   117,   118,     0,   113,     0,    12,   103,
     317,   318,   319,   320,   321,   322,   323,     0,    48,     0,
     309,     0,     0,     0,     0,   216,     0,   216,   221,     0,
       0,    10,     0,   152,     0,     0,    21,   178,     0,   138,
       0,     0,     9,     0,   372,     0,   147,   151,   166,     0,
     142,   144,   145,     0,     0,   146,   159,   153,   167,   154,
     168,     0,   155,   156,   169,   157,   170,   158,   197,   198,
     171,   177,   172,   173,   175,   174,   176,   227,   183,   184,
       0,   302,   305,   307,   308,   312,   329,   313,   314,   315,
     316,   306,   185,   186,   182,     0,    11,    19,    90,     0,
       0,   113,    18,     0,    79,    83,   113,   116,    92,   115,
       0,   114,     0,   103,    94,    16,     0,   100,   103,     0,
     104,     0,   108,   107,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,     0,    18,   297,     0,   255,   256,
     258,   260,   262,   264,   266,   268,   270,   273,   279,   283,
     286,   290,   291,   294,   298,   312,   315,   303,   304,   301,
     274,   257,     0,   203,   217,     0,     0,     0,     0,   222,
       0,     0,   228,     0,    12,     0,    10,     0,     9,     0,
       0,   372,     0,   221,     0,     0,   297,   295,   313,   314,
     296,    11,     0,     0,     0,   333,     0,     0,   361,   363,
      15,   343,     0,   139,   143,   148,    18,   150,   181,   362,
     364,     0,     0,     0,     0,     0,     0,    91,     0,    82,
      77,    78,     0,    81,    93,   112,   140,   120,   103,     0,
      17,     0,    18,     0,   106,   101,     0,     0,     0,    97,
     121,   102,   339,   350,     0,   328,     0,    10,     0,     9,
       0,   292,   293,   300,   299,    15,   192,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   208,   211,     0,   204,   207,   215,   218,   219,   220,
     223,   251,   249,   244,   247,   250,     0,   313,     0,     0,
     232,   225,   230,   228,     0,     0,     0,    18,   358,     0,
      64,    18,     0,     0,   179,   311,     0,   353,   349,   324,
       0,   310,     0,   330,   336,     0,   334,     0,   352,   347,
       0,   149,   338,   331,   348,     0,   370,   371,    76,   119,
       0,   136,    84,    86,    85,     0,   309,   372,   140,     0,
     141,   302,     0,    18,     0,   105,    99,   111,    98,   122,
       0,   345,     0,     0,     0,     0,     0,     0,   261,   263,
     265,   267,   269,   271,   272,   275,   276,   277,   278,   367,
     368,   254,   369,   253,   280,   281,   282,   284,   285,   287,
     288,   289,     0,     0,   210,   221,   245,     0,   246,     0,
       0,   226,   231,   241,   229,   327,     0,   356,   354,   359,
     357,    65,   332,   355,     0,   160,   326,     0,     0,     0,
       0,   335,   129,   341,     0,   344,   342,    80,   133,   137,
     131,     0,     0,     0,     0,   123,     0,    18,    95,   110,
     109,   224,     0,     0,     0,    21,   189,     0,   153,   162,
     163,   164,   165,   199,   200,   365,   366,   193,     0,    15,
     194,     0,     0,     0,   243,     0,   237,     0,     0,     0,
     239,   242,   240,   360,     0,   340,   351,   336,   325,   135,
     132,     0,   126,   125,     0,   124,     0,    96,     0,     0,
     203,     0,     0,   259,     0,   212,   205,   248,   236,     0,
       0,   235,     0,   346,   337,     0,   130,     0,     0,     0,
       0,   208,     0,   180,   190,   213,     0,   206,   209,     0,
     234,   233,   196,   134,   127,   128,     0,     0,     0,   221,
       0,   238,     0,   195,     0,     0,   201,     0,     0,   205,
     191,   214,     0,     0,   202
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -572,  -572,  -572,   -98,  -572,  -572,   693,  -211,   -35,    97,
      -1,   559,   393,  -572,  -572,   599,  -572,  -572,  -572,   610,
    -572,    10,   -29,    27,  -572,   581,  -572,   577,  -572,   572,
     -32,  -572,  -572,  -572,  -572,  -572,  -134,  -572,   192,  -214,
    -572,  -417,   -62,  -572,   544,   562,   430,  -572,  -572,  -572,
    -572,  -187,   179,  -572,  -572,  -572,   -79,   441,  -572,  -572,
    -572,   553,   329,  -572,  -262,   -68,  -572,  -572,  -572,  -572,
     -57,   200,   -66,  -572,  -572,  -572,  -256,  -127,   106,  -572,
    -508,  -441,  -572,  -572,  -572,  -572,  -257,  -572,  -572,  -572,
    -572,  -572,  -572,  -572,  -572,  -572,  -572,  -572,    62,    11,
    -572,  -572,  -571,  -572,  -572,  -572,  -572,   527,  -572,  -572,
    -572,  -282,  -572,  -572,  -572,   250,  -572,   256,   255,  -572,
      93,  -572,   162,  -572,  -572,  -572,  -572,  -572,  -572,    96,
    -572,  -572,  -572,    35,  -572,   109,  -572,   305,   308,   309,
     310,   313,    31,   -48,    29,    32,  -129,   -59,    19,   208,
     124,  -267,  -572,  -572,  -572,   203,  -261,  -572,  -572,   100,
     717,   744,   260,  -572,  -572,   404,  -157,   343,   412,  -572,
    -572,   537,  -572
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    84,    85,    86,    87,    88,   235,   143,   197,   198,
     236,    60,    55,     2,     3,     4,    10,    17,     5,    11,
      30,   216,    32,   146,    45,    46,    51,    52,    57,    58,
      63,   512,    93,    67,    94,    95,   203,   321,   204,   205,
     323,   442,   147,    97,    98,   206,   218,   219,   335,   336,
     220,   221,   222,   341,   223,   211,   212,   208,    99,   100,
     101,   102,   327,   448,   301,   443,   581,   579,   529,   530,
     148,   449,   450,   150,   151,   152,   153,   154,   155,   156,
     547,   157,   158,   159,   549,   160,   161,   162,   163,   550,
     164,   165,   551,   166,   167,   552,   168,   553,   383,   616,
     384,   617,   385,   494,   169,   554,   170,   265,   171,   172,
     173,   268,   174,   175,   176,   399,   400,   401,   402,   568,
     569,   598,   501,   177,   572,   273,   497,   393,   498,   394,
     395,   482,   483,   269,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   181,   182,   183,   184,   255,   186,   425,   426,   521,
     187,   188,   256,   190,   191,   407,   408,   257,   258,   259,
     260,   261,   195
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,   413,    41,   334,   396,    96,   382,   381,    16,  -373,
     103,   287,   290,   104,    36,   392,   149,   410,   302,   350,
     307,    31,   548,   178,   528,   618,   329,   214,   356,   199,
    -374,   338,    68,   423,   277,   314,    15,   108,    33,   465,
       8,   209,   224,    49,    31,   417,   293,   217,    35,    54,
     433,   225,    35,   357,   196,    61,   428,   332,   418,   451,
       1,    33,    41,   422,    69,   316,    90,   333,   618,   429,
     224,   295,  -372,   272,     6,   178,   432,    91,     6,   225,
     461,   144,     9,   613,   304,  -373,   294,   295,   306,   296,
      90,   178,   145,    43,    92,   297,   274,    48,   454,    13,
      14,   179,   351,   352,   353,   354,  -374,   291,    90,   300,
     -18,   315,   294,   295,   481,   296,    41,   455,   632,   633,
      35,   297,   318,   334,   586,   294,   295,   324,   296,   640,
     641,   279,   348,   281,   297,   644,   298,   299,    37,   286,
     286,   452,   306,   209,    90,   419,   311,   420,  -372,   144,
     548,   217,   333,   179,   331,   312,   337,   237,   422,   479,
     145,   266,   298,   299,   270,   421,   309,   310,   431,   179,
     525,   432,   419,   285,   584,   298,   299,   371,   372,   373,
     330,   422,   517,   531,   532,   548,   548,    41,   623,   517,
     295,   518,   421,   207,    35,    39,   548,   548,   518,    82,
      38,   355,   548,   271,   178,   536,   180,    82,   422,    54,
    -303,  -303,    90,   563,   312,    90,   403,    90,   -19,    14,
     -18,    35,   107,   107,   -18,   178,   533,   295,   275,   296,
     286,   286,   286,   286,   -18,   297,   -18,   107,    14,   292,
     282,   107,   406,   213,   409,   107,   355,   489,   490,   491,
     509,   355,  -188,   302,   509,  -188,  -187,   410,   180,  -187,
    -188,   344,   144,   346,  -187,   285,   337,   178,    14,   295,
     391,   405,   423,   380,   180,   433,   298,   299,   376,   377,
     378,   380,   179,   281,   456,   185,   276,   107,    42,    73,
      74,    75,    76,    77,    78,    79,    44,   379,   396,   319,
       6,  -304,  -304,   179,  -252,   595,    47,  -252,    50,   392,
     358,   359,   -18,   603,   294,   295,    14,   296,   475,   476,
     477,   478,   607,   297,   608,   447,   275,    90,   364,   365,
     424,   427,   292,   382,   611,   555,   145,   185,   507,   382,
      56,   510,   189,    14,   295,   179,    62,   635,   435,   436,
     437,    41,    65,   185,    82,   601,   300,   444,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   480,
     286,   286,   286,   286,   286,   286,   286,   286,   511,    90,
     380,   105,   382,   374,   375,   620,   202,   180,   107,   178,
     414,   109,   466,   467,   189,   473,   474,   430,   337,   210,
     484,   485,   486,   319,   178,   541,   487,   488,   180,   213,
     189,   215,   300,   366,   367,   368,   369,   370,   226,   227,
     284,   519,   228,   262,   263,   192,   264,   283,   305,   319,
     303,   306,   322,   178,   293,   308,   320,   313,   339,   342,
     506,   340,   343,   570,   275,   559,   292,   144,   326,   345,
     180,   386,   430,   387,   360,   388,   389,   390,   145,    90,
     361,   398,   281,   286,   286,   363,   185,   179,   -19,   362,
     404,   412,   405,   415,   434,   416,   444,   192,   458,   438,
     440,   457,   179,   453,   459,   460,   295,   185,   462,   463,
     464,   281,   492,   192,   193,   495,   493,   496,   566,   500,
     499,  -229,   505,   178,   508,   514,   441,   515,   513,   567,
     516,   179,   522,    19,    20,    21,    22,    23,   520,   523,
     524,   526,   557,   189,    24,    25,    26,    27,   561,   185,
     535,   178,   178,   178,   537,   178,   539,   178,    41,   564,
     562,   565,   575,   621,   189,   558,   193,   573,   576,   574,
     538,   578,   580,   582,    28,   577,   583,   286,     6,   588,
     591,   281,   193,   589,   391,   585,   566,   178,   178,   546,
     590,   178,   180,   592,   -19,   380,  -161,   594,   178,   178,
     178,   179,   596,   600,   178,   605,   189,   180,   602,   144,
     281,   281,   619,   281,   606,   281,   622,   624,   560,   625,
     380,   628,   637,   325,    12,   626,   192,   627,   629,   179,
     179,   179,   630,   179,   638,   179,   180,   639,   631,   194,
      66,   643,    34,   609,   610,   281,   281,   192,    53,   281,
      59,    64,   527,   106,   587,   200,   281,   281,   281,   540,
     444,   317,   281,   328,   201,   179,   179,   439,   534,   179,
     642,   185,   612,   503,   267,   502,   179,   179,   179,   504,
     599,   597,   179,   634,   468,   571,   185,   593,   469,   192,
     470,   194,   471,   556,    18,   193,   472,   604,    19,    20,
      21,    22,    23,   411,     0,     0,   180,   194,     0,    24,
      25,    26,    27,     0,     0,   185,   193,   414,   614,     0,
     615,     0,     0,     0,     0,     0,     0,     0,   189,     0,
       0,     0,     0,     0,   180,   180,   180,     0,   180,    28,
     180,     0,     0,   189,    29,     0,     0,     0,     0,     0,
       0,     0,   546,   560,     0,     0,   636,     0,   193,     0,
       0,     0,     0,   614,   615,     0,     0,     0,     0,   636,
     180,   180,   189,     0,   180,     0,     0,     0,     0,     0,
      89,   180,   180,   180,    40,   185,     0,   180,    19,    20,
      21,    22,    23,     0,     0,   142,     0,     0,     0,    24,
      25,    26,    27,     0,    89,     0,     0,     0,     0,     0,
       0,   192,     0,   185,   185,   185,     0,   185,     0,   185,
     194,     0,    89,     0,     0,     0,   192,     0,     0,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   194,   189,     0,     0,   278,     0,     0,     0,   185,
     185,     0,     0,   185,     0,   192,     0,     0,    89,     0,
     185,   185,   185,   142,     0,     0,   185,     0,     0,     0,
     189,   189,   189,     0,   189,     0,   189,   288,   288,     0,
     193,     0,     0,   194,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   193,     0,     0,     0,     0,
       0,     0,     0,     0,   289,   289,   189,   189,     0,     0,
     189,     0,     0,     0,     0,     0,     0,   189,   189,   189,
       0,     0,     0,   189,   193,   192,    89,     0,     0,    89,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   349,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   192,   192,   192,     0,   192,     0,   192,
       0,     0,     0,     0,     0,     0,     0,     0,   288,   288,
     288,   288,     0,     0,     0,     0,   142,     0,     0,     0,
       0,     0,     0,     0,   142,     0,     0,     0,     0,   192,
     192,     0,     0,   192,   193,   289,   289,   289,   289,     0,
     192,   192,   192,     0,     0,   194,   192,     0,   397,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     194,     0,   193,   193,   193,     0,   193,     0,   193,     0,
       0,     0,     0,     0,     0,   289,     0,     0,     0,   142,
       0,    89,     0,     0,     0,     0,     0,     0,     0,   194,
       0,     0,     0,     0,     0,     0,     0,     0,   193,   193,
       0,     0,   193,     0,     0,     0,     0,     0,     0,   193,
     193,   193,     0,     0,     0,   193,     0,     0,     0,     0,
       0,     0,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,     0,   288,   288,   288,   288,
     288,   288,   288,   288,   288,   288,   288,     0,   288,   288,
     288,   288,   288,   288,   288,   288,     0,     0,     0,   194,
       0,     0,     0,   289,   289,   289,   289,   289,   289,   289,
     289,   289,   289,   289,     0,   289,   289,   289,   289,   289,
     289,   289,   289,     0,     0,     0,     0,   194,   194,   194,
       0,   194,     0,   194,     0,     0,     0,     0,     0,     0,
       0,   142,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   194,   194,     0,     0,   194,     0,     0,
       0,     0,     0,     0,   194,   194,   194,     0,     0,     0,
     194,   288,   288,     0,     0,     0,     0,   110,   111,   112,
     113,   114,   115,     0,   116,    18,     0,   117,     0,    19,
      20,    21,    22,    23,     0,     0,     0,     0,   289,   289,
      24,    25,   118,    27,   119,   120,     0,   121,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,     0,     0,
     131,   132,   133,    73,    74,    75,    76,    77,    78,    79,
      28,     0,   134,   135,   136,   137,     0,   138,     0,    40,
       0,    82,   139,    19,    20,    21,    22,    23,   142,     0,
       0,     0,     0,     0,    24,    25,    26,    27,    71,     0,
       0,     0,     0,     0,     0,   288,     0,     0,     0,     0,
       0,     0,   397,   142,    72,     0,     0,    73,    74,    75,
      76,    77,    78,    79,    28,     0,   140,   141,    80,     0,
       0,     0,   289,   110,   111,   112,   113,   114,   115,   289,
     116,    18,     0,   117,     0,    19,    20,    21,    22,    23,
       0,     0,     0,     0,     0,     0,    24,    25,   118,    27,
     119,   120,     0,   121,     0,   122,   123,   124,   125,   126,
     127,   128,   129,   130,     0,     0,   131,   132,   133,    73,
      74,    75,    76,    77,    78,    79,    28,     0,   134,   135,
     136,   137,     0,   138,     0,     0,     0,    82,     0,     0,
       0,   110,   111,   112,   113,   114,   115,     0,   116,    18,
       0,   445,     0,    19,    20,    21,    22,    23,     0,     0,
       0,     0,     0,     0,    24,    25,   118,    27,   119,   446,
       0,   121,     0,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   140,   141,   131,   132,   133,    73,    74,    75,
      76,    77,    78,    79,    28,     0,   134,   135,   136,   137,
       0,   138,     0,     0,     0,    82,     0,     0,     0,   110,
     111,   112,   113,   114,   115,     0,   116,     0,     0,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   280,     0,   119,   120,     0,   121,
       0,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     140,   141,   229,   132,     0,    73,    74,    75,    76,    77,
      78,    79,     0,     0,   134,   135,   136,   137,     0,   138,
       0,     0,     0,    82,     0,     0,     0,   110,   111,   112,
     113,   114,   115,     0,   116,     0,     0,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   280,     0,   119,   120,     0,   542,     0,   122,
     543,   544,   125,   126,   127,   128,   129,   130,   140,   141,
     229,   132,     0,    73,    74,    75,    76,    77,    78,    79,
       0,     0,   134,   135,   545,   137,     0,   138,     0,     0,
       0,    82,     0,     0,     0,   110,   111,   112,   113,   114,
     115,     0,   116,     0,     0,   117,     0,    19,    20,    21,
      22,    23,     0,     0,     0,     0,     0,     0,    24,    25,
      26,    27,   119,   120,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   140,   141,   131,   132,
     133,    73,    74,    75,    76,    77,    78,    79,    28,     0,
       0,     0,     6,     0,     0,   138,     0,     0,     0,     0,
       0,     0,     0,   110,   111,   112,   113,   114,   115,     0,
     116,     0,     0,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   140,   141,   229,   132,     0,    73,
      74,    75,    76,    77,    78,    79,     0,     0,     0,     0,
       6,     0,     0,   230,     0,     0,   215,     0,     0,     0,
       0,   110,   111,   112,   113,   114,   115,     0,   116,     0,
       0,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
       0,     0,     0,   231,   232,     0,     0,     0,     0,     0,
     233,   234,   140,   141,   229,   132,     0,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     6,     0,
       0,   230,     0,     0,     0,   441,     0,     0,     0,   110,
     111,   112,   113,   114,   115,     0,   116,     0,     0,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,   231,   232,     0,     0,     0,     0,     0,   233,   234,
     140,   141,   229,   132,     0,    73,    74,    75,    76,    77,
      78,    79,     0,     0,     0,     0,     6,     0,     0,   230,
       0,     0,     0,     0,     0,     0,     0,   110,   111,   112,
     113,   114,   115,     0,   116,     0,     0,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,   231,
     232,     0,     0,     0,     0,     0,   233,   234,   140,   141,
     347,   132,     0,    73,    74,    75,    76,    77,    78,    79,
       0,     0,     0,     0,     6,     0,     0,   230,     0,     0,
       0,     0,     0,     0,     0,   110,   111,   112,   113,   114,
     115,     0,   116,     0,     0,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,     0,     0,     0,   231,   232,     0,
       0,     0,     0,     0,   233,   234,   140,   141,   229,   132,
       0,    73,    74,    75,    76,    77,    78,    79,     0,     0,
       0,     0,     6,     0,     0,   138,     0,     0,     0,     0,
       0,     0,     0,   110,   111,   112,   113,   114,   115,     0,
     116,     0,     0,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   140,   141,   229,   132,     0,    73,
      74,    75,    76,    77,    78,    79,     0,     0,     0,     0,
       6,     0,     0,   230,     0,     0,     0,     0,     0,   110,
     111,   112,   113,   114,   115,     0,   116,     0,     0,   117,
       0,    19,    20,    21,    22,    23,     0,     0,     0,     0,
       0,     0,    24,    25,    26,    27,   119,   120,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     233,   234,   131,   132,   133,    73,    74,    75,    76,    77,
      78,    79,    28,     0,     0,     0,     6,    18,     0,   138,
       0,    19,    20,    21,    70,    23,     0,     0,     0,     0,
       0,     0,    24,    25,    26,    27,    71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    72,     0,     0,    73,    74,    75,    76,    77,
      78,    79,    28,     0,    40,     0,    80,    81,    19,    20,
      21,    22,    23,    82,    83,     0,     0,     0,     0,    24,
      25,    26,    27,    19,    20,    21,    22,    23,     0,     0,
       0,     0,     0,     0,    24,    25,    26,    27,     0,    72,
       0,   133,    73,    74,    75,    76,    77,    78,    79,    28,
       0,     0,     0,     6,    72,     0,   133,    73,    74,    75,
      76,    77,    78,    79,    28,     0,     0,     0,     6,    19,
      20,    21,    22,    23,     0,     0,     0,     0,     0,     0,
      24,    25,    26,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,     0,     0,    73,    74,    75,    76,    77,    78,    79,
      28,     0,     0,     0,     6
};

static const yytype_int16 yycheck[] =
{
       1,   283,    31,   217,   271,    67,   263,   263,     9,     9,
      67,   140,   141,    70,    15,   271,    82,   279,   145,   230,
     154,    11,   463,    82,   441,   596,   213,   106,    61,    91,
       9,   218,    64,   294,   132,     9,    18,    72,    11,    64,
       0,    98,    62,    44,    34,    47,    71,   109,    60,    50,
     311,    71,    60,    86,    89,    56,    47,    60,    60,   326,
      14,    34,    91,    47,    65,   199,    67,    70,   639,    60,
      62,    63,     9,   130,    60,   134,    60,    67,    60,    71,
     342,    82,    24,   591,   150,    85,    62,    63,    60,    65,
      91,   150,    82,   105,    67,    71,   131,   105,    70,    61,
      62,    82,   231,   232,   233,   234,    85,   142,   109,   144,
      60,    85,    62,    63,   370,    65,   145,   331,   626,   627,
      60,    71,   201,   337,    13,    62,    63,   206,    65,   637,
     638,   132,   230,   134,    71,   643,   112,   113,    62,   140,
     141,   328,    60,   200,   145,    11,    62,    13,    85,   150,
     591,   213,    70,   134,   216,    71,   218,   122,    47,   370,
     150,   126,   112,   113,   129,    31,   112,   113,   302,   150,
     432,    60,    11,   138,    13,   112,   113,   100,   101,   102,
     215,    47,    62,   445,   446,   626,   627,   216,   605,    62,
      63,    71,    31,    61,    60,    60,   637,   638,    71,    67,
      61,   236,   643,    63,   263,    62,    82,    67,    47,   210,
     112,   113,   213,   495,    71,   216,   273,   218,    60,    62,
      62,    60,    65,    65,    60,   284,    62,    63,   131,    65,
     231,   232,   233,   234,    62,    71,    60,    65,    62,   142,
     134,    65,   277,    63,   279,    65,   281,   376,   377,   378,
     407,   286,    61,   380,   411,    64,    61,   519,   134,    64,
      69,   226,   263,   228,    69,   230,   328,   326,    62,    63,
     271,    65,   533,   263,   150,   536,   112,   113,   105,   106,
     107,   271,   263,   284,    62,    82,    46,    65,    62,    49,
      50,    51,    52,    53,    54,    55,    12,   262,   565,   202,
      60,   112,   113,   284,    61,   562,    60,    64,    23,   565,
      87,    88,    60,   575,    62,    63,    62,    65,   366,   367,
     368,   369,   584,    71,   586,   326,   229,   328,    93,    94,
     295,   296,   235,   590,   590,   464,   326,   134,   406,   596,
      25,   409,    82,    62,    63,   326,    67,   629,   313,   314,
     315,   380,    69,   150,    67,   569,   391,   322,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   410,   380,
     370,    60,   639,   103,   104,   599,    60,   263,    65,   448,
     284,    63,   357,   358,   134,   364,   365,   300,   460,    57,
     371,   372,   373,   306,   463,   462,   374,   375,   284,    63,
     150,    66,   447,    95,    96,    97,    98,    99,    63,    62,
      86,   422,    63,    63,    63,    82,    60,    63,    61,   332,
      68,    60,    85,   492,    71,    61,    61,    65,    69,    60,
     405,    64,    60,   500,   347,   480,   349,   448,    67,    11,
     326,    61,   355,    61,    89,    61,    61,    61,   448,   460,
      90,    44,   463,   464,   465,    92,   263,   448,    62,    91,
      62,    36,    65,    64,    60,    62,   441,   134,    31,    61,
      69,    60,   463,    64,    64,    69,    63,   284,    64,    64,
      64,   492,    64,   150,    82,    61,    86,    61,   499,    45,
      63,    45,    11,   562,   407,    63,    67,    64,   411,   499,
      11,   492,    64,    15,    16,    17,    18,    19,    69,    66,
      62,    66,    61,   263,    26,    27,    28,    29,   493,   326,
      68,   590,   591,   592,    64,   594,    60,   596,   567,    64,
      69,    61,    60,   600,   284,    86,   134,    66,    60,   514,
     453,    11,    69,    61,    56,   520,    61,   558,    60,    63,
      86,   562,   150,    63,   565,    68,   567,   626,   627,   463,
      63,   630,   448,    34,    60,   565,    34,    64,   637,   638,
     639,   562,    61,    64,   643,    69,   326,   463,    64,   590,
     591,   592,    90,   594,    68,   596,    61,    61,   492,    61,
     590,    86,    34,   210,     5,    64,   263,    64,    61,   590,
     591,   592,    64,   594,    64,   596,   492,    61,   619,    82,
      61,    64,    12,   588,   589,   626,   627,   284,    47,   630,
      53,    59,   440,    71,   537,    91,   637,   638,   639,   460,
     605,   200,   643,   213,    91,   626,   627,   318,   448,   630,
     639,   448,   590,   403,   127,   400,   637,   638,   639,   403,
     567,   565,   643,   628,   359,   503,   463,   558,   360,   326,
     361,   134,   362,   465,    11,   263,   363,   577,    15,    16,
      17,    18,    19,   279,    -1,    -1,   562,   150,    -1,    26,
      27,    28,    29,    -1,    -1,   492,   284,   591,   592,    -1,
     594,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,    -1,
      -1,    -1,    -1,    -1,   590,   591,   592,    -1,   594,    56,
     596,    -1,    -1,   463,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   626,   627,    -1,    -1,   630,    -1,   326,    -1,
      -1,    -1,    -1,   637,   638,    -1,    -1,    -1,    -1,   643,
     626,   627,   492,    -1,   630,    -1,    -1,    -1,    -1,    -1,
      67,   637,   638,   639,    11,   562,    -1,   643,    15,    16,
      17,    18,    19,    -1,    -1,    82,    -1,    -1,    -1,    26,
      27,    28,    29,    -1,    91,    -1,    -1,    -1,    -1,    -1,
      -1,   448,    -1,   590,   591,   592,    -1,   594,    -1,   596,
     263,    -1,   109,    -1,    -1,    -1,   463,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   284,   562,    -1,    -1,   132,    -1,    -1,    -1,   626,
     627,    -1,    -1,   630,    -1,   492,    -1,    -1,   145,    -1,
     637,   638,   639,   150,    -1,    -1,   643,    -1,    -1,    -1,
     590,   591,   592,    -1,   594,    -1,   596,   140,   141,    -1,
     448,    -1,    -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   463,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   140,   141,   626,   627,    -1,    -1,
     630,    -1,    -1,    -1,    -1,    -1,    -1,   637,   638,   639,
      -1,    -1,    -1,   643,   492,   562,   213,    -1,    -1,   216,
      -1,   218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   230,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   590,   591,   592,    -1,   594,    -1,   596,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,
     233,   234,    -1,    -1,    -1,    -1,   263,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   271,    -1,    -1,    -1,    -1,   626,
     627,    -1,    -1,   630,   562,   231,   232,   233,   234,    -1,
     637,   638,   639,    -1,    -1,   448,   643,    -1,   271,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     463,    -1,   590,   591,   592,    -1,   594,    -1,   596,    -1,
      -1,    -1,    -1,    -1,    -1,   271,    -1,    -1,    -1,   326,
      -1,   328,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   492,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   626,   627,
      -1,    -1,   630,    -1,    -1,    -1,    -1,    -1,    -1,   637,
     638,   639,    -1,    -1,    -1,   643,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   370,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   380,    -1,    -1,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,    -1,   371,   372,
     373,   374,   375,   376,   377,   378,    -1,    -1,    -1,   562,
      -1,    -1,    -1,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,    -1,   371,   372,   373,   374,   375,
     376,   377,   378,    -1,    -1,    -1,    -1,   590,   591,   592,
      -1,   594,    -1,   596,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   448,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   460,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   626,   627,    -1,    -1,   630,    -1,    -1,
      -1,    -1,    -1,    -1,   637,   638,   639,    -1,    -1,    -1,
     643,   464,   465,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    13,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,   464,   465,
      26,    27,    28,    29,    30,    31,    -1,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    61,    -1,    63,    -1,    11,
      -1,    67,    68,    15,    16,    17,    18,    19,   565,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,   558,    -1,    -1,    -1,    -1,
      -1,    -1,   565,   590,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,   112,   113,    60,    -1,
      -1,    -1,   558,     3,     4,     5,     6,     7,     8,   565,
      10,    11,    -1,    13,    -1,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    31,    -1,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    61,    -1,    63,    -1,    -1,    -1,    67,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    13,    -1,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      -1,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,   112,   113,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      -1,    63,    -1,    -1,    -1,    67,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    30,    31,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
     112,   113,    46,    47,    -1,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    59,    60,    61,    -1,    63,
      -1,    -1,    -1,    67,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    30,    31,    -1,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,   112,   113,
      46,    47,    -1,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    58,    59,    60,    61,    -1,    63,    -1,    -1,
      -1,    67,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    -1,    13,    -1,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    60,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,   113,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,    -1,    -1,    66,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    -1,   103,   104,    -1,    -1,    -1,    -1,    -1,
     110,   111,   112,   113,    46,    47,    -1,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    63,    -1,    -1,    -1,    67,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      -1,   103,   104,    -1,    -1,    -1,    -1,    -1,   110,   111,
     112,   113,    46,    47,    -1,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,   103,
     104,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,   113,
      46,    47,    -1,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    -1,   103,   104,    -1,
      -1,    -1,    -1,    -1,   110,   111,   112,   113,    46,    47,
      -1,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,   113,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    -1,    13,
      -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     110,   111,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    60,    11,    -1,    63,
      -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    11,    -1,    60,    61,    15,    16,
      17,    18,    19,    67,    68,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,    46,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    60,    46,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    60,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    60
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    14,   127,   128,   129,   132,    60,   124,     0,    24,
     130,   133,   129,    61,    62,    18,   124,   131,    11,    15,
      16,    17,    18,    19,    26,    27,    28,    29,    56,    61,
     134,   135,   136,   137,   133,    60,   124,    62,    61,    60,
      11,   136,    62,   105,    12,   138,   139,    60,   105,   124,
      23,   140,   141,   139,   124,   126,    25,   142,   143,   141,
     125,   124,    67,   144,   143,    69,   125,   147,   144,   124,
      18,    30,    46,    49,    50,    51,    52,    53,    54,    55,
      60,    61,    67,    68,   115,   116,   117,   118,   119,   120,
     124,   135,   137,   146,   148,   149,   156,   157,   158,   172,
     173,   174,   175,   184,   184,    60,   159,    65,   122,    63,
       3,     4,     5,     6,     7,     8,    10,    13,    28,    30,
      31,    33,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    46,    47,    48,    58,    59,    60,    61,    63,    68,
     112,   113,   120,   121,   124,   135,   137,   156,   184,   186,
     187,   188,   189,   190,   191,   192,   193,   195,   196,   197,
     199,   200,   201,   202,   204,   205,   207,   208,   210,   218,
     220,   222,   223,   224,   226,   227,   228,   237,   261,   262,
     264,   265,   266,   267,   268,   269,   270,   274,   275,   276,
     277,   278,   281,   282,   285,   286,   122,   122,   123,   156,
     158,   175,    60,   150,   152,   153,   159,    61,   171,   184,
      57,   169,   170,    63,   170,    66,   135,   156,   160,   161,
     164,   165,   166,   168,    62,    71,    63,    62,    63,    46,
      63,   103,   104,   110,   111,   120,   124,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   269,   276,   281,   282,   283,
     284,   285,    63,    63,    60,   221,   247,   221,   225,   247,
     247,    63,   184,   239,   122,   123,    46,   117,   120,   124,
      28,   124,   192,    63,    86,   247,   124,   260,   274,   275,
     260,   122,   123,    71,    62,    63,    65,    71,   112,   113,
     122,   178,   191,    68,   186,    61,    60,   150,    61,   112,
     113,    62,    71,    65,     9,    85,   150,   171,   170,   123,
      61,   151,    85,   154,   170,   126,    67,   176,   160,   165,
     122,   156,    60,    70,   153,   162,   163,   156,   165,    69,
      64,   167,    60,    60,   247,    11,   247,    46,   117,   120,
     121,   260,   260,   260,   260,   122,    61,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   247,
     135,   190,   200,   212,   214,   216,    61,    61,    61,    61,
      61,   124,   190,   241,   243,   244,   265,   274,    44,   229,
     230,   231,   232,   184,    62,    65,   122,   279,   280,   122,
     178,   279,    36,   225,   192,    64,    62,    47,    60,    11,
      13,    31,    47,   270,   247,   271,   272,   247,    47,    60,
     123,   150,    60,   270,    60,   247,   247,   247,    61,   176,
      69,    67,   155,   179,   247,    13,    31,   124,   177,   185,
     186,   265,   165,    64,    70,   153,    62,    60,    31,    64,
      69,   178,    64,    64,    64,    64,   247,   247,   251,   252,
     253,   254,   255,   256,   256,   257,   257,   257,   257,   121,
     124,   190,   245,   246,   258,   258,   258,   259,   259,   260,
     260,   260,    64,    86,   217,    61,    61,   240,   242,    63,
      45,   236,   232,   229,   231,    11,   247,   179,   123,   280,
     179,   144,   145,   123,    63,    64,    11,    62,    71,   124,
      69,   273,    64,    66,    62,   178,    66,   152,   155,   182,
     183,   178,   178,    62,   185,    68,    62,    64,   123,    60,
     166,   184,    33,    36,    37,    60,   192,   194,   195,   198,
     203,   206,   209,   211,   219,   260,   263,    61,    86,   122,
     192,   247,    69,   225,    64,    61,   124,   135,   233,   234,
     184,   236,   238,    66,   247,    60,    60,   247,    11,   181,
      69,   180,    61,    61,    13,    68,    13,   123,    63,    63,
      63,    86,    34,   249,    64,   200,    61,   243,   235,   234,
      64,   153,    64,   178,   273,    69,    68,   178,   178,   247,
     247,   190,   212,   194,   192,   192,   213,   215,   216,    90,
     153,   184,    61,   155,    61,    61,    64,    64,    86,    61,
      64,   124,   194,   194,   247,   225,   192,    34,    64,    61,
     194,   194,   213,    64,   194
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   114,   115,   115,   115,   115,   115,   116,   116,   117,
     117,   118,   119,   120,   120,   121,   122,   122,   123,   123,
     124,   124,   125,   125,   126,   127,   128,   128,   129,   129,
     130,   131,   131,   131,   131,   132,   133,   133,   134,   134,
     135,   135,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   137,   137,   138,   139,   139,   140,   141,   141,
     142,   143,   143,   144,   145,   145,   146,   146,   146,   146,
     147,   147,   148,   148,   148,   148,   149,   149,   150,   151,
     151,   152,   153,   154,   154,   155,   155,   156,   156,   156,
     156,   157,   157,   158,   158,   159,   159,   160,   161,   162,
     163,   163,   164,   165,   165,   166,   166,   166,   167,   167,
     168,   168,   169,   170,   170,   171,   171,   172,   173,   174,
     174,   175,   175,   176,   176,   177,   177,   177,   177,   178,
     179,   180,   180,   181,   181,   182,   183,   183,   184,   184,
     185,   185,   186,   186,   187,   187,   187,   188,   189,   190,
     190,   191,   191,   192,   192,   192,   192,   192,   192,   192,
     193,   194,   194,   194,   194,   194,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   196,   197,
     198,   199,   200,   200,   200,   200,   200,   200,   200,   201,
     202,   203,   204,   204,   205,   206,   207,   208,   208,   209,
     209,   210,   211,   212,   212,   213,   213,   214,   214,   215,
     216,   217,   217,   218,   219,   220,   221,   221,   222,   223,
     224,   225,   225,   226,   227,   228,   228,   228,   229,   229,
     230,   230,   231,   232,   233,   233,   234,   235,   235,   236,
     237,   238,   238,   239,   240,   240,   241,   242,   242,   243,
     243,   244,   244,   245,   246,   247,   248,   248,   249,   249,
     250,   250,   251,   251,   252,   252,   253,   253,   254,   254,
     255,   255,   255,   256,   256,   256,   256,   256,   256,   257,
     257,   257,   257,   258,   258,   258,   259,   259,   259,   259,
     260,   260,   260,   260,   260,   261,   262,   263,   263,   263,
     263,   263,   264,   264,   264,   265,   265,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   267,   267,   267,
     267,   267,   267,   267,   268,   268,   268,   268,   268,   269,
     269,   269,   270,   271,   271,   272,   273,   273,   274,   274,
     274,   275,   275,   276,   276,   276,   276,   277,   277,   277,
     277,   277,   277,   277,   278,   278,   278,   278,   279,   279,
     280,   281,   281,   282,   282,   283,   283,   284,   284,   284,
     285,   285,   286,   286,   286
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     1,     2,     2,     3,     0,     1,
       3,     1,     0,     3,     2,     1,     2,     3,     0,     2,
       3,     2,     4,     3,     1,     3,     0,     2,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     7,     6,     2,     0,     1,     2,     0,     1,
       3,     0,     1,     3,     0,     1,     1,     1,     1,     1,
       0,     2,     1,     1,     1,     1,     4,     3,     2,     0,
       3,     2,     2,     0,     2,     1,     1,     1,     1,     1,
       2,     3,     2,     3,     3,     5,     6,     2,     3,     2,
       0,     1,     2,     0,     1,     3,     2,     1,     0,     3,
       4,     3,     2,     0,     1,     1,     1,     1,     2,     4,
       3,     4,     5,     3,     4,     3,     3,     5,     5,     3,
       4,     0,     1,     0,     3,     2,     0,     1,     2,     3,
       0,     1,     1,     2,     1,     1,     1,     1,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     5,
       7,     7,     3,     5,     5,     5,     7,     1,     1,     1,
       1,     9,     9,     0,     1,     0,     1,     1,     1,     1,
       2,     0,     3,     7,     7,     3,     0,     1,     3,     3,
       3,     0,     1,     3,     5,     3,     4,     1,     0,     1,
       1,     2,     1,     5,     3,     2,     2,     0,     3,     2,
       5,     0,     1,     4,     0,     1,     2,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     1,     1,     3,     3,     3,     3,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     1,     2,     2,     1,     2,     2,     1,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     5,     4,     4,     3,     1,
       3,     3,     4,     0,     1,     2,     0,     3,     3,     3,
       5,     4,     4,     2,     4,     4,     6,     3,     3,     3,
       3,     5,     3,     3,     4,     4,     4,     4,     1,     2,
       3,     2,     2,     2,     2,     4,     4,     3,     3,     3,
       3,     3,     1,     1,     1
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
  case 2: /* IntegralType: KEYWORD_byte  */
#line 81 "parser.y"
                             {
			node *temp_node;
			(yyval.treenode) = new node("byte",true,"KEYWORD");
 }
#line 2512 "parser.tab.c"
    break;

  case 3: /* IntegralType: KEYWORD_short  */
#line 85 "parser.y"
                        {
			node *temp_node;
			(yyval.treenode) = new node("short",true,"KEYWORD");
 }
#line 2521 "parser.tab.c"
    break;

  case 4: /* IntegralType: KEYWORD_int  */
#line 89 "parser.y"
                      {
			node *temp_node;
			(yyval.treenode) = new node("int",true,"KEYWORD");
 }
#line 2530 "parser.tab.c"
    break;

  case 5: /* IntegralType: KEYWORD_long  */
#line 93 "parser.y"
                       {
			node *temp_node;
			(yyval.treenode) = new node("long",true,"KEYWORD");
 }
#line 2539 "parser.tab.c"
    break;

  case 6: /* IntegralType: KEYWORD_char  */
#line 97 "parser.y"
                       {
			node *temp_node;
			(yyval.treenode) = new node("char",true,"KEYWORD");
 }
#line 2548 "parser.tab.c"
    break;

  case 7: /* FloatingPointType: KEYWORD_float  */
#line 104 "parser.y"
                              {
			node *temp_node;
			(yyval.treenode) = new node("float",true,"KEYWORD");
 }
#line 2557 "parser.tab.c"
    break;

  case 8: /* FloatingPointType: KEYWORD_double  */
#line 108 "parser.y"
                         {
			node *temp_node;
			(yyval.treenode) = new node("double",true,"KEYWORD");
 }
#line 2566 "parser.tab.c"
    break;

  case 9: /* PrimitiveType: NumericType  */
#line 115 "parser.y"
                            {
			node *temp_node;
			(yyval.treenode) = new node("PrimitiveType");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 2576 "parser.tab.c"
    break;

  case 10: /* PrimitiveType: KEYWORD_boolean  */
#line 120 "parser.y"
                          {
			node *temp_node;
			(yyval.treenode) = new node("boolean",true,"KEYWORD");
 }
#line 2585 "parser.tab.c"
    break;

  case 11: /* NumericTypeDims: NumericType Dims  */
#line 128 "parser.y"
                                 {
			node *temp_node;
			(yyval.treenode) = new node("NumericTypeDims");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 2596 "parser.tab.c"
    break;

  case 12: /* BooleanDims: KEYWORD_boolean Dims  */
#line 137 "parser.y"
                                     {
			node *temp_node;
			(yyval.treenode) = new node("BooleanDims");
			temp_node = new node("boolean",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 2608 "parser.tab.c"
    break;

  case 13: /* NumericType: IntegralType  */
#line 147 "parser.y"
                             {
			node *temp_node;
			(yyval.treenode) = new node("NumericType");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 2618 "parser.tab.c"
    break;

  case 14: /* NumericType: FloatingPointType  */
#line 152 "parser.y"
                            {
			node *temp_node;
			(yyval.treenode) = new node("NumericType");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 2628 "parser.tab.c"
    break;

  case 15: /* ArrayType: Name Dims  */
#line 160 "parser.y"
                          {
			node *temp_node;
			(yyval.treenode) = new node("ArrayType");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 2639 "parser.tab.c"
    break;

  case 16: /* Dims: DELIM_lsq DELIM_rsq  */
#line 169 "parser.y"
                                                           {
			node *temp_node;
			(yyval.treenode) = new node("Dims");
			temp_node = new node("[",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("]",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 
            (yyval.treenode) -> sym_tab_entry = new st_entry();
            (yyval.treenode) -> sym_tab_entry -> dimensions = 1;
        }
#line 2655 "parser.tab.c"
    break;

  case 17: /* Dims: DELIM_lsq DELIM_rsq Dims  */
#line 180 "parser.y"
                                                         {
			node *temp_node;
			(yyval.treenode) = new node("Dims");
			temp_node = new node("[",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("]",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> sym_tab_entry = new st_entry();
            (yyval.treenode) -> sym_tab_entry -> dimensions = 1 + (yyvsp[0].treenode) -> sym_tab_entry -> dimensions;
            delete ((yyvsp[0].treenode) -> sym_tab_entry);
        }
#line 2673 "parser.tab.c"
    break;

  case 18: /* qDims: %empty  */
#line 196 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 2681 "parser.tab.c"
    break;

  case 19: /* qDims: Dims  */
#line 199 "parser.y"
               {
			node *temp_node;
			(yyval.treenode) = new node("qDims");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> sym_tab_entry = new st_entry();
            (yyval.treenode) -> sym_tab_entry -> dimensions = (yyvsp[0].treenode) -> sym_tab_entry -> dimensions;
            delete ((yyvsp[0].treenode) -> sym_tab_entry);
        }
#line 2695 "parser.tab.c"
    break;

  case 20: /* Name: Name DELIM_period Identifier  */
#line 212 "parser.y"
                                             {
			node *temp_node;
			(yyval.treenode) = new node("Name");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(".",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			string s((yyvsp[0].strval));
			temp_node = new node(s,true,"ID");
			(yyval.treenode)->add_child(temp_node);
			temp_node -> sym_tab_entry = new st_entry("", yylineno, count_semicolon);
 
            (yyval.treenode) -> name = "#Name#";      // prevent collision with identifiers and literals
            {
                if((yyvsp[-2].treenode) -> children.size()){
                    vector<node* > temp = (yyvsp[-2].treenode) -> children;
                    (yyvsp[-2].treenode) -> children.clear();
                    temp.push_back((yyval.treenode) -> children [(yyval.treenode) -> children.size() - 2]);
                    temp.push_back((yyval.treenode) -> children [(yyval.treenode) -> children.size() - 1]);
                    (yyval.treenode) -> children.clear();
                    (yyval.treenode) -> children = temp;
                }
            }
        }
#line 2723 "parser.tab.c"
    break;

  case 21: /* Name: Identifier  */
#line 235 "parser.y"
                     {
			node *temp_node;
			string s((yyvsp[0].strval));
			(yyval.treenode) = new node(s,true,"ID");
			(yyval.treenode) -> sym_tab_entry = new st_entry("", yylineno, count_semicolon);
 }
#line 2734 "parser.tab.c"
    break;

  case 22: /* sCommaName: %empty  */
#line 243 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 2742 "parser.tab.c"
    break;

  case 23: /* sCommaName: sCommaName DELIM_comma Name  */
#line 246 "parser.y"
                                      {
			node *temp_node;
			(yyval.treenode) = new node("sCommaName");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(",",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 2755 "parser.tab.c"
    break;

  case 24: /* NameList: Name sCommaName  */
#line 256 "parser.y"
                                {
			node *temp_node;
			(yyval.treenode) = new node("NameList");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 2766 "parser.tab.c"
    break;

  case 25: /* CompilationUnit: OrdinaryCompilationUnit  */
#line 266 "parser.y"
                                        {
			node *temp_node;
			(yyval.treenode) = new node("CompilationUnit");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            root = (yyval.treenode);
            root -> sym_tab = main_table;

            // for(auto &entry : $1 -> entry_list) {
            //     root -> sym_tab -> add_entry(entry);
            // }
        }
#line 2783 "parser.tab.c"
    break;

  case 26: /* OrdinaryCompilationUnit: sImportDeclaration sTopLevelClassOrInterfaceDeclaration  */
#line 281 "parser.y"
                                                                        {
			node *temp_node;
			(yyval.treenode) = new node("OrdinaryCompilationUnit");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));


        }
#line 2796 "parser.tab.c"
    break;

  case 27: /* OrdinaryCompilationUnit: PackageDeclaration sImportDeclaration sTopLevelClassOrInterfaceDeclaration  */
#line 289 "parser.y"
                                                                                     {
			node *temp_node;
			(yyval.treenode) = new node("OrdinaryCompilationUnit");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 

        }
#line 2810 "parser.tab.c"
    break;

  case 28: /* sImportDeclaration: %empty  */
#line 301 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 2818 "parser.tab.c"
    break;

  case 29: /* sImportDeclaration: sImportDeclaration ImportDeclaration  */
#line 304 "parser.y"
                                               {
			node *temp_node;
			(yyval.treenode) = new node("sImportDeclaration");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 2829 "parser.tab.c"
    break;

  case 30: /* ImportDeclaration: KEYWORD_import importName DELIM_semicolon  */
#line 313 "parser.y"
                                                          {
			node *temp_node;
			(yyval.treenode) = new node("ImportDeclaration");
			temp_node = new node("import",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node(";",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 
            count_semicolon++;
        }
#line 2845 "parser.tab.c"
    break;

  case 31: /* importName: KEYWORD_static Name  */
#line 327 "parser.y"
                                    {
			node *temp_node;
			(yyval.treenode) = new node("importName");
			temp_node = new node("static",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 2857 "parser.tab.c"
    break;

  case 32: /* importName: KEYWORD_static Name DELIM_period OPERATOR_multiply  */
#line 334 "parser.y"
                                                             {
			node *temp_node;
			(yyval.treenode) = new node("importName");
			temp_node = new node("static",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(".",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("*",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
 }
#line 2873 "parser.tab.c"
    break;

  case 33: /* importName: Name DELIM_period OPERATOR_multiply  */
#line 345 "parser.y"
                                              {
			node *temp_node;
			(yyval.treenode) = new node("importName");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(".",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("*",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
 }
#line 2887 "parser.tab.c"
    break;

  case 34: /* importName: Name  */
#line 354 "parser.y"
               {
			node *temp_node;
			(yyval.treenode) = new node("importName");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 2897 "parser.tab.c"
    break;

  case 35: /* PackageDeclaration: KEYWORD_package Name DELIM_semicolon  */
#line 362 "parser.y"
                                                     {
			node *temp_node;
			(yyval.treenode) = new node("PackageDeclaration");
			temp_node = new node("package",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node(";",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 
            count_semicolon++;
        }
#line 2913 "parser.tab.c"
    break;

  case 36: /* sTopLevelClassOrInterfaceDeclaration: %empty  */
#line 376 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 2921 "parser.tab.c"
    break;

  case 37: /* sTopLevelClassOrInterfaceDeclaration: sTopLevelClassOrInterfaceDeclaration TopLevelClassOrInterfaceDeclaration  */
#line 379 "parser.y"
                                                                                   {
			node *temp_node;
			(yyval.treenode) = new node("sTopLevelClassOrInterfaceDeclaration");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
        
        }
#line 2934 "parser.tab.c"
    break;

  case 38: /* TopLevelClassOrInterfaceDeclaration: NormalClassDeclaration  */
#line 390 "parser.y"
                                       {
			node *temp_node;
			(yyval.treenode) = new node("TopLevelClassOrInterfaceDeclaration");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
        
        }
#line 2946 "parser.tab.c"
    break;

  case 39: /* TopLevelClassOrInterfaceDeclaration: DELIM_semicolon  */
#line 397 "parser.y"
                          {
			node *temp_node;
			(yyval.treenode) = new node(";",true,"DELIMITER");
 
            count_semicolon++;
        }
#line 2957 "parser.tab.c"
    break;

  case 40: /* Modifiers: Modifier  */
#line 408 "parser.y"
                         {
			node *temp_node;
			(yyval.treenode) = new node("Modifiers");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> entry_list.push_back((yyvsp[0].treenode) -> sym_tab_entry);
        }
#line 2969 "parser.tab.c"
    break;

  case 41: /* Modifiers: Modifiers Modifier  */
#line 415 "parser.y"
                             {
			node *temp_node;
			(yyval.treenode) = new node("Modifiers");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));

            (yyval.treenode) -> entry_list = (yyvsp[-1].treenode) -> entry_list;
            (yyvsp[-1].treenode) -> entry_list.clear();
            for(auto entry : (yyval.treenode) -> entry_list){
                if(entry->name == (yyvsp[0].treenode) -> sym_tab_entry -> name){
                    cout << "ERROR: The modifier " << entry->name << " has been used more than once in the same declaration." << endl;
                    exit(1);
                }
            }
            (yyval.treenode) -> entry_list.push_back((yyvsp[0].treenode) -> sym_tab_entry);
        }
#line 2990 "parser.tab.c"
    break;

  case 42: /* Modifier: KEYWORD_public  */
#line 433 "parser.y"
                               {
			node *temp_node;
			(yyval.treenode) = new node("public",true,"KEYWORD");
 
            (yyval.treenode) -> sym_tab_entry = new st_entry("public", yylineno, 0);
        }
#line 3001 "parser.tab.c"
    break;

  case 43: /* Modifier: KEYWORD_private  */
#line 439 "parser.y"
                          {
			node *temp_node;
			(yyval.treenode) = new node("private",true,"KEYWORD");
 
            (yyval.treenode) -> sym_tab_entry = new st_entry("private", yylineno, 0);
        }
#line 3012 "parser.tab.c"
    break;

  case 44: /* Modifier: KEYWORD_protected  */
#line 445 "parser.y"
                            {
			node *temp_node;
			(yyval.treenode) = new node("protected",true,"KEYWORD");
 
            (yyval.treenode) -> sym_tab_entry = new st_entry("protected", yylineno, 0);
        }
#line 3023 "parser.tab.c"
    break;

  case 45: /* Modifier: KEYWORD_static  */
#line 451 "parser.y"
                         {
			node *temp_node;
			(yyval.treenode) = new node("static",true,"KEYWORD");
 
            (yyval.treenode) -> sym_tab_entry = new st_entry("static", yylineno, 0);
        }
#line 3034 "parser.tab.c"
    break;

  case 46: /* Modifier: KEYWORD_abstract  */
#line 457 "parser.y"
                           {
			node *temp_node;
			(yyval.treenode) = new node("abstract",true,"KEYWORD");
 
            (yyval.treenode) -> sym_tab_entry = new st_entry("abstract", yylineno, 0);
        }
#line 3045 "parser.tab.c"
    break;

  case 47: /* Modifier: KEYWORD_native  */
#line 463 "parser.y"
                         {
			node *temp_node;
			(yyval.treenode) = new node("native",true,"KEYWORD");
 
            (yyval.treenode) -> sym_tab_entry = new st_entry("native", yylineno, 0);
        }
#line 3056 "parser.tab.c"
    break;

  case 48: /* Modifier: KEYWORD_synchronized  */
#line 469 "parser.y"
                               {
			node *temp_node;
			(yyval.treenode) = new node("synchronized",true,"KEYWORD");
 
            (yyval.treenode) -> sym_tab_entry = new st_entry("synchronized", yylineno, 0);
        }
#line 3067 "parser.tab.c"
    break;

  case 49: /* Modifier: KEYWORD_transient  */
#line 475 "parser.y"
                            {
			node *temp_node;
			(yyval.treenode) = new node("transient",true,"KEYWORD");
 
            (yyval.treenode) -> sym_tab_entry = new st_entry("transient", yylineno, 0);
        }
#line 3078 "parser.tab.c"
    break;

  case 50: /* Modifier: KEYWORD_volatile  */
#line 481 "parser.y"
                           {
			node *temp_node;
			(yyval.treenode) = new node("volatile",true,"KEYWORD");
 
            (yyval.treenode) -> sym_tab_entry = new st_entry("volatile", yylineno, 0);
        }
#line 3089 "parser.tab.c"
    break;

  case 51: /* Modifier: KEYWORD_final  */
#line 487 "parser.y"
                        {
			node *temp_node;
			(yyval.treenode) = new node("final",true,"KEYWORD");
 
            (yyval.treenode) -> sym_tab_entry = new st_entry("final", yylineno, 0);
        }
#line 3100 "parser.tab.c"
    break;

  case 52: /* NormalClassDeclaration: Modifiers KEYWORD_class Identifier qClassExtends qClassImplements qClassPermits ClassBody  */
#line 496 "parser.y"
                                                                                                          {
			node *temp_node;
			(yyval.treenode) = new node("NormalClassDeclaration");
			(yyval.treenode)->add_child((yyvsp[-6].treenode));
			temp_node = new node("class",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			string s((yyvsp[-4].strval));
			temp_node = new node(s,true,"ID");
			(yyval.treenode)->add_child(temp_node);
			temp_node -> sym_tab_entry = new st_entry("", yylineno, count_semicolon);
			(yyval.treenode)->add_child((yyvsp[-3].treenode));
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            {
                int ppp_count = 0, snf_count = 0, af_count = 0;
                for(auto entry : (yyvsp[-6].treenode) -> entry_list){
                    ppp_count += (entry->name == "public");
                    ppp_count += (entry->name == "private");
                    ppp_count += (entry->name == "protected");
                    snf_count += (entry->name == "sealed");
                    snf_count += (entry->name == "non-sealed");
                    snf_count += (entry->name == "final");
                    af_count += (entry->name == "final");
                    af_count += (entry->name == "abstract");
                    if(!(entry->name=="public"||entry->name=="private"||entry->name=="protected"||entry->name=="sealed"||entry->name=="non-sealed"||entry->name=="final"||entry->name=="static"||entry->name=="abstract")){
                        cout <<"ERROR: The Modifier " << entry->name << "is not allowed for ClassDeclaration.\n";
                        exit(1);
                    }
                }
                if(ppp_count > 1){
                    cout<<"ERROR in line " << yylineno << ": NormalClassDeclaration should be ONE of public, private, OR protected.\n";
                    exit(1);
                }
                if(snf_count > 1){
                    cout<<"ERROR in line " << yylineno << ": NormalClassDeclaration should be ONE of sealed, non-sealed, OR final.\n";
                    exit(1);
                }
                if(af_count > 1){
                    cout<<"ERROR in line " << yylineno << ": NormalClassDeclaration should be ONE of abstract, OR final.\n";
                    exit(1);
                }
            }
            // Need to check funcs from classbody whether they are abstract for an abstract class and final for a final class
            // Need to check qExtends: if non-sealed class has a sealed superclass
            // If superclass is non-sealed, then class must not be non-sealed
            // If superclass is sealed, then class snf_count must be at least (exactly) one

            (yyval.treenode) -> sym_tab = new symbol_table_class((yyvsp[-4].strval));     // Class symbol table created
            (yyval.treenode) -> sym_tab -> scope_start_line_no = (yyval.treenode) -> children[2] -> line_no;

            ((symbol_table_class*) (yyval.treenode) -> sym_tab) -> update_modifiers((yyvsp[-6].treenode) -> entry_list);
            (yyval.treenode) -> sym_tab_entry = new st_entry((yyvsp[-4].strval), (yyval.treenode) -> children[2] -> line_no, count_semicolon, (yyvsp[-4].strval));    // Symbol table entry for the global symbol table
            ((yyval.treenode) -> sym_tab_entry) -> update_modifiers((yyvsp[-6].treenode) -> entry_list);
        }
#line 3161 "parser.tab.c"
    break;

  case 53: /* NormalClassDeclaration: KEYWORD_class Identifier qClassExtends qClassImplements qClassPermits ClassBody  */
#line 552 "parser.y"
                                                                                          {
			node *temp_node;
			(yyval.treenode) = new node("NormalClassDeclaration");
			temp_node = new node("class",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			string s((yyvsp[-4].strval));
			temp_node = new node(s,true,"ID");
			(yyval.treenode)->add_child(temp_node);
			temp_node -> sym_tab_entry = new st_entry("", yylineno, count_semicolon);
			(yyval.treenode)->add_child((yyvsp[-3].treenode));
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 

            (yyval.treenode) -> sym_tab = new symbol_table_class((yyvsp[-4].strval));     // Class symbol table created
            (yyval.treenode) -> sym_tab -> scope_start_line_no = (yyval.treenode) -> children[1] -> line_no;

            (yyval.treenode) -> sym_tab_entry = new st_entry((yyvsp[-4].strval), (yyval.treenode) -> children[1] -> line_no, count_semicolon, (yyvsp[-4].strval));      // Symbol table entry for the global symbol table
        }
#line 3186 "parser.tab.c"
    break;

  case 54: /* ClassExtends: KEYWORD_extends Name  */
#line 575 "parser.y"
                                     {
			node *temp_node;
			(yyval.treenode) = new node("ClassExtends");
			temp_node = new node("extends",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 3198 "parser.tab.c"
    break;

  case 55: /* qClassExtends: %empty  */
#line 585 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 3206 "parser.tab.c"
    break;

  case 56: /* qClassExtends: ClassExtends  */
#line 588 "parser.y"
                       {
			node *temp_node;
			(yyval.treenode) = new node("qClassExtends");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 3216 "parser.tab.c"
    break;

  case 57: /* ClassImplements: KEYWORD_implements NameList  */
#line 596 "parser.y"
                                            {
			node *temp_node;
			(yyval.treenode) = new node("ClassImplements");
			temp_node = new node("implements",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 3228 "parser.tab.c"
    break;

  case 58: /* qClassImplements: %empty  */
#line 606 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 3236 "parser.tab.c"
    break;

  case 59: /* qClassImplements: ClassImplements  */
#line 609 "parser.y"
                          {
			node *temp_node;
			(yyval.treenode) = new node("qClassImplements");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 3246 "parser.tab.c"
    break;

  case 60: /* ClassPermits: KEYWORD_permits Name sCommaName  */
#line 617 "parser.y"
                                                {
			node *temp_node;
			(yyval.treenode) = new node("ClassPermits");
			temp_node = new node("permits",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 3259 "parser.tab.c"
    break;

  case 61: /* qClassPermits: %empty  */
#line 628 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 3267 "parser.tab.c"
    break;

  case 62: /* qClassPermits: ClassPermits  */
#line 631 "parser.y"
                       {
			node *temp_node;
			(yyval.treenode) = new node("qClassPermits");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 3277 "parser.tab.c"
    break;

  case 63: /* ClassBody: DELIM_lcurl sClassBodyDeclaration DELIM_rcurl  */
#line 639 "parser.y"
                                                              {
			node *temp_node;
			(yyval.treenode) = new node("ClassBody");
			temp_node = new node("{",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node("}",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 }
#line 3291 "parser.tab.c"
    break;

  case 64: /* qClassBody: %empty  */
#line 651 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 3299 "parser.tab.c"
    break;

  case 65: /* qClassBody: ClassBody  */
#line 654 "parser.y"
                    {
			node *temp_node;
			(yyval.treenode) = new node("qClassBody");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 3309 "parser.tab.c"
    break;

  case 66: /* ClassBodyDeclaration: ClassMemberDeclaration  */
#line 662 "parser.y"
                                       {
			node *temp_node;
			(yyval.treenode) = new node("ClassBodyDeclaration");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 3319 "parser.tab.c"
    break;

  case 67: /* ClassBodyDeclaration: InstanceInitializer  */
#line 667 "parser.y"
                              {
			node *temp_node;
			(yyval.treenode) = new node("ClassBodyDeclaration");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 3329 "parser.tab.c"
    break;

  case 68: /* ClassBodyDeclaration: StaticInitializer  */
#line 672 "parser.y"
                            {
			node *temp_node;
			(yyval.treenode) = new node("ClassBodyDeclaration");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 3339 "parser.tab.c"
    break;

  case 69: /* ClassBodyDeclaration: ConstructorDeclaration  */
#line 677 "parser.y"
                                 {
			node *temp_node;
			(yyval.treenode) = new node("ClassBodyDeclaration");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 3349 "parser.tab.c"
    break;

  case 70: /* sClassBodyDeclaration: %empty  */
#line 685 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 3357 "parser.tab.c"
    break;

  case 71: /* sClassBodyDeclaration: sClassBodyDeclaration ClassBodyDeclaration  */
#line 688 "parser.y"
                                                     {
			node *temp_node;
			(yyval.treenode) = new node("sClassBodyDeclaration");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 3368 "parser.tab.c"
    break;

  case 72: /* ClassMemberDeclaration: FieldDeclaration  */
#line 697 "parser.y"
                                 {
			node *temp_node;
			(yyval.treenode) = new node("ClassMemberDeclaration");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 3378 "parser.tab.c"
    break;

  case 73: /* ClassMemberDeclaration: MethodDeclaration  */
#line 702 "parser.y"
                            {
			node *temp_node;
			(yyval.treenode) = new node("ClassMemberDeclaration");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 3388 "parser.tab.c"
    break;

  case 74: /* ClassMemberDeclaration: NormalClassDeclaration  */
#line 707 "parser.y"
                                 {
			node *temp_node;
			(yyval.treenode) = new node("ClassMemberDeclaration");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 3398 "parser.tab.c"
    break;

  case 75: /* ClassMemberDeclaration: DELIM_semicolon  */
#line 712 "parser.y"
                          {
			node *temp_node;
			(yyval.treenode) = new node(";",true,"DELIMITER");
 
            count_semicolon++;
        }
#line 3409 "parser.tab.c"
    break;

  case 76: /* FieldDeclaration: Modifiers UnannType VariableDeclaratorList DELIM_semicolon  */
#line 721 "parser.y"
                                                                           {
			node *temp_node;
			(yyval.treenode) = new node("FieldDeclaration");
			(yyval.treenode)->add_child((yyvsp[-3].treenode));
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node(";",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 
            int ppp_count = 0, fv_count = 0;
            for(auto entry : (yyvsp[-3].treenode) -> entry_list){
                ppp_count += (entry->name == "public");
                ppp_count += (entry->name == "private");
                ppp_count += (entry->name == "protected");
                fv_count += (entry->name == "final");
                fv_count += (entry->name == "volatile");
                
                if(!(entry->name=="public"||entry->name=="private"||entry->name=="protected"||entry->name=="final"||entry->name=="static"||entry->name=="transient"||entry->name=="volatile")){
                    cout <<"ERROR: The Modifier " << entry->name << "is not allowed for Field Declaration.\n";
                    exit(1);
                }
            }
            if(ppp_count > 1){
                cout<<"ERROR: FieldDeclaration modifier should be ONE of public, private, OR protected.\n";
                exit(1);
            }
            if(fv_count > 1){
                cout<<"ERROR: FieldDeclaration modifier should be ONE of final or volatile.\n";
                exit(1);
            }
            // Need to check assignment of final static/non-static fields

            (yyval.treenode) -> entry_list = (yyvsp[-1].treenode) -> entry_list;
            (yyvsp[-1].treenode) -> entry_list . clear();
            string type = (yyval.treenode) -> get_name((yyvsp[-2].treenode));
            for(auto (&entry) : (yyval.treenode) -> entry_list) {
                entry -> update_type(type);
                entry -> dimensions += (yyvsp[-2].treenode) -> sym_tab_entry -> dimensions;
                entry -> update_modifiers((yyvsp[-3].treenode) -> entry_list);
                entry -> initialized = true;    // field variables are initialized with default values
            }

            count_semicolon++;
        }
#line 3458 "parser.tab.c"
    break;

  case 77: /* FieldDeclaration: UnannType VariableDeclaratorList DELIM_semicolon  */
#line 765 "parser.y"
                                                           {
			node *temp_node;
			(yyval.treenode) = new node("FieldDeclaration");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node(";",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);


            (yyval.treenode) -> entry_list = (yyvsp[-1].treenode) -> entry_list;
            (yyvsp[-1].treenode) -> entry_list . clear();
            string type = (yyval.treenode) -> get_name((yyvsp[-2].treenode));
            for(auto (&entry) : (yyval.treenode) -> entry_list) {
                entry -> update_type(type);
                entry -> dimensions += (yyvsp[-2].treenode) -> sym_tab_entry -> dimensions;
                entry -> initialized = true;    // field variables are initialized with default values
                // cout << entry -> name << " " << entry -> line_no << " " << entry -> stmt_no << " " << entry -> type << " " << entry -> dimensions << '\n'; 
            }

            count_semicolon++;
        }
#line 3484 "parser.tab.c"
    break;

  case 78: /* VariableDeclaratorList: VariableDeclarator sCommaVariableDeclarator  */
#line 789 "parser.y"
                                                                                                     {
			node *temp_node;
			(yyval.treenode) = new node("VariableDeclaratorList");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));

            if((yyvsp[0].treenode) == NULL) {
                (yyval.treenode) -> entry_list.push_back((yyvsp[-1].treenode) -> sym_tab_entry); 
            }
            else {
                (yyval.treenode) -> entry_list . push_back((yyvsp[-1].treenode) -> sym_tab_entry);
                for(auto (&entry) : (yyvsp[0].treenode) -> entry_list){
                    (yyval.treenode) -> entry_list . push_back(entry);
                }
                (yyvsp[0].treenode) -> entry_list . clear();
            }
        }
#line 3506 "parser.tab.c"
    break;

  case 79: /* sCommaVariableDeclarator: %empty  */
#line 809 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 3514 "parser.tab.c"
    break;

  case 80: /* sCommaVariableDeclarator: sCommaVariableDeclarator DELIM_comma VariableDeclarator  */
#line 812 "parser.y"
                                                                                    {
			node *temp_node;
			(yyval.treenode) = new node("sCommaVariableDeclarator");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(",",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            if((yyvsp[-2].treenode) != NULL){
                (yyval.treenode) -> entry_list = (yyvsp[-2].treenode) -> entry_list;
                (yyvsp[-2].treenode) -> entry_list . clear();
            }
            (yyval.treenode) -> entry_list.push_back((yyvsp[0].treenode) -> sym_tab_entry);    
        }
#line 3533 "parser.tab.c"
    break;

  case 81: /* VariableDeclarator: VariableDeclaratorId qEqualVariableInitializer  */
#line 829 "parser.y"
                                                               {
			node *temp_node;
			(yyval.treenode) = new node("VariableDeclarator");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> sym_tab_entry = (yyvsp[-1].treenode) -> sym_tab_entry;
        }
#line 3546 "parser.tab.c"
    break;

  case 82: /* VariableDeclaratorId: Identifier qDims  */
#line 840 "parser.y"
                                 {
			node *temp_node;
			(yyval.treenode) = new node("VariableDeclaratorId");
			string s((yyvsp[-1].strval));
			temp_node = new node(s,true,"ID");
			(yyval.treenode)->add_child(temp_node);
			temp_node -> sym_tab_entry = new st_entry("", yylineno, count_semicolon);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> sym_tab_entry = new st_entry((yyvsp[-1].strval), yylineno, count_semicolon);
            (yyval.treenode) -> sym_tab_entry -> dimensions = (yyval.treenode) -> get_dims((yyvsp[0].treenode));
        }
#line 3563 "parser.tab.c"
    break;

  case 83: /* qEqualVariableInitializer: %empty  */
#line 855 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 3571 "parser.tab.c"
    break;

  case 84: /* qEqualVariableInitializer: OPERATOR_equal VariableInitializer  */
#line 858 "parser.y"
                                             {
			node *temp_node;
			(yyval.treenode) = new node("qEqualVariableInitializer");
			temp_node = new node("=",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode)->exp_applicable = true;
        }
#line 3585 "parser.tab.c"
    break;

  case 85: /* VariableInitializer: Expression  */
#line 870 "parser.y"
                           {
			node *temp_node;
			(yyval.treenode) = new node("VariableInitializer");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 3595 "parser.tab.c"
    break;

  case 86: /* VariableInitializer: ArrayInitializer  */
#line 875 "parser.y"
                           {
			node *temp_node;
			(yyval.treenode) = new node("VariableInitializer");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 3605 "parser.tab.c"
    break;

  case 87: /* UnannType: PrimitiveType  */
#line 883 "parser.y"
                              {
			node *temp_node;
			(yyval.treenode) = new node("UnannType");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            string primitive_name = (yyval.treenode) -> get_name((yyvsp[0].treenode));
            (yyval.treenode) -> sym_tab_entry = new st_entry(primitive_name, yylineno, count_semicolon);
        }
#line 3618 "parser.tab.c"
    break;

  case 88: /* UnannType: NumericTypeDims  */
#line 891 "parser.y"
                          {
			node *temp_node;
			(yyval.treenode) = new node("UnannType");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            string primitive_name = (yyval.treenode) -> get_name((yyvsp[0].treenode) -> children[0]);
            (yyval.treenode) -> sym_tab_entry = new st_entry(primitive_name, yylineno, count_semicolon);
            (yyval.treenode) -> sym_tab_entry -> dimensions = (yyval.treenode) -> get_dims((yyvsp[0].treenode) -> children[1]);
        }
#line 3632 "parser.tab.c"
    break;

  case 89: /* UnannType: BooleanDims  */
#line 900 "parser.y"
                      {
			node *temp_node;
			(yyval.treenode) = new node("UnannType");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            string primitive_name = (yyval.treenode) -> get_name((yyvsp[0].treenode) -> children[0]);
            (yyval.treenode) -> sym_tab_entry = new st_entry(primitive_name, yylineno, count_semicolon);
            (yyval.treenode) -> sym_tab_entry -> dimensions = (yyval.treenode) -> get_dims((yyvsp[0].treenode) -> children[1]);
        }
#line 3646 "parser.tab.c"
    break;

  case 90: /* UnannType: Name qDims  */
#line 909 "parser.y"
                     {
			node *temp_node;
			(yyval.treenode) = new node("UnannType");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            string qualified_name = (yyval.treenode) -> get_name((yyvsp[-1].treenode));
            (yyval.treenode) -> sym_tab_entry = new st_entry(qualified_name, yylineno, count_semicolon);
            (yyval.treenode) -> sym_tab_entry -> dimensions = (yyval.treenode) -> get_dims((yyvsp[0].treenode));
        }
#line 3661 "parser.tab.c"
    break;

  case 91: /* MethodDeclaration: Modifiers MethodHeader MethodBody  */
#line 922 "parser.y"
                                                  {
			node *temp_node;
			(yyval.treenode) = new node("MethodDeclaration");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            {
                // Modifiers check
                bool flag = false;
                
                for(auto (&entry) : ((yyvsp[-2].treenode) -> entry_list)){
                    if(!(entry->name=="public" || entry->name=="private" || entry->name=="protected" || entry->name=="final" || entry->name=="static" || entry->name=="abstract" || entry->name=="synchronized" || entry->name=="native" || entry->name=="strictfp")){
                        cout <<"ERROR in line " << yylineno << ": The Modifier " << entry->name << "is not allowed for Field Declaration.\n";
                        exit(1);
                    }
                }
                flag = false;

                for(auto (&entry) : ((yyvsp[-2].treenode) -> entry_list)){
                // Modifier can be one of public, protected, private
                    if(entry->name == "public" || entry->name == "private" || entry->name == "protected"){
                        if(flag){
                            cout<<"ERROR in line " << yylineno << ": MethodDeclaration should be ONE of public, private, OR protected.\n";
                            exit(1);
                        }
                        flag = true;
                    }
                }
                flag = false;

                // If modifier has abstract, it cannot have private, static, final, native, strictfp, or synchronized
                for(auto (&entry) : ((yyvsp[-2].treenode) -> entry_list)){
                    flag |= (entry->name == "abstract");
                }
                if(flag){ // Modifier list has abstract
                    flag = false;
                    for(auto (&entry) : ((yyvsp[-2].treenode) -> entry_list)){
                        if(entry->name == "private" || entry->name == "static" || entry->name == "final"){
                            cout<<"ERROR in line " << yylineno << ": Illegal Modifier " << entry->name << " used with abstract MethodDeclaration.\n";
                            exit(1);
                        }
                        if(entry->name == "native" || entry->name == "strictfp" || entry->name == "synchronized"){
                            cout<<"ERROR in line " << yylineno << ": Illegal Modifier " << entry->name << " used with abstract MethodDeclaration.\n";
                            exit(1);
                        }
                    }
                }else{
                    flag = false;
                    
                    // If modifier has native, cannot have strictfp
                    for(auto (&entry) : ((yyvsp[-2].treenode) -> entry_list)){
                        flag |= (entry->name == "native");
                    }
                    if(flag){ // Modifier list has native
                        for(auto (&entry) : ((yyvsp[-2].treenode) -> entry_list)){
                            if(entry->name == "strictfp"){
                                cout<<"ERROR in line " << yylineno << ": native MethodDeclaration cannot have strictfp modifier in list.\n";
                                exit(1);
                            }
                        }
                    }
                }
            }

            (yyval.treenode) -> sym_tab_entry = (yyvsp[-1].treenode) -> sym_tab_entry;
            ((yyval.treenode) -> sym_tab_entry) -> update_modifiers((yyvsp[-2].treenode) -> entry_list);
            (yyval.treenode) -> entry_list = (yyvsp[-1].treenode) -> entry_list;
            (yyvsp[-1].treenode) -> entry_list . clear();

            string augmentedReturnType = (yyval.treenode) -> sym_tab_entry -> type;
            for(int i = 0; i < (yyval.treenode) -> sym_tab_entry -> dimensions; i++) {
                augmentedReturnType += "[]";
            }

            for(auto &entry : (yyval.treenode) -> entry_list) {
                entry -> initialized = true;
            }
            (yyval.treenode) -> sym_tab = new symbol_table_func((yyval.treenode) -> sym_tab_entry -> name, (yyval.treenode) -> entry_list, augmentedReturnType);
            (yyval.treenode) -> sym_tab -> scope_start_line_no = (yyvsp[-1].treenode) -> line_no;
            ((symbol_table_func*) (yyval.treenode) -> sym_tab) -> update_modifiers((yyvsp[-2].treenode) -> entry_list);

            // cout << "Method identifier: " << $$ -> sym_tab_entry -> name << endl;
            // cout << "Method return type: " << $$ -> sym_tab_entry -> type << endl;
            // cout << "Method return type dimensions: " << $$ -> sym_tab_entry -> dimensions << endl;
            // for(auto &entry : $$ -> entry_list) {
            //     cout << "Formal Parameter identifier: " << entry -> name << endl;
            //     cout << "Formal Parameter type: " << entry -> type << endl;
            //     cout << "Formal Parameter dimension: " << entry -> dimensions << endl;
            // }
        }
#line 3757 "parser.tab.c"
    break;

  case 92: /* MethodDeclaration: MethodHeader MethodBody  */
#line 1013 "parser.y"
                                  {
			node *temp_node;
			(yyval.treenode) = new node("MethodDeclaration");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> sym_tab_entry = (yyvsp[-1].treenode) -> sym_tab_entry;
            (yyval.treenode) -> entry_list = (yyvsp[-1].treenode) -> entry_list;
            (yyvsp[-1].treenode) -> entry_list . clear();

            string augmentedReturnType = (yyval.treenode) -> sym_tab_entry -> type;
            for(int i = 0; i < (yyval.treenode) -> sym_tab_entry -> dimensions; i++) {
                augmentedReturnType += "[]";
            }

            for(auto &entry : (yyval.treenode) -> entry_list) {
                entry -> initialized = true;
            }
            (yyval.treenode) -> sym_tab = new symbol_table_func((yyval.treenode) -> sym_tab_entry -> name, (yyval.treenode) -> entry_list, (yyval.treenode) -> sym_tab_entry -> type);
            (yyval.treenode) -> sym_tab -> scope_start_line_no = (yyvsp[-1].treenode) -> line_no;

            // cout << "Method identifier: " << $$ -> sym_tab_entry -> name << endl;
            // cout << "Method return type: " << $$ -> sym_tab_entry -> type << endl;
            // cout << "Method return type dimensions: " << $$ -> sym_tab_entry -> dimensions << endl;
            // for(auto &entry : $$ -> entry_list) {
            //     cout << "Formal Parameter identifier: " << entry -> name << endl;
            //     cout << "Formal Parameter type: " << entry -> type << endl;
            //     cout << "Formal Parameter dimension: " << entry -> dimensions << endl;
            // }
        }
#line 3792 "parser.tab.c"
    break;

  case 93: /* MethodHeader: UnannType MethodDeclarator qThrows  */
#line 1046 "parser.y"
                                                   {
			node *temp_node;
			(yyval.treenode) = new node("MethodHeader");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> sym_tab_entry = (yyvsp[-1].treenode) -> sym_tab_entry;
            (yyval.treenode) -> entry_list = (yyvsp[-1].treenode) -> entry_list;
            (yyval.treenode) -> sym_tab_entry -> update_type((yyvsp[-2].treenode) -> sym_tab_entry -> name);
            (yyval.treenode) -> sym_tab_entry -> dimensions = (yyvsp[-2].treenode) -> sym_tab_entry -> dimensions;
        }
#line 3809 "parser.tab.c"
    break;

  case 94: /* MethodHeader: KEYWORD_void MethodDeclarator qThrows  */
#line 1058 "parser.y"
                                                {
			node *temp_node;
			(yyval.treenode) = new node("MethodHeader");
			temp_node = new node("void",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));

            (yyval.treenode) -> sym_tab_entry = (yyvsp[-1].treenode) -> sym_tab_entry;
            (yyval.treenode) -> entry_list = (yyvsp[-1].treenode) -> entry_list;
            (yyval.treenode) -> sym_tab_entry -> update_type("void");
        }
#line 3826 "parser.tab.c"
    break;

  case 95: /* MethodDeclarator: Identifier DELIM_lpar qFormalParameterList DELIM_rpar qDims  */
#line 1073 "parser.y"
                                                                            {
			node *temp_node;
			(yyval.treenode) = new node("MethodDeclarator");
			string s((yyvsp[-4].strval));
			temp_node = new node(s,true,"ID");
			(yyval.treenode)->add_child(temp_node);
			temp_node -> sym_tab_entry = new st_entry("", yylineno, count_semicolon);
			temp_node = new node("(",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(")",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> sym_tab_entry = new st_entry((yyvsp[-4].strval), yylineno, count_semicolon);
            if((yyvsp[-2].treenode)) {
                (yyval.treenode) -> entry_list = (yyvsp[-2].treenode) -> entry_list;
            }
        }
#line 3850 "parser.tab.c"
    break;

  case 96: /* MethodDeclarator: Identifier DELIM_lpar ReceiverParameterComma qFormalParameterList DELIM_rpar qDims  */
#line 1092 "parser.y"
                                                                                             {
			node *temp_node;
			(yyval.treenode) = new node("MethodDeclarator");
			string s((yyvsp[-5].strval));
			temp_node = new node(s,true,"ID");
			(yyval.treenode)->add_child(temp_node);
			temp_node -> sym_tab_entry = new st_entry("", yylineno, count_semicolon);
			temp_node = new node("(",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-3].treenode));
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(")",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
  
            
        }
#line 3872 "parser.tab.c"
    break;

  case 97: /* ReceiverParameterComma: ReceiverParameter DELIM_comma  */
#line 1112 "parser.y"
                                              {
			node *temp_node;
			(yyval.treenode) = new node("ReceiverParameterComma");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node(",",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 }
#line 3884 "parser.tab.c"
    break;

  case 98: /* ReceiverParameter: UnannType qIdentifierDot KEYWORD_this  */
#line 1122 "parser.y"
                                                      {
			node *temp_node;
			(yyval.treenode) = new node("ReceiverParameter");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node("this",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
 }
#line 3897 "parser.tab.c"
    break;

  case 99: /* IdentifierDot: Identifier DELIM_period  */
#line 1133 "parser.y"
                                        {
			node *temp_node;
			(yyval.treenode) = new node("IdentifierDot");
			string s((yyvsp[-1].strval));
			temp_node = new node(s,true,"ID");
			(yyval.treenode)->add_child(temp_node);
			temp_node -> sym_tab_entry = new st_entry("", yylineno, count_semicolon);
			temp_node = new node(".",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 }
#line 3912 "parser.tab.c"
    break;

  case 100: /* qIdentifierDot: %empty  */
#line 1146 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 3920 "parser.tab.c"
    break;

  case 101: /* qIdentifierDot: IdentifierDot  */
#line 1149 "parser.y"
                        {
			node *temp_node;
			(yyval.treenode) = new node("qIdentifierDot");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 3930 "parser.tab.c"
    break;

  case 102: /* FormalParameterList: FormalParameter sCommaFormalParameter  */
#line 1157 "parser.y"
                                                      {
			node *temp_node;
			(yyval.treenode) = new node("FormalParameterList");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));

            (yyval.treenode) -> entry_list.push_back((yyvsp[-1].treenode) -> sym_tab_entry);
            if((yyvsp[0].treenode)) {
                for(auto (&entry) : (yyvsp[0].treenode) -> entry_list){
                    (yyval.treenode) -> entry_list.push_back(entry);
                    if((yyvsp[-1].treenode) -> sym_tab_entry -> name == entry -> name) {
                        cout << "ERROR: Duplicate formal parameters " << entry -> name << " defined at line number: " << (yyvsp[-1].treenode) -> sym_tab_entry -> line_no << endl;
                        exit(1);
                    }
                }
            }
        }
#line 3952 "parser.tab.c"
    break;

  case 103: /* qFormalParameterList: %empty  */
#line 1177 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 3960 "parser.tab.c"
    break;

  case 104: /* qFormalParameterList: FormalParameterList  */
#line 1180 "parser.y"
                              {
			node *temp_node;
			(yyval.treenode) = new node("qFormalParameterList");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> entry_list = (yyvsp[0].treenode) -> entry_list;
        }
#line 3972 "parser.tab.c"
    break;

  case 105: /* FormalParameter: Modifiers UnannType VariableDeclaratorId  */
#line 1190 "parser.y"
                                                         {
			node *temp_node;
			(yyval.treenode) = new node("FormalParameter");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            if((yyvsp[-2].treenode) -> entry_list.size() != 1 || ((yyvsp[-2].treenode) -> entry_list)[0] -> name != "final"){
                cout<<"ERROR in line " << yylineno << ": FormalParameter Modifier list must contain only final.\n";
                exit(1);
            }
            (yyval.treenode) -> sym_tab_entry = (yyvsp[0].treenode) -> sym_tab_entry;
            (yyval.treenode) -> sym_tab_entry -> update_type((yyvsp[-1].treenode) -> sym_tab_entry -> name);
            (yyval.treenode) -> sym_tab_entry -> dimensions = (yyvsp[-1].treenode) -> sym_tab_entry -> dimensions + (yyvsp[0].treenode) -> sym_tab_entry -> dimensions;
            (yyval.treenode) -> sym_tab_entry -> update_modifiers((yyvsp[-2].treenode) -> entry_list);
        }
#line 3993 "parser.tab.c"
    break;

  case 106: /* FormalParameter: UnannType VariableDeclaratorId  */
#line 1206 "parser.y"
                                         {
			node *temp_node;
			(yyval.treenode) = new node("FormalParameter");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> sym_tab_entry = (yyvsp[0].treenode) -> sym_tab_entry;
            (yyval.treenode) -> sym_tab_entry -> update_type((yyvsp[-1].treenode) -> sym_tab_entry -> name);
            (yyval.treenode) -> sym_tab_entry -> dimensions = (yyvsp[-1].treenode) -> sym_tab_entry -> dimensions + (yyvsp[0].treenode) -> sym_tab_entry -> dimensions;
        }
#line 4008 "parser.tab.c"
    break;

  case 107: /* FormalParameter: VariableArityParameter  */
#line 1216 "parser.y"
                                 {
			node *temp_node;
			(yyval.treenode) = new node("FormalParameter");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4018 "parser.tab.c"
    break;

  case 108: /* sCommaFormalParameter: %empty  */
#line 1224 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 4026 "parser.tab.c"
    break;

  case 109: /* sCommaFormalParameter: sCommaFormalParameter DELIM_comma FormalParameter  */
#line 1227 "parser.y"
                                                            {
			node *temp_node;
			(yyval.treenode) = new node("sCommaFormalParameter");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(",",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));

            if((yyvsp[-2].treenode)) {
                (yyval.treenode) -> entry_list = (yyvsp[-2].treenode) -> entry_list;
            }
            (yyval.treenode) -> entry_list.push_back((yyvsp[0].treenode) -> sym_tab_entry);
        }
#line 4044 "parser.tab.c"
    break;

  case 110: /* VariableArityParameter: Modifiers UnannType DELIM_ellipsis Identifier  */
#line 1243 "parser.y"
                                                              {
			node *temp_node;
			(yyval.treenode) = new node("VariableArityParameter");
			(yyval.treenode)->add_child((yyvsp[-3].treenode));
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("...",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			string s((yyvsp[0].strval));
			temp_node = new node(s,true,"ID");
			(yyval.treenode)->add_child(temp_node);
			temp_node -> sym_tab_entry = new st_entry("", yylineno, count_semicolon);
 
            if((yyvsp[-3].treenode) -> entry_list.size() != 1 || ((yyvsp[-3].treenode) -> entry_list)[0] -> name != "final"){
                cout<<"ERROR in line " << yylineno << ": VariableArityParameter Modifier list must contain only final.\n";
                exit(1);
            }
        }
#line 4066 "parser.tab.c"
    break;

  case 111: /* VariableArityParameter: UnannType DELIM_ellipsis Identifier  */
#line 1260 "parser.y"
                                              {
			node *temp_node;
			(yyval.treenode) = new node("VariableArityParameter");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("...",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			string s((yyvsp[0].strval));
			temp_node = new node(s,true,"ID");
			(yyval.treenode)->add_child(temp_node);
			temp_node -> sym_tab_entry = new st_entry("", yylineno, count_semicolon);
 }
#line 4082 "parser.tab.c"
    break;

  case 112: /* Throws: KEYWORD_throws NameList  */
#line 1274 "parser.y"
                                        {
			node *temp_node;
			(yyval.treenode) = new node("Throws");
			temp_node = new node("throws",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4094 "parser.tab.c"
    break;

  case 113: /* qThrows: %empty  */
#line 1284 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 4102 "parser.tab.c"
    break;

  case 114: /* qThrows: Throws  */
#line 1287 "parser.y"
                 {
			node *temp_node;
			(yyval.treenode) = new node("qThrows");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4112 "parser.tab.c"
    break;

  case 115: /* MethodBody: Block  */
#line 1295 "parser.y"
                      {
			node *temp_node;
			(yyval.treenode) = new node("MethodBody");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4122 "parser.tab.c"
    break;

  case 116: /* MethodBody: DELIM_semicolon  */
#line 1300 "parser.y"
                          {
			node *temp_node;
			(yyval.treenode) = new node(";",true,"DELIMITER");
 
            count_semicolon++;
        }
#line 4133 "parser.tab.c"
    break;

  case 117: /* InstanceInitializer: Block  */
#line 1309 "parser.y"
                      {
			node *temp_node;
			(yyval.treenode) = new node("InstanceInitializer");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4143 "parser.tab.c"
    break;

  case 118: /* StaticInitializer: KEYWORD_static Block  */
#line 1317 "parser.y"
                                     {
			node *temp_node;
			(yyval.treenode) = new node("StaticInitializer");
			temp_node = new node("static",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4155 "parser.tab.c"
    break;

  case 119: /* ConstructorDeclaration: Modifiers ConstructorDeclarator qThrows ConstructorBody  */
#line 1327 "parser.y"
                                                                        {
			node *temp_node;
			(yyval.treenode) = new node("ConstructorDeclaration");
			(yyval.treenode)->add_child((yyvsp[-3].treenode));
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            if((yyvsp[-3].treenode) -> entry_list.size() != 1 || (((yyvsp[-3].treenode) -> entry_list)[0] -> name != "public" && ((yyvsp[-3].treenode) -> entry_list)[0] -> name != "private" && ((yyvsp[-3].treenode) -> entry_list)[0] -> name != "protected")){
                cout<<"ERROR in line " << yylineno << ": Constructor Declaration Modifier list must only contain one of pubilc OR private OR protected.\n";
                exit(1);
            }
            
            (yyval.treenode) -> sym_tab_entry = (yyvsp[-2].treenode) -> sym_tab_entry;
            (yyval.treenode) -> sym_tab_entry -> update_modifiers((yyvsp[-3].treenode) -> entry_list);
            (yyval.treenode) -> entry_list = (yyvsp[-2].treenode) -> entry_list;
            (yyvsp[-2].treenode) -> entry_list . clear();
            for(auto &entry : (yyval.treenode) -> entry_list) {
                entry -> initialized = true;
            }
            (yyval.treenode) -> sym_tab = new symbol_table_func((yyval.treenode) -> sym_tab_entry -> name, (yyval.treenode) -> entry_list, (yyval.treenode) -> sym_tab_entry -> name);   // return type of constructors is the class object
            (yyval.treenode) -> sym_tab -> scope_start_line_no = (yyvsp[-2].treenode) -> line_no;

            ((symbol_table_func*) (yyval.treenode) -> sym_tab) -> update_modifiers((yyvsp[-3].treenode) -> entry_list);
        }
#line 4185 "parser.tab.c"
    break;

  case 120: /* ConstructorDeclaration: ConstructorDeclarator qThrows ConstructorBody  */
#line 1352 "parser.y"
                                                        {
			node *temp_node;
			(yyval.treenode) = new node("ConstructorDeclaration");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> sym_tab_entry = (yyvsp[-2].treenode) -> sym_tab_entry;
            (yyval.treenode) -> entry_list = (yyvsp[-2].treenode) -> entry_list;
            (yyvsp[-2].treenode) -> entry_list . clear();
            for(auto &entry : (yyval.treenode) -> entry_list) {
                entry -> initialized = true;
            }
            (yyval.treenode) -> sym_tab = new symbol_table_func((yyval.treenode) -> sym_tab_entry -> name, (yyval.treenode) -> entry_list, (yyval.treenode) -> sym_tab_entry -> name);   // return type of constructors is the class object
            (yyval.treenode) -> sym_tab -> scope_start_line_no = (yyvsp[-2].treenode) -> line_no;
        }
#line 4206 "parser.tab.c"
    break;

  case 121: /* ConstructorDeclarator: Identifier DELIM_lpar qFormalParameterList DELIM_rpar  */
#line 1371 "parser.y"
                                                                      {
			node *temp_node;
			(yyval.treenode) = new node("ConstructorDeclarator");
			string s((yyvsp[-3].strval));
			temp_node = new node(s,true,"ID");
			(yyval.treenode)->add_child(temp_node);
			temp_node -> sym_tab_entry = new st_entry("", yylineno, count_semicolon);
			temp_node = new node("(",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node(")",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 
            (yyval.treenode) -> sym_tab_entry = new st_entry((yyvsp[-3].strval), yylineno, count_semicolon);
            if((yyvsp[-1].treenode)){
                (yyval.treenode) -> entry_list = (yyvsp[-1].treenode) -> entry_list;
            }
        }
#line 4229 "parser.tab.c"
    break;

  case 122: /* ConstructorDeclarator: Identifier DELIM_lpar ReceiverParameterComma qFormalParameterList DELIM_rpar  */
#line 1389 "parser.y"
                                                                                       {
			node *temp_node;
			(yyval.treenode) = new node("ConstructorDeclarator");
			string s((yyvsp[-4].strval));
			temp_node = new node(s,true,"ID");
			(yyval.treenode)->add_child(temp_node);
			temp_node -> sym_tab_entry = new st_entry("", yylineno, count_semicolon);
			temp_node = new node("(",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node(")",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 }
#line 4248 "parser.tab.c"
    break;

  case 123: /* ConstructorBody: DELIM_lcurl qBlockStatements DELIM_rcurl  */
#line 1406 "parser.y"
                                                         {
			node *temp_node;
			(yyval.treenode) = new node("ConstructorBody");
			temp_node = new node("{",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node("}",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 }
#line 4262 "parser.tab.c"
    break;

  case 124: /* ConstructorBody: DELIM_lcurl ExplicitConstructorInvocation qBlockStatements DELIM_rcurl  */
#line 1415 "parser.y"
                                                                                 {
			node *temp_node;
			(yyval.treenode) = new node("ConstructorBody");
			temp_node = new node("{",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node("}",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 }
#line 4277 "parser.tab.c"
    break;

  case 125: /* ExplicitConstructorInvocation: KEYWORD_this BracketArgumentList DELIM_semicolon  */
#line 1428 "parser.y"
                                                                 {
			node *temp_node;
			(yyval.treenode) = new node("ExplicitConstructorInvocation");
			temp_node = new node("this",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node(";",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 
            count_semicolon++;
        }
#line 4293 "parser.tab.c"
    break;

  case 126: /* ExplicitConstructorInvocation: KEYWORD_super BracketArgumentList DELIM_semicolon  */
#line 1439 "parser.y"
                                                            {
			node *temp_node;
			(yyval.treenode) = new node("ExplicitConstructorInvocation");
			temp_node = new node("super",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node(";",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 
            count_semicolon++;
        }
#line 4309 "parser.tab.c"
    break;

  case 127: /* ExplicitConstructorInvocation: Name DELIM_period KEYWORD_super BracketArgumentList DELIM_semicolon  */
#line 1450 "parser.y"
                                                                              {
			node *temp_node;
			(yyval.treenode) = new node("ExplicitConstructorInvocation");
			(yyval.treenode)->add_child((yyvsp[-4].treenode));
			temp_node = new node(".",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("super",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node(";",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 
            count_semicolon++;
        }
#line 4328 "parser.tab.c"
    break;

  case 128: /* ExplicitConstructorInvocation: Primary DELIM_period KEYWORD_super BracketArgumentList DELIM_semicolon  */
#line 1464 "parser.y"
                                                                                 {
			node *temp_node;
			(yyval.treenode) = new node("ExplicitConstructorInvocation");
			(yyval.treenode)->add_child((yyvsp[-4].treenode));
			temp_node = new node(".",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("super",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node(";",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 
            count_semicolon++;
        }
#line 4347 "parser.tab.c"
    break;

  case 129: /* BracketArgumentList: DELIM_lpar qArgumentList DELIM_rpar  */
#line 1481 "parser.y"
                                                    {
			node *temp_node;
			(yyval.treenode) = new node("BracketArgumentList");
			temp_node = new node("(",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node(")",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 }
#line 4361 "parser.tab.c"
    break;

  case 130: /* ArrayInitializer: DELIM_lcurl qVariableInitializerList qComma DELIM_rcurl  */
#line 1495 "parser.y"
                                                                        {
			node *temp_node;
			(yyval.treenode) = new node("ArrayInitializer");
			temp_node = new node("{",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node("}",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 }
#line 4376 "parser.tab.c"
    break;

  case 131: /* qComma: %empty  */
#line 1508 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 4384 "parser.tab.c"
    break;

  case 132: /* qComma: DELIM_comma  */
#line 1511 "parser.y"
                      {
			node *temp_node;
			(yyval.treenode) = new node(",",true,"DELIMITER");
 }
#line 4393 "parser.tab.c"
    break;

  case 133: /* sCommaVariableInitializer: %empty  */
#line 1518 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 4401 "parser.tab.c"
    break;

  case 134: /* sCommaVariableInitializer: sCommaVariableInitializer DELIM_comma VariableInitializer  */
#line 1521 "parser.y"
                                                                                      {
			node *temp_node;
			(yyval.treenode) = new node("sCommaVariableInitializer");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(",",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4414 "parser.tab.c"
    break;

  case 135: /* VariableInitializerList: VariableInitializer sCommaVariableInitializer  */
#line 1532 "parser.y"
                                                                                                        {
			node *temp_node;
			(yyval.treenode) = new node("VariableInitializerList");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4425 "parser.tab.c"
    break;

  case 136: /* qVariableInitializerList: %empty  */
#line 1541 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 4433 "parser.tab.c"
    break;

  case 137: /* qVariableInitializerList: VariableInitializerList  */
#line 1544 "parser.y"
                                  {
			node *temp_node;
			(yyval.treenode) = new node("qVariableInitializerList");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4443 "parser.tab.c"
    break;

  case 138: /* Block: DELIM_lcurl DELIM_rcurl  */
#line 1554 "parser.y"
                                        {
			node *temp_node;
			(yyval.treenode) = new node("Block");
			temp_node = new node("{",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("}",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 
            (yyval.treenode) -> sym_tab = new symbol_table("Block");
        }
#line 4458 "parser.tab.c"
    break;

  case 139: /* Block: DELIM_lcurl BlockStatements DELIM_rcurl  */
#line 1564 "parser.y"
                                                  {
			node *temp_node;
			(yyval.treenode) = new node("Block");
			temp_node = new node("{",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node("}",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);

            (yyval.treenode) -> sym_tab = new symbol_table("Block");
        }
#line 4474 "parser.tab.c"
    break;

  case 140: /* qBlockStatements: %empty  */
#line 1578 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 4482 "parser.tab.c"
    break;

  case 141: /* qBlockStatements: BlockStatements  */
#line 1581 "parser.y"
                          {
			node *temp_node;
			(yyval.treenode) = new node("qBlockStatements");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4492 "parser.tab.c"
    break;

  case 142: /* BlockStatements: BlockStatement  */
#line 1589 "parser.y"
                               {
			node *temp_node;
			(yyval.treenode) = new node("BlockStatements");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4502 "parser.tab.c"
    break;

  case 143: /* BlockStatements: BlockStatement BlockStatements  */
#line 1594 "parser.y"
                                         {
			node *temp_node;
			(yyval.treenode) = new node("BlockStatements");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4513 "parser.tab.c"
    break;

  case 144: /* BlockStatement: LocalClassOrInterfaceDeclaration  */
#line 1603 "parser.y"
                                                 {
			node *temp_node;
			(yyval.treenode) = new node("BlockStatement");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4523 "parser.tab.c"
    break;

  case 145: /* BlockStatement: LocalVariableDeclarationStatement  */
#line 1608 "parser.y"
                                            {
			node *temp_node;
			(yyval.treenode) = new node("BlockStatement");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4533 "parser.tab.c"
    break;

  case 146: /* BlockStatement: Statement  */
#line 1613 "parser.y"
                    {
			node *temp_node;
			(yyval.treenode) = new node("BlockStatement");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4543 "parser.tab.c"
    break;

  case 147: /* LocalClassOrInterfaceDeclaration: NormalClassDeclaration  */
#line 1621 "parser.y"
                                       {
			node *temp_node;
			(yyval.treenode) = new node("LocalClassOrInterfaceDeclaration");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4553 "parser.tab.c"
    break;

  case 148: /* LocalVariableDeclarationStatement: LocalVariableDeclaration DELIM_semicolon  */
#line 1629 "parser.y"
                                                         {
			node *temp_node;
			(yyval.treenode) = new node("LocalVariableDeclarationStatement");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node(";",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);

            count_semicolon++;  // declaration statement, hence statement count increased
        }
#line 4567 "parser.tab.c"
    break;

  case 149: /* LocalVariableDeclaration: Modifiers LocalVariableType VariableDeclaratorList  */
#line 1641 "parser.y"
                                                                   {
			node *temp_node;
			(yyval.treenode) = new node("LocalVariableDeclaration");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            if((yyvsp[-2].treenode) -> entry_list.size() != 1 || ((yyvsp[-2].treenode) -> entry_list)[0] -> name != "final"){
                cout<<"ERROR in line " << yylineno << ": LocalVariableDeclaration Modifier list must contain only final.\n";
                exit(1);
            }
            (yyval.treenode) -> entry_list = (yyvsp[0].treenode) -> entry_list;
            (yyvsp[0].treenode) -> entry_list . clear();
            string type = (yyval.treenode) -> get_name((yyvsp[-1].treenode));
            for(auto (&entry) : (yyval.treenode) -> entry_list) {
                entry -> update_type(type);
                entry -> dimensions += ((yyvsp[-1].treenode) -> sym_tab_entry ? (yyvsp[-1].treenode) -> sym_tab_entry -> dimensions : 0);
                entry -> update_modifiers((yyvsp[-2].treenode) -> entry_list);
                // cout << entry -> name << " " << entry -> line_no << " " << entry -> stmt_no << " " << entry -> type << " " << entry -> dimensions << '\n'; 
            }
        }
#line 4593 "parser.tab.c"
    break;

  case 150: /* LocalVariableDeclaration: LocalVariableType VariableDeclaratorList  */
#line 1662 "parser.y"
                                                   {
			node *temp_node;
			(yyval.treenode) = new node("LocalVariableDeclaration");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> entry_list = (yyvsp[0].treenode) -> entry_list;
            (yyvsp[0].treenode) -> entry_list . clear();
            string type = (yyval.treenode) -> get_name((yyvsp[-1].treenode));
            for(auto (&entry) : (yyval.treenode) -> entry_list) {
                entry -> update_type(type);
                entry -> dimensions += ((yyvsp[-1].treenode) -> sym_tab_entry ? (yyvsp[-1].treenode) -> sym_tab_entry -> dimensions : 0);

                // cout << entry -> name << " " << entry -> line_no << " " << entry -> stmt_no << " " << entry -> type << " " << entry -> dimensions << '\n'; 
            }
        }
#line 4614 "parser.tab.c"
    break;

  case 151: /* LocalVariableType: UnannType  */
#line 1681 "parser.y"
                          {
			node *temp_node;
			(yyval.treenode) = new node("LocalVariableType");
			(yyval.treenode)->add_child((yyvsp[0].treenode));

            (yyval.treenode) -> sym_tab_entry = (yyvsp[0].treenode) -> sym_tab_entry;
        }
#line 4626 "parser.tab.c"
    break;

  case 152: /* LocalVariableType: KEYWORD_var  */
#line 1688 "parser.y"
                      {
			node *temp_node;
			(yyval.treenode) = new node("var",true,"KEYWORD");

            
        }
#line 4637 "parser.tab.c"
    break;

  case 153: /* Statement: StatementWithoutTrailingSubstatement  */
#line 1697 "parser.y"
                                                     {
			node *temp_node;
			(yyval.treenode) = new node("Statement");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4647 "parser.tab.c"
    break;

  case 154: /* Statement: LabeledStatement  */
#line 1702 "parser.y"
                           {
			node *temp_node;
			(yyval.treenode) = new node("Statement");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4657 "parser.tab.c"
    break;

  case 155: /* Statement: IfThenStatement  */
#line 1707 "parser.y"
                          {
			node *temp_node;
			(yyval.treenode) = new node("Statement");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4667 "parser.tab.c"
    break;

  case 156: /* Statement: IfThenElseStatement  */
#line 1712 "parser.y"
                              {
			node *temp_node;
			(yyval.treenode) = new node("Statement");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4677 "parser.tab.c"
    break;

  case 157: /* Statement: WhileStatement  */
#line 1717 "parser.y"
                         {
			node *temp_node;
			(yyval.treenode) = new node("Statement");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4687 "parser.tab.c"
    break;

  case 158: /* Statement: ForStatement  */
#line 1722 "parser.y"
                       {
			node *temp_node;
			(yyval.treenode) = new node("Statement");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4697 "parser.tab.c"
    break;

  case 159: /* Statement: PrintStatement  */
#line 1727 "parser.y"
                         {
			node *temp_node;
			(yyval.treenode) = new node("Statement");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4707 "parser.tab.c"
    break;

  case 160: /* PrintStatement: STMT_print DELIM_lpar qExpression DELIM_rpar  */
#line 1735 "parser.y"
                                                             {
			node *temp_node;
			(yyval.treenode) = new node("PrintStatement");
			temp_node = new node("print",true,"STATEMENT");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("(",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node(")",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 
            // $$ -> children[0] = $$ -> children[1];
            // $$ -> children[1] = $$ -> children[2];
            // $$ -> children[2] = $$ -> children[3];

            // $$ -> children . pop_back();
            // cout << $$ -> children . size();
        }
#line 4730 "parser.tab.c"
    break;

  case 161: /* StatementNoShortIf: StatementWithoutTrailingSubstatement  */
#line 1756 "parser.y"
                                                     {
			node *temp_node;
			(yyval.treenode) = new node("StatementNoShortIf");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4740 "parser.tab.c"
    break;

  case 162: /* StatementNoShortIf: LabeledStatementNoShortIf  */
#line 1761 "parser.y"
                                    {
			node *temp_node;
			(yyval.treenode) = new node("StatementNoShortIf");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4750 "parser.tab.c"
    break;

  case 163: /* StatementNoShortIf: IfThenElseStatementNoShortIf  */
#line 1766 "parser.y"
                                       {
			node *temp_node;
			(yyval.treenode) = new node("StatementNoShortIf");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4760 "parser.tab.c"
    break;

  case 164: /* StatementNoShortIf: WhileStatementNoShortIf  */
#line 1771 "parser.y"
                                  {
			node *temp_node;
			(yyval.treenode) = new node("StatementNoShortIf");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4770 "parser.tab.c"
    break;

  case 165: /* StatementNoShortIf: ForStatementNoShortIf  */
#line 1776 "parser.y"
                                {
			node *temp_node;
			(yyval.treenode) = new node("StatementNoShortIf");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4780 "parser.tab.c"
    break;

  case 166: /* StatementWithoutTrailingSubstatement: Block  */
#line 1784 "parser.y"
                      {
			node *temp_node;
			(yyval.treenode) = new node("StatementWithoutTrailingSubstatement");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4790 "parser.tab.c"
    break;

  case 167: /* StatementWithoutTrailingSubstatement: EmptyStatement  */
#line 1789 "parser.y"
                         {
			node *temp_node;
			(yyval.treenode) = new node("StatementWithoutTrailingSubstatement");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4800 "parser.tab.c"
    break;

  case 168: /* StatementWithoutTrailingSubstatement: ExpressionStatement  */
#line 1794 "parser.y"
                              {
			node *temp_node;
			(yyval.treenode) = new node("StatementWithoutTrailingSubstatement");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4810 "parser.tab.c"
    break;

  case 169: /* StatementWithoutTrailingSubstatement: AssertStatement  */
#line 1799 "parser.y"
                          {
			node *temp_node;
			(yyval.treenode) = new node("StatementWithoutTrailingSubstatement");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4820 "parser.tab.c"
    break;

  case 170: /* StatementWithoutTrailingSubstatement: DoStatement  */
#line 1804 "parser.y"
                      {
			node *temp_node;
			(yyval.treenode) = new node("StatementWithoutTrailingSubstatement");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4830 "parser.tab.c"
    break;

  case 171: /* StatementWithoutTrailingSubstatement: BreakStatement  */
#line 1809 "parser.y"
                         {
			node *temp_node;
			(yyval.treenode) = new node("StatementWithoutTrailingSubstatement");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4840 "parser.tab.c"
    break;

  case 172: /* StatementWithoutTrailingSubstatement: ContinueStatement  */
#line 1814 "parser.y"
                            {
			node *temp_node;
			(yyval.treenode) = new node("StatementWithoutTrailingSubstatement");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4850 "parser.tab.c"
    break;

  case 173: /* StatementWithoutTrailingSubstatement: ReturnStatement  */
#line 1819 "parser.y"
                          {
			node *temp_node;
			(yyval.treenode) = new node("StatementWithoutTrailingSubstatement");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4860 "parser.tab.c"
    break;

  case 174: /* StatementWithoutTrailingSubstatement: SynchronizedStatement  */
#line 1824 "parser.y"
                                {
			node *temp_node;
			(yyval.treenode) = new node("StatementWithoutTrailingSubstatement");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4870 "parser.tab.c"
    break;

  case 175: /* StatementWithoutTrailingSubstatement: ThrowStatement  */
#line 1829 "parser.y"
                         {
			node *temp_node;
			(yyval.treenode) = new node("StatementWithoutTrailingSubstatement");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4880 "parser.tab.c"
    break;

  case 176: /* StatementWithoutTrailingSubstatement: TryStatement  */
#line 1834 "parser.y"
                       {
			node *temp_node;
			(yyval.treenode) = new node("StatementWithoutTrailingSubstatement");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4890 "parser.tab.c"
    break;

  case 177: /* StatementWithoutTrailingSubstatement: YieldStatement  */
#line 1839 "parser.y"
                         {
			node *temp_node;
			(yyval.treenode) = new node("StatementWithoutTrailingSubstatement");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4900 "parser.tab.c"
    break;

  case 178: /* EmptyStatement: DELIM_semicolon  */
#line 1847 "parser.y"
                                {
			node *temp_node;
			(yyval.treenode) = new node(";",true,"DELIMITER");
 
            count_semicolon++;
        }
#line 4911 "parser.tab.c"
    break;

  case 179: /* LabeledStatement: Identifier OPERATOR_ternarycolon Statement  */
#line 1856 "parser.y"
                                                           {
			node *temp_node;
			(yyval.treenode) = new node("LabeledStatement");
			string s((yyvsp[-2].strval));
			temp_node = new node(s,true,"ID");
			(yyval.treenode)->add_child(temp_node);
			temp_node -> sym_tab_entry = new st_entry("", yylineno, count_semicolon);
			temp_node = new node(":",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4927 "parser.tab.c"
    break;

  case 180: /* LabeledStatementNoShortIf: Identifier OPERATOR_ternarycolon StatementNoShortIf  */
#line 1870 "parser.y"
                                                                    {
			node *temp_node;
			(yyval.treenode) = new node("LabeledStatementNoShortIf");
			string s((yyvsp[-2].strval));
			temp_node = new node(s,true,"ID");
			(yyval.treenode)->add_child(temp_node);
			temp_node -> sym_tab_entry = new st_entry("", yylineno, count_semicolon);
			temp_node = new node(":",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4943 "parser.tab.c"
    break;

  case 181: /* ExpressionStatement: StatementExpression DELIM_semicolon  */
#line 1884 "parser.y"
                                                    {
			node *temp_node;
			(yyval.treenode) = new node("ExpressionStatement");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node(";",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 
            count_semicolon++;
        }
#line 4957 "parser.tab.c"
    break;

  case 182: /* StatementExpression: Assignment  */
#line 1896 "parser.y"
                           {
			node *temp_node;
			(yyval.treenode) = new node("StatementExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4967 "parser.tab.c"
    break;

  case 183: /* StatementExpression: PreIncrementExpression  */
#line 1901 "parser.y"
                                 {
			node *temp_node;
			(yyval.treenode) = new node("StatementExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4977 "parser.tab.c"
    break;

  case 184: /* StatementExpression: PreDecrementExpression  */
#line 1906 "parser.y"
                                 {
			node *temp_node;
			(yyval.treenode) = new node("StatementExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4987 "parser.tab.c"
    break;

  case 185: /* StatementExpression: PostIncrementExpression  */
#line 1911 "parser.y"
                                  {
			node *temp_node;
			(yyval.treenode) = new node("StatementExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 4997 "parser.tab.c"
    break;

  case 186: /* StatementExpression: PostDecrementExpression  */
#line 1916 "parser.y"
                                  {
			node *temp_node;
			(yyval.treenode) = new node("StatementExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5007 "parser.tab.c"
    break;

  case 187: /* StatementExpression: MethodInvocation  */
#line 1921 "parser.y"
                           {
			node *temp_node;
			(yyval.treenode) = new node("StatementExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5017 "parser.tab.c"
    break;

  case 188: /* StatementExpression: ClassInstanceCreationExpression  */
#line 1926 "parser.y"
                                          {
			node *temp_node;
			(yyval.treenode) = new node("StatementExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5027 "parser.tab.c"
    break;

  case 189: /* IfThenStatement: KEYWORD_if DELIM_lpar Expression DELIM_rpar Statement  */
#line 1934 "parser.y"
                                                                      {
			node *temp_node;
			(yyval.treenode) = new node("IfThenStatement");
			temp_node = new node("if",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("(",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(")",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5044 "parser.tab.c"
    break;

  case 190: /* IfThenElseStatement: KEYWORD_if DELIM_lpar Expression DELIM_rpar StatementNoShortIf KEYWORD_else Statement  */
#line 1949 "parser.y"
                                                                                                      {
			node *temp_node;
			(yyval.treenode) = new node("IfThenElseStatement");
			temp_node = new node("if",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("(",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-4].treenode));
			temp_node = new node(")",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("else",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5064 "parser.tab.c"
    break;

  case 191: /* IfThenElseStatementNoShortIf: KEYWORD_if DELIM_lpar Expression DELIM_rpar StatementNoShortIf KEYWORD_else StatementNoShortIf  */
#line 1967 "parser.y"
                                                                                                               {
			node *temp_node;
			(yyval.treenode) = new node("IfThenElseStatementNoShortIf");
			temp_node = new node("if",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("(",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-4].treenode));
			temp_node = new node(")",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("else",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5084 "parser.tab.c"
    break;

  case 192: /* AssertStatement: KEYWORD_assert Expression DELIM_semicolon  */
#line 1985 "parser.y"
                                                          {
			node *temp_node;
			(yyval.treenode) = new node("AssertStatement");
			temp_node = new node("assert",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node(";",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 
            count_semicolon++;
        }
#line 5100 "parser.tab.c"
    break;

  case 193: /* AssertStatement: KEYWORD_assert Expression OPERATOR_ternarycolon Expression DELIM_semicolon  */
#line 1996 "parser.y"
                                                                                     {
			node *temp_node;
			(yyval.treenode) = new node("AssertStatement");
			temp_node = new node("assert",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-3].treenode));
			temp_node = new node(":",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node(";",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 
            count_semicolon++;
        }
#line 5119 "parser.tab.c"
    break;

  case 194: /* WhileStatement: KEYWORD_while DELIM_lpar Expression DELIM_rpar Statement  */
#line 2013 "parser.y"
                                                                         {
			node *temp_node;
			(yyval.treenode) = new node("WhileStatement");
			temp_node = new node("while",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("(",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(")",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5136 "parser.tab.c"
    break;

  case 195: /* WhileStatementNoShortIf: KEYWORD_while DELIM_lpar Expression DELIM_rpar StatementNoShortIf  */
#line 2028 "parser.y"
                                                                                  {
			node *temp_node;
			(yyval.treenode) = new node("WhileStatementNoShortIf");
			temp_node = new node("while",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("(",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(")",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5153 "parser.tab.c"
    break;

  case 196: /* DoStatement: KEYWORD_do Statement KEYWORD_while DELIM_lpar Expression DELIM_rpar DELIM_semicolon  */
#line 2043 "parser.y"
                                                                                                    {
			node *temp_node;
			(yyval.treenode) = new node("DoStatement");
			temp_node = new node("do",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-5].treenode));
			temp_node = new node("while",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("(",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(")",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node(";",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 }
#line 5174 "parser.tab.c"
    break;

  case 197: /* ForStatement: BasicForStatement  */
#line 2062 "parser.y"
                                  {
			node *temp_node;
			(yyval.treenode) = new node("ForStatement");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5184 "parser.tab.c"
    break;

  case 198: /* ForStatement: EnhancedForStatement  */
#line 2067 "parser.y"
                               {
			node *temp_node;
			(yyval.treenode) = new node("ForStatement");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5194 "parser.tab.c"
    break;

  case 199: /* ForStatementNoShortIf: BasicForStatementNoShortIf  */
#line 2075 "parser.y"
                                           {
			node *temp_node;
			(yyval.treenode) = new node("ForStatementNoShortIf");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5204 "parser.tab.c"
    break;

  case 200: /* ForStatementNoShortIf: EnhancedForStatementNoShortIf  */
#line 2080 "parser.y"
                                        {
			node *temp_node;
			(yyval.treenode) = new node("ForStatementNoShortIf");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5214 "parser.tab.c"
    break;

  case 201: /* BasicForStatement: KEYWORD_for DELIM_lpar qForInit DELIM_semicolon qExpression DELIM_semicolon qForUpdate DELIM_rpar Statement  */
#line 2088 "parser.y"
                                                                                                                            {
			node *temp_node;
			(yyval.treenode) = new node("BasicForStatement");
			temp_node = new node("for",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("(",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-6].treenode));
			temp_node = new node(";",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-4].treenode));
			temp_node = new node(";",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(")",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> sym_tab = new symbol_table("ForStatement");
        }
#line 5239 "parser.tab.c"
    break;

  case 202: /* BasicForStatementNoShortIf: KEYWORD_for DELIM_lpar qForInit DELIM_semicolon qExpression DELIM_semicolon qForUpdate DELIM_rpar StatementNoShortIf  */
#line 2111 "parser.y"
                                                                                                                                     {
			node *temp_node;
			(yyval.treenode) = new node("BasicForStatementNoShortIf");
			temp_node = new node("for",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("(",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-6].treenode));
			temp_node = new node(";",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-4].treenode));
			temp_node = new node(";",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(")",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> sym_tab = new symbol_table("ForStatement");
        }
#line 5264 "parser.tab.c"
    break;

  case 203: /* qForInit: %empty  */
#line 2134 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 5272 "parser.tab.c"
    break;

  case 204: /* qForInit: ForInit  */
#line 2137 "parser.y"
                  {
			node *temp_node;
			(yyval.treenode) = new node("qForInit");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5282 "parser.tab.c"
    break;

  case 205: /* qForUpdate: %empty  */
#line 2145 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 5290 "parser.tab.c"
    break;

  case 206: /* qForUpdate: ForUpdate  */
#line 2148 "parser.y"
                    {
			node *temp_node;
			(yyval.treenode) = new node("qForUpdate");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5300 "parser.tab.c"
    break;

  case 207: /* ForInit: StatementExpressionList  */
#line 2156 "parser.y"
                                        {
			node *temp_node;
			(yyval.treenode) = new node("ForInit");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5310 "parser.tab.c"
    break;

  case 208: /* ForInit: LocalVariableDeclaration  */
#line 2161 "parser.y"
                                   {
			node *temp_node;
			(yyval.treenode) = new node("ForInit");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5320 "parser.tab.c"
    break;

  case 209: /* ForUpdate: StatementExpressionList  */
#line 2169 "parser.y"
                                        {
			node *temp_node;
			(yyval.treenode) = new node("ForUpdate");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5330 "parser.tab.c"
    break;

  case 210: /* StatementExpressionList: StatementExpression sCommaStatementExpression  */
#line 2177 "parser.y"
                                                              {
			node *temp_node;
			(yyval.treenode) = new node("StatementExpressionList");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5341 "parser.tab.c"
    break;

  case 211: /* sCommaStatementExpression: %empty  */
#line 2186 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 5349 "parser.tab.c"
    break;

  case 212: /* sCommaStatementExpression: sCommaStatementExpression DELIM_comma StatementExpression  */
#line 2189 "parser.y"
                                                                    {
			node *temp_node;
			(yyval.treenode) = new node("sCommaStatementExpression");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(",",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5362 "parser.tab.c"
    break;

  case 213: /* EnhancedForStatement: KEYWORD_for DELIM_lpar LocalVariableDeclaration OPERATOR_ternarycolon Expression DELIM_rpar Statement  */
#line 2200 "parser.y"
                                                                                                                      {
			node *temp_node;
			(yyval.treenode) = new node("EnhancedForStatement");
			temp_node = new node("for",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("(",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-4].treenode));
			temp_node = new node(":",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(")",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> sym_tab = new symbol_table("ForStatement");
        }
#line 5384 "parser.tab.c"
    break;

  case 214: /* EnhancedForStatementNoShortIf: KEYWORD_for DELIM_lpar LocalVariableDeclaration OPERATOR_ternarycolon Expression DELIM_rpar StatementNoShortIf  */
#line 2220 "parser.y"
                                                                                                                               {
			node *temp_node;
			(yyval.treenode) = new node("EnhancedForStatementNoShortIf");
			temp_node = new node("for",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("(",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-4].treenode));
			temp_node = new node(":",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(")",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));

            (yyval.treenode) -> sym_tab = new symbol_table("ForStatement");
         }
#line 5406 "parser.tab.c"
    break;

  case 215: /* BreakStatement: KEYWORD_break qIdentifier DELIM_semicolon  */
#line 2240 "parser.y"
                                                          {
			node *temp_node;
			(yyval.treenode) = new node("BreakStatement");
			temp_node = new node("break",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node(";",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 
            count_semicolon++;
        }
#line 5422 "parser.tab.c"
    break;

  case 216: /* qIdentifier: %empty  */
#line 2254 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 5430 "parser.tab.c"
    break;

  case 217: /* qIdentifier: Identifier  */
#line 2257 "parser.y"
                     {
			node *temp_node;
			string s((yyvsp[0].strval));
			(yyval.treenode) = new node(s,true,"ID");
			(yyval.treenode) -> sym_tab_entry = new st_entry("", yylineno, count_semicolon);
 }
#line 5441 "parser.tab.c"
    break;

  case 218: /* YieldStatement: KEYWORD_yield Expression DELIM_semicolon  */
#line 2266 "parser.y"
                                                         {
			node *temp_node;
			(yyval.treenode) = new node("YieldStatement");
			temp_node = new node("yield",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node(";",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 
            count_semicolon++;
        }
#line 5457 "parser.tab.c"
    break;

  case 219: /* ContinueStatement: KEYWORD_continue qIdentifier DELIM_semicolon  */
#line 2280 "parser.y"
                                                             {
			node *temp_node;
			(yyval.treenode) = new node("ContinueStatement");
			temp_node = new node("continue",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node(";",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 
            count_semicolon++;
        }
#line 5473 "parser.tab.c"
    break;

  case 220: /* ReturnStatement: KEYWORD_return qExpression DELIM_semicolon  */
#line 2294 "parser.y"
                                                           {
			node *temp_node;
			(yyval.treenode) = new node("ReturnStatement");
			temp_node = new node("return",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node(";",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 
            count_semicolon++;
        }
#line 5489 "parser.tab.c"
    break;

  case 221: /* qExpression: %empty  */
#line 2308 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 5497 "parser.tab.c"
    break;

  case 222: /* qExpression: Expression  */
#line 2311 "parser.y"
                     {
			node *temp_node;
			(yyval.treenode) = new node("qExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5507 "parser.tab.c"
    break;

  case 223: /* ThrowStatement: KEYWORD_throw Expression DELIM_semicolon  */
#line 2319 "parser.y"
                                                         {
			node *temp_node;
			(yyval.treenode) = new node("ThrowStatement");
			temp_node = new node("throw",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node(";",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 
            count_semicolon++;
        }
#line 5523 "parser.tab.c"
    break;

  case 224: /* SynchronizedStatement: KEYWORD_synchronized DELIM_lpar Expression DELIM_rpar Block  */
#line 2333 "parser.y"
                                                                            {
			node *temp_node;
			(yyval.treenode) = new node("SynchronizedStatement");
			temp_node = new node("synchronized",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("(",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(")",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5540 "parser.tab.c"
    break;

  case 225: /* TryStatement: KEYWORD_try Block Catches  */
#line 2348 "parser.y"
                                          {
			node *temp_node;
			(yyval.treenode) = new node("TryStatement");
			temp_node = new node("try",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5553 "parser.tab.c"
    break;

  case 226: /* TryStatement: KEYWORD_try Block qCatches Finally  */
#line 2356 "parser.y"
                                             {
			node *temp_node;
			(yyval.treenode) = new node("TryStatement");
			temp_node = new node("try",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5567 "parser.tab.c"
    break;

  case 227: /* TryStatement: TryWithResourcesStatement  */
#line 2365 "parser.y"
                                    {
			node *temp_node;
			(yyval.treenode) = new node("TryStatement");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5577 "parser.tab.c"
    break;

  case 228: /* qCatches: %empty  */
#line 2373 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 5585 "parser.tab.c"
    break;

  case 229: /* qCatches: Catches  */
#line 2376 "parser.y"
                  {
			node *temp_node;
			(yyval.treenode) = new node("qCatches");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5595 "parser.tab.c"
    break;

  case 230: /* pCatches: CatchClause  */
#line 2384 "parser.y"
                            {
			node *temp_node;
			(yyval.treenode) = new node("pCatches");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5605 "parser.tab.c"
    break;

  case 231: /* pCatches: pCatches CatchClause  */
#line 2389 "parser.y"
                               {
			node *temp_node;
			(yyval.treenode) = new node("pCatches");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5616 "parser.tab.c"
    break;

  case 232: /* Catches: pCatches  */
#line 2398 "parser.y"
                         {
			node *temp_node;
			(yyval.treenode) = new node("Catches");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5626 "parser.tab.c"
    break;

  case 233: /* CatchClause: KEYWORD_catch DELIM_lpar CatchFormalParameter DELIM_rpar Block  */
#line 2406 "parser.y"
                                                                               {
			node *temp_node;
			(yyval.treenode) = new node("CatchClause");
			temp_node = new node("catch",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("(",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(")",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5643 "parser.tab.c"
    break;

  case 234: /* CatchFormalParameter: Modifiers CatchType VariableDeclaratorId  */
#line 2421 "parser.y"
                                                         {
			node *temp_node;
			(yyval.treenode) = new node("CatchFormalParameter");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            if((yyvsp[-2].treenode) -> entry_list.size() != 1 || ((yyvsp[-2].treenode) -> entry_list)[0] -> name != "final"){
                cout<<"ERROR in line " << yylineno << ": CatchFormalParameter Modifier list must contain only final.\n";
                exit(1);
            }
            (yyvsp[0].treenode) -> sym_tab_entry -> update_modifiers((yyvsp[-2].treenode) -> entry_list);
        }
#line 5661 "parser.tab.c"
    break;

  case 235: /* CatchFormalParameter: CatchType VariableDeclaratorId  */
#line 2434 "parser.y"
                                         {
			node *temp_node;
			(yyval.treenode) = new node("CatchFormalParameter");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5672 "parser.tab.c"
    break;

  case 236: /* CatchType: Name sOrName  */
#line 2443 "parser.y"
                             {
			node *temp_node;
			(yyval.treenode) = new node("CatchType");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5683 "parser.tab.c"
    break;

  case 237: /* sOrName: %empty  */
#line 2452 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 5691 "parser.tab.c"
    break;

  case 238: /* sOrName: sOrName OPERATOR_bitwiseor Name  */
#line 2455 "parser.y"
                                          {
			node *temp_node;
			(yyval.treenode) = new node("sOrName");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("|",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5704 "parser.tab.c"
    break;

  case 239: /* Finally: KEYWORD_finally Block  */
#line 2466 "parser.y"
                                      {
			node *temp_node;
			(yyval.treenode) = new node("Finally");
			temp_node = new node("finally",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5716 "parser.tab.c"
    break;

  case 240: /* TryWithResourcesStatement: KEYWORD_try ResourceSpecification Block qCatches qFinally  */
#line 2476 "parser.y"
                                                                          {
			node *temp_node;
			(yyval.treenode) = new node("TryWithResourcesStatement");
			temp_node = new node("try",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-3].treenode));
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5731 "parser.tab.c"
    break;

  case 241: /* qFinally: %empty  */
#line 2489 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 5739 "parser.tab.c"
    break;

  case 242: /* qFinally: Finally  */
#line 2492 "parser.y"
                  {
			node *temp_node;
			(yyval.treenode) = new node("qFinally");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5749 "parser.tab.c"
    break;

  case 243: /* ResourceSpecification: DELIM_lpar ResourceList qSemicolon DELIM_rpar  */
#line 2500 "parser.y"
                                                              {
			node *temp_node;
			(yyval.treenode) = new node("ResourceSpecification");
			temp_node = new node("(",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node(")",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 }
#line 5764 "parser.tab.c"
    break;

  case 244: /* qSemicolon: %empty  */
#line 2513 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 5772 "parser.tab.c"
    break;

  case 245: /* qSemicolon: DELIM_semicolon  */
#line 2516 "parser.y"
                          {
			node *temp_node;
			(yyval.treenode) = new node(";",true,"DELIMITER");
 
            count_semicolon++;
        }
#line 5783 "parser.tab.c"
    break;

  case 246: /* ResourceList: Resource ssemicolonResource  */
#line 2525 "parser.y"
                                                                           {
			node *temp_node;
			(yyval.treenode) = new node("ResourceList");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5794 "parser.tab.c"
    break;

  case 247: /* ssemicolonResource: %empty  */
#line 2534 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 5802 "parser.tab.c"
    break;

  case 248: /* ssemicolonResource: ssemicolonResource DELIM_semicolon Resource  */
#line 2537 "parser.y"
                                                                            {
			node *temp_node;
			(yyval.treenode) = new node("ssemicolonResource");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(";",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            count_semicolon++;
        }
#line 5817 "parser.tab.c"
    break;

  case 249: /* Resource: LocalVariableDeclaration  */
#line 2550 "parser.y"
                                         {
			node *temp_node;
			(yyval.treenode) = new node("Resource");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5827 "parser.tab.c"
    break;

  case 250: /* Resource: VariableAccess  */
#line 2555 "parser.y"
                         {
			node *temp_node;
			(yyval.treenode) = new node("Resource");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5837 "parser.tab.c"
    break;

  case 251: /* VariableAccess: Name  */
#line 2563 "parser.y"
                     {
			node *temp_node;
			(yyval.treenode) = new node("VariableAccess");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5847 "parser.tab.c"
    break;

  case 252: /* VariableAccess: FieldAccess  */
#line 2568 "parser.y"
                      {
			node *temp_node;
			(yyval.treenode) = new node("VariableAccess");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5857 "parser.tab.c"
    break;

  case 253: /* Pattern: TypePattern  */
#line 2576 "parser.y"
                            {
			node *temp_node;
			(yyval.treenode) = new node("Pattern");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5867 "parser.tab.c"
    break;

  case 254: /* TypePattern: LocalVariableDeclaration  */
#line 2584 "parser.y"
                                         {
			node *temp_node;
			(yyval.treenode) = new node("TypePattern");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 5877 "parser.tab.c"
    break;

  case 255: /* Expression: AssignmentExpression  */
#line 2594 "parser.y"
                                     {
			node *temp_node;
			(yyval.treenode) = new node("Expression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 5894 "parser.tab.c"
    break;

  case 256: /* AssignmentExpression: ConditionalExpression  */
#line 2609 "parser.y"
                                      {
			node *temp_node;
			(yyval.treenode) = new node("AssignmentExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 5911 "parser.tab.c"
    break;

  case 257: /* AssignmentExpression: Assignment  */
#line 2621 "parser.y"
                     {
			node *temp_node;
			(yyval.treenode) = new node("AssignmentExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 5928 "parser.tab.c"
    break;

  case 258: /* ConditionalExpression: ConditionalOrExpression  */
#line 2636 "parser.y"
                                                                  {
			node *temp_node;
			(yyval.treenode) = new node("ConditionalExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 5945 "parser.tab.c"
    break;

  case 259: /* ConditionalExpression: ConditionalOrExpression OPERATOR_ternaryquestion Expression OPERATOR_ternarycolon ConditionalExpression  */
#line 2648 "parser.y"
                                                                                                                  {
			node *temp_node;
			(yyval.treenode) = new node("ConditionalExpression");
			(yyval.treenode)->add_child((yyvsp[-4].treenode));
			temp_node = new node("?",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(":",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode)->exp_applicable = true;

            
        }
#line 5965 "parser.tab.c"
    break;

  case 260: /* ConditionalOrExpression: ConditionalAndExpression  */
#line 2666 "parser.y"
                                                                      {
			node *temp_node;
			(yyval.treenode) = new node("ConditionalOrExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 5982 "parser.tab.c"
    break;

  case 261: /* ConditionalOrExpression: ConditionalOrExpression OPERATOR_logicalor ConditionalAndExpression  */
#line 2678 "parser.y"
                                                                              {
			node *temp_node;
			(yyval.treenode) = new node("ConditionalOrExpression");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("||",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode)->exp_applicable = true;
            
            (yyval.treenode) -> set_datatype((yyvsp[-2].treenode), (yyvsp[0].treenode), "||");
            if((yyval.treenode) -> datatype == "ERROR") {
                cout << "ERROR: Illegal use of '||' operator with operands " << (yyvsp[-2].treenode) -> datatype << " and " << (yyvsp[0].treenode) -> datatype << " at line number: " << yylineno << endl;
                exit(1);
            }
        }
#line 6003 "parser.tab.c"
    break;

  case 262: /* ConditionalAndExpression: InclusiveOrExpression  */
#line 2697 "parser.y"
                                                                  {
			node *temp_node;
			(yyval.treenode) = new node("ConditionalAndExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 6020 "parser.tab.c"
    break;

  case 263: /* ConditionalAndExpression: ConditionalAndExpression OPERATOR_logicaland InclusiveOrExpression  */
#line 2709 "parser.y"
                                                                             {
			node *temp_node;
			(yyval.treenode) = new node("ConditionalAndExpression");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("&&",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode)->exp_applicable = true;

            (yyval.treenode) -> set_datatype((yyvsp[-2].treenode), (yyvsp[0].treenode), "&&");
            if((yyval.treenode) -> datatype == "ERROR") {
                cout << "ERROR: Illegal use of '&&' operator with operands " << (yyvsp[-2].treenode) -> datatype << " and " << (yyvsp[0].treenode) -> datatype << " at line number: " << yylineno << endl;
                exit(1);
            }
        }
#line 6041 "parser.tab.c"
    break;

  case 264: /* InclusiveOrExpression: ExclusiveOrExpression  */
#line 2728 "parser.y"
                                                                {
			node *temp_node;
			(yyval.treenode) = new node("InclusiveOrExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 6058 "parser.tab.c"
    break;

  case 265: /* InclusiveOrExpression: InclusiveOrExpression OPERATOR_bitwiseor ExclusiveOrExpression  */
#line 2740 "parser.y"
                                                                         {
			node *temp_node;
			(yyval.treenode) = new node("InclusiveOrExpression");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("|",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode)->exp_applicable = true;

            (yyval.treenode) -> set_datatype((yyvsp[-2].treenode), (yyvsp[0].treenode), "|");
            if((yyval.treenode) -> datatype == "ERROR") {
                cout << "ERROR: Illegal use of '|' operator with operands " << (yyvsp[-2].treenode) -> datatype << " and " << (yyvsp[0].treenode) -> datatype << " at line number: " << yylineno << endl;
                exit(1);
            }
        }
#line 6079 "parser.tab.c"
    break;

  case 266: /* ExclusiveOrExpression: AndExpression  */
#line 2759 "parser.y"
                                                      {
			node *temp_node;
			(yyval.treenode) = new node("ExclusiveOrExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 6096 "parser.tab.c"
    break;

  case 267: /* ExclusiveOrExpression: ExclusiveOrExpression OPERATOR_xor AndExpression  */
#line 2771 "parser.y"
                                                           {
			node *temp_node;
			(yyval.treenode) = new node("ExclusiveOrExpression");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("^",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode)->exp_applicable = true;

            (yyval.treenode) -> set_datatype((yyvsp[-2].treenode), (yyvsp[0].treenode), "^");
            if((yyval.treenode) -> datatype == "ERROR") {
                cout << "ERROR: Illegal use of '^' operator with operands " << (yyvsp[-2].treenode) -> datatype << " and " << (yyvsp[0].treenode) -> datatype << " at line number: " << yylineno << endl;
                exit(1);
            }
        }
#line 6117 "parser.tab.c"
    break;

  case 268: /* AndExpression: EqualityExpression  */
#line 2790 "parser.y"
                                                              {
			node *temp_node;
			(yyval.treenode) = new node("AndExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 6134 "parser.tab.c"
    break;

  case 269: /* AndExpression: AndExpression OPERATOR_bitwiseand EqualityExpression  */
#line 2802 "parser.y"
                                                               {
			node *temp_node;
			(yyval.treenode) = new node("AndExpression");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("&",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode)->exp_applicable = true;

            (yyval.treenode) -> set_datatype((yyvsp[-2].treenode), (yyvsp[0].treenode), "&");
            if((yyval.treenode) -> datatype == "ERROR") {
                cout << "ERROR: Illegal use of '&&' operator with operands " << (yyvsp[-2].treenode) -> datatype << " and " << (yyvsp[0].treenode) -> datatype << " at line number: " << yylineno << endl;
                exit(1);
            }
        }
#line 6155 "parser.tab.c"
    break;

  case 270: /* EqualityExpression: RelationalExpression  */
#line 2821 "parser.y"
                                                                       {
			node *temp_node;
			(yyval.treenode) = new node("EqualityExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 6172 "parser.tab.c"
    break;

  case 271: /* EqualityExpression: EqualityExpression OPERATOR_logicalequal RelationalExpression  */
#line 2833 "parser.y"
                                                                        {
			node *temp_node;
			(yyval.treenode) = new node("EqualityExpression");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("==",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode)->exp_applicable = true;

            (yyval.treenode) -> set_datatype((yyvsp[-2].treenode), (yyvsp[0].treenode), "==");
            if((yyval.treenode) -> datatype == "ERROR") {
                cout << "ERROR: Illegal use of '==' operator with operands " << (yyvsp[-2].treenode) -> datatype << " and " << (yyvsp[0].treenode) -> datatype << " at line number: " << yylineno << endl;
                exit(1);
            }
        }
#line 6193 "parser.tab.c"
    break;

  case 272: /* EqualityExpression: EqualityExpression OPERATOR_neq RelationalExpression  */
#line 2849 "parser.y"
                                                               {
			node *temp_node;
			(yyval.treenode) = new node("EqualityExpression");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("!=",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode)->exp_applicable = true;

            (yyval.treenode) -> set_datatype((yyvsp[-2].treenode), (yyvsp[0].treenode), "!=");
            if((yyval.treenode) -> datatype == "ERROR") {
                cout << "ERROR: Illegal use of '!=' operator with operands " << (yyvsp[-2].treenode) -> datatype << " and " << (yyvsp[0].treenode) -> datatype << " at line number: " << yylineno << endl;
                exit(1);
            }
        }
#line 6214 "parser.tab.c"
    break;

  case 273: /* RelationalExpression: ShiftExpression  */
#line 2868 "parser.y"
                                {
			node *temp_node;
			(yyval.treenode) = new node("RelationalExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 6231 "parser.tab.c"
    break;

  case 274: /* RelationalExpression: InstanceofExpression  */
#line 2880 "parser.y"
                               {
			node *temp_node;
			(yyval.treenode) = new node("RelationalExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 6248 "parser.tab.c"
    break;

  case 275: /* RelationalExpression: RelationalExpression OPERATOR_lt ShiftExpression  */
#line 2892 "parser.y"
                                                           {
			node *temp_node;
			(yyval.treenode) = new node("RelationalExpression");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("<",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode)->exp_applicable = true;

            (yyval.treenode) -> set_datatype((yyvsp[-2].treenode), (yyvsp[0].treenode), "<");
            if((yyval.treenode) -> datatype == "ERROR") {
                cout << "ERROR: Illegal use of '<' operator with operands " << (yyvsp[-2].treenode) -> datatype << " and " << (yyvsp[0].treenode) -> datatype << " at line number: " << yylineno << endl;
                exit(1);
            }
        }
#line 6269 "parser.tab.c"
    break;

  case 276: /* RelationalExpression: RelationalExpression OPERATOR_gt ShiftExpression  */
#line 2908 "parser.y"
                                                           {
			node *temp_node;
			(yyval.treenode) = new node("RelationalExpression");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(">",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode)->exp_applicable = true;

            (yyval.treenode) -> set_datatype((yyvsp[-2].treenode), (yyvsp[0].treenode), ">");
            if((yyval.treenode) -> datatype == "ERROR") {
                cout << "ERROR: Illegal use of '>' operator with operands " << (yyvsp[-2].treenode) -> datatype << " and " << (yyvsp[0].treenode) -> datatype << " at line number: " << yylineno << endl;
                exit(1);
            }
        }
#line 6290 "parser.tab.c"
    break;

  case 277: /* RelationalExpression: RelationalExpression OPERATOR_leq ShiftExpression  */
#line 2924 "parser.y"
                                                            {
			node *temp_node;
			(yyval.treenode) = new node("RelationalExpression");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("<=",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode)->exp_applicable = true;

            (yyval.treenode) -> set_datatype((yyvsp[-2].treenode), (yyvsp[0].treenode), "<=");
            if((yyval.treenode) -> datatype == "ERROR") {
                cout << "ERROR: Illegal use of '<=' operator with operands " << (yyvsp[-2].treenode) -> datatype << " and " << (yyvsp[0].treenode) -> datatype << " at line number: " << yylineno << endl;
                exit(1);
            }
        }
#line 6311 "parser.tab.c"
    break;

  case 278: /* RelationalExpression: RelationalExpression OPERATOR_geq ShiftExpression  */
#line 2940 "parser.y"
                                                            {
			node *temp_node;
			(yyval.treenode) = new node("RelationalExpression");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(">=",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode)->exp_applicable = true;

            (yyval.treenode) -> set_datatype((yyvsp[-2].treenode), (yyvsp[0].treenode), ">=");
            if((yyval.treenode) -> datatype == "ERROR") {
                cout << "ERROR: Illegal use of '>=' operator with operands " << (yyvsp[-2].treenode) -> datatype << " and " << (yyvsp[0].treenode) -> datatype << " at line number: " << yylineno << endl;
                exit(1);
            }
        }
#line 6332 "parser.tab.c"
    break;

  case 279: /* ShiftExpression: AdditiveExpression  */
#line 2959 "parser.y"
                                   {
			node *temp_node;
			(yyval.treenode) = new node("ShiftExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 6349 "parser.tab.c"
    break;

  case 280: /* ShiftExpression: ShiftExpression OPERATOR_leftshift AdditiveExpression  */
#line 2971 "parser.y"
                                                                {
			node *temp_node;
			(yyval.treenode) = new node("ShiftExpression");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("<<",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode)->exp_applicable = true;

            (yyval.treenode) -> set_datatype((yyvsp[-2].treenode), (yyvsp[0].treenode), "<<");
            if((yyval.treenode) -> datatype == "ERROR") {
                cout << "ERROR: Illegal use of '<<' operator with operands " << (yyvsp[-2].treenode) -> datatype << " and " << (yyvsp[0].treenode) -> datatype << " at line number: " << yylineno << endl;
                exit(1);
            }
        }
#line 6370 "parser.tab.c"
    break;

  case 281: /* ShiftExpression: ShiftExpression OPERATOR_rightshift AdditiveExpression  */
#line 2987 "parser.y"
                                                                 {
			node *temp_node;
			(yyval.treenode) = new node("ShiftExpression");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(">>",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode)->exp_applicable = true;

            (yyval.treenode) -> set_datatype((yyvsp[-2].treenode), (yyvsp[0].treenode), ">>");
            if((yyval.treenode) -> datatype == "ERROR") {
                cout << "ERROR: Illegal use of '>>' operator with operands " << (yyvsp[-2].treenode) -> datatype << " and " << (yyvsp[0].treenode) -> datatype << " at line number: " << yylineno << endl;
                exit(1);
            }
        }
#line 6391 "parser.tab.c"
    break;

  case 282: /* ShiftExpression: ShiftExpression OPERATOR_unsignedrightshift AdditiveExpression  */
#line 3003 "parser.y"
                                                                         {
			node *temp_node;
			(yyval.treenode) = new node("ShiftExpression");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(">>>",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode)->exp_applicable = true;

            (yyval.treenode) -> set_datatype((yyvsp[-2].treenode), (yyvsp[0].treenode), ">>>");
            if((yyval.treenode) -> datatype == "ERROR") {
                cout << "ERROR: Illegal use of '>>>' operator with operands " << (yyvsp[-2].treenode) -> datatype << " and " << (yyvsp[0].treenode) -> datatype << " at line number: " << yylineno << endl;
                exit(1);
            }
        }
#line 6412 "parser.tab.c"
    break;

  case 283: /* AdditiveExpression: MultiplicativeExpression  */
#line 3022 "parser.y"
                                         {
			node *temp_node;
			(yyval.treenode) = new node("AdditiveExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 6429 "parser.tab.c"
    break;

  case 284: /* AdditiveExpression: AdditiveExpression OPERATOR_plus MultiplicativeExpression  */
#line 3034 "parser.y"
                                                                    {
			node *temp_node;
			(yyval.treenode) = new node("AdditiveExpression");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("+",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));

            (yyval.treenode)->exp_applicable = true;

            (yyval.treenode) -> set_datatype((yyvsp[-2].treenode), (yyvsp[0].treenode), "+");
            if((yyval.treenode) -> datatype == "ERROR") {
                cout << "ERROR: Illegal use of '+' operator with operands " << (yyvsp[-2].treenode) -> datatype << " and " << (yyvsp[0].treenode) -> datatype << " at line number: " << yylineno << endl;
                exit(1);
            }
        }
#line 6450 "parser.tab.c"
    break;

  case 285: /* AdditiveExpression: AdditiveExpression OPERATOR_minus MultiplicativeExpression  */
#line 3050 "parser.y"
                                                                     {
			node *temp_node;
			(yyval.treenode) = new node("AdditiveExpression");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("-",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode)->exp_applicable = true;

            (yyval.treenode) -> set_datatype((yyvsp[-2].treenode), (yyvsp[0].treenode), "-");
            if((yyval.treenode) -> datatype == "ERROR") {
                cout << "ERROR: Illegal use of '-' operator with operands " << (yyvsp[-2].treenode) -> datatype << " and " << (yyvsp[0].treenode) -> datatype << " at line number: " << yylineno << endl;
                exit(1);
            }
        }
#line 6471 "parser.tab.c"
    break;

  case 286: /* MultiplicativeExpression: UnaryExpression  */
#line 3069 "parser.y"
                                {
			node *temp_node;
			(yyval.treenode) = new node("MultiplicativeExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 6488 "parser.tab.c"
    break;

  case 287: /* MultiplicativeExpression: MultiplicativeExpression OPERATOR_multiply UnaryExpression  */
#line 3081 "parser.y"
                                                                     {
			node *temp_node;
			(yyval.treenode) = new node("MultiplicativeExpression");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("*",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));

            (yyval.treenode)->exp_applicable = true;

            (yyval.treenode) -> set_datatype((yyvsp[-2].treenode), (yyvsp[0].treenode), "*");
            if((yyval.treenode) -> datatype == "ERROR") {
                cout << "ERROR: Illegal use of '*' operator with operands " << (yyvsp[-2].treenode) -> datatype << " and " << (yyvsp[0].treenode) -> datatype << " at line number: " << yylineno << endl;
                exit(1);
            }
        }
#line 6509 "parser.tab.c"
    break;

  case 288: /* MultiplicativeExpression: MultiplicativeExpression OPERATOR_divide UnaryExpression  */
#line 3097 "parser.y"
                                                                   {
			node *temp_node;
			(yyval.treenode) = new node("MultiplicativeExpression");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("/",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode)->exp_applicable = true;

            (yyval.treenode) -> set_datatype((yyvsp[-2].treenode), (yyvsp[0].treenode), "/");
            if((yyval.treenode) -> datatype == "ERROR") {
                cout << "ERROR: Illegal use of '/' operator with operands " << (yyvsp[-2].treenode) -> datatype << " and " << (yyvsp[0].treenode) -> datatype << " at line number: " << yylineno << endl;
                exit(1);
            }
        }
#line 6530 "parser.tab.c"
    break;

  case 289: /* MultiplicativeExpression: MultiplicativeExpression OPERATOR_mod UnaryExpression  */
#line 3113 "parser.y"
                                                                {
			node *temp_node;
			(yyval.treenode) = new node("MultiplicativeExpression");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("%",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode)->exp_applicable = true;

            (yyval.treenode) -> set_datatype((yyvsp[-2].treenode), (yyvsp[0].treenode), "%");
            if((yyval.treenode) -> datatype == "ERROR") {
                cout << "ERROR: Illegal use of '%' operator with operands " << (yyvsp[-2].treenode) -> datatype << " and " << (yyvsp[0].treenode) -> datatype << " at line number: " << yylineno << endl;
                exit(1);
            }
        }
#line 6551 "parser.tab.c"
    break;

  case 290: /* UnaryExpression: PreIncrementExpression  */
#line 3132 "parser.y"
                                       {
			node *temp_node;
			(yyval.treenode) = new node("UnaryExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 6568 "parser.tab.c"
    break;

  case 291: /* UnaryExpression: PreDecrementExpression  */
#line 3144 "parser.y"
                                 {
			node *temp_node;
			(yyval.treenode) = new node("UnaryExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 6585 "parser.tab.c"
    break;

  case 292: /* UnaryExpression: OPERATOR_plus UnaryExpression  */
#line 3156 "parser.y"
                                                         {
			node *temp_node;
			(yyval.treenode) = new node("UnaryExpression");
			temp_node = new node("+",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode)->exp_applicable = true;

            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant; 
        }
#line 6604 "parser.tab.c"
    break;

  case 293: /* UnaryExpression: OPERATOR_minus UnaryExpression  */
#line 3170 "parser.y"
                                                           {
			node *temp_node;
			(yyval.treenode) = new node("UnaryExpression");
			temp_node = new node("-",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode)->exp_applicable = true;

            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = -(yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = -(yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;            
        }
#line 6623 "parser.tab.c"
    break;

  case 294: /* UnaryExpression: UnaryExpressionNotPlusMinus  */
#line 3184 "parser.y"
                                      {
			node *temp_node;
			(yyval.treenode) = new node("UnaryExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 6640 "parser.tab.c"
    break;

  case 295: /* PreIncrementExpression: OPERATOR_increment UnaryExpression  */
#line 3199 "parser.y"
                                                   {
			node *temp_node;
			(yyval.treenode) = new node("PreIncrementExpression");
			temp_node = new node("++",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            if((yyvsp[0].treenode) -> datatype != "UNDEFINED") {
                (yyval.treenode) -> datatype = "ERROR";
                cout << "ERROR: '++' operator cannot be used with literal values at line number " << yylineno << endl;
                exit(1); 
            }
        }
#line 6658 "parser.tab.c"
    break;

  case 296: /* PreDecrementExpression: OPERATOR_decrement UnaryExpression  */
#line 3215 "parser.y"
                                                   {
			node *temp_node;
			(yyval.treenode) = new node("PreDecrementExpression");
			temp_node = new node("--",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            if((yyvsp[0].treenode) -> datatype != "UNDEFINED") {
                (yyval.treenode) -> datatype = "ERROR";
                cout << "ERROR: '--' operator cannot be used with literal values at line number " << yylineno << endl;
                exit(1); 
            }
        }
#line 6676 "parser.tab.c"
    break;

  case 297: /* UnaryExpressionNotPlusMinus: Name  */
#line 3231 "parser.y"
                     {
			node *temp_node;
			(yyval.treenode) = new node("UnaryExpressionNotPlusMinus");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 6693 "parser.tab.c"
    break;

  case 298: /* UnaryExpressionNotPlusMinus: PostfixExpression  */
#line 3243 "parser.y"
                            {
			node *temp_node;
			(yyval.treenode) = new node("UnaryExpressionNotPlusMinus");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 6710 "parser.tab.c"
    break;

  case 299: /* UnaryExpressionNotPlusMinus: OPERATOR_bitwisecomp UnaryExpression  */
#line 3255 "parser.y"
                                               {
			node *temp_node;
			(yyval.treenode) = new node("UnaryExpressionNotPlusMinus");
			temp_node = new node("~",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode)->exp_applicable = true;

            (yyval.treenode) -> set_datatype((yyvsp[0].treenode), NULL, "~");
            if((yyval.treenode) -> datatype == "ERROR") {
            cout << "ERROR: Illegal use of '~' operator with operand " << (yyvsp[0].treenode) -> datatype << " at line number: " << yylineno << endl;
                exit(1);
            }
        }
#line 6730 "parser.tab.c"
    break;

  case 300: /* UnaryExpressionNotPlusMinus: OPERATOR_not UnaryExpression  */
#line 3270 "parser.y"
                                       {
			node *temp_node;
			(yyval.treenode) = new node("UnaryExpressionNotPlusMinus");
			temp_node = new node("!",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode)->exp_applicable = true;

            (yyval.treenode) -> set_datatype((yyvsp[0].treenode), NULL, "!");
            if((yyval.treenode) -> datatype == "ERROR") {
                cout << "ERROR: Illegal use of '!' operator with operand " << (yyvsp[0].treenode) -> datatype << " at line number: " << yylineno << endl;
                exit(1);
            }
        }
#line 6750 "parser.tab.c"
    break;

  case 301: /* UnaryExpressionNotPlusMinus: CastExpression  */
#line 3285 "parser.y"
                         {
			node *temp_node;
			(yyval.treenode) = new node("UnaryExpressionNotPlusMinus");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 6767 "parser.tab.c"
    break;

  case 302: /* PostfixExpression: Primary  */
#line 3300 "parser.y"
                        {
			node *temp_node;
			(yyval.treenode) = new node("PostfixExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 6784 "parser.tab.c"
    break;

  case 303: /* PostfixExpression: PostIncrementExpression  */
#line 3312 "parser.y"
                                  {
			node *temp_node;
			(yyval.treenode) = new node("PostfixExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 6801 "parser.tab.c"
    break;

  case 304: /* PostfixExpression: PostDecrementExpression  */
#line 3324 "parser.y"
                                  {
			node *temp_node;
			(yyval.treenode) = new node("PostfixExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 6818 "parser.tab.c"
    break;

  case 305: /* Primary: PrimaryNoNewArray  */
#line 3339 "parser.y"
                                  {
			node *temp_node;
			(yyval.treenode) = new node("Primary");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 6835 "parser.tab.c"
    break;

  case 306: /* Primary: ArrayCreationExpression  */
#line 3351 "parser.y"
                                  {
			node *temp_node;
			(yyval.treenode) = new node("Primary");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 6852 "parser.tab.c"
    break;

  case 307: /* PrimaryNoNewArray: Literal  */
#line 3366 "parser.y"
                        {
			node *temp_node;
			(yyval.treenode) = new node("PrimaryNoNewArray");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 6869 "parser.tab.c"
    break;

  case 308: /* PrimaryNoNewArray: ClassLiteral  */
#line 3378 "parser.y"
                       {
			node *temp_node;
			(yyval.treenode) = new node("PrimaryNoNewArray");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> datatype = (yyvsp[0].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[0].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[0].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[0].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[0].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[0].treenode) -> exp_is_constant;
        }
#line 6886 "parser.tab.c"
    break;

  case 309: /* PrimaryNoNewArray: KEYWORD_this  */
#line 3390 "parser.y"
                       {
			node *temp_node;
			(yyval.treenode) = new node("this",true,"KEYWORD");
 }
#line 6895 "parser.tab.c"
    break;

  case 310: /* PrimaryNoNewArray: Name DELIM_period KEYWORD_this  */
#line 3394 "parser.y"
                                         {
			node *temp_node;
			(yyval.treenode) = new node("PrimaryNoNewArray");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(".",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("this",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
 }
#line 6909 "parser.tab.c"
    break;

  case 311: /* PrimaryNoNewArray: DELIM_lpar Expression DELIM_rpar  */
#line 3403 "parser.y"
                                           {
			node *temp_node;
			(yyval.treenode) = new node("PrimaryNoNewArray");
			temp_node = new node("(",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node(")",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 
            (yyval.treenode) -> datatype = (yyvsp[-1].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[-1].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[-1].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[-1].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[-1].treenode) -> exp_bool_val;
            (yyval.treenode) -> exp_is_constant = (yyvsp[-1].treenode) -> exp_is_constant;
        }
#line 6930 "parser.tab.c"
    break;

  case 312: /* PrimaryNoNewArray: ClassInstanceCreationExpression  */
#line 3419 "parser.y"
                                          {
			node *temp_node;
			(yyval.treenode) = new node("PrimaryNoNewArray");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 6940 "parser.tab.c"
    break;

  case 313: /* PrimaryNoNewArray: FieldAccess  */
#line 3424 "parser.y"
                      {
			node *temp_node;
			(yyval.treenode) = new node("PrimaryNoNewArray");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 6950 "parser.tab.c"
    break;

  case 314: /* PrimaryNoNewArray: ArrayAccess  */
#line 3429 "parser.y"
                      {
			node *temp_node;
			(yyval.treenode) = new node("PrimaryNoNewArray");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 6960 "parser.tab.c"
    break;

  case 315: /* PrimaryNoNewArray: MethodInvocation  */
#line 3434 "parser.y"
                           {
			node *temp_node;
			(yyval.treenode) = new node("PrimaryNoNewArray");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 6970 "parser.tab.c"
    break;

  case 316: /* PrimaryNoNewArray: MethodReference  */
#line 3439 "parser.y"
                          {
			node *temp_node;
			(yyval.treenode) = new node("PrimaryNoNewArray");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 6980 "parser.tab.c"
    break;

  case 317: /* Literal: LITERAL_integer  */
#line 3447 "parser.y"
                                {
			node *temp_node;
			string s((yyvsp[0].strval));
			(yyval.treenode) = new node(s,true,"LITERAL");

            {
                string s((yyvsp[0].strval));
                if(s[(int)(s.size()) - 1] == 'l' || s[(int)(s.size()) - 1] == 'L') (yyval.treenode) -> datatype = "long";
                else (yyval.treenode) -> datatype = "int";
                if(s.size() > 1 && (s[1] == 'x' || s[1] == 'X')){
                    s = s.substr(2, s.size() - 2);
                    (yyval.treenode) -> exp_int_val = stoll(s, 0, 16);
                }else if(s[0] == '0'){
                    (yyval.treenode) -> exp_int_val = stoll(s, 0, 8);
                }else{
                    (yyval.treenode) -> exp_int_val = stoll(s);
                }
                (yyval.treenode) -> exp_is_constant = true;
            }
        }
#line 7005 "parser.tab.c"
    break;

  case 318: /* Literal: LITERAL_floatingpoint  */
#line 3467 "parser.y"
                                {
			node *temp_node;
			string s((yyvsp[0].strval));
			(yyval.treenode) = new node(s,true,"LITERAL");
 
            {
                string s((yyvsp[0].strval));
                if(s[(int)(s.size()) - 1] == 'f' || s[(int)(s.size()) - 1] == 'F') (yyval.treenode) -> datatype = "float";
                else (yyval.treenode) -> datatype = "double";
                (yyval.treenode) -> exp_dob_val = stold(s);

                (yyval.treenode) -> exp_is_constant = true;
            }
        }
#line 7024 "parser.tab.c"
    break;

  case 319: /* Literal: LITERAL_boolean  */
#line 3481 "parser.y"
                          {
			node *temp_node;
			string s((yyvsp[0].strval));
			(yyval.treenode) = new node(s,true,"LITERAL");
 
            (yyval.treenode) -> datatype = "boolean";
            {
                string s((yyvsp[0].strval));
                (yyval.treenode) -> exp_bool_val = (s == "true");
            }

            (yyval.treenode) -> exp_is_constant = true;
        }
#line 7042 "parser.tab.c"
    break;

  case 320: /* Literal: LITERAL_char  */
#line 3494 "parser.y"
                       {
			node *temp_node;
			string s((yyvsp[0].strval));
			(yyval.treenode) = new node(s,true,"LITERAL");
 
            (yyval.treenode) -> datatype = "char";
            {
                string s((yyvsp[0].strval));
                (yyval.treenode) -> exp_int_val = s[0];
            }

            (yyval.treenode) -> exp_is_constant = true;
        }
#line 7060 "parser.tab.c"
    break;

  case 321: /* Literal: LITERAL_string  */
#line 3507 "parser.y"
                         {
			node *temp_node;
			string s((yyvsp[0].strval));
			(yyval.treenode) = new node(s,true,"LITERAL");
 
            (yyval.treenode) -> datatype = "String";
            {
                string s((yyvsp[0].strval));
                (yyval.treenode) -> exp_str_val = s;
            }

            (yyval.treenode) -> exp_is_constant = true;
        }
#line 7078 "parser.tab.c"
    break;

  case 322: /* Literal: LITERAL_textblock  */
#line 3520 "parser.y"
                            {
			node *temp_node;
			string s((yyvsp[0].strval));
			(yyval.treenode) = new node(s,true,"LITERAL");
 
            (yyval.treenode) -> datatype = "textblock";
            {
                string s((yyvsp[0].strval));
                (yyval.treenode) -> exp_str_val = s;
            }

            (yyval.treenode) -> exp_is_constant = true;
        }
#line 7096 "parser.tab.c"
    break;

  case 323: /* Literal: LITERAL_null  */
#line 3533 "parser.y"
                       {
			node *temp_node;
			(yyval.treenode) = new node("NULL",true,"LITERAL");
 
            (yyval.treenode) -> datatype = "null";
            (yyval.treenode) -> exp_is_constant = true;
        }
#line 7108 "parser.tab.c"
    break;

  case 324: /* ClassLiteral: Name DELIM_period KEYWORD_class  */
#line 3543 "parser.y"
                                                {
			node *temp_node;
			(yyval.treenode) = new node("ClassLiteral");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(".",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("class",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
 }
#line 7122 "parser.tab.c"
    break;

  case 325: /* ClassLiteral: Name Dims qDims DELIM_period KEYWORD_class  */
#line 3552 "parser.y"
                                                     {
			node *temp_node;
			(yyval.treenode) = new node("ClassLiteral");
			(yyval.treenode)->add_child((yyvsp[-4].treenode));
			(yyval.treenode)->add_child((yyvsp[-3].treenode));
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(".",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("class",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
 }
#line 7138 "parser.tab.c"
    break;

  case 326: /* ClassLiteral: NumericType qDims DELIM_period KEYWORD_class  */
#line 3563 "parser.y"
                                                       {
			node *temp_node;
			(yyval.treenode) = new node("ClassLiteral");
			(yyval.treenode)->add_child((yyvsp[-3].treenode));
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(".",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("class",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
 }
#line 7153 "parser.tab.c"
    break;

  case 327: /* ClassLiteral: KEYWORD_boolean qDims DELIM_period KEYWORD_class  */
#line 3573 "parser.y"
                                                           {
			node *temp_node;
			(yyval.treenode) = new node("ClassLiteral");
			temp_node = new node("boolean",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(".",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("class",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
 }
#line 7169 "parser.tab.c"
    break;

  case 328: /* ClassLiteral: KEYWORD_void DELIM_period KEYWORD_class  */
#line 3584 "parser.y"
                                                  {
			node *temp_node;
			(yyval.treenode) = new node("ClassLiteral");
			temp_node = new node("void",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node(".",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("class",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
 }
#line 7184 "parser.tab.c"
    break;

  case 329: /* ClassInstanceCreationExpression: UnqualifiedClassInstanceCreationExpression  */
#line 3597 "parser.y"
                                                           {
			node *temp_node;
			(yyval.treenode) = new node("ClassInstanceCreationExpression");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 7194 "parser.tab.c"
    break;

  case 330: /* ClassInstanceCreationExpression: Name DELIM_period UnqualifiedClassInstanceCreationExpression  */
#line 3602 "parser.y"
                                                                       {
			node *temp_node;
			(yyval.treenode) = new node("ClassInstanceCreationExpression");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(".",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 7207 "parser.tab.c"
    break;

  case 331: /* ClassInstanceCreationExpression: Primary DELIM_period UnqualifiedClassInstanceCreationExpression  */
#line 3610 "parser.y"
                                                                          {
			node *temp_node;
			(yyval.treenode) = new node("ClassInstanceCreationExpression");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(".",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 7220 "parser.tab.c"
    break;

  case 332: /* UnqualifiedClassInstanceCreationExpression: KEYWORD_new Name BracketArgumentList qClassBody  */
#line 3621 "parser.y"
                                                                {
			node *temp_node;
			(yyval.treenode) = new node("UnqualifiedClassInstanceCreationExpression");
			temp_node = new node("new",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 7234 "parser.tab.c"
    break;

  case 333: /* qArgumentList: %empty  */
#line 3633 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 7242 "parser.tab.c"
    break;

  case 334: /* qArgumentList: ArgumentList  */
#line 3636 "parser.y"
                       {
			node *temp_node;
			(yyval.treenode) = new node("qArgumentList");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 7252 "parser.tab.c"
    break;

  case 335: /* ArgumentList: Expression sCommaExpression  */
#line 3644 "parser.y"
                                            {
			node *temp_node;
			(yyval.treenode) = new node("ArgumentList");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 7263 "parser.tab.c"
    break;

  case 336: /* sCommaExpression: %empty  */
#line 3653 "parser.y"
                {
			(yyval.treenode) = NULL;
 }
#line 7271 "parser.tab.c"
    break;

  case 337: /* sCommaExpression: DELIM_comma Expression sCommaExpression  */
#line 3656 "parser.y"
                                                  {
			node *temp_node;
			(yyval.treenode) = new node("sCommaExpression");
			temp_node = new node(",",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 7284 "parser.tab.c"
    break;

  case 338: /* FieldAccess: Primary DELIM_period Identifier  */
#line 3667 "parser.y"
                                                {
			node *temp_node;
			(yyval.treenode) = new node("FieldAccess");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(".",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			string s((yyvsp[0].strval));
			temp_node = new node(s,true,"ID");
			(yyval.treenode)->add_child(temp_node);
			temp_node -> sym_tab_entry = new st_entry("", yylineno, count_semicolon);
 }
#line 7300 "parser.tab.c"
    break;

  case 339: /* FieldAccess: KEYWORD_super DELIM_period Identifier  */
#line 3678 "parser.y"
                                                {
			node *temp_node;
			(yyval.treenode) = new node("FieldAccess");
			temp_node = new node("super",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node(".",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			string s((yyvsp[0].strval));
			temp_node = new node(s,true,"ID");
			(yyval.treenode)->add_child(temp_node);
			temp_node -> sym_tab_entry = new st_entry("", yylineno, count_semicolon);
 }
#line 7317 "parser.tab.c"
    break;

  case 340: /* FieldAccess: Name DELIM_period KEYWORD_super DELIM_period Identifier  */
#line 3690 "parser.y"
                                                                  {
			node *temp_node;
			(yyval.treenode) = new node("FieldAccess");
			(yyval.treenode)->add_child((yyvsp[-4].treenode));
			temp_node = new node(".",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("super",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node(".",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			string s((yyvsp[0].strval));
			temp_node = new node(s,true,"ID");
			(yyval.treenode)->add_child(temp_node);
			temp_node -> sym_tab_entry = new st_entry("", yylineno, count_semicolon);
 }
#line 7337 "parser.tab.c"
    break;

  case 341: /* ArrayAccess: Name DELIM_lsq Expression DELIM_rsq  */
#line 3708 "parser.y"
                                                    {
			node *temp_node;
			(yyval.treenode) = new node("ArrayAccess");
			(yyval.treenode)->add_child((yyvsp[-3].treenode));
			temp_node = new node("[",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node("]",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 }
#line 7352 "parser.tab.c"
    break;

  case 342: /* ArrayAccess: PrimaryNoNewArray DELIM_lsq Expression DELIM_rsq  */
#line 3718 "parser.y"
                                                           {
			node *temp_node;
			(yyval.treenode) = new node("ArrayAccess");
			(yyval.treenode)->add_child((yyvsp[-3].treenode));
			temp_node = new node("[",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node("]",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 }
#line 7367 "parser.tab.c"
    break;

  case 343: /* MethodInvocation: Name BracketArgumentList  */
#line 3731 "parser.y"
                                         {
			node *temp_node;
			(yyval.treenode) = new node("MethodInvocation");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 7378 "parser.tab.c"
    break;

  case 344: /* MethodInvocation: Primary DELIM_period Identifier BracketArgumentList  */
#line 3737 "parser.y"
                                                              {
			node *temp_node;
			(yyval.treenode) = new node("MethodInvocation");
			(yyval.treenode)->add_child((yyvsp[-3].treenode));
			temp_node = new node(".",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			string s((yyvsp[-1].strval));
			temp_node = new node(s,true,"ID");
			(yyval.treenode)->add_child(temp_node);
			temp_node -> sym_tab_entry = new st_entry("", yylineno, count_semicolon);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 7395 "parser.tab.c"
    break;

  case 345: /* MethodInvocation: KEYWORD_super DELIM_period Identifier BracketArgumentList  */
#line 3749 "parser.y"
                                                                    {
			node *temp_node;
			(yyval.treenode) = new node("MethodInvocation");
			temp_node = new node("super",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node(".",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			string s((yyvsp[-1].strval));
			temp_node = new node(s,true,"ID");
			(yyval.treenode)->add_child(temp_node);
			temp_node -> sym_tab_entry = new st_entry("", yylineno, count_semicolon);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 7413 "parser.tab.c"
    break;

  case 346: /* MethodInvocation: Name DELIM_period KEYWORD_super DELIM_period Identifier BracketArgumentList  */
#line 3762 "parser.y"
                                                                                      {
			node *temp_node;
			(yyval.treenode) = new node("MethodInvocation");
			(yyval.treenode)->add_child((yyvsp[-5].treenode));
			temp_node = new node(".",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("super",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node(".",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			string s((yyvsp[-1].strval));
			temp_node = new node(s,true,"ID");
			(yyval.treenode)->add_child(temp_node);
			temp_node -> sym_tab_entry = new st_entry("", yylineno, count_semicolon);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 7434 "parser.tab.c"
    break;

  case 347: /* MethodReference: Name DELIM_proportion Identifier  */
#line 3781 "parser.y"
                                                 {
			node *temp_node;
			(yyval.treenode) = new node("MethodReference");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("::",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			string s((yyvsp[0].strval));
			temp_node = new node(s,true,"ID");
			(yyval.treenode)->add_child(temp_node);
			temp_node -> sym_tab_entry = new st_entry("", yylineno, count_semicolon);
 }
#line 7450 "parser.tab.c"
    break;

  case 348: /* MethodReference: Primary DELIM_proportion Identifier  */
#line 3792 "parser.y"
                                              {
			node *temp_node;
			(yyval.treenode) = new node("MethodReference");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("::",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			string s((yyvsp[0].strval));
			temp_node = new node(s,true,"ID");
			(yyval.treenode)->add_child(temp_node);
			temp_node -> sym_tab_entry = new st_entry("", yylineno, count_semicolon);
 }
#line 7466 "parser.tab.c"
    break;

  case 349: /* MethodReference: ArrayType DELIM_proportion Identifier  */
#line 3803 "parser.y"
                                                {
			node *temp_node;
			(yyval.treenode) = new node("MethodReference");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("::",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			string s((yyvsp[0].strval));
			temp_node = new node(s,true,"ID");
			(yyval.treenode)->add_child(temp_node);
			temp_node -> sym_tab_entry = new st_entry("", yylineno, count_semicolon);
 }
#line 7482 "parser.tab.c"
    break;

  case 350: /* MethodReference: KEYWORD_super DELIM_proportion Identifier  */
#line 3814 "parser.y"
                                                    {
			node *temp_node;
			(yyval.treenode) = new node("MethodReference");
			temp_node = new node("super",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("::",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			string s((yyvsp[0].strval));
			temp_node = new node(s,true,"ID");
			(yyval.treenode)->add_child(temp_node);
			temp_node -> sym_tab_entry = new st_entry("", yylineno, count_semicolon);
 }
#line 7499 "parser.tab.c"
    break;

  case 351: /* MethodReference: Name DELIM_period KEYWORD_super DELIM_proportion Identifier  */
#line 3826 "parser.y"
                                                                      {
			node *temp_node;
			(yyval.treenode) = new node("MethodReference");
			(yyval.treenode)->add_child((yyvsp[-4].treenode));
			temp_node = new node(".",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("super",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("::",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			string s((yyvsp[0].strval));
			temp_node = new node(s,true,"ID");
			(yyval.treenode)->add_child(temp_node);
			temp_node -> sym_tab_entry = new st_entry("", yylineno, count_semicolon);
 }
#line 7519 "parser.tab.c"
    break;

  case 352: /* MethodReference: Name DELIM_proportion KEYWORD_new  */
#line 3841 "parser.y"
                                            {
			node *temp_node;
			(yyval.treenode) = new node("MethodReference");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("::",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("new",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
 }
#line 7533 "parser.tab.c"
    break;

  case 353: /* MethodReference: ArrayType DELIM_proportion KEYWORD_new  */
#line 3850 "parser.y"
                                                 {
			node *temp_node;
			(yyval.treenode) = new node("MethodReference");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("::",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			temp_node = new node("new",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
 }
#line 7547 "parser.tab.c"
    break;

  case 354: /* ArrayCreationExpression: KEYWORD_new PrimitiveType DimExprs qDims  */
#line 3862 "parser.y"
                                                         {
			node *temp_node;
			(yyval.treenode) = new node("ArrayCreationExpression");
			temp_node = new node("new",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> sym_tab_entry = new st_entry();
            (yyval.treenode) -> sym_tab_entry -> dimensions = (yyvsp[-1].treenode) -> sym_tab_entry -> dimensions;
            if ((yyvsp[0].treenode) && (yyvsp[0].treenode) -> sym_tab_entry){
                (yyval.treenode) -> sym_tab_entry -> dimensions += (yyvsp[0].treenode) -> sym_tab_entry -> dimensions;
                delete ((yyvsp[0].treenode) -> sym_tab_entry);
            } 
            delete ((yyvsp[-1].treenode) -> sym_tab_entry);
        }
#line 7569 "parser.tab.c"
    break;

  case 355: /* ArrayCreationExpression: KEYWORD_new Name DimExprs qDims  */
#line 3879 "parser.y"
                                          {
			node *temp_node;
			(yyval.treenode) = new node("ArrayCreationExpression");
			temp_node = new node("new",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));

            (yyval.treenode) -> sym_tab_entry = new st_entry();
            (yyval.treenode) -> sym_tab_entry -> dimensions = (yyvsp[-1].treenode) -> sym_tab_entry -> dimensions;
            if ((yyvsp[0].treenode) && (yyvsp[0].treenode) -> sym_tab_entry){
                (yyval.treenode) -> sym_tab_entry -> dimensions += (yyvsp[0].treenode) -> sym_tab_entry -> dimensions;
                delete ((yyvsp[0].treenode) -> sym_tab_entry);
            } 
            delete ((yyvsp[-1].treenode) -> sym_tab_entry);
        }
#line 7591 "parser.tab.c"
    break;

  case 356: /* ArrayCreationExpression: KEYWORD_new PrimitiveType Dims ArrayInitializer  */
#line 3896 "parser.y"
                                                          {
			node *temp_node;
			(yyval.treenode) = new node("ArrayCreationExpression");
			temp_node = new node("new",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> sym_tab_entry = new st_entry();
            (yyval.treenode) -> sym_tab_entry -> dimensions = (yyvsp[-1].treenode) -> sym_tab_entry -> dimensions;
            delete ((yyvsp[-1].treenode) -> sym_tab_entry);
        }
#line 7609 "parser.tab.c"
    break;

  case 357: /* ArrayCreationExpression: KEYWORD_new Name Dims ArrayInitializer  */
#line 3909 "parser.y"
                                                 {
			node *temp_node;
			(yyval.treenode) = new node("ArrayCreationExpression");
			temp_node = new node("new",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> sym_tab_entry = new st_entry();
            (yyval.treenode) -> sym_tab_entry -> dimensions = (yyvsp[-1].treenode) -> sym_tab_entry -> dimensions;
            delete ((yyvsp[-1].treenode) -> sym_tab_entry);
        }
#line 7627 "parser.tab.c"
    break;

  case 358: /* DimExprs: DimExpr  */
#line 3925 "parser.y"
                        {
			node *temp_node;
			(yyval.treenode) = new node("DimExprs");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> sym_tab_entry = new st_entry();
            (yyval.treenode) -> sym_tab_entry -> dimensions = 1;
        }
#line 7640 "parser.tab.c"
    break;

  case 359: /* DimExprs: DimExprs DimExpr  */
#line 3933 "parser.y"
                           {
			node *temp_node;
			(yyval.treenode) = new node("DimExprs");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> sym_tab_entry = new st_entry();
            (yyval.treenode) -> sym_tab_entry -> dimensions = (yyvsp[-1].treenode) -> sym_tab_entry -> dimensions + 1 /* Thanks to DimExpr*/ ;
            delete ((yyvsp[-1].treenode) -> sym_tab_entry);
        }
#line 7655 "parser.tab.c"
    break;

  case 360: /* DimExpr: DELIM_lsq Expression DELIM_rsq  */
#line 3946 "parser.y"
                                               {
			node *temp_node;
			(yyval.treenode) = new node("DimExpr");
			temp_node = new node("[",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node("]",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
 }
#line 7669 "parser.tab.c"
    break;

  case 361: /* PostIncrementExpression: Name OPERATOR_increment  */
#line 3958 "parser.y"
                                        {
			node *temp_node;
			(yyval.treenode) = new node("PostIncrementExpression");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node("++",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
 
            (yyval.treenode) -> datatype = (yyvsp[-1].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[-1].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[-1].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[-1].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[-1].treenode) -> exp_bool_val;
        }
#line 7687 "parser.tab.c"
    break;

  case 362: /* PostIncrementExpression: PostfixExpression OPERATOR_increment  */
#line 3971 "parser.y"
                                               {
			node *temp_node;
			(yyval.treenode) = new node("PostIncrementExpression");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node("++",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
 
            (yyval.treenode) -> datatype = (yyvsp[-1].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[-1].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[-1].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[-1].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[-1].treenode) -> exp_bool_val;
        }
#line 7705 "parser.tab.c"
    break;

  case 363: /* PostDecrementExpression: Name OPERATOR_decrement  */
#line 3987 "parser.y"
                                        {
			node *temp_node;
			(yyval.treenode) = new node("PostDecrementExpression");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node("--",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
 
            (yyval.treenode) -> datatype = (yyvsp[-1].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[-1].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[-1].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[-1].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[-1].treenode) -> exp_bool_val;
        }
#line 7723 "parser.tab.c"
    break;

  case 364: /* PostDecrementExpression: PostfixExpression OPERATOR_decrement  */
#line 4000 "parser.y"
                                               {
			node *temp_node;
			(yyval.treenode) = new node("PostDecrementExpression");
			(yyval.treenode)->add_child((yyvsp[-1].treenode));
			temp_node = new node("--",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
 
            (yyval.treenode) -> datatype = (yyvsp[-1].treenode) -> datatype;
            (yyval.treenode) -> exp_dob_val = (yyvsp[-1].treenode) -> exp_dob_val;
            (yyval.treenode) -> exp_int_val = (yyvsp[-1].treenode) -> exp_int_val;
            (yyval.treenode) -> exp_str_val = (yyvsp[-1].treenode) -> exp_str_val;
            (yyval.treenode) -> exp_bool_val = (yyvsp[-1].treenode) -> exp_bool_val;
        }
#line 7741 "parser.tab.c"
    break;

  case 365: /* CastExpression: DELIM_lpar PrimitiveType DELIM_rpar UnaryExpression  */
#line 4017 "parser.y"
                                                                    {
			node *temp_node;
			(yyval.treenode) = new node("CastExpression");
			temp_node = new node("(",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(")",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 7756 "parser.tab.c"
    break;

  case 366: /* CastExpression: DELIM_lpar ArrayType DELIM_rpar UnaryExpressionNotPlusMinus  */
#line 4027 "parser.y"
                                                                      {
			node *temp_node;
			(yyval.treenode) = new node("CastExpression");
			temp_node = new node("(",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node(")",true,"DELIMITER");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 7771 "parser.tab.c"
    break;

  case 367: /* InstanceofExpression: RelationalExpression KEYWORD_instanceof ArrayType  */
#line 4040 "parser.y"
                                                                  {
			node *temp_node;
			(yyval.treenode) = new node("InstanceofExpression");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("instanceof",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 7784 "parser.tab.c"
    break;

  case 368: /* InstanceofExpression: RelationalExpression KEYWORD_instanceof Name  */
#line 4048 "parser.y"
                                                       {
			node *temp_node;
			(yyval.treenode) = new node("InstanceofExpression");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("instanceof",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 7797 "parser.tab.c"
    break;

  case 369: /* InstanceofExpression: RelationalExpression KEYWORD_instanceof Pattern  */
#line 4056 "parser.y"
                                                          {
			node *temp_node;
			(yyval.treenode) = new node("InstanceofExpression");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("instanceof",true,"KEYWORD");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 7810 "parser.tab.c"
    break;

  case 370: /* Assignment: LeftHandSide OPERATOR_assignment Expression  */
#line 4067 "parser.y"
                                                            {
			node *temp_node;
			(yyval.treenode) = new node("Assignment");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			string s((yyvsp[-1].strval));
			temp_node = new node(s,true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> exp_applicable = true;
            

        }
#line 7828 "parser.tab.c"
    break;

  case 371: /* Assignment: LeftHandSide OPERATOR_equal Expression  */
#line 4080 "parser.y"
                                                 {
			node *temp_node;
			(yyval.treenode) = new node("Assignment");
			(yyval.treenode)->add_child((yyvsp[-2].treenode));
			temp_node = new node("=",true,"OPERATOR");
			(yyval.treenode)->add_child(temp_node);
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 
            (yyval.treenode) -> exp_applicable = true;
            

        }
#line 7845 "parser.tab.c"
    break;

  case 372: /* LeftHandSide: Name  */
#line 4095 "parser.y"
                     {
			node *temp_node;
			(yyval.treenode) = new node("LeftHandSide");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 7855 "parser.tab.c"
    break;

  case 373: /* LeftHandSide: FieldAccess  */
#line 4100 "parser.y"
                      {
			node *temp_node;
			(yyval.treenode) = new node("LeftHandSide");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 7865 "parser.tab.c"
    break;

  case 374: /* LeftHandSide: ArrayAccess  */
#line 4105 "parser.y"
                      {
			node *temp_node;
			(yyval.treenode) = new node("LeftHandSide");
			(yyval.treenode)->add_child((yyvsp[0].treenode));
 }
#line 7875 "parser.tab.c"
    break;


#line 7879 "parser.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 4111 "parser.y"



void yyerror(const char *error)
{
    printf("ERROR:%s at line number: %d\n", error, yylineno);
    exit(0);
}
