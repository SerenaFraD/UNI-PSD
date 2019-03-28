prova.exe: libreria.o prova.o
	gcc libreria.o prova.o -o prova.exe

libreria.o:
	gcc -c libreria.c

prova.o:
	gcc -c prova.c

clean:
	del -f *.o prova.exe
