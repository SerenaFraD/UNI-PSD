#include <stdio.h>
#include "heap.h"
#include <stdlib.h>
#define N 5

void printVect(Item vett[], int n){
	int i;
	for(i = 0; i < n; i++)
		outputItem(vett[i]);
}

//completare
void heapSort(Item vett[], int n){
	
	Heap *h;
	*h = buildHeap(vett, n);
	
	int i;
	
	for(i = n - 1; i >= 0; i--) {
		vett[i] = extractMax(*h);
	}
	
}

//completare
int compareVect(Item vett1[], int n1, Item vett2[], int n2){
	if(n1 != n2)
	return 0;
	
	int i;
	
	for(i = 0; i < n1; i++) {
		if(cmpItem(vett1[i], vett2[i]) != 0)
			return 0;
	}
	
	return 1;
}

void merge(Item a1[], Item a2[], int n1, int n2, Item b[]){
	int i, j, k;
	Item a[n1+n2];
	for(i=0,j=0, k=0;i<n1 && j<n2;k++){
		if(cmpItem(a1[i], a2[j])<=0)
			a[k]=a1[i++];
		else 
			a[k]=a2[j++];
	}
	while(i<n1)
		a[k++]=a1[i++];
	
	while(j<n2)
		a[k++]=a2[j++];
	
	for(k=0;k<n1+n2;k++)
		b[k]=a[k];
}

void mergeSort(Item a[], int n){
	if(n>1){
		mergeSort(a, n/2);
		mergeSort(a+n/2, n-n/2);
		merge(a, a+n/2, n/2, n-n/2, a);
	}
}

//ordinare qui i due vettori con heapSort e mergesort e confrontare il risultato
int main() {
	Item vett1[N];
	Item vett2[N];
	
	int *item1, *item2;
	
	//Inizializzo entrambi i vettori con lo stesso valore dell'item
	item1 = malloc(sizeof(int));
	item2 = malloc(sizeof(int));
	*item1 = *item2 = 1;
	vett1[0] = item1;
	vett2[0] = item2;
	
	item1 = malloc(sizeof(int));
	item2 = malloc(sizeof(int));
	*item1 = *item2 = 6;
	vett1[1] = item1;
	vett2[1] = item2;
	
	item1 = malloc(sizeof(int));
	item2 = malloc(sizeof(int));
	*item1 = *item2 = 9;
	vett1[2] = item1;
	vett2[2] = item2;
	
	item1 = malloc(sizeof(int));
	item2 = malloc(sizeof(int));
	*item1 = *item2 = 8;
	vett1[3] = item1;
	vett2[3] = item2;
	
	item1 = malloc(sizeof(int));
	item2 = malloc(sizeof(int));
	*item1 = *item2 = 2;
	vett1[4] = item1;
	vett2[4] = item2;
	
	printf("Stampa primo vettore\n");
	printVect(vett1, N);
	
	printf("\nStampa secondo vettore\n");
	printVect(vett2, N);
	
	printf("\nStampa heapSort vettore\n");
	mergeSort(vett1, N);
	printVect(vett1, N);
	
	printf("\nStampa Mergesort vettore\n");
	mergeSort(vett2, N);
	printVect(vett2, N);
	
	int result = compareVect(vett1, N, vett2, N);
	
	if(result == 1)
		printf("\nSono uguali");
	else
		printf("\nNon sono uguali");
	
	return 0;
}



























