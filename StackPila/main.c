#include <stdio.h>
#include "../Libs/item.h"
#include "../Libs/stack.h"
#define N 10

int main() {
	int i;
	Stack stack = newStack();

	//Inserimento degli elementi in uno stack
	printf("Inserire elementi ");
	for (i = 0; i < N; i++)
		push(stack, inputItem());

	printStack(stack);
	printf("\n");

	/*
	//Esempio di eliminazione degli elementi da uno stack
	pop(stack);
	printStack(stack);
	printf("\n");
	*/

	return 0;
}
