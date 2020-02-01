#include<stdio.h>
#include<string.h>
#include"../../Libs/item.h"
#include"../../Libs/list.h"

#define LEN 4

int main() {
	List list = newList();

	printf("Inserimento elementi");
	for (int i = 0; i < LEN; i++) {
		printf("\nElemento %d:", i + 1);
		insertTail(list, inputItem());
	}

	printf("Stampa elementi ");
	printList(list);

	/*
	printf("Stampa elemento minimo ");
	outputItem(minimoList(list));
	*/

	printf("Nuova stringa ");
	printf("%s", concatena(list));
	return 0;
}
