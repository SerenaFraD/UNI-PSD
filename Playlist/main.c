#include <stdio.h>
#include <stdlib.h>
#include "../Libs/playlist.h"
#include "../Libs/song.h"
#include "../Libs/list.h"
#include "../Libs/item.h"

#define LEN 20

Playlist createPlay();

void addCanzone(Playlist *p);

void removeCanzone(Playlist p);

int main() {
	Playlist p = NULL;
	int scelta = -1;

	while (scelta != 0) {
		printf("<--------- MENU ------->\n");
		printf("1. Creare una nuova playlist.\n");
		printf("2. Aggiungere una canzone\n");
		printf("3. Eliminare una canzone\n");
		printf("4. Ordinare la playlist\n");
		printf("5. Stampa la playlist\n");
		printf("0. Uscire dal programma\n");
		printf("<--------------------->\n");
		scanf("%d", &scelta);

		switch (scelta) {
			case 1:
				p = createPlay();
				break;

			case 2:
				addCanzone(&p);
				break;

			case 3:
				removeCanzone(p);
				break;

			case 4:
				sortSong(p);

			case 5:
				printPlaylist(p);
				break;

			case 0:
				printf("Uscita\n");
				break;

			default:
				printf("Scelta errata. Scelte da 1 a 5.\n");

		}
	}

	return 0;
}

Playlist createPlay() {
	char str[LEN];
	printf("Inserire il nome della nuove playlist: ");
	scanf("%s", str);
	return createPlaylist(str);
}

void addCanzone(Playlist *p) {

	if (*p == NULL)
		*p = createPlay();

	addSong(*p, inputItem());
}

void removeCanzone(Playlist p) { //TODO: da finire
	char song[LEN];

	printf("Inserire il nome della canzone da eliminare: ");
	scanf("%s", song);
	//removeListItem();
}
