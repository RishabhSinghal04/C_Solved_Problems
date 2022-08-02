/**
Write a program to print those integers between 1 to n which are divisible by m. 
Also print whether the number that is divisible by m is even or odd. 
Input n as last limit and m as divisor.
**/
#include <stdio.h>
#include <conio.h>

void main()
{
    int m, n;

    printf("Enter range: ");
    scanf("%u", &n);

    printf("Enter divisor: ");
    scanf("%d", &m);

    for (int i = 1; i <= n; ++i)
    {
        if (i % m == 0)
        {
            if (i % 2 == 0)
            {
                printf("%4u which is an even number is divisible by %d\n", i, m);
            }
            else
            {
                printf("%4u which is an odd number is divisible by %d\n", i, m);
            }
        }
    }

    getch();
}