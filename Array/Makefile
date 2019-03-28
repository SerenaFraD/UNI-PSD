link : utils.o array.o main.o
	gcc utils.o array.o main.o -o array.exe

utils.o :
	gcc -c ../Libs/utils.c

array.o :
	gcc -c ../Libs/array.c

main.o :
	gcc -c main.c

clean:
	del -f *.o array.exe

clear:
	rm -f *.o array.exe
