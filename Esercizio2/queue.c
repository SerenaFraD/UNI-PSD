#include <stdlib.h>

#include "queue.h"
#include "item.h"
#include "list.h"

#define MAXITEMS 50

struct queue{
	Item items[MAXITEMS];
	int head;
	int tail;
};

Queue newQueue(){
	Queue q = malloc(sizeof(struct queue));
	if (q==NULL)
		return NULL;
	q->head = 0;
	q->tail = 0;
	return q;
}

int isEmptyQueue(Queue q){
	if (q->head == q->tail)
		return 1;
	else
		return 0;
}

int isFullQueue(Queue q){
	if ((q->tail + 1) % MAXITEMS  == q->head) 
		return 1;
	else
		return 0;
}

int enqueue(Queue q, Item i){
	if (isFullQueue(q)){
		return 0;
	}
	q->items[q->tail] = i;
	q->tail = (q->tail + 1) % MAXITEMS;
}

Item dequeue(Queue q){
	if (isEmptyQueue(q))
		return NULL;
	Item it = q->items[q->head];
	q->head = (q->head + 1) % MAXITEMS;
	
}

void printQueue(Queue q){
	int i;
	for(i=q->head; i!=q->tail; i = (i+1)%MAXITEMS)
		outputItem(q->items[i]);
}