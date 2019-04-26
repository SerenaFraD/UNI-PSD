#include <string.h>
#include "list.h"
#include "item.h"

typedef struct song *Song;

Song newSong();
Song setInfo(Song);
void setTitle(Song, char *);
void setBand(Song, char *);
void setDuration(Song, int);
char *getTitle(Song);
char *getBand(Song);
int getDuration(Song);
