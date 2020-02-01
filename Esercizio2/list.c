#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "list.h"


struct list {
	int size;
	struct node *head;
	struct node *tail;
};

struct node {
	Item item;
	struct node *next;
};

List newList(){
	
	List list = malloc(sizeof(struct list));
	if (list == NULL){
		return NULL;
	}
	list->size = 0;
	list->head = NULL;
	list->tail = NULL;
	
	return list;
}

int isEmpty(List list){
	return list->head == NULL;
}

Item removeHead(List list){
	Item app;
	if(isEmpty(list)==1){
		fprintf(stderr,"Lista vuota");
		return NULL;
	}	
	struct node *temp = list->head;
	list->head = temp->next;
	app=temp->item;
	free(temp);
	list->size--;
	if (list -> size == 0)
		list -> tail = NULL;
	return app;
}

int addTail(List list, Item item){

	struct node *new = malloc(sizeof(struct node));
	if (new == NULL)
		return 0;
	new -> next = NULL;
	new -> item = item;	
	
	if (list->tail != NULL)
		list -> tail -> next = new;
	else
		list -> head = new;	
	list -> tail = new;
	
	list -> size++;
	return 1;
}

int sizeList(List list){
	return list->size;
}

void printList(List list){
	struct node *p;
	for(p = list->head; p != NULL; p = p->next)
		outputItem(p->item);
} 