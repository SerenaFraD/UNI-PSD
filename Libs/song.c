#include "song.h"

#define LEN 20

struct song {
		char title[LEN];
		char band[LEN];
		int duration;
		Song next;
};

Song newSong() {
	Song s = malloc(sizeof(struct song));

	s->next = NULL;

	return s;
}

Song setInfo(Song s) {
	char str[LEN];
	int dur;

	printf("Titolo: ");
	fflush(stdin);
	gets(str);
	setTitle(s, str);

	printf("Band: ");
	fflush(stdin);
	scanf("%[^\n]s%*c", str);
	setBand(s, str);

	printf("Durata: ");
	scanf("%d", &dur);
	setDuration(s, dur);

	return s;
}

void setTitle(Song s, char *str) {
	strcpy(s->title, str);
}

void setBand(Song s, char *str) {
	strcpy(s->band, str);
}

void setDuration(Song s, int dur) {
	s->duration = dur;
}

char *getTitle(Song s) {
	return s->title;
}

char *getBand(Song s) {
	return s->band;
}

int getDuration(Song s) {
	return s->duration;
}
