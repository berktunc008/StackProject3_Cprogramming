#include <stdio.h>
#include <stdlib.h>
#include<iostream>

struct Node
{
	int data ;
	struct Node* next;
};


void push(struct Node **top, int x)
{
	struct Node * node=NULL;
	node=(struct Node*) malloc(sizeof(struct Node));
	
	
	if(!node)
	{
		printf("\n Heap overflow");
		exit(1);
	}
	
	
	printf("insert %d \n" ,x);
	
	node->data=x;
	node->next= *top;
	*top=node;
	
}


int isEmpty(struct Node* top){
	
	return top==NULL;
}


int peek(struct Node* top)
{
	if(!isEmpty(top))
	return top->data;
	
	else
	exit(EXIT_FAILURE);
	
}


void pop(struct Node** top)
{
	struct Node * node;
	
	if(*top==NULL)
	{
		printf("\n stack overflow");
		exit(1);
	}
	
	printf("%d -- ", peek(*top));
	
	node= *top;
	
	*top=(*top)->next;
	
	free(node);
}

int main(void){
	struct Node *top =NULL;
	
	
	push(&top,55);
	push(&top,34);
	push(&top,42);
	push(&top,25);
	push(&top,98);
	push(&top,75);
	push(&top,40);
	push(&top,15);
	push(&top,20);
	push(&top,50);
	
	
	pop(&top);
	pop(&top);
	pop(&top);
	pop(&top);
	pop(&top);
	pop(&top);
	pop(&top);
	pop(&top);
	pop(&top);
	pop(&top);
	
	system("pause");
	
}






