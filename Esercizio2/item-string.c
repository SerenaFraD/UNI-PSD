#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "item.h"

Item inputItem() {
	char *p_c;
	p_c = malloc(sizeof(char) * 20);
	
	scanf("%s", p_c);
	
	return p_c;
}

void outputItem(Item it) {
	char *p_c = it;
	
	printf("%s ", p_c);
}

int cmpItem(Item it1, Item it2) {
	char *p_c1 = it1,
		 *p_c2 = it2;
		 
	return strcmp(p_c1, p_c2);
}