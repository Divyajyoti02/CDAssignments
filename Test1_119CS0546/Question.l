%{
#include <stdio.h>
#include <stdlib.h>
%}

SEP [ \t\n]
VERB is|am|are|were|was|be|being|been|do|does|did|will|would|should|can|could|has|have|had
ADVERB very|simply|gently|quietly|calmly|angrily
PREPOSITION to|from|behind|above|below|between
CONJUNCTION if|then|and|but|or
ADJECTIVE their|my|your|his|her|its
PRONOUN i|you|he|she|we|they

VERBREC {VERB}{SEP}
ADVERBREC {ADVERB}{SEP}
PREPOSITIONREC {PREPOSITION}{SEP}
CONJUNCTIONREC {CONJUNCTION}{SEP}
ADJECTIVEREC {ADJECTIVE}{SEP}
PRONOUNREC {PRONOUN}{SEP}

%%
{VERBREC} {fprintf(yyout, "%.*s is a verb.\n", yyleng - 1, yytext);}
{ADVERBREC} {fprintf(yyout, "%.*s is an adverb.\n", yyleng - 1, yytext);}
{PREPOSITIONREC} {fprintf(yyout, "%.*s is a preposition.\n", yyleng - 1, yytext);}
{CONJUNCTIONREC} {fprintf(yyout, "%.*s is a conjunction.\n", yyleng - 1, yytext);}
{ADJECTIVEREC} {fprintf(yyout, "%.*s is an adjective.\n", yyleng - 1, yytext);}
{PRONOUNREC} {fprintf(yyout, "%.*s is a pronoun.\n", yyleng - 1, yytext);}
SEP
. {fprintf(stderr, "Unrecognized token: %s\n", yytext);}
%%

int yywrap() {}

int main() {
    //extern FILE *yyin, *yyout;
    //yyin = fopen("input5.txt", "r");
    //yyout = fopen("output5.txt", "w");
    yylex();
    return 0;
}
