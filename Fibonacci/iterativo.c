#include "fibonacci.h"

long int fibonacci(int n) {
	long int terms[n + 1];
	int i;

	terms[0] = 0;
	terms[1] = 1;

	for(i = 2; i <= n; i++)
		terms[i] = terms[i - 1] + terms[i - 2];

	return terms[i - 1];
}
//Author: Serena D'Urso
