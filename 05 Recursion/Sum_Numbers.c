// A program to print the sum of numbers from 1 to n.

#include <stdio.h>
#include <conio.h>

unsigned int SumNumbers(unsigned short);

void main()
{
    unsigned short n;

    printf("Enter range: ");
    scanf("%hu", &n);

    printf("Sum of numbers from 1 to %hu is %u", n, SumNumbers(n));

    getch();
}

unsigned int SumNumbers(unsigned short n)
{
    if (n == 1)
    {
        return 1;
    }

    return n + SumNumbers(n - 1);
}