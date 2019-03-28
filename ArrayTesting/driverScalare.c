// SCALARE DI DUE ARRAY
#include <stdio.h>
#include <stdlib.h>
#include "../Libs/array.h"

#define INPUT "inputFile/inputScalare.txt"
#define ORACLE "oracleFile/oracleScalare.txt"
#define OUTPUT "outputFile/outputScalare.txt"

int main() {

	FILE *fin, *foracle, *fout;
	int i, dim = 30, dimIN, dimIN2, dimOR;
	int oracleA[dim], inputA[dim], inputB[dim], result[dim];
	char inputStr1[dim], inputStr2[dim], line[dim];

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

	for(;fgets(line, dim, fin) != NULL;) {
		sscanf(line, "%[0123456789 ] - %[^\n]", inputStr1, inputStr2);

		dimIN = inputArrayString(inputA, inputStr1);
		dimIN2 = inputArrayString(inputB, inputStr2);

		fgets(line, dim, foracle);
		dimOR = inputArrayString(oracleA, line);

		if(scalareArray(inputA, inputB, dimIN, dimIN2) == oracleA[0]) {
			fprintf(fout, "SUCCESS\n");
		} else {
			fprintf(fout, "FAIL\n");
		}
	}
}