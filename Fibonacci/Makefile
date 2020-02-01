ric: main.o ricorsivo.o
	gcc main.o ricorsivo.o -o a.exe

iter: main.o iterativo.o
	gcc main.o iterativo.o -o b.exe

main.o:
	gcc -c main.c

ricorsivo.o:
	gcc -c ricorsivo.c

iterativo.o:
	gcc -c iterativo.c

clean:
	del -f *.o a.exe b.exe