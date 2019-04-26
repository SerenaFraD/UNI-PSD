#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "song.h"
#include "item.h"

Item inputItem() {
	Song s = newSong();

	return setInfo(s);
}

void outputItem(Item item) {
	Song s = item;

	printf("<------------------------------->\n");
	printf("Titolo: %s,\n", getTitle(s));
	printf("Band/Cantante: %s,\n", getBand(s));
	printf("Durata: %d\n", getDuration(s));
	printf("<------------------------------->\n");
}

int cmpItem(Item item1, Item item2) {
	Song a = item1, b = item2;

	return strcmp(getTitle(a), getTitle(b));
}

void swap(Item *item1, Item *item2) {
	Item tmp;

	tmp = *item1;
	*item1 = *item2;
	*item2 = tmp;
}

Item cloneItem(Item item) {
	Song s = newSong();
	Song i = item;

	setTitle(s, getTitle(i));
	setBand(s, getBand(i));
	setDuration(s, getDuration(i));

	return s;
}