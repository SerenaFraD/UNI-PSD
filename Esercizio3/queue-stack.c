#include <stdlib.h>
#include "queue.h"
#include "stack.h"
#include "item.h"

#define MAX_QUEUE 50

struct queue{
	Stack s1;
	Stack s2;
};

//Aggiungere gli operatori e indicarne la complessità computazionale

Queue newQueue() {
	Queue q = malloc(sizeof(struct queue));
	q->s1 = newStack();
	q->s2 = newStack();	
	
	return q;
}

int isEmptyQueue(Queue q) {
	if(isEmptyStack(q->s1))
		return 1;
	
	return 0;	
}

int enqueue(Queue q, Item i) {
	push(q->s1, i);
}

Item dequeue(Queue q) {
	
	while(!isEmptyStack(q->s1)) {
		Item i = top(q->s1);
		pop(q->s1);
		push(q->s2, i);
	}
	
	Item result = top(q->s2);
	pop(q->s2);
	
	while(!isEmptyStack(q->s2)) {
		Item i = top(q->s2);
		pop(q->s2);
		push(q->s1, i);
	}
	
	return result;
}



















