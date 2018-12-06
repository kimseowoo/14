#include <stdio.h>
#include <stdlib.h>

typedef struct linknd{
	int data;
	
	void *next;
	//struct linknd *next 와 같음

} linknd_t;		

static linknd_t *list; 	//linked list 실체

linknd_t *create_node(int value){
	linknd_t *ndPtr;
	
	//동적 메모리 할당
	ndPtr = (linknd_t*)malloc( sizeof(linknd_t) );
	if (ndPtr == NULL)
	{
		printf("ERROR\n");
		return NULL;
	 } 
	 
	//정수값 저장 
	ndPtr->data = value;
	ndPtr->next = NULL;   	// 핵심 꼮 해야함 
	
	return ndPtr;
}



void addTail(int value){
	linknd_t *ndPtr, *newPtr;
	
	if(list == NULL)
	{
		return;
	}
	else
	{
		ndPtr = list;
		while (ndPtr->next != NULL){
			ndPtr = ndPtr-> next;
		}
		
		newPtr = create_node(value);
		ndPtr->next = newPtr;
	}
	
}

void genList(void){
	
	list = create_node(0);
	
	return;
}

void print_list(int n){
	linknd_t *ndPtr;
	int i=0;
	
	ndPtr = (linknd_t*)list ->next;
	while(ndPtr != NULL){
		i++;
		if(i ==n)
		{
			printf("%i-th value : %i\n", i, ndPtr -> data);
			break;
		}
		ndPtr = ndPtr->next;
			
	}
}
