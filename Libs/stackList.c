#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "../stack/list.h"

struct stack {
	List elements;	
};

Stack newStack() {
	Stack newStack = malloc(sizeof(struct stack));
	newStack->elements = newList();
	
	return newStack;
}

int isEmptyStack(Stack stack) {
	return isEmpty(stack->elements);
} 

int push(Stack stack, Item item) {
	addHead(stack->elements, item);
	
	return 1;
}

int pop(Stack stack) {
	return removeHead(stack->elements) != NULL;
}

Item top(Stack stack) {
	return getHead(stack->elements);
}

void printStack(Stack stack) {
	printf("TOP: ");
	printList(stack->elements);
}
