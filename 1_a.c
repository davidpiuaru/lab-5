#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "stive.h"

int main()
{
    int n, i;
    char a;
    Node *top=NULL;

    printf("n=");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("caracter%d=", i+1);
        scanf("%c", &a);
        scanf("%c", &a);

        push(&top, a);
    }

    // for(i=0; i<n; i++)
    // {
    //     printf("%c\n", pop(&top));
    // }

    while(top!=NULL)
    {
        printf("%c\n", pop(&top));
    }
}