#include <stdio.h>
#include "../Libs/array.h"

int main() {
	int size = 5;
	int a[size];

	inputArray(a, size);
	selectionSort(a, size);
	adaptiveBubbleSort(a, size);
	outputArray(a, size);

	return 0;
}
