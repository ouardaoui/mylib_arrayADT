#ifndef FT_H
#define FT_H

typedef struct s_Array
{
    int size;
    int length;
    int *A;
} Array;

void append(Array *a, int x);
void display(Array a);
void insert(Array *a, int x, int index);
void sort(Array *a);
int delete (Array *a, int index);
int search(Array a, int x);

#endif