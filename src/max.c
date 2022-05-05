#include "ft.h"

int max(Array a)
{
    int i, max;
    max = a.A[0];
    i = 0;
    while (i < a.length)
    {
        if (max < a.A[i])
            max = a.A[i];
        i++;
    }
    return max;
}