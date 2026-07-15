#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a[100], i, n, item, loc, e;
    printf("Enter Number of Elements you want to input :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Insert input Location :");
    scanf("%d", &loc);
    printf("Insert input value :");
    scanf("%d", &item);

    if (loc < n)
    {

        for (int i = n; i >= loc; i--)
        {
            a[i] = a[i - 1];
        }
    }
    a[loc] = item;
    n = n + 1;

    printf("New Value = \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nEnter 1 to continue or any value to continue !!");
    scanf("%d", &e);

    if (e != 1)
    {
        return 0;
    }

    return 0;
}