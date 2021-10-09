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
%token SQR CUBE SQRT CBRT LOG10 LN INV ABS EXP LOG SIN COS TAN SEC CSC COT ASIN ACOS ATAN ASEC ACSC ACOT SINH COSH TANH SECH CSCH COTH ASINH ACOSH ATANH ASECH ACSCH ACOTH FLOOR CEIL FRAC SET QUIT NL

%type<doubleVal> EXPR NUMBER NUM

%nonassoc '!'
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

EXPR : EXPR '+' EXPR {$$ = $1 + $3;}
	| EXPR '-' EXPR {$$ = $1 - $3;}
	| EXPR '*' EXPR {$$ = $1 * $3;}
	| EXPR '/' EXPR {
		if ($3 == 0) {
			$$ = NAN;
			err("Division by 0 not allowed.\n");
		} else
			$$ = $1 / $3;
	} | EXPR '%' EXPR {
		double x1 = $1, x2 = $3;
		if (x1 == (int)x1 && x2 == (int)x2)
			$$ = (int)x1 % (int)x2;
		else {
			$$ = NAN;
			err("Floating point modulo not supported\n");
		}
	} | EXPR '^' EXPR {$$ = pow($1, $3);}
	| EXPR '!' {
		int reqNum = $1;
		if (reqNum == 0) {$$ = 1;}
		else if (reqNum > 0 && reqNum == (int)reqNum) {
			ans = 1;
			for (int i = 1; i <= reqNum; ans *= i, i++);
			$$ = ans;
		} else {
			$$ = NAN;
			err("Factorial does not support floating point\n");
		}
	} | '(' EXPR ')' {$$ = $2;}
	| '[' EXPR ']' {$$ = $2;}
	| '{' EXPR '}' {$$ = $2;}
	| SQR '(' EXPR ')' {$$ = pow($3, 2);}
	| CUBE '(' EXPR ')' {$$ = pow($3, 3);}
	| SQRT '(' EXPR ')' {
		if ($3 < 0) {
			$$ = NAN;
			err("sqrt of negative number not supported.\n");
		} else
			$$ = pow($3, 0.5);
	} | CBRT '(' EXPR ')' {$$ = pow($3, 1/3);}
	| LOG10 '(' EXPR ')' {
		if ($3 < 0) {
			$$ = NAN;
			err("log10 of negative number not supported.\n");
		} else
			$$ = log10($3);
	} | LN '(' EXPR ')' {
		if ($3 < 0) {
			$$ = NAN;
			err("ln of negative number not supported.\n");
		} else
			$$ = log($3);
	} | INV '(' EXPR ')' {
		if ($3 == 0) {
			$$ = NAN;
			err("inv(0) not supported.\n");
		} else
			$$ = 1 / $3;
	} | ABS '(' EXPR ')' {return fabs($3);}
	| EXP '(' EXPR ')' {return exp($3);}
	| LOG '(' EXPR ',' EXPR ')' {
		if ($3 < 0 || $5 < 0) {
			$$ = NAN;
			err("log of negative number not supported.\n");
		} else if ($5 == 1) {
			$$ = NAN;
			err("Division by 0 not allowed.\n");
		} else
			$$ = log($3) / log($5);
	} | SIN '(' EXPR ')' {$$ = sin($3);}
	| COS '(' EXPR ')' {$$ = cos($3);}
	| TAN '(' EXPR ')' {$$ = tan($3);}
	| SEC '(' EXPR ')' {$$ = 1 / cos($3);}
	| CSC '(' EXPR ')' {
		if ($3 == 0) {
			$$ = NAN;
			err("csc(0) undefined\n");
		} else
			$$ = 1 / sin($3);
	} | COT '(' EXPR ')' {
		if ($3 == 0) {
			$$ = NAN;
			err("cot(0) undefined\n");
		} else
			$$ = 1 / tan($3);
	} | ASIN '(' EXPR ')' {
		if ($3 > 1 || $3 < -1) {
			$$ = NAN;
			err("Domain of asin out of bounds.\n");
		} else
			$$ = asin($3);
	} | ACOS '(' EXPR ')' {
		if ($3 > 1 || $3 < -1) {
			$$ = NAN;
			err("Domain of acos out of bounds.\n");
		} else
			$$ = acos($3);
	} | ATAN '(' EXPR ')' {$$ = atan($3);}
	| ASEC '(' EXPR ')' {
		if ($3 < 1 && $3 > -1) {
			$$ = NAN;
			err("Domain of asec out of bounds.\n");
		} else
			$$ = acos(1 / $3);
	} | ACSC '(' EXPR ')' {
		if ($3 < 1 && $3 > -1) {
			$$ = NAN;
			err("Domain of acsc out of bounds.\n");
		} else
			$$ = asin(1 / $3);
	} | ACOT '(' EXPR ')' {$$ = atan(1 / $3);}
	| SINH '(' EXPR ')' {$$ = sinh($3);}
	| COSH '(' EXPR ')' {$$ = cosh($3);}
	| TANH '(' EXPR ')' {$$ = tanh($3);}
	| SECH '(' EXPR ')' {$$ = 1 / cosh($3);}
	| CSCH '(' EXPR ')' {
		if ($3 == 0) {
			$$ = NAN;
			err("csch(0) undefined\n");
		} else
			$$ = 1 / sinh($3);
	} | COTH '(' EXPR ')' {
		if ($3 == 0) {
			$$ = NAN;
			err("coth(0) undefined\n");
		} else
			$$ = 1 / tanh($3);
	} | ASINH '(' EXPR ')' {$$ = asinh($3);}
	| ACOSH '(' EXPR ')' {
		if ($3 < 1) {
			$$ = NAN;
			err("Domain of acosh out of bounds.\n");
		} else
			$$ = acosh($3);
	} | ATANH '(' EXPR ')' {
		if ($3 > -1 && $3 < 1)
			$$ = atan($3);
		else {
			$$ = NAN;
			err("Domain of atanh out of bounds.\n");
		}
	} | ASECH '(' EXPR ')' {
		if ($3 <= 0 || $3 > 1) {
			$$ = NAN;
			err("Domain of asech out of bounds.\n");
		} else
			$$ = acosh(1 / $3);
	} | ACSCH '(' EXPR ')' {
		if ($3 == 0) {
			$$ = NAN;
			err("Domain of acsch out of bounds.\n");
		} else
			$$ = asin(1 / $3);
	} | ACOTH '(' EXPR ')' {
		if ($3 < -1 || $3 > 1)
			$$ = atanh(1 / $3);
		else {
			$$ = NAN;
			err("Domain of acoth out of bounds.\n");
		}
	} | FLOOR '(' EXPR ')' {$$ = floor($3);}
	| CEIL '(' EXPR ')' {$$ = ceil($3);}
	| NUMBER {$$ = $1;}
	| QUIT {return 0;}
	| error {
		$$ = NAN;
		err("Entered arithmetic expression is Invalid\n");
	}
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
