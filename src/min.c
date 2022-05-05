#include "ft.h"

int min(Array a)
{
    int i, min;
    min = a.A[0];
    i = 0;
    while (i < a.length)
    {
        if (min > a.A[i])
            min = a.A[i];
        i++;
    }
    return min;
}