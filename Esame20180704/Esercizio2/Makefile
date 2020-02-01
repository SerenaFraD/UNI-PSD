link : main.o BSTree.o itemStr.o bTree.o
	gcc main.o BSTree.o itemStr.o bTree.o -o link.exe

main.o :
	gcc main.c -c

BSTree.o :
	gcc ../Libs/BSTree.c -c

bTree.o :
	gcc ../Libs/bTree.c -c

itemStr.o :
	gcc ../Libs/itemStr.c -c

clean :
	del -f *.o *.exe
