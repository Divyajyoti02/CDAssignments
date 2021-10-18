%{
	#include<stdio.h>
	
	_Bool flag = 0;
	
	int yylex(void);
	void yyerror();
%}

%token DIGIT

%left '+' '-'
%left '*' '/'
%right '^'
%right NEGATIVE POSITIVE

%%
	S: E {printf("\n ");}
;

	E: E '+' E {printf("+ ");}
	    | E '*' E {printf("* ");}
		| E '-' E {printf("- ");}
		| E '/' E {printf("/ ");}
		| E '^' E {printf("^ ");}
		| '(' E ')'
		| '[' E ']'
		| '{' E '}'
		| '-' E %prec NEGATIVE {printf("- ");}
		| '+' E %prec POSITIVE {printf("+ ");}
		| DIGIT {printf("%d ", yylval);}
		| error {
			printf("\r\x1b[2KEntered arithmetic expression is Invalid\n\n");
			flag = 1;
			YYABORT;
		}
    ;
%%

int main() {
	printf("Enter Any Arithmetic Expression: \n");
	
	yyparse();

	if(!flag)
		printf("\rEntered arithmetic expression is Valid\n\n");
	
	return 0;
}

void yyerror() {}
