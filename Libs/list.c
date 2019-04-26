#include "list.h"
#include "item.h"

#define EMPTY_LIST_ERROR fprintf(stderr, "ERRORE: Lista vuota.\n");
#define OUT_OF_BOUNDS_ERROR fprintf(stderr, "ERRORE: Posizione inserita non rientra nei limiti.\n");

typedef struct node *Node;

struct list {
		int size;
		Node head;
};

struct node {
		Item item;
		struct node *next;
};

List newList() {
	List list = malloc(sizeof(struct list));

	list->size = 0;
	list->head = NULL;

	return list;
}

int isEmpty(List list) {
	return list->head == NULL;
}

void addHead(List list, Item item) {
	Node newNode = malloc(sizeof(struct node));

	newNode->next = list->head;
	newNode->item = item;
	list->head = newNode;
	list->size++;
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

Node minimo(Node node) {
	Node n, min = node;

	for (n = node->next; n != NULL; n = n->next) {
		if (cmpItem(min->item, n->item) > 0) {
			min = n;
		}
	}

	return min;
}

void sortedList(List list) {
	Node n, min;
	Item tmp;

	for (n = list->head; n != NULL; n = n->next) {
		min = minimo(n);
		swap(&n->item, &min->item);
	}
}

void bubbleSortList(List list) {
	Node n, m;

	for (n = list->head->next; n != NULL; n = n->next) {
		for (m = list->head; m->next != NULL; m = m->next) {
			if (cmpItem(m->item, m->next->item) > 0) {
				swap(m->item, m->next->item);
			}
		}
	}
}

Item searchList(List list, Item item, int *pos) {
	Node n;
	*pos = 0;

	for (n = list->head; n != NULL; n = n->next) {
		if (cmpItem(item, n->item) == 0) {
			return n->item;
		}
		(*pos)++;
	}

	*pos = -1;

	return NULL;
}

Item removeListItem(List list, Item item) {
	Node n, pre;
	Item it;

	if (isEmpty(list)) {
		EMPTY_LIST_ERROR;
		return NULL;
	}

	for (n = list->head; n != NULL; pre = n, n = n->next) {
		if (cmpItem(item, n->item) == 0) {
			if (n == list->head) {
				return removeHead(list);
			} else {
				pre->next = n->next;
				it = n->item;
				free(n);
				list->size--;
				return it;
			}
		}
	}
	return NULL;
}

Item removeListItemPos(List list, int pos) {
	Node n, pre;
	Item it;
	int i = 0;

	if (isEmpty(list)) {
		EMPTY_LIST_ERROR;
		return NULL;
	}

	if (pos < 0 || pos > sizeList(list)) {
		OUT_OF_BOUNDS_ERROR;
		return NULL;
	}

	for (n = list->head; n != NULL; pre = n, n = n->next, i++) {
		if (i == pos) {
			if (pos == 0) {
				return removeHead(list);
			} else {
				pre->next = n->next;
				it = n->item;
				free(n);
				list->size--;
				return it;
			}
		}
	}

	return NULL;
}

List insetItem(List list, Item item, int pos) {
	Node n, newNode = malloc(sizeof(struct node));
	int i = 0;

	if (pos < 0 || pos > sizeList(list)) {
		OUT_OF_BOUNDS_ERROR;
		return NULL;
	}

	if (pos == 0) {
		addHead(list, item);
	} else {
		for (n = list->head; n != NULL && i < pos - 1; n = n->next, i++);
		if (i <= pos - 1) {
			newNode->item = item;
			newNode->next = n->next;
			n->next = newNode;
			list->size++;
		}
	}

	return list;
}

List insertTail(List list, Item item) {
	return insetItem(list, item, sizeList(list));
}

List cloneList(List list) {
	Node n, newNode;
	List list1 = newList();

	if (isEmpty(list)) {
		return list1;
	}

	for (n = list->head; n != NULL; n = n->next) {
		newNode = malloc(sizeof(struct node));

		newNode->item = cloneItem(n->item);
		insertTail(list1, newNode->item);
	}

	return list1;
}

List reverseList(List list) {
	Node pre = NULL, n, tmp;

	for (n = list->head; n->next != NULL; n = tmp) {
		tmp = n->next;
		n->next = pre;
		pre = n;
	}

	n->next = pre;
	list->head = tmp;

	return list;
}
