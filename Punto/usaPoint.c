#include "usaPoint.h"

int coppieDistMinD(Point sequenza[], int n, float dist) {
	int i, j, cont = 0;
	float d;

	for(i = 0; i < n; i++) {
		for(j = i + 1; j < n; j++) {
			d = distanza(sequenza[i], sequenza[j]);
			if(d <= dist) {
				cont++;
			}
		}
	}

	return cont;
}

float maxDistanza(Point sequenza[], int n) {
	int i, j;
	float max = 0, d;

	for(i = 0; i < n; i++) {
		for(j = i + 1; j < n; j++) {
			d = distanza(sequenza[i], sequenza[j]);
			if(d >= max) {
				max = d;
			}
		}
	}

	return max;

}