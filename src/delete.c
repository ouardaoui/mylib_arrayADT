#include <stdio.h>
#include "ft.h"

int delete (Array *a, int index)
{
    int x;
    x = 0;
    if (index <= a->length && index >= 0)
        x = a->A[index];
    {
        while (index <= a->length)
        {
            a->A[index] = a->A[index + 1];
            index++;
        }
        a->length--;
        return x;
    }
    return x;
}