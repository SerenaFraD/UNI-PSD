#include "utils.h"

void swap(int *n, int *m) {
	int tmp;

	tmp = *n;
	*n = *m;
	*m = tmp;
}

int minimo(int sequenza[], int size) {
	int min = 0, i;

    for(i = 1; i < size; i++) {
       if(sequenza[i] < sequenza[min]) {
       	  min = i;
        }
    }

  return min;
}
