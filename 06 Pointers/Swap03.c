// A program to swap the values of three numbers

#include <stdio.h>
#include <conio.h>

void swap(int *, int *, int *);

void main()
{
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("\nBefore Swaping:-\nVariable 'A' = %d\nVariable 'B' = %d\nVariable 'C' = %d", num1, num2, num3);

    swap(&num1, &num2, &num3);

    printf("\nAfter Swaping:-\nVariable 'A' = %d\nVariable 'B' = %d\nVariable 'C' = %d", num1, num2, num3);

    getch();
}

void swap(int *a, int *b, int *c)
{
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}