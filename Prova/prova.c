#include <stdio.h>
#include "libreria.h"
#define N 5

int main() {
  int a[N];

  inputArray(a, N);
  selectionSort(a, N);
  outputArray(a, N);

  return 0;
}
