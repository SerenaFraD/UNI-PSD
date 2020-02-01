#include <stdio.h>
#include <stdlib.h>
#include "../Libs/stack.h"
#include "../Libs/item.h"

void reverseStackAgain(Stack s, Item i) {
	if(isEmptyStack(s)) {
		push(s, i);
	} else {
		Item x = top(s);
		pop(s);
		reverseStackAgain(s, i);
		push(s, x);
	}
}

void reverseStack(Stack s) {
	if(!isEmptyStack(s)) {
		Item item = top(s);
		pop(s);
		reverseStack(s);
		reverseStackAgain(s, item);
	}
}

int main() {
	printf("Creazione e inizializzazione dello stack\n");
	Stack s = newStack();
	int *item;

	item = malloc(sizeof(int));
	*item = 1;
	push(s, item);
	item = malloc(sizeof(int));
	*item = 2;
	push(s, item);
	item = malloc(sizeof(int));
	*item = 3;
	push(s, item);
	item = malloc(sizeof(int));
	*item = 4;
	push(s, item);

	printf("Stampa dello stack ");
	printStack(s);

	printf("\nReverse dello stack ");
	reverseStack(s);
	printStack(s);

	return 0;
}
