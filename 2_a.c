#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "cozi.h"

int main()
{
    int n, i,v;

    Queue *q;
    q=createQueue();


    printf("n=");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("val%d=", i+1);
        scanf("%d", &v);
        
        enQueue(q,v);
    }

    while(!isEmpty(q))
    {
        printf("%d", deQueue(q));
    }
}