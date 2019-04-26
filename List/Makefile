link : main.o list.o itemInt.o
	gcc main.o list.o itemInt.o -o link.exe

main.o :
	gcc -c main.c

list.o :
	gcc -c ..\Libs\list.c

itemInt.o :
	gcc -c ..\Libs\itemInt.c

clean :
	del -f *.o link.exe