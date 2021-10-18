#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//Structure of array
struct Stack {
	int top, size;
	char* arr;
};

//Check if the stack is initialized
void isInitialized(struct Stack* stack) {
	if (!stack) {
		printf("Unsuccessful memory allocation!\n");
		exit(EXIT_FAILURE);
	}
}

//Initialize the stack
struct Stack* initStack(int size) {
	struct Stack *stack;
	if (size <= 0) {
		printf("Size is non-positive!\n");
		exit(EXIT_FAILURE);
	}
	stack = (struct Stack*)malloc(sizeof(struct Stack));
	isInitialized(stack);
	stack->top = -1;
	stack->size = size;
	stack->arr = (char*)malloc(size * sizeof(char));
	if (!stack->arr) {
		printf("Unsuccessful memory allocation!\n");
		exit(EXIT_FAILURE);
	}
	return stack;
}

//Check if array is empty
bool isEmpty(struct Stack* stack) {
	isInitialized(stack);
	return(stack->top < 0);
}

//Check if array is full
bool isFull(struct Stack* stack) {
	isInitialized(stack);
	return(stack->top == stack->size - 1);
}

//Check for overflow
void isOverflow(struct Stack* stack) {
	if (isFull(stack)) {
		printf("Memory overflow!\n");
		exit(EXIT_FAILURE);
	}
}

//Check for underflow
void isUnderflow(struct Stack* stack) {
	if (isEmpty(stack)) {
		printf("Memory underflow!\n");
		exit(EXIT_FAILURE);
	}
}

//Insert an element
void insertElem(struct Stack* stack, char data) {
	isOverflow(stack);
	stack->top++;
	*(stack->arr + stack->top) = data;
}

//Peek the stack
char peek(struct Stack* stack) {
	isUnderflow(stack);
	return *(stack->arr + stack->top);
}

//Pop out the top element
char popElem(struct Stack* stack) {
	isUnderflow(stack);
	char elem = *(stack->arr + stack->top);
	*(stack->arr + stack->top) = 0;
	stack->top--;
	return elem;
}

//Parser table
//States : I0-I6
//Symbols : a b $ A S
//Special symbols in table
enum states {I0 = 0, I1, I2, I3, I4, I5, I6, S3 = 256, S4, R1 = 512, R2, R3, ACC = 768, ERR = -1};

enum states parseTable[7][5] = {
	{ S3,  S4, ERR,  I2,  I1},
	{ERR, ERR, ACC, ERR, ERR},
	{ S3,  S4, ERR,  I5, ERR},
	{ S3,  S4, ERR,  I6, ERR},
	{ R3,  R3,  R3, ERR, ERR},
	{ R1,  R1,  R1, ERR, ERR},
	{ R2,  R2,  R2, ERR, ERR}
};

//Find symbol index
unsigned int indexOf(char ch) {
	switch (ch) {
		case 'a': return 0;
		case 'b': return 1;
		case '$': return 2;
		case 'A': return 3;
		case 'S': return 4;
		default: return -1;
	}
}

//Parsing algorithm
void parser(char * expr) {
	int i = 0, exprLen = strlen(expr), currState = 0;
	struct Stack * stateStack = initStack(1000), * exprStack = initStack(1000);
	insertElem(stateStack, '0');
	while (i < exprLen) {
		int lookup = indexOf(expr[i]);
		if (lookup == -1) {
			fprintf(stderr, "Unrecognized token: %c\n", expr[i]);
			return;
		} else {
			printf("%s\n", exprStack->arr);
			switch(parseTable[currState][lookup]) {
				case S3:
					insertElem(stateStack, '3');
					insertElem(exprStack, expr[i++]);
					currState = 3;
					break;
				case S4:
					insertElem(stateStack, '4');
					insertElem(exprStack, expr[i++]);
					currState = 4;
					break;
				case R1:
					popElem(stateStack);
					popElem(stateStack);
					currState = parseTable[peek(stateStack) - '0'][indexOf('S')];
					insertElem(stateStack, '5');
					popElem(exprStack);
					popElem(exprStack);
					insertElem(exprStack, 'S');
					break;
				case R2:
					popElem(stateStack);
					popElem(stateStack);
					currState = parseTable[peek(stateStack) - '0'][indexOf('A')];
					insertElem(stateStack, currState + '0');
					popElem(exprStack);
					popElem(exprStack);
					insertElem(exprStack, 'A');
					break;
				case R3:
					popElem(stateStack);
					currState = parseTable[peek(stateStack) - '0'][indexOf('A')];
					insertElem(stateStack, currState + '0');
					popElem(exprStack);
					insertElem(exprStack, 'A');
					break;
				case ACC:
					printf("Accepted!\n");
					return;
				case ERR:
					printf("Not accepted!\n");
					return;
			}
		}
	}
	fprintf(stderr, "Input limit exceeded\n");
	exit(1);
}

int main() {
	char * expr = (char*)malloc(101 * sizeof(char)); 
	printf("Grammar is : S->AA, A->aA|b\n");
	printf("Enter expression (max 100 chars): ");
	scanf("%s", expr);
	strcat(expr, "$");
	parser(expr);
	return 0;
}
