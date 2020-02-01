#include <stdio.h>
#include <stdlib.h>
#include "heap.h"
#include "item.h"

#define DIM 100

struct heap{
	Item vett[DIM];
	int size;
};

int parent(int i){
	return i%2==0 ? i/2-1 : i/2;
}

int left(int i){
	return 2*i + 1;
}

int right(int i){
	return 2*i + 2;
}

int heapInsert(Heap h, Item it){
	int i = ++h->size - 1;
	
	if(h->size > DIM)
		return 0;
		
	h->vett[i] = it;
	
	while (i > 0 && cmpItem(h->vett[parent(i)], h->vett[i]) < 0){
		swap(&(h->vett[parent(i)]), &(h->vett[i]));
		i = parent(i);
	}
	
	return 1;
}

void printHeap(Heap h){
	int i;
	for(i=0; i<h->size; i++)
		outputItem(h->vett[i]);
}

Heap buildHeap(Item arr[], int n){
	Heap h = malloc(sizeof(struct heap));
	if(h == NULL)
		return NULL;
	
	h->size = 0;
	
	int i;
	
	for(i=0; i<n; i++)
		heapInsert(h, arr[i]);

	return h;
}

void maxHeapify(Heap h, int i){
	int l = left(i), r = right(i), max;
	
	if (l<h->size && cmpItem(h->vett[l], h->vett[r])>0)
		max = l;
	else
		max = i;
	if (r<h->size && cmpItem(h->vett[r], h->vett[max])>0)
		max = r;
	
	if (max != i){
		swap(&(h->vett[i]), &(h->vett[max]));
		maxHeapify(h, max);
	}
}

Item extractMax(Heap h){
	if(h->size < 1)
		return NULL;
	Item max = h->vett[0];
	h->vett[0] = h->vett[h->size - 1];
	h->size--;
	maxHeapify(h, 0);
	return max;
}

