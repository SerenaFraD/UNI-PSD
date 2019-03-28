link : main.o utils.o vettore.o itemInt.o
    gcc main.o utils.o vettore.o itemInt.o -o vettore.exe

str : main.o utils.o vettore.o itemStr.o
    gcc main.o utils.o vettore.o itemStr.o -o vettore.exe

point : main.o utils.o vettore.o point.o itemPoint.o
    gcc main.o utils.o vettore.o point.o itemPoint.o -o vettore.exe

main.o :
    gcc -c main.c

utils.o :
    gcc -c utils.c

vettore.o :
    gcc -c vettore.c

point.o :
    gcc -c point.c

itemInt.o :
    gcc -c itemInt.c

itemStr.o :
    gcc -c itemStr.c

itemPoint.o :
    gcc -c itemPoint.c

clean :
    del -f *.o vettore.exe