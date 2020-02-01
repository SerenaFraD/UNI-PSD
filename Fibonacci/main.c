#include <stdio.h>
#include "fibonacci.h"

int main() {
	int n;

	printf("Inserire l'indice dell'elemento da stampare -->   ");
	scanf("%d", &n);

	printf("%d\n", fibonacci(n));

	return 0;
}
//Author: Serena D'Urso
