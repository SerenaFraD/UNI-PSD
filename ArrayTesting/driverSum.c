// SOMMA ELEMENTI ARRAY
#include <stdio.h>
#include <stdlib.h>
#include "../Libs/array.h"

#define OUTPUT "outputFile/outputSum.txt"
#define INPUT "inputFile/inputSum.txt"
#define ORACLE "oracleFile/oracleSum.txt"

int main() {

	FILE *fin, *foracle, *fout;
	int i, dim = 30, dim1, dim2;
	int oracleA[dim], inputA[dim];
	char line[dim];

	if((fin = fopen(INPUT, "r")) == NULL) {
		fprintf(stderr, "Errore nell'apertura del file di input\n");
		exit(EXIT_FAILURE);
	}

	if((foracle = fopen(ORACLE , "r")) == NULL) {
		fprintf(stderr, "Errore nell'apertura del file dell'oracolo\n");
		exit(EXIT_FAILURE);
	}

	if((fout = fopen(OUTPUT, "w")) == NULL) {
		fprintf(stderr, "Errore nell'apertura del file di output\n");
		exit(EXIT_FAILURE);
	}

	while(fgets(line, dim, fin) != NULL) {
		dim1 = inputArrayString(inputA, line);

		fgets(line, dim, foracle);
		dim2 = inputArrayString(oracleA, line);

		if(sumArrayElements(inputA, dim1) == oracleA[0]) {
			fprintf(fout, "SUCCESS\n");
		} else {
			fprintf(fout, "FAIL\n");
		}
	}

	return 0;
}