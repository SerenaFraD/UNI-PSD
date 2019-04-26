link: main.o stackArrayDin.o itemInt.o
	gcc main.o stackArrayDin.o itemInt.o -o stack.exe

array: main.o stackArray.o itemInt.o
	gcc main.o stackArray.o itemInt.o -o stack.exe

list: main.o stackList.o itemInt.o list.o
	gcc main.o stackList.o itemInt.o list.o -o stack.exe
	
str: main.o stackList.o itemStr.o list.o
	gcc main.o stackList.o itemStr.o list.o -o stack.exe

point: main.o stackList.o itemPoint.o list.o point.o
	gcc main.o stackList.o itemPoint.o list.o point.o -o stack.exe

main.o:
	gcc -c main.c

stackList.o:
	gcc -c ../Libs/stackList.c

itemInt.o:
	gcc -c ../Libs/itemInt.c

itemStr.o:
	gcc -c ../Libs/itemStr.c

itemPoint.o:
	gcc -c ../Libs/itemPoint.c

point.o:
	gcc -c ../Libs/point.c

stackArray.o:
	gcc -c ../Libs/stackArray.c

stackArrayDin.o:
	gcc -c ../Libs/stackArrayDin.c

list.o:
	gcc -c ../Libs/list.c

utils.o:
	gcc -c ../Libs/utils.c

clean: 
	del -f *.o stack.exe

clear:
	rm -f *.o stack.exe