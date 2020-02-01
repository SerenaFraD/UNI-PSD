int-stack: stack.o queue-stack.o main.o item-int.o
	gcc stack.o queue-stack.o main.o item-int.o -o queue.exe

queue-stack.o:
	gcc -c queue-stack.c

stack.o :
	gcc -c stack.c
	
main.o :
	gcc -c main.c

item-int.o :
	gcc -c item-int.c
	
item-string.o :
	gcc -c item-string.c 
	
clean: 
	rm -f *.o *.exe