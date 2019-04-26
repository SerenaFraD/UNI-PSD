#include <stdio.h>
#include "../Libs/item.h"
#include "../Libs/stack.h"
#define N 10

int main() {
	int i;
	Stack stack = newStack();

	printf("Inserire elementi ");
	for (i = 0; i < N; i++)
		push(stack, inputItem());

	printStack(stack);
	printf("\n");

	/*
	pop(stack);
	printStack(stack);
	printf("\n");

	printf("\nInserire l' item da inserire e la posizione: ");
	s = inputItem();
	scanf("%d",&i);
	addListItem(A, s, i);
	printList(A);
	
	List B = cloneList(A);
	printf("\n");
	printList(B);
	*/

	return 0;
}
