#include "ft.h"

int set(Array *a, int x, int index)
{
    if (index < 0 || index > a->length)
        return -404;
    else
        insert(a, x, index);
    return x;
}