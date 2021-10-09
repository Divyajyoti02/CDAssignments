%{
	#include <stdio.h>
	#include "symtable.h"
	#include "y.tab.h"
	
	extern YYSTYPE yylval;
%}

%x end

FLOAT [0-9]*([0-9]\.|\.[0-9])[0-9]*
INT [0-9]*
VAR [A-Za-z0-9_]*

%%
(?i:"quit") {return QUIT;}
(?i:"ans") {return ANS;}
(?i:"set") {return SET;}

(?i:"sqr") {return SQR;}
(?i:"cube") {return CUBE;}
(?i:"sqrt") {return SQRT;}
(?i:"cbrt") {return CBRT;}
(?i:"log10") {return LOG10;}
(?i:"ln") {return LN;}
(?i:"inv") {return INV;}
(?i:"abs") {return ABS;}
(?i:"exp") {return EXP;}
(?i:"log") {return LOG;}
(?i:"sin") {return SIN;}
(?i:"cos") {return COS;}
(?i:"tan") {return TAN;}
(?i:"sec") {return SEC;}
(?i:"csc") {return CSC;}
(?i:"cot") {return COT;}
(?i:"asin") {return ASIN;}
(?i:"acos") {return ACOS;}
(?i:"atan") {return ATAN;}
(?i:"asec") {return ASEC;}
(?i:"acsc") {return ACSC;}
(?i:"acot") {return ACOT;}
(?i:"sinh") {return SINH;}
(?i:"cosh") {return COSH;}
(?i:"tanh") {return TANH;}
(?i:"sech") {return SECH;}
(?i:"csch") {return CSCH;}
(?i:"coth") {return COTH;}
(?i:"asinh") {return ASINH;}
(?i:"acosh") {return ACOSH;}
(?i:"atanh") {return ATANH;}
(?i:"asech") {return ASECH;}
(?i:"acsch") {return ACSCH;}
(?i:"acoth") {return ACOTH;}
(?i:"floor") {return FLOOR;}
(?i:"ceil") {return CEIL;}
(?i:"frac") {return FRAC;}

{FLOAT} {
	yylval.doubleVal = atof(yytext);
	return FLOAT;
}
{INT} {
	yylval.doubleVal = atof(yytext);
	return FLOAT;
}
{VAR} {
	yylval.strVal = strdup(yytext);
	return VAR;
}

[ \t]
[\n] {return NL;}
[\+\-\*\/\%\^\[\]\{\}\(\)!,] {return yytext[0];}

<INITIAL><<EOF>> {
	fprintf(stderr, "\nQuit expected.\n");
	BEGIN end;
}
<end><<EOF>> {return 0;}

. {fprintf(stderr, "Unexpected token: %c\n", yytext[0]);}
%%

int yywrap() {return 1;}
