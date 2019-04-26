#include <stdio.h>
#include <stdlib.h>
#include "list.h"

typedef struct queue *Queue;

Queue newQueue();
int isEmptyQueue(Queue queue);
int enqueue(Queue queue, Item item);
Item dequeue(Queue queue);
void printQueue(Queue queue);
