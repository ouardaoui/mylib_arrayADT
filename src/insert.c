#include "ft.h"

void insert(Array *a, int x, int index)
{
    int i;
    if (index <= a->length && index >= 0)
        a->length++;
    i = a->length;
    {
        while (i > index)
        {
            a->A[i] = a->A[i - 1];
            i--;
        }
        a->A[index] = x;
    }
}