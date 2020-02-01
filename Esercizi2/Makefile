str: stringaInversa.o
	gcc stringaInversa.o -o str.exe

bl: byLevel.o bTree.o itemInt.o queue.o list.o
	gcc byLevel.o bTree.o itemInt.o queue.o list.o -o bl.exe

si: stackInverso.o stackArray.o itemInt.o
	gcc stackInverso.o stackArray.o itemInt.o -o si.exe

#file da compilare

stackInverso.o:
	gcc stackInverso.c -c

stringaInversa.o:
	gcc stringaInversa.c -c

byLevel.o:
	gcc byLevel.c -c

stackArray.o:
	gcc ../Libs/stackArray.c -c

bTree.o:
	gcc ../Libs/bTree.c -c

itemInt.o:
	gcc ../Libs/itemInt.c -c

queue.o:
	gcc ../Libs/queue.c -c

list.o:
	gcc ../Libs/list.c -c

#Elimina i file .o e .exe

clean:
	del -f *.o *.exe