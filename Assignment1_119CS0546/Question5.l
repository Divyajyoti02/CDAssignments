%{
#include <stdio.h>
#include <stdlib.h>
%}

KEYWORD END|FOR|GOSUB|GOTO|IF|LET|REM|RETURN|STEP|TO
LETTER [A-Z]
DIGIT [0-9]
/*e denotes belongs to*/
SIGN [\+\-e]
/*| indicates upward arrow*/
ARITH_OP [\+\-\*\/\|]
RELOP <=|>=|<>|<|>|=
LINE_END cr
CONST {SIGN}{DIGIT}+
VAR {LETTER}{DIGIT}|{LETTER}

%%
{KEYWORD} {fprintf(yyout, "%s is a keyword.\n", yytext);}
{VAR} {fprintf(yyout, "%s is a var.\n", yytext);}
{CONST} {fprintf(yyout, "%s is a constant.\n", yytext);}
{SIGN} {fprintf(yyout, "%s is a sign.\n", yytext);} /*letter will never be matched*/
{DIGIT} {fprintf(yyout, "%s is a digit.\n", yytext);}
{ARITH_OP} {fprintf(yyout, "%s is an arith op.\n", yytext);}
{RELOP} {fprintf(yyout, "%s is an arithmetic op.\n", yytext);}
{LINE_END} {fprintf(yyout, "%s is a line end.\n", yytext);}
\n[.\n]* {fprintf(yyout, "END OF FILE");}	/*Expecting the file to end at newline*/
. {fprintf(stderr, "Unexpected token: %d\n", yytext[0]);}
%%

int yywrap() {}

int main() {
    extern FILE *yyin, *yyout;
    yyin = fopen("input5.txt", "r");
    yyout = fopen("output5.txt", "w");
    yylex();
    return 0;
}
