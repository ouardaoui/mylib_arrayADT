#include "ft.h"

void reverse(Array *a)
{
    int i;
    int tmp;
    i = 0;
    while (i < (a->length) / 2)
    {
        tmp = a->A[i];
        a->A[i] = a->A[a->length - i - 1];
        a->A[a->length - i - 1] = tmp;
        i++;
    }
}