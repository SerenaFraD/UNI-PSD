#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "item.h"

Item inputItem() {
	char *str = malloc(sizeof(char) * 20);

	scanf("%s", str);

	return str;
}

void outputItem(Item item) {
	char *str = item;

	printf("%s ", str);
}

int cmpItem(Item item1, Item item2) {
	char *str1 = item1, *str2 = item2;

	return strcmp(str1, str2);
}
