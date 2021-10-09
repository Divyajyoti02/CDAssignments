#include "uthash.h"

typedef struct sym {
	const char * varName;
	double val;
	UT_hash_handle hh;
} Sym;

void addVar(const char * name, double val);
double getVal(const char * name);
