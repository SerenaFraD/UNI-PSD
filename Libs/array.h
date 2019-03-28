#define SIZE 10

/*********************************************************/
//Analisi sui dati:
//  Dati in ingresso -> array sequenza di size interi
//    Precondizione ->size > 0
//  Dati in uscita -> array sequenza di size interi
//
//Dizionario dei dati:
//  sequenza(array) -> array di interi in input
//  size(intero) -> numero di elementi dell'array
//  i(intero) -> indice per lo scorrimento dell'array
/*********************************************************/
void inputArray(int sequenza[], int size);

int inputArrayString(int *sequenza, char *stringa);

/**************************************************************/
//Analis dei dati:
//  Dati in ingresso -> array sequenza di size interi
//    Precondizione -> *size > 0
//                  -> 0 < pos < *size
//  Dati in uscita -> array sequenza di size interi
//
//Dizionario dei dati:
//  sequenza(array) -> array di interi in input
//  *size(puntatore a intero) -> numero di elementi dell'array
//  i(intero) -> indice per lo scorrimento dell'array
//  ele(intero) -> intero da inserire in una posizione pos nell'inputArray
//  pos(intero) -> intero che indica la posizione in cui inserire l'elemento ele
/***************************************************************/
void insertArray(int sequenza[], int *size, int ele, int pos);

/**************************************************************/
//Analis dei dati:
//  Dati in ingresso -> array sequenza disizeinteri
//    Precondizione -> *size > 0
//  Dati in uscita -> array sequenza disizeinteri
//
//Dizionario dei dati:
//  sequenza(array) -> array di interi in input
//  *size(puntatore a intero) -> numero di elementi dell'array
//  i(intero) -> indice per lo scorrimento dell'array
//  ele(intero) -> intero da inserire in una posizione pos nell'inputArray
/***************************************************************/
void insertSortedArray(int sequenza[], int *size, int ele);

/*********************************************************/
//Analisi sui dati:
//  Dati in ingresso -> array sequenza di size interi
//    Precondizione -> size > 0
//  Dati in uscita -> array sequenza di size interi
//
//Dizionario dei dati:
//  sequenza(array) -> array di interi in input
//  size(intero) ->neumero di elementi dell'array
//  i(intero) -> indice per lo scorrimento dell'array
/*********************************************************/
void outputArray(int sequenza[], int size);

/**************************************************************/
//Analis dei dati:
//  Dati in ingresso -> array sequenza disizeinteri
//    Precondizione -> *size > 0
//  Dati in uscita -> array sequenza disizeinteri
//
//Dizionario dei dati:
//  sequenza(array) -> array di interi in input
//  *size(puntatore a intero) -> numero di elementi dell'array
//  i(intero) -> indice per lo scorrimento dell'array
//  ele(intero) -> intero da inserire in una posizione pos nell'inputArray
/***************************************************************/
void deleteArray(int sequenza[], int *size, int pos);

/*********************************************************/
//Analisi sui dati:
//  Dati in ingresso -> array sequenza di size interi
//    Precondizione -> size > 0
//  Dati in uscita -> elemento della sequenza selezionato casualmente
//
//Dizionario dei dati:
//  sequenza(array) -> array di interi in input
//  size(intero) -> numero di elementi dell'array
//  i(intero) -> indice per lo scorrimento dell'array
//  r(intero) -> numero casuale generato dalla funzione rand() % size;
/*********************************************************/
int shuffle(int sequenza[], int size);

/*********************************************************/
//Analisi sui dati:
//  Dati in ingresso -> array sequenza di size interi
//    Precondizione -> size > 0
//  Dati in uscita -> elemento della sequenza selezionato casualmente
//    Postcondizione -> intero appartenente alla sequenza
//
//Dizionario dei dati:
//  sequenza(array) -> array di interi in input
//  size(intero) -> numero di elementi dell'array
//  i(intero) -> indice per lo scorrimento dell'array
/*********************************************************/
int searchArray(int sequenza[], int size, int ele);

/*********************************************************/
//Analisi sui dati:
//  Dati in ingresso -> due array sequenza e sequenza1 di dimesione rispettivamente size1 e size2
//    Precondizione -> size1 == size2 && size1 > 0 U size2 > 0
//  Dati in uscita -> valore booleano sul confronto degli elementi degli array
//    Postcondizione -> valori interi 0 e 1
//
//Dizionario dei dati:
//  sequenza(array) -> array di interi in input
//  sequenza1(array) -> array di interi in input
//  size1 e size2(interi) -> interi contenenti la dimensione degli array
//  i(intero) -> indice per lo scorrimento dell'array
/*********************************************************/
int compareArray(int sequenza[], int sequenza1[], int size1, int size2);

