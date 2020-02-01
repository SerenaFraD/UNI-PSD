#include <stdio.h>
#include <string.h>

void printReverse(char *str) {
	if(*str == '\0') {
		return;
	}

	char *p;
	p = str;
	p++;
	printReverse(p);
	printf("%c", *str);

}

int main() {
	printf("Inizializzazione della stringa\n");
	char str[] = "parola";

	printf("La stringa e': %s\n", str);

	printf("Chiamata di stampa reverse\n");
	printReverse(str);

	return 0;
}



