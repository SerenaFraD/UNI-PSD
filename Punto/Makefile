punto : main.o point.o usaPoint.o
	gcc main.o point.o usaPoint.o -o punto.exe

main.o :
	gcc -c main.c

point.o :
	gcc -c ../Libs/point.c

usaPoint.o :
	gcc -c usaPoint.c

clean :
	del -f *.o punto.exe