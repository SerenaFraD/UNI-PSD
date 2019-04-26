#include "queue.h"

struct queue {
		List elements;
};

Queue newQueue() {
	Queue newQueue = malloc(sizeof(struct queue));

	newQueue->elements = newList();

	return newQueue;
}

int isEmptyQueue(Queue queue) {
	return isEmpty(queue->elements);
}

int enqueue(Queue queue, Item item) {
	return insertTail(queue->elements, item);
}

Item dequeue(Queue queue) {
	return removeHead(queue->elements);
}

void printQueue(Queue queue) {
	printf("HEAD: ");
	printList(queue->elements);
}
