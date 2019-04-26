#include <stdio.h>
#include "../Libs/array.h"

int main() {
	int size = 5;
	int a[size];

	inputArray(a, size);
	deleteArray(a, &size, 7);
	//selectionSort(a, size);
	//adaptiveBubbleSort(a, size);
	outputArray(a, size);

	return 0;
}
