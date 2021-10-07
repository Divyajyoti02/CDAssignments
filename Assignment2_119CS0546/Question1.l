%{
	#define YYSTYPE double
	
	#include <stdio.h>
	#include "y.tab.h"
	
	extern YYSTYPE yylval;
%}

%%
(?i:"quit") {return QUIT;}
[0-9]*\.[0-9]*|[0-9]* {
	yylval = atof(yytext);
	return FLOAT;
}
[ \t]
[\n] {return NL;}
[e\+\-\*\/\%\^\[\]\{\}\(\)] {return yytext[0];}
. {fprintf(stderr, "Unexpected token: %c\n", yytext[0]);}
%%

int yywrap() {return 1;}
