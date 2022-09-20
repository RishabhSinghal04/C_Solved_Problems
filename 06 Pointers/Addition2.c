// A program to add two numbers using call by reference

#include <stdio.h>
#include <conio.h>

long add(int *, int *);

void main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nSum of %d and %d is %ld", num1, num2, add(&num1, &num2));

    getch();
}

long add(int *ptr_num1, int *ptr_num2)
{
    return *ptr_num1 + *ptr_num2;
}