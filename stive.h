#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct Modul Node;

char top(Node *top);
void push(Node**top, char v);
char pop(Node**top);
int isEmpty2(Node*top);
void deleteStack(Node**top);