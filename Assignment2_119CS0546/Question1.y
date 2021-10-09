%{
	#include <stdio.h>
	#include <math.h>
	#include <string.h>
	#include "symtable.h"
	
	_Bool errFlag = 0;
	double ans = NAN;
	
	int yylex(void);
	void yyerror(const char *s);
	void err(const char *s);
%}

%union {
	double doubleVal;
	char * strVal;
}

%start CALC

%token<strVal> VAR
%token<doubleVal> FLOAT INT ANS
%token SET QUIT NL END_OF_FILE

%type<doubleVal> EXPR TERM EXPFAC FACTOR NUMBER NUM

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

S : SET ANS EXPR NL {
		if (!isnan($3)) {
			printf("ans=%lf\n", $3);
			ans = $3;
		} else
			errFlag = 0;
	} | SET VAR EXPR NL {
		if (!isnan($3)) {
			printf("%s=%lf\n", $2, $3);
			addVar($2, $3);
		} else
			errFlag = 0;
	} | EXPR NL {
		if (errFlag)
			errFlag = 0;
		else {
			printf("ans=%lf\n", $1);
			ans = $1;
		}
	}
	| NL
;

EXPR : EXPR '+' TERM {$$ = $1 + $3;}
	| EXPR '-' TERM {$$ = $1 - $3;}
	| TERM {$$ = $1;}
	| QUIT {return 0;}
	| error {
		$$ = NAN;
		err("Entered arithmetic expression is Invalid\n");
	}
;

TERM : TERM '*' EXPFAC {$$ = $1 * $3;}
	| TERM '/' EXPFAC {
		if ($3 == 0) {
			$$ = NAN;
			err("Division by 0 not allowed.\n");
		} else
			$$ = $1 / $3;
	} | TERM '%' EXPFAC {
		double x1 = $1, x2 = $3;
		if (x1 == (int)x1 && x2 == (int)x2)
			$$ = (int)x1 % (int)x2;
		else {
			$$ = NAN;
			err("Floating point modulo not supported\n");
		}
	} | EXPFAC {$$ = $1;}
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

NUM : FLOAT VAR FLOAT {
		if (!strcmp($2, "e") || !strcmp($2, "E")) {
			double expVal = $3;
			if (expVal == (int)expVal)
				$$ = $1 * pow(10, expVal);
			else {
				$$ = NAN;
				err("Floating point exponent not supported in scientific notation\n");
			}
		} else {
			$$ = NAN;
			err("Entered arithmetic expression is Invalid\n");
		}
	} | FLOAT VAR '+' FLOAT {
		if (!strcmp($2, "e") || !strcmp($2, "E")) {
			double expVal = $4;
			if (expVal == (int)expVal)
				$$ = $1 * pow(10, expVal);
			else {
				$$ = NAN;
				err("Floating point exponent not supported in scientific notation\n");
			}
		} else {
			$$ = NAN;
			err("Entered arithmetic expression is Invalid\n");
		}
	} | FLOAT VAR '-' FLOAT {
		if (!strcmp($2, "e") || !strcmp($2, "E")) {
			double expVal = -$4;
			if (expVal == (int)expVal)
				$$ = $1 * pow(10, expVal);
			else {
				$$ = NAN;
				err("Floating point exponent not supported in scientific notation\n");
			}
		} else {
			$$ = NAN;
			err("Entered arithmetic expression is Invalid\n");
		}
	} | FLOAT {$$ = $1;}
	| ANS {
		if (isnan(ans)) {
			$$ = NAN;
			err("ans uninitialized.\n");
		} else
			$$ = ans;
	}
	| VAR {
		double result = getVal($1);
		if (isnan(result)) {
			$$ = NAN;
			char * mes = (char*)malloc((strlen($1) + 16) * sizeof(char));
			if (!mes) {
				$$ = NAN;
				err("Insufficient memory.\n");
			} else {
				sprintf(mes, "%s is undefined.\n", $1);
				err(mes);
			}
		} else
			$$ = result;
	}
;
%%

int main() {
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
