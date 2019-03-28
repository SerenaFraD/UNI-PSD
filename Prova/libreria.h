/**************************************************************/
//Dizionario dei dati:
//  n (puntatore ad intero) -> primo elemento da scambiare
//  m (puntatore ad intero) -> secondo elemento da scambiare  //
//  tmp (intero) -> variabile intera d'appoggio
//
//Analisi sui dati:
//  Dati in ingresso -> due interi
//  Dati in uscita -> i due interi in ingresso scambiati
/***************************************************************/
void swap(int *n, int *m);

/****************************************************************/
//Analisi sui Dati
//  Dati in ingresso -> array sequenza di interi di dimesione n
//    Precondizioe -> n > 0
//  Dati in uscita -> variabile min intera
//    Post condizione -> ∀ i appartenente [0, n-1], sequenza[min] <= sequenza[i]
int minimo(int sequenza[], int n);

/*******************************************************************/
//Analisi sui dati:
//  Dati in ingresso -> array sequenza di n interi
//    Precondizione -> n > 0
//  Dati in uscita -> array sequenza di n interi
//    Postcondizione -> array sequenza in output è una permutazione di sequenza
//      dove ∀ i appartenente [0, n-2], sequenza[i] <= sequenza[i + 1]
//
//Dizionario dei dati:
//  sequenza(array) -> sequenza intera in input
//  n(intero) -> numero di elementi dell'array
//  i(intero) -> indice per lo scorrimento dell'array
/*******************************************************************/
void selectionSort(int sequenza[], int n);

/*********************************************************/
//Analisi sui dati:
//  Dati in ingresso -> array sequenza di n interi
//    Precondizione -> n > 0
//  Dati in uscita -> array sequenza di n interi
//
//Dizionario dei dati:
//  sequenza(array) -> sequenza intera in input
//  n(intero) -> numero di elementi dell'array
//  i(intero) -> indice per lo scorrimento dell'array
/*********************************************************/
void inputArray(int sequenza[], int n);

/*********************************************************/
//Analisi sui dati:
//  Dati in ingresso -> array sequenza di n interi
//    Precondizione -> n > 0
//  Dati in uscita -> array sequenza di n interi
//
//Dizionario dei dati:
//  sequenza(array) -> sequenza intera in input
//  n(intero) -> numero di elementi dell'array
//  i(intero) -> indice per lo scorrimento dell'array
/*********************************************************/
void outputArray(int sequenza[], int n);
