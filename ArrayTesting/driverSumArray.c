// CREAZIONE DI ARRAY CON SOMMA DI ELEMENTI IN POSIZIONE I
#include <stdlib.h>
#include <stdio.h>
#include "../Libs/array.h"

#define INPUT "inputFile/inputSumArray.txt"
#define ORACLE "oracleFile/oracleSumArray.txt"
#define OUTPUT "outputFile/outputSumArray.txt"

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

	while(fgets(line, dim, fin) != NULL) {
		sscanf(line, "%[0123456789 ] - %[^\n]", inputStr1, inputStr2);

		dimIN = inputArrayString(inputA, inputStr1);
		dimIN2 = inputArrayString(inputB, inputStr2);

		fgets(line, dim, foracle);
		dimOR = inputArrayString(oracleA, line);

		sumArrayByElement(inputA, inputB, dimIN, dimIN2, result);

		if(compareArray(result, oracleA, dimIN, dimOR)) {
			fprintf(fout, "SUCCESS\n");
		} else {
			fprintf(fout, "FAIL\n");
		}
	}
}