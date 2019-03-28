link : utils.o array.o main.o
	gcc utils.o array.o main.o -o array.exe

SelectionSort : utils.o array.o driverSelectionSort.o
	gcc utils.o array.o driverSelectionSort.o -o test.exe

BubbleSort : utils.o array.o driverBubbleSort.o
	gcc utils.o array.o driverBubbleSort.o -o test.exe

Sum : utils.o array.o driverSum.o
	gcc utils.o array.o driverSum.o -o test.exe

SumArray : utils.o array.o driverSumArray.o
	gcc utils.o array.o driverSumArray.o -o test.exe

Scalare : utils.o array.o driverScalare.o
	gcc utils.o array.o driverScalare.o -o test.exe

main.o :
	gcc -c main.c

array.o :
	gcc -c ../Libs/array.c

utils.o :
	gcc -c ../Libs/utils.c

driverSelectionSort.o :
	gcc -c driverSelectionSort.c

driverBubbleSort.o :
	gcc -c driverBubbleSort.c

driverSum.o :
	gcc -c driverSum.c

driverSumArray.o :
	gcc -c driverSumArray.c

driverScalare.o :
	gcc -c driverScalare.c

clean:
	del -f *.o *.exe

clear:
	rm -f *.o *.exe