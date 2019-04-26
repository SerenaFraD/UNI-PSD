/**********************************************************************************************
Sintattica                            Semantica
nome del tipo: List;                  Dominio: Insieme di sequenza [a1, ..., an] di tipo Item
tipo di dati usati: item, boolean;    l'elemento nil rappresenta la lista vuota

newList() -> List;											newList() -> list;
																					•Post: list = nil

addHead(List, Item) -> void	;						addHead(list, item) -> void;
																					•Post: list->size++;

removeHead(List, Item) -> void	;						addHead(list, item) -> void;
																					•Post: list->size++;

isEmpty(List) -> boolean;								isEmpty(list) -> b;
																					•Post: se list = nil allora b = true, altrimenti b = false
**********************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "item.h"

typedef struct list *List;

List newList();
void addHead(List, Item);
Item removeHead(List);
int isEmpty(List);
int sizeList(List);
void printList(List);
void bubbleSortList(List);
Item searchList(List, Item, int *);
Item removeListItem(List, Item);
Item removeListItemPos(List, int);
List insertTail(List, Item);