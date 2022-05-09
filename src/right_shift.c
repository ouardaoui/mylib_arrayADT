#include "ft.h"

void right_shift(Array *a)
{
    int i;
    if (a->length == 0)
        a->A[0] = 0;
    i = 0;
    while (i < a->length - 1)
    {
        a->A[a->length - 1 - i] = a->A[a->length - 2 - i];
        i++;
    }
    a->A[0] = 0;
}