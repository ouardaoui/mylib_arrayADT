#include "ft.h"

void left_shift(Array *a)
{
    int i;
    if (a->length == 0)
        a->A[0] = 0;
    i = 0;
    while (i < a->length - 1)
    {
        a->A[i] = a->A[i + 1];
        i++;
    }
    a->A[a->length - 1] = 0;
}