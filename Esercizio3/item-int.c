#include<stdio.h>
#include<stdlib.h>
#include"item.h"


Item inputItem(){
	int *pt ;
	pt = malloc(sizeof(int));
	
	scanf("%d",pt);
	return pt;
}

void outputItem(Item it){
	int *pt = it;
	
	printf("%d ",*pt);
}

int cmpItem(Item it1, Item it2){
	
	int *pt1 = it1;
	int *pt2 = it2;
	
	if( *pt1 < *pt2) return -1;
	else if( *pt1 == *pt2) return 0;
	else return 1;
}