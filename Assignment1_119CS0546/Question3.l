%{
int lNum = 1;
%}

%%
\/\/ {
	char c;
	ECHO;
	while (1) {
		c = input();
		fprintf(yyout, "%c", c);
		if (c == '\n')
			break;
	}
}
\/\* {
	char c;
	ECHO;
	while (1) {
		c = input();
		fprintf(yyout, "%c", c);
		if (c == '*') {
			c = input();
			fprintf(yyout, "%c", c);
			if (c == '/')
				break;
		}
	}
}
[A-Z] {fprintf(yyout, "%c", yytext[0] + 32);}
%%

int yywrap() {}

int main() {
    extern FILE *yyin, *yyout;
    yyin = fopen("input.txt", "r");
    yyout = fopen("output3.txt", "w");
    yylex();
    return 0;
}
