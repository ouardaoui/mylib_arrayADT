#include "ft.h"

// using linear  search

int search(Array a, int x)
{
    int i = 0;
    while (i < a.length)
    {
        if (a.A[i] == x)
            return i;
        i++;
    }
    return -404;
}
