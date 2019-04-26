#include "playlist.h"

#define LEN 20

struct playlist {
		char name[LEN];
		int num;
		List lista;
};

Playlist createPlaylist(char *str) { //Stringa con il nome della playlist
	Playlist p = malloc(sizeof(struct playlist));

	strcpy(p->name, str);
	p->num = 0;
	p->lista = newList();

	return p;
}

Playlist addSong(Playlist p, Song s) {
	addHead(p->lista, s);
	p->num++;

	return p;
}

Playlist removeSong(Playlist p, char *s) {
	Item item = s;
	int pos;

	searchList(p->lista, item, &pos);
	removeListItemPos(p->lista, pos);
	p->num--;

	return p;
}

Playlist sortSong(Playlist p) {
	sortedList(p->lista);

	return p;
}

void printPlaylist(Playlist p) {
	printList(p->lista);
}
