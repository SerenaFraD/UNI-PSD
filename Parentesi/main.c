#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main() {
	int i;
	Stack stack = newStack();

	printf("Inserire elementi ");
	inserimento(stack);

	printf(parentesi(stack) ? "Bilanciata\n", "Non bilanciata\n");

	return 0;
}

int parentesi(stack) {
	if (isEmptyStack(stack)) {
		return 1;
	}
}

void inserimento() {
	for (i = 0; i < N; i++) {
		push(stack, inputItem());
	}
}

