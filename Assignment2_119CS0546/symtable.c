#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "symtable.h"

Sym *symTable = NULL;

void addVar(const char * name, double val) {
	Sym * temp;
	HASH_FIND_STR(symTable, name, temp);
	if (!temp) {
		temp = (Sym*)malloc(sizeof(Sym));
		temp->varName = strdup(name);
		HASH_ADD_KEYPTR(hh, symTable, temp->varName, strlen(temp->varName), temp);
	}
	temp->val = val;
}

double getVal(const char * name) {
	double ans = NAN;
	Sym * temp;
	HASH_FIND_STR(symTable, name, temp);
	if (temp)
		ans = temp->val;
	return ans;
}
