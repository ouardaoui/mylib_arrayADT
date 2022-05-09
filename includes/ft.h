#ifndef FT_H
#define FT_H

typedef struct s_Array
{
    int size;
    int length;
    int *A;
} Array;

void append(Array *a, int x);
void reverse(Array *a);
void left_shift(Array *a);
void right_shift(Array *a);
void left_rotate(Array *a);
void right_rotate(Array *a);
void display(Array a);
void insert(Array *a, int x, int index);
void sort(Array *a);
int delete (Array *a, int index);
int search(Array a, int x);
int get(Array a, int index);
int set(Array *a, int x, int index);
int max(Array a);
int min(Array a);
int sum(Array *a);
int avg(Array a);
#endif