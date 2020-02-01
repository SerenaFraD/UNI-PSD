#include "item.h"

typedef struct heap *Heap;

//costruisce un heap a partire da un array di Item
//arr: array di Item da inserire nell'heap;
//n: numero di elementi contenuti in arr;
//ritorna un puntatore all'heap.
Heap buildHeap(Item arr[], int n);

//inserisce un Item nell'heap
//h: l'heap in cui effettuare l'inserimento;
//it: l'item da inserire;
//ritorna 1 in caso di esito positivo, 0 altrimenti.
int heapInsert(Heap h, Item it);

//estrae l'item con valore massimo dall'heap
//h: l'heap da cui estrarre il massimo;
//ritorna l'item con valore massimo in caso di esito positivo, NULL altrimenti.
Item extractMax(Heap h);
