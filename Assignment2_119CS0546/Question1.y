%{
	#include <stdio.h>
	#include <math.h>
	#include <string.h>
	
	#define YYSTYPE double
	
	_Bool errFlag = 0;
	double ans = NAN;
	
	int yylex(void);
	void yyerror(const char *s);
	void err(const char *s);
%}

%start CALC

%token QUIT FLOAT INT NL ANS EXPKEY

%left '-' '+'
%left '*' '/' '%'
%right '^'
%left '(' ')' '[' ']' '{' '}'

%%
CALC : S
	| S CALC
	| error {
		yyerrok;
		yyclearin;
	}
;

S : EXPR NL{
		if (errFlag)
			errFlag = 0;
		else {
			printf("Result=%lf\n", $1);
			ans = $1;
		}
	}
	| NL
;

EXPR : EXPR '+' TERM {$$ = $1 + $3;}
	| EXPR '-' TERM {$$ = $1 - $3;}
	| TERM {$$ = $1;}
	| ANS {$$ = ans;}
	| QUIT {return 0;}
	| error {err("Entered arithmetic expression is Invalid\n");}
;

TERM : TERM '*' EXPFAC {$$ = $1 * $3;}
	| TERM '/' EXPFAC {$$ = $1 / $3;}
	| TERM '%' EXPFAC {
		double x1 = $1, x2 = $3;
		if (x1 == (int)x1 && x2 == (int)x2)
			$$ = (int)x1 % (int)x2;
		else
			err("Floating point modulo not supported\n");
	}
	| EXPFAC {$$ = $1;}
;

EXPFAC : EXPFAC '^' FACTOR {$$ = pow($1, $3);}
	| FACTOR {$$ = $1;}
;
	
FACTOR : '(' EXPR ')' {$$ = $2;}
	| '[' EXPR ']' {$$ = $2;}
	| '{' EXPR '}' {$$ = $2;}
	| NUMBER {$$ = $1;}
;

NUMBER : '+' NUM {$$ = $2;}
	| '-' NUM {$$ = -$2;}
	| NUM {$$ = $1;}
;

NUM : FLOAT EXPKEY FLOAT {
		double expVal = $3;
		if (expVal == (int)expVal)
			$$ = $1 * pow(10, expVal);
		else
			err("Floating point exponent not supported in scientific notation\n");
	} | FLOAT EXPKEY '+' FLOAT {
		double expVal = $4;
		if (expVal == (int)expVal)
			$$ = $1 * pow(10, expVal);
		else
			err("Floating point exponent not supported in scientific notation\n");
	} | FLOAT EXPKEY '-' FLOAT {
		double expVal = -$4;
		if (expVal == (int)expVal)
			$$ = $1 * pow(10, expVal);
		else
			err("Floating point exponent not supported in scientific notation\n");
	} | FLOAT {$$ = $1;}
;
%%

int main() {
	printf("\nEnter expression:\n");
	yyparse();
	return 0;
}

void yyerror(const char *s) {}

void err(const char *s) {
	if (!errFlag) {
		if (s)
			fprintf(stderr, "%s", s);
		else
			fprintf(stderr, "error\n"); 
		errFlag = 1;
	}
}
