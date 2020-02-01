/**
 * Creare albero binario di interi
 * creare una nuova lista
 * scorrere albero per trovare nodi con figli
 */
#include <stdio.h>
#include "../../Libs/bTree.h"
#include "../../Libs/item.h"
#include "../../Libs/list.h"

Item nodeWChild(BTree bt, List list) {
	if(bt == NULL)
		return NULL;

	nodeWChild(getRight(bt), list);
	nodeWChild(getLeft(bt), list);

	if(getLeft(bt) != NULL && getRight(bt) != NULL) {
		addHead(list, getBTreeRoot(bt));
	}
}

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

	printf("\nStampa dell'albero in vista simmetrica\n");
	inOrder(bs);

	printf("\nCreazione lista\n");
	List list = newList();

	printf("\nAggiunta nella lista dei nodi che hanno figli\n");
	nodeWChild(bs, list);

	printf("\nStampa della lista con nodi che hanno figli\n");
	printList(list);

	return 0;
}
