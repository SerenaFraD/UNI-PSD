link:   main.o playlist.o song.o itemSong.o list.o
	gcc main.o playlist.o song.o itemSong.o list.o -o link.exe

main.o:
	gcc -c main.c

playlist.o:
	gcc -c ../Libs/playlist.c

song.o:
	gcc -c ../Libs/song.c

itemSong.o:
	gcc -c ../Libs/itemSong.c

list.o:
	gcc -c ../Libs/list.c

clean:
	del -f *.o link.exe

clear:
	rm -f *.o link.exe