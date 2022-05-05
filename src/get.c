#include "ft.h"

int get(Array a, int index)
{
    if (index >= 0 && index < a.length)
        return a.A[index];
    else
        return -404;
}