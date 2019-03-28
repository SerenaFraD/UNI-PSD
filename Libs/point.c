#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "point.h"

typedef struct {
	float x;
	float y;
} point;

Point createPoint(float x, float y) {
	Point p = malloc(sizeof(struct point));

	p->x = x;
	p->y = y;

	return p;
}

float ascissa(Point p) {
	return p->x;
}

float ordinata(Point p) {
	return p->y;
}

float distanza(Point p1, Point p2) {
	return sqrt(((p1->x - p2->x) * (p1->x - p2->x)) + ((p1->y - p2->y) * (p1->y - p2->y)));
}

void sposta(Point p, float dx, float dy) {
	p->x = p->x + dx;
	p->y = p->y + dy;
}

Point centroide(Point sequenza[], int size) {
	int i;
	float sumx = 0.0, sumy = 0.0;

	for(i = 0; i < size; i++) {
		sumx += sequenza[i]->x;
		sumy += sequenza[i]->y;
	}

	sumx /= size;
	sumy /= size;

	return createPoint(sumx, sumy);
}