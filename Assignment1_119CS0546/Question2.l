%{
int lNum = 1;
%}

line .*\n 

%%
{line} {fprintf(yyout, "%d %s", lNum++, yytext);}
%%

int yywrap() {}

int main() {
    extern FILE *yyin, *yyout;
    yyin = fopen("input.txt", "r");
    yyout = fopen("output2.txt", "w");
    yylex();
    return 0;
}
