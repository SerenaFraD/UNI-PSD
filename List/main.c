#include <stdio.h>
#include "..\Libs\list.h"
#include "..\Libs\item.h"

int main() {
	List lista = newList(), list;
	Item value;
	int pos;

	for (int i = 0; i < 5; i++) {
		value = inputItem();
		insertTail(lista, value);
	}

/*
	lista = reverseList(lista);

	sortedList(lista);

	printList(lista);

	printf("Inserire l'item\n");
	value = inputItem();

	serachList(lista, value, &pos);
*/
	printList(lista);
	//printList(list);

	return 0;
}