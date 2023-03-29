#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "cozi.h"
#include "stive.h"

int main()
{
    int n, i,v;

    Queue *q;
    q=createQueue();

    Node *top=NULL;


    printf("n=");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("val%d=", i+1);
        scanf("%d", &v);
        
        enQueue(q,v);
    }

    for(i=0; i<n; i++)
    {
        push(&top, deQueue(q)); 
    }

    for(i=0; i<n; i++)
    {
         enQueue(q,pop(&top));
    }

    while(!isEmpty1(q))
    {
        printf("%d", deQueue(q));
    }
    
}