// A program to differentiate between call by value and call by reference

#include <stdio.h>
#include <conio.h>

void Call_Value(unsigned int);
void Call_Reference(unsigned int *);

void main()
{
    unsigned int n = 10;

    printf("Value of the variable 'n' is %u", n);

    Call_Value(n); // Passing the value of the variable

    printf("\n\n\tCall by value\n");
    printf("Value of the variable is %u", n);

    Call_Reference(&n); // Passing the address of the variable

    printf("\n\n\tCall by reference\n");
    printf("Value of the variable is %u", n); // Change in value is reflected here

    getch();
}

void Call_Value(unsigned int x)
{
    x += 110; // Increase the value by 110
}

void Call_Reference(unsigned int *y)
{
    *y += 110; // Change in value (increased by 110)
}