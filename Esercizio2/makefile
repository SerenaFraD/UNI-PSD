int :	list.o main.o item-int.o queue-list.o
	gcc list.o main.o item-int.o queue-list.o -o queue.exe
	
list :	list.o main.o item-int.o queue-list.o
	gcc list.o main.o item-int.o queue-list.o -o queue.exe
	
str :	list.o main.o item-string.o queue-list.o
	gcc list.o main.o item-string.o queue-list.o -o queue.exe
	
queue.o:
	gcc -c queue.c
	
queue-list.o:
	gcc -c queue-list.c
	
list.o :
	gcc -c list.c
	
main.o :
	gcc -c main.c

item-int.o :
	gcc -c item-int.c
	
item-string.o :
	gcc -c item-string.c 
	
clean: 
	rm -f *.o *.exe
