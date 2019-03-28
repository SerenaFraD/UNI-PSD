#include <stdio.h>
#include "libreria.h"

void swap(int *n, int *m) {
  int tmp;

  tmp = *n;
  *n = *m;
  *m = tmp;
}

int minimo(int sequenza[], int n) {
  int min = 0, i;

  for(i = 0; i < n; i++) {
    if(sequenza[i] < sequenza[min]) {
      min = i;
    }
  }

  return min;
}

void selectionSort(int sequenza[], int n) {
  int i, min;

  for(i = 0; i < n - 1; i++) {
    min = minimo(&sequenza[i], n - i) + i;
    swap(&sequenza[i], &sequenza[min]);
  }
}

void inputArray(int sequenza[], int n) {
  int i;

  for(i = 0; i < n; i++) {
    scanf("%d", &sequenza[i]);
  }
}

void outputArray(int sequenza[], int n) {
  int i;

  for(i = 0; i < n; i++) {
    printf("%d ", sequenza[i]);
  }
}
