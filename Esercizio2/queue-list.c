#include <stdlib.h>

#include "queue.h"
#include "item.h"
#include "list.h"

struct queue{
	List items;
};

Queue newQueue(){
	Queue q = malloc(sizeof(struct queue));
	if (q==NULL)
		return NULL;
	q->items = newList();
	return q;
}

int isEmptyQueue(Queue q){
	return isEmpty(q->items);
}

int enqueue(Queue q, Item i){
	return addTail(q->items, i);
}

Item dequeue(Queue q){
	return removeHead(q->items);
}

void printQueue(Queue q){
	printList(q->items);
}