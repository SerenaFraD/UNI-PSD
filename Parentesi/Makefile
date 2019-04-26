link: main.o stackArrayDin.o itemStr.o
	gcc main.o stackArrayDin.o itemStr.o-o stack.exe

main.o:
	gcc -c main.c

stackList.o:
	gcc -c ../Libs/stackList.c

itemStr.o:
	gcc -c ../Libs/itemStr.c

stackArrayDin.o:
	gcc -c ../Libs/stackArrayDin.c

list.o:
	gcc -c ../Libs/list.c

clean:
	del -f *.o stack.exe

clear:
	rm -f *.o stack.exe
