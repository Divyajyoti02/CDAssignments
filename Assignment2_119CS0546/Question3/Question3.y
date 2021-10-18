%{
	#include <stdio.h>

	int flag=0;
	
	int yylex();
	void yyerror();
%}

%token FOR INT RELOP ID NUM INCDEC

%left '+' '-'
%left '*' '/'
%right '^'
%right NEGATIVE POSITIVE
%nonassoc INCDEC

%%
S : FOR '(' E1 ';' E2 ';' E3 ')' {
	printf("Accepted!\n");
	YYACCEPT;
} | error {
	printf("Not Accepted!\n");
	YYABORT;
}
;

E1 : INT ID '=' EXPR
	| E3
;

E2 : /* empty */
	| ID RELOP EXPR
;

E3 : /* empty */
	| ID '=' EXPR
	| ID INCDEC
	| INCDEC ID
;

EXPR : EXPR '+' EXPR
	| EXPR '-' EXPR
	| EXPR '*' EXPR
	| EXPR '/' EXPR
	| EXPR '^' EXPR
	| '(' EXPR ')'
	| '{' EXPR '}'
	| '[' EXPR ']'
	| EXPR INCDEC
	| INCDEC EXPR
	| '+' NUMID %prec POSITIVE
	| '-' NUMID %prec NEGATIVE
	| NUMID
;

NUMID : NUM
	| ID
;
%%

int main() {
	yyparse();

	return 0;
}

void yyerror() {}

