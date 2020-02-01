#include "fibonacci.h"

long int fibonacci(int n) {
	if(n == 1)
		return 1;
	if(n == 2)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}
//Author: Serena D'Urso
