min :	main.o itemStr.o list.o
	gcc main.o itemStr.o list.o -o min.exe

con :   list.o main.o itemStr.o
	gcc list.o main.o itemStr.o -o con.exe

list.o :
	gcc ../Libs/list.c -c

main.o :
	gcc main.c -c

itemStr.o :
	gcc ../Libs/itemStr.c -c

clean   :
	del -f *.o *.exe