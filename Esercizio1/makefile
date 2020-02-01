int :	utils.o heap.o main.o item-int.o
	gcc utils.o heap.o main.o item-int.o -o vettore.exe

float :	utils.o vettore.o main.o item_float.o
	gcc utils.o vettore.o main.o item_float.o -o vettore.exe	
	
string :	utils.o vettore.o main.o item_string.o
	gcc utils.o vettore.o main.o item_string.o -o vettore.exe

studente :	utils.o vettore.o main.o item_studente.o
	gcc utils.o vettore.o main.o item_studente.o -o vettore.exe	
	
utils.o :
	gcc -c utils.c
	
vettore.o :
	gcc -c vettore.c
	
main.o :
	gcc -c main.c
	
item_int.o :
	gcc -c item_int.c
	
item_float.o :
	gcc -c item_float.c
	
item_string.o :
	gcc -c item_string.c

item_studente.o :
	gcc -c item_studente.c
	
clean: 
	rm -f *.o *.exe
