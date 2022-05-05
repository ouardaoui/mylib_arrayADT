#include "ft.h"

int avg(Array a)
{
    int sum, i;
    i = 0;
    sum = 0;
    float avg;
    if (a.length == 0)
        return 0;
    while (i < a.length)
    {
        sum += a.A[i];
        i++;
    }
    avg = (float)sum / (a.length);
    return avg;
}