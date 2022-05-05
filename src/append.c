#include "ft.h"

void append(Array *a, int x)
{
    if (a->length < a->size)
        a->A[a->length++] = x;
}