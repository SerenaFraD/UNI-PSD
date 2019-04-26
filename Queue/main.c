#include <stdio.h>
#include "../Libs/queue.h"
#include "../Libs/item.h"
#define N 5

int main() {
	Queue q = newQueue();

	for(int i = 0; i < N; i++) {
		enqueue(q, inputItem());
	}

	printQueue(q);

	for(i = 0; i < N; i++) {
		printf("\nElemento eliminato: ");
		outputItem(dequeue(q));
	}

	return 0;
}
