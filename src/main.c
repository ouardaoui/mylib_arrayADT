#include <stdio.h>
#include <stdlib.h>
#include "ft.h"

int main()
{
    int select;
    int i, x, ele;
    select = -1;
    Array arr;
    printf("enter size of your array : ");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(sizeof(int) * arr.size);
    if (!arr.A)
        return 0;
    arr.length = 0;
    while (select != 0)
    {
        printf("----------------------------------------------------\n");
        printf("1- press 1 to add  \n");
        printf("2- press 2 to display  \n");
        printf("3- press 3 to insert  \n");
        printf("4- press 4 for delete element \n");
        printf("5- press 5 for sort \n");
        printf("6- press 6 for search \n");
        printf("7- press 7 to get element\n");
        printf("8- press 8 to set element \n");
        printf("9- press 9 to get max\n");
        printf("10- press 10 to get min\n11- press11 to get sum\n12- press 12 to get average\n");
        printf("0 to exit\n");
        scanf("%d", &select);
        if (select == 1)
        {
            i = 0;
            printf("how many element you want add ? \n");
            scanf("%d", &x);
            while (i < x)
            {
                printf("\nadd element index of %d : ", i + 1);
                scanf("%d", &ele);
                append(&arr, ele);
                i++;
            }
        }
        if (select == 2)
            display(arr);
        if (select == 3)
        {
            printf("enter  index \n");
            scanf("%d", &i);
            printf("enter element\n");
            scanf("%d", &x);
            insert(&arr, x, i);
        }
        if (select == 4)
        {
            printf("enter index \n");
            scanf("%d", &i);
            x = delete (&arr, i);
            printf("--------------------\n");
            printf("removed element is : %d\n", x);
            printf("\n--------------------\n");
        }
        if (select == 5)
            sort(&arr);
        if (select == 6)
        {
            printf("enter which element you lock for\n");
            scanf("%d", &x);
            i = search(arr, x);
            if (i == -404)
            {
                printf("--------------------\n");
                printf("element not exist\n");
                printf("\n--------------------\n");
            }
            else
            {
                printf("--------------------\n");
                printf("index of element is %d\n", i);
                printf("\n--------------------\n");
            }
        }
        if (select == 7)
        {
            printf("put index to get element\n");
            scanf("%d", &i);
            x = get(arr, i);
            if (x == -404)
            {
                printf("--------------------\n");
                printf("put a valide index \n");
                printf("\n--------------------\n");
            }
            else
            {
                printf("--------------------\n");
                printf("element of index %d is : %d\n", i, x);
                printf("\n--------------------\n");
            }
        }
        if (select == 8)
        {
            printf("enter  index \n");
            scanf("%d", &i);
            printf("enter element\n");
            scanf("%d", &x);
            x = set(&arr, x, i);
            if (x == -404)
            {
                printf("--------------------\n");
                printf("put a valid index \n");
                printf("\n--------------------\n");
            }
            else
            {
                printf("--------------------\n");
                printf("%d\n", x);
                printf("\n--------------------\n");
            }
        }
        if (select == 9)
        {
            x = max(arr);
            printf("--------------------\n");
            printf("max is %d\n", x);
            printf("\n--------------------\n");
        }
        if (select == 10)
        {
            x = min(arr);
            printf("--------------------\n");
            printf("max is %d\n", x);
            printf("\n--------------------\n");
        }
        if (select == 11)
        {
            x = sum(&arr);
            printf("--------------------\n");
            printf("sum is %d\n", x);
            printf("\n--------------------\n");
        }
        if (select == 12)
        {
            x = avg(arr);
            printf("--------------------\n");
            printf("average is %d\n", x);
            printf("\n--------------------\n");
        }
        if (select > 12 && select < 0)
            break;
    }
}