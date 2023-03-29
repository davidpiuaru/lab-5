#include <string.h>
#include <stdlib.h>
#include <stdio.h>

struct Modul
{
    char val;
    struct Model *next;
};

typedef struct Modul Node;

int isEmpty2(Node*top){
	return top==NULL;
}

char top(Node *top){
	if (isEmpty2(top)) return -1;
	return top->val;
} 

void push(Node**top, char v) {
	Node* newNode=(Node*)malloc(sizeof(Node));
	newNode->val=v;
	newNode->next=*top;
	*top=newNode;
}

char pop(Node**top) {
	if (isEmpty2(*top)) return -1;
	Node *temp=(*top); 		
	char aux=temp->val;	
	*top=(*top)->next;      		
	free(temp);
	return aux;
}
	
void deleteStack(Node**top){
	Node  *temp;
	while (!isEmpty2(*top)){
		temp=*top;
		*top=(*top)->next;
		free(temp);
	}
}
