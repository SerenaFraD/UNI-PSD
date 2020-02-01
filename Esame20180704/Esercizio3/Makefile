link: main.o itemInt.o bTree.o list.o
	gcc main.o itemInt.o bTree.o list.o -o link.exe

main.o:
	gcc main.c -c

itemInt.o:
	gcc ../Libs/itemInt.c -c

bTree.o:
	gcc ../Libs/bTree.c -c

list.o:
	gcc ../Libs/list.c -c

clean:
	del -f *.o *.exe