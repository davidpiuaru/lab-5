#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct Modul Node;
typedef struct Q Queue;

Queue* createQueue();
void enQueue(Queue*q, int v);
int deQueue(Queue*q);
int isEmpty1(Queue*q);
void deleteQueue(Queue*q);