/**************************************************************/
//Analisi sui dati:
//  Dati in ingresso -> due interi
//  Dati in uscita -> i due interi in ingresso scambiati
//
// Dizionario dei dati:
//  size(puntatore ad intero) -> primo elemento da scambiare
//  m(puntatore ad intero) -> secondo elemento da scambiare
//  tmp(intero) -> variabile intera d'appoggio
/***************************************************************/
void swap(int *n, int *m);

/****************************************************************/
//Analisi sui Dati
//  Dati in ingresso -> array sequenza di interi di dimesione sieze
//    Precondizioe -> sieze > 0
//  Dati in uscita -> variabile min intera
//    Post condizione -> ∀ i appartenente [0, size-1], sequenza[min] <= sequenza[i]
/***************************************************************/
int minimo(int sequenza[], int size);
