/*
 * serve item, vettore, bstree,
 * leggere in input un vettore di stringhe
 */
#include <string.h>
#include <stdio.h>
#include "../../Libs/item.h"
#include "../../Libs/BSTree.h"
#include "../../Libs/bTree.h"

#define N 4

int main() {
	char str[N][10];

	printf("Inserimento delle stringhe \n");
	for(int i = 0; i < N; i++) {
		printf("Inserimento n %d ", i + 1);
		gets(str[i]);
	}
/*
	printf("Stampa array\n");
	for(int i = 0; i < N; i++) {
		printf("%s\n", str[i]);
	}
*/
	printf("Inserimento nell'albero delle stringhe ");
	BSTree bs = newBST();
	for(int  i = 0; i < N; i++) {
		insertBST(&bs, (Item) str[i]);
		outputItem((Item) str[i]);
	}

	printf("\nFine inserimento\n");

	inOrder((BTree) bs);

	return 0;
}
