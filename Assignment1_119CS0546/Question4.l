%{
#include <stdio.h>
#include <stdlib.h>
int cNum = 0, wNum = 0, lNum = 0;
%}

%%
\n {
	cNum++;
	lNum++;
}
[a-zA-Z0-9]+ {
	wNum++;
	cNum += strlen(yytext);
}
. {cNum++;}
%%

int yywrap() {}

int main() {
    extern FILE *yyin, *yyout;
    yyin = fopen("input.txt", "r");
    yyout = fopen("output4.txt", "w");
    yylex();
    fprintf(yyout, "Number of characters: %d\n", cNum);
    fprintf(yyout, "Number of words: %d\n", wNum);
    fprintf(yyout, "Number of lines: %d\n", lNum);
    return 0;
}
