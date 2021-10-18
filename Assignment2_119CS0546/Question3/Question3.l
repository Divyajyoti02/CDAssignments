%{
	#include "y.tab.h"

	extern int yylval;
%}

%%
"for" {return FOR;}
"int" {return INT;}

"<"|">"|"<="|">="|"=="|"!=" {return RELOP;}

"++"|"--" {return INCDEC;}

[a-zA-Z_][a-zA-Z_0-9]* {return ID;}
[0-9]+ {return NUM;}

[ \t]

. {return yytext[0];}
%%

int yywrap() {return 1;}
