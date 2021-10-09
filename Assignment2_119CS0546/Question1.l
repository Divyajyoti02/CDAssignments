%{
	#define YYSTYPE double
	
	#include <stdio.h>
	#include "y.tab.h"
	
	extern YYSTYPE yylval;
%}

FLOAT [0-9]*([0-9]\.|\.[0-9])[0-9]*
INT [0-9]*

%%
(?i:"quit") {return QUIT;}
(?i:"ans") {return ANS;}
{FLOAT} {
	yylval = atof(yytext);
	return FLOAT;
}
{INT} {
	yylval = atof(yytext);
	return FLOAT;
}
[ \t]
[\n] {return NL;}
(?i:"e") {return EXPKEY;}
[A-Za-z_\+\-\*\/\%\^\[\]\{\}\(\)] {return yytext[0];}
. {fprintf(stderr, "Unexpected token: %c\n", yytext[0]);}
%%

int yywrap() {return 1;}
