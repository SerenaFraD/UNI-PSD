#include <stdio.h>
#include <stdlib.h>
#include "../Libs/item.h"
#include "../Libs/bTree.h"

int main() {
	printf("Creazione dell'albero in modo statico\n");
	int *i = malloc(sizeof(int));
	*i = 5;
	BTree tmp1 = buildTree(NULL, NULL, i);
	i = malloc(sizeof(int));
	*i = 10;
	BTree tmp2 = buildTree(NULL, NULL, i);
	i = malloc(sizeof(int));
	*i = 4;
	BTree tmp3 = buildTree(tmp2, tmp1, i);
	i = malloc(sizeof(int));
	*i = 7;
	tmp1 = buildTree(NULL, NULL, i);
	i = malloc(sizeof(int));
	*i = 9;
	BTree bs = buildTree(tmp3, tmp1, i);

	printf("Stampa in ordine dell'albero ");
	inOrder(bs);

	printf("\nStampa dell'albero per livelli ");
	byLevel(bs);
}
