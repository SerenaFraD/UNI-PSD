#include <stdio.h>
#include "item.h"
#include "queue.h"
#include <string.h>
#include <stdlib.h>

/*
La complessità è O(n) in quanto T(n) = T(n - 1) e nella funzione è presente una sola chiamata ricorsiva
*/
void reverseQueue(Queue q) {	
	if(isEmptyQueue(q))
		return;
	
	Item item =	dequeue(q);
	reverseQueue(q);
	enqueue(q, item);
}

int main(){
printf("Creazione della coda");
	Queue q = newQueue();
	
	char *str;
	str = malloc(sizeof(char) * 10);
	strcpy(str, "ciao");
	enqueue(q, str);
	str = malloc(sizeof(char) * 10);
	strcpy(str, "bella");
	enqueue(q, str);
	str = malloc(sizeof(char) * 10);
	strcpy(str, "gente");
	enqueue(q, str);
	str = malloc(sizeof(char) * 10);
	strcpy(str, "come");
	enqueue(q, str);
	str = malloc(sizeof(char) * 10);
	strcpy(str, "va");
	enqueue(q, str);
	
	printf("\nStampa della coda\n");
	printQueue(q);
	
	printf("\nReverse coda\n");
	reverseQueue(q);
	printQueue(q);
	printf("\n");
	return 0;	
}
