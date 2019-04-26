#include "list.h"
#include "item.h"

#define EMPTY_LIST_ERROR fprintf(stderr, "ERRORE: Lista vuota.\n");
#define OUT_OF_BOUNDS_ERROR fprintf(stderr, "ERRORE: Posizione inserita non rientra nei limiti.\n");

typedef struct node *Node;

struct list {
		int size;
		Node head;
		Node tail;
};

struct node {
		Item item;
		struct node *next;
};

List newList() {
	List list = malloc(sizeof(struct list));

	list->size = 0;
	list->head = NULL;
	list->tail = NULL;

	return list;
}

int isEmpty(List list) {
	return list->head == NULL;
}

Item removeHead(List list) {

	if (isEmpty(list)) {
		EMPTY_LIST_ERROR;
		return NULL;
	}

	Node n = list->head;
	Item it = n->item;
	list->head = n->next;
	list->size--;

	if (list->size == 0) {
		list->tail = NULL;
	}

	free(n);

	return it;
}

void printList(List list) {
	Node n;

	for (n = list->head; n != NULL; n = n->next) {
		outputItem(n->item);
	}

	printf("\n");
}

int sizeList(List list) {
	Node n;
	int i = 0;

	for (n = list->head; n != NULL; n = n->next) {
		i++;
	}

	return i;
}

int addListTail(List list, Item item) {
	Node n, newNode = malloc(sizeof(struct node));
	int i = 0;

	newNode->item = item;
	newNode->next = NULL;

	if (!list->size) {
		list->head = newNode;
	} else {
		list->tail->next = newNode;
	}

	list->tail = newNode;
	n->next = newNode;
	list->size++;

	return 1;
}
