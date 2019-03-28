#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "array.h"
#include "utils.h"

#define ERROR_POS fprintf(stderr, "Errore: posizione non esistente.\n");
#define ERROR_DIMENTION fprintf(stderr, "Dimensione degli array diversa.\n");

void inputArray(int sequenza[], int size) {
	int i;

	for (i = 0; i < size; i++) {
		scanf("%d", &sequenza[i]);
	}
}

int inputArrayString(int *sequenza, char *stringa) {
	int i = 0, n = 0;

	while (sscanf(stringa, "%d%n", &sequenza[i], &n) == 1) {
		stringa += n;
		i++;
	}

	return i;
}

void insertArray(int sequenza[], int *size, int ele, int pos) {
	int i;

	if (pos < 0 || pos > *size) {
		ERROR_POS;
		return;
	}

	for (i = *size; i > pos; i--) {
		sequenza[i] = sequenza[i - 1];
	}

	sequenza[pos] = ele;

	++(*size);
}

void insertSortedArray(int sequenza[], int *size, int ele) {
	int i;

	for (i = *size; (i > 0) && (ele < sequenza[i - 1]); i--) {
		sequenza[i] = sequenza[i - 1];
	}

	sequenza[i] = ele;

	++(*size);
}

void outputArray(int sequenza[], int size) {
	int i;

	for (i = 0; i < size; i++) {
		printf("%d ", sequenza[i]);
	}

	printf("\n");
}

void deleteArray(int sequenza[], int *size, int pos) {
	int i;

	if (pos < 0 || pos > *size) {
		ERROR_POS;
		return;
	}

	for (i = pos; i < *size; i++) {
		sequenza[i] = sequenza[i + 1];
	}

	--(*size);
}

int shuffle(int sequenza[], int size) {

	srand(time(NULL));
	int r = rand() % size;

	return sequenza[r];
}

int searchArray(int sequenza[], int size, int ele) {
	int i;

	for (i = 0; i < size && sequenza[i] != ele; i++);

	return sequenza[i];
}

int compareArray(int sequenza[], int sequenza1[], int size1, int size2) {
	int i;

	if (size1 != size2 && size1 < 0 || size2 < 0) {
		ERROR_DIMENTION;
		return 0;
	}

	for (i = 0; i < size1; i++) {
		if (sequenza[i] != sequenza1[i]) {
			return 0;
		}
	}
	return 1;
}

int sumArrayElements(int sequenza[], int size) {
	int sum = 0, i;

	for (i = 0; i < size; i++) {
		sum += sequenza[i];
	}

	return sum;
}

int sumArrayByElement(int sequenza1[], int sequenza2[], int size1, int size2, int result[]) {

	if (size1 != size2 && size1 < 0 || size2 < 0) {
		ERROR_DIMENTION;
		return 0;
	}

	for (int i = 0; i < size1; i++) {
		result[i] = sequenza1[i] + sequenza2[i];
	}

	return 1;
}

int scalareArray(int sequenza1[], int sequenza2[], int size1, int size2) {
	int sca = 0, i;

	if (size1 != size2 && size1 < 0 || size2 < 0) {
		ERROR_DIMENTION;
		return 0;
	}

	for (i = 0; i < size1; i++) {
		sca = sca + (sequenza1[i] * sequenza2[i]);
	}

	return sca;
}

int minimumArray(int sequenza[], int size) {
	int i, min = 0;

	for (i = 0; i < size; i++) {
		if (sequenza[i] < sequenza[min]) {
			min = i;
		}
	}

	return sequenza[min];
}

void selectionSort(int sequenza[], int size) {
	int i, min;

	for (i = 0; i < size - 1; i++) {
		min = minimo(&sequenza[i], size - i) + i;
		swap(&sequenza[i], &sequenza[min]);
	}
}

void bubbleSort(int sequenza[], int size) { // Versione non adattiva
	int i, j;

	for (i = 1; i < size; i++) {
		for (j = 0; j < size - i; j++) {
			if (sequenza[j] > sequenza[j + 1]) {
				swap(&sequenza[j], &sequenza[j + 1]);
			}
		}
	}
}

void adaptiveBubbleSort(int sequenza[], int size) { // Versione adattiva
	int i, j, ordinato = 0;

	for (i = 1; i < size && !ordinato; i++) {

		ordinato = 1;

		for (j = 0; j < size - i; j++) {
			if (sequenza[j] > sequenza[j + 1]) {
				ordinato = 0;
				swap(&sequenza[j], &sequenza[j + 1]);
			}
		}
	}
}