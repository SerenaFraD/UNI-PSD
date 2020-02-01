#include <stdio.h>
#include "item.h"
#include "queue.h"

int main(){
	int i, pos, n = 5;
	Item u;
	Queue q = newQueue();
	
	for(i = 0; i < n;i++){
		printf("\nIntroduci un valore: ");
		Item item = inputItem();
		enqueue(q, item);
		printf("Elemento inserito");
	}
	
	for(i = 0;i < n; i++){
		printf("\nElemento eliminato: ");
		outputItem(dequeue(q));
	}
}
