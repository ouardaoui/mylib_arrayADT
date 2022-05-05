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
        printf("1- press 1 to add  \n");
        printf("2- press 2 to display  \n");
        printf("3- press 3 to insert  \n");
        printf("4- press 4 for delete element \n");
        printf("5- press 5 for sort \n");
        printf("6- press 6 for search \n");
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
            printf("removed element is : %d\n", x);
        }
        if (select == 5)
            sort(&arr);
        if (select == 6)
        {
            printf("enter which element you lock for\n");
            scanf("%d", &x);
            i = search(arr, x);
            if (i == -404)
                printf("element not exist\n");
            else
                printf("index of element is %d\n", i);
        }
    }
}