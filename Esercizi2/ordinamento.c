/**
 * C'è un indice che scandice gli elementi e c'è un altro indice che va dalla posizione
 * successiva a quella corrente fino alla fine.
 * Effettua il confronto e se minore del minimo lo scambia
 * Si cerca in pratica il minimo tra gli elementi ancora non ordinati e lo si scambia con il primo
 * degli elementi non ordinati
 */
void selectionSort(Item item[], int n) {
	for (int i = 0; i < n - 1; i++) {
		min = item[i];
		indiceMinimo = i;
		for (int j = i + 1; j < n; j++) {
			if (cmpItem(min, item[j]) > 0) {
				min = item[j];
				indiceMinimo = j;
			}
		}
		item[indiceMinimo] = item[i];
		item[i] = minimo;
	}
}

/**
 * Cerca l'elemento e si sposta indietro finchè non trova il posto giusto
 */
void insertionSort(Item item[], int n) {
	for (int i = 1; i < n; i++) {
		prossimo = item[i];
		j = i;
		while ((j > 0) && (item[j - 1] > prossimo)) {
			item[j] = item[j - 1];
			j--;
		}
		item[j] = prossimo;
	}
}

/**
 * Appena trova un elemento massimo lo porta avanti fino ad avere un ordinamento
 * verso la fine dell'array
 */
void bubbleSort(Item item, int n) {
	int i, j;

	for (i = 1; i < n; i++) {
		for (j = 0; j < n - i; j++) {
			if (item[j] > item[j + 1])
				swap(item[j], item[j + 1]);
		}
	}
}















