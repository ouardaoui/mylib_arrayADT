#include "ft.h"
#include <stdio.h>

void display(Array a)
{
    int i;
    i = 0;
    printf("--------------------\n");
    while (i < a.length)
        printf("%d ", a.A[i++]);
    printf("\t length is %d", a.length);
    printf("\n--------------------\n");
}