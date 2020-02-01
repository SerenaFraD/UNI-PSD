#include "item.h"

void swap(Item *a, Item *b){
	Item temp = *a;
	*a = *b;
	*b = temp;
}
