#include <string.h>
#include "song.h"
#include "list.h"
#include "item.h"

typedef struct playlist *Playlist;

Playlist createPlaylist(char *);
Playlist addSong(Playlist, Song);
Playlist removeSong(Playlist, char *);
Playlist sortSong(Playlist);
void printPlaylist(Playlist);
