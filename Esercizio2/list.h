#include "item.h"

typedef struct list *List;

List newList();
int isEmpty(List);
Item removeHead(List);
int sizeList(List);
void printList(List); 
int addTail(List, Item);
