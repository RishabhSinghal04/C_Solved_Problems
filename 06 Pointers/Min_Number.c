// A program to find the minimun number.

#include <stdio.h>
#include <conio.h>

int minNumber(int *, int *, int *, int *);

void main()
{
    int num1, num2, num3, num4;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    printf("Minimum among %d, %d, %d and %d is %d", num1, num2, num3, num4, minNumber(&num1, &num2, &num3, &num4));

    getch();
}

int minNumber(int *a, int *b, int *c, int *d)
{
    if (*a < *b && *a < *c && *a < *d)
    {
        return *a;
    }
    else if (*b < *a && *b < *c && *b < *d)
    {
        return *b;
    }
    else if (*c < *a && *c < *b && *c < *d)
    {
        return *c;
    }
    else
    {
        return *d;
    }
}