/*********************************************************/
//Analisi sui dati:
//  Dati in ingresso -> array sequenza di dimesione size
//    Precondizione -> size1 > 0
//  Dati in uscita -> variabile sum della somma deglli elementi dell'array sequenza
//
//Dizionario dei dati:
//  sequenza(array) -> array di interi in input
//  size(interi) -> intero contenente la dimensione dell'array
//  i(intero) -> indice per lo scorrimento dell'array
/*********************************************************/
int sumArrayElements(int sequenza[], int size);

/*********************************************************/
//Analisi sui dati:
//  Dati in ingresso -> due array sequenza e sequenza1 di dimesione rispettivamente size1 e size2
//    Precondizione -> size1 == size2 && size1 > 0 U size2 > 0
//  Dati in uscita -> valore booleano sul confronto degli elementi degli array e array result
//    Postcondizione -> valori interi 0 e 1, ∀ i appartenente [0, size-1] di result non vuoti
//
//Dizionario dei dati:
//  sequenza(array) -> array di interi in input
//  sequenza1(array) -> array di interi in input
//  result(array)  -> array di interi in output contente la somma degli elementi degli array ∀ i appartenente [0, size-1]
//  size1 e size2(interi) -> interi contenenti la dimensione degli array
//  i(intero) -> indice per lo scorrimento dell'array
/*********************************************************/
int sumArrayByElement(int sequenza1[], int sequenza2[], int size1, int size2, int result[]);

/*********************************************************/
//Analisi sui dati:
//  Dati in ingresso -> due array sequenza e sequenza1 di dimesione rispettivamente size1 e size2
//    Precondizione -> size1 == size2 && size1 > 0 U size2 > 0
//  Dati in uscita -> valore booleano sul confronto degli elementi degli array e sca
//    Postcondizione -> valori interi 0 e 1
//
//Dizionario dei dati:
//  sequenza(array) -> array di interi in input
//  sequenza1(array) -> array di interi in input
//  sca(intero)  -> intero in output contente lo scalare degli elementi degli array ∀ i appartenente [0, size-1]
//  size1 e size2(interi) -> interi contenenti la dimensione degli array
//  i(intero) -> indice per lo scorrimento dell'array
/*********************************************************/
int scalareArray(int sequenza1[], int sequenza2[], int size1, int size2);

/*********************************************************/
//Analisi sui dati:
//  Dati in ingresso -> array sequenza di size interi
//    Precondizione -> size > 0
//  Dati in uscita -> elemento della sequenza selezionato casualmente
//    Postcondizione -> intero appartenente alla sequenza
//
//Dizionario dei dati:
//  sequenza(array) -> array di interi in input
//  size(intero) -> numero di elementi dell'array
//  i(intero) -> indice per lo scorrimento dell'array
/*********************************************************/
int minimumArray(int sequenza[], int size);

/*******************************************************************/
//Analisi sui dati:
//  Dati in ingresso -> array sequenza di size interi
//    Precondizione -> size > 0
//  Dati in uscita -> array sequenza di size interi
//    Postcondizione -> array sequenza in output è una permutazione di sequenza
//      dove ∀ i appartenente [0, size-2], sequenza[i] <= sequenza[i + 1]
//
//Dizionario dei dati:
//  sequenza(array) -> array di interi in input
//  size(intero) -> numero di elementi dell'array
//  i(intero) -> indice per lo scorrimento dell'array
/*******************************************************************/
void selectionSort(int sequenza[], int size);

/*******************************************************************/
//VERSIONE NON ADATTIVA
//Analisi sui dati:
//  Dati in ingresso -> array sequenza di size interi
//    Precondizione -> size > 0
//  Dati in uscita -> array sequenza di size interi
//    Postcondizione -> array sequenza in output è una permutazione di sequenza
//      dove ∀ i appartenente [0, size-1], ∀ j appartenente [0, size-1-i] , sequenza[j] <= sequenza[j + 1]
//
//Dizionario dei dati:
//  sequenza(array) -> array di interi in input
//  size(intero) -> numero di elementi dell'array
//  i(intero) -> indice per lo scorrimento dell'array
/*******************************************************************/
void bubbleSort(int sequenza[], int size);

/*******************************************************************/
//VERSIONE ADATTIVA
//Analisi sui dati:
//  Dati in ingresso -> array sequenza di size interi
//    Precondizione ->  size > 0
//  Dati in uscita -> array sequenza di size interi
//    Postcondizione -> array sequenza in output è una permutazione di sequenza
//      dove ∀ i appartenente [0, size-1], ∀ j appartenente [0, size-1-i] , sequenza[j] <= sequenza[j + 1]
//
//Dizionario dei dati:
//  sequenza(array) -> array di interi in input
//  size(intero) -> numero di elementi dell'array
//  i(intero) -> indice per lo scorrimento dell'array
/*******************************************************************/
void adaptiveBubbleSort(int sequenza[], int size);
