#include <stdio.h>
#include "../Libs/point.h"
#include "usaPoint.h"

void riempiSequenza(Point s[], int n);
void usaCoppieDistMinD();
void usaMaxDistanza();
void usaSposta();
void usaCentroide();
void usaCreatePoint();

int main() {
	int scelta;

	printf("<--- ELENCO ESERCIZI --->\n");
	printf("1. Numero di coppie la cui distanza e' minore di un valore dato.\n");
	printf("2. Distanza massima dei punti di una sequenza.\n");
	printf("3. Spostamento di un punto dati due numeri reali.\n");
	printf("4. Calcolo del centroide.\n");
	printf("5. Esercizio fatto in classe.\n");
	printf("<----------------------->\n");

	scanf("%d", &scelta);

	switch(scelta) {
		case 1:	usaCoppieDistMinD();
						break;

		case 2: usaMaxDistanza();
						break;

		case 3:	usaSposta();
						break;

		case 4:	usaCentroide();
						break;

		case 5: usaCreatePoint();
						break;

		default: printf("Scelta errata. Scelte da 1 a 5.\n");
	}

	return 0;
}

void riempiSequenza(Point s[], int n) {
	float x, y;

	for(int i = 0; i < n; i++) {
		printf("Inserire x e y.\n");
		scanf("%f %f", &x, &y);

		s[i] = createPoint(x, y);
	}
}

void usaCoppieDistMinD() {
	int n;
	float d;

	printf("Inserire il numero di elementi da inserire.\n");
	scanf("%d", &n);

	Point s[n];

	riempiSequenza(s, n);

	printf("Inserire una distanza.\n");
	scanf("%f", &d);

	printf("%d", coppieDistMinD(s, n, d));
}

void usaMaxDistanza() {
	int n;

	printf("Inserire il numero di elementi da inserire.\n");
	scanf("%2d", &n);

	Point s[n];

	riempiSequenza(s, n);

	printf("La distanza massima e' %.1f", maxDistanza(s, n));
}

void usaSposta() {
	float x, y, dx, dy;
	Point p;

	printf("Inserire le coordinate del punto.\nInserire x e y.\n");
	scanf("%f %f", &x, &y);
	p = createPoint(x, y);

	printf("Inserire i delta.\nInserire dx e dy.\n");
	scanf("%f %f", &dx, &dy);
	sposta(p, dx, dy);

	printf("(%.1f, %.1f)", ascissa(p), ordinata(p));

}

void usaCentroide() {
	int n;

	printf("Inserire il numero di elementi da inserire.\n");
	scanf("%2d", &n);

	Point s[n], p;

	riempiSequenza(s, n);

	p = centroide(s, n);

	printf("La coordinata del centroide e' (%.1f, %.1f)", ascissa(p), ordinata(p));
}

void usaCreatePoint() {
	Point p1, p2;

	p1 = createPoint(2.0, 3.0);
	p2 = createPoint(3.0, 5.0);

	printf("La distanze e' %.1f", distanza(p1, p2));
}