#include <ft.h>
// using bubble sort
void sort(Array *a)
{
    int i, j;
    int tmp;
    j = a->length - 1;
    while (j != 0)
    {
        i = 0;
        while (i < j)
        {
            if (a->A[i] > a->A[i + 1])
            {
                tmp = a->A[i];
                a->A[i] = a->A[i + 1];
                a->A[i + 1] = tmp;
            }
            i++;
        }
        j--;
    }
}
