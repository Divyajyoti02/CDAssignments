%{
	#include <stdio.h>
	#include "symtable.h"
	#include "y.tab.h"
	
	extern YYSTYPE yylval;
%}

FLOAT [0-9]*([0-9]\.|\.[0-9])[0-9]*
INT [0-9]*
VAR [A-Za-z0-9_]*

%%
(?i:"quit") {return QUIT;}
(?i:"ans") {return ANS;}
(?i:"set") {return SET;}
{FLOAT} {
	yylval.doubleVal = atof(yytext);
	return FLOAT;
}
{INT} {
	yylval.doubleVal = atof(yytext);
	return FLOAT;
}
{VAR} {
	yylval.strVal = strdup(yytext);
	return VAR;
}
[ \t]
[\n] {return NL;}
[\+\-\*\/\%\^\[\]\{\}\(\)] {return yytext[0];}
. {fprintf(stderr, "Unexpected token: %c\n", yytext[0]);}
%%

int yywrap() {return 1;}
