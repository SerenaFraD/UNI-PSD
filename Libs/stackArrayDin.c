#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define START_DIM 5
#define ADD_DIM 5

struct stack {
		Item *elements;
		int top;
		int dim;
};

Stack newStack() {
	Stack newStack = malloc(sizeof(struct stack));

	if (newStack == NULL) {
		return NULL;
	}

	newStack->top = 0;

	newStack->elements = malloc(sizeof(Item) * START_DIM);

	if (newStack->elements == NULL) {
		return NULL;
	}

	newStack->dim = START_DIM;

	return newStack;
}

int isEmptyStack(Stack stack) {
	return !stack->top;
}

int push(Stack stack, Item item) {
	Item *tmp;

	if (stack->top == stack->dim) {
		tmp = realloc(stack->elements, sizeof(Item) * (stack->dim + ADD_DIM));
		if (tmp == NULL) {
			return 0;
		} else {
			stack->elements = tmp;
			stack->dim += ADD_DIM;
			printf("Spazio esteso a %d\n", stack->dim);
		}
	}

	stack->elements[stack->top] = item;
	stack->top++;

	return 1;
}

int pop(Stack stack) {
	if (isEmptyStack(stack))
		return 0;

	stack->top--;
	return 1;
}

Item top(Stack stack) {
	if (isEmptyStack(stack))
		return NULL;

	return stack->elements[stack->top - 1];
}

void printStack(Stack stack) {
	int i;
	printf("TOP: ");

	for (i = stack->top - 1; i >= 0; i--)
		outputItem(stack->elements[i]);
}
