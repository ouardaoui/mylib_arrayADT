#include "ft.h"

int sum(Array *a)
{
    int sum, i;
    i = 0;
    sum = 0;
    while (i < a->length)
    {
        sum += a->A[i];
        i++;
    }
    return sum;
}