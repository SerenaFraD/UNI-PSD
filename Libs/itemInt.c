#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "item.h"

Item inputItem() {
	int *p = malloc(sizeof(int));

	scanf("%d", p);

	return p;
}

void outputItem(Item item) {
	int *p = item;

	printf("%d ", *p);
}

int cmpItem(Item item1, Item item2) {
	int *p1 = item1, *p2 = item2;

	return *p1 - *p2;
}

void swap(Item *item1, Item *item2) {
	Item tmp;

	tmp = *item1;
	*item1 = *item2;
	*item2 = tmp;
}

Item cloneItem(Item item) {
	int *n = malloc(sizeof(int));

	*n = (int) item;

	return n;
}
