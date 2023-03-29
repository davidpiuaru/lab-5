#include <string.h>
#include <stdlib.h>
#include <stdio.h>
struct Modul
{
    int val;
    struct Model *next;
};

typedef struct Modul Node;

struct Q
{
	Node *front ,*rear;
};

typedef struct Q Queue;

int isEmpty1(Queue*q){
	return (q->front==NULL);
}

Queue* createQueue(){
	Queue *q;
	q=(Queue *)malloc(sizeof(Queue));
	if (q==NULL) return NULL;	
	q->front=q->rear=NULL;
	return q;	
}

 void enQueue(Queue*q, int v){
	Node* newNode=(Node*)malloc(sizeof(Node));
	newNode->val=v;
	newNode->next=NULL;
	if (q->rear==NULL) q->rear=newNode; 
	else{
		(q->rear)->next=newNode;
		(q->rear)=newNode;
	}
	if (q->front==NULL) q->front=q->rear; 
}
 
int deQueue(Queue*q) 
{  
	Node* aux; int d;
	if (isEmpty1(q)) return -1;
	
	aux=q->front; 
	d=aux->val;
	q->front=(q->front)->next;
	free(aux);
	return d;  	
} 



void deleteQueue(Queue*q){
	Node* aux;
	while (!isEmpty1(q)){
		aux=q->front;
		q->front=q->front->next;
		free(aux);
	}
	free(q);
}	
