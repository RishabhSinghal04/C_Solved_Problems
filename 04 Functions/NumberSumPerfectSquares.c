/**

**/

#include <stdio.h>
#include <conio.h>
#include <math.h>

void NumberSumPerfectSquares(unsigned long long);

void main()
{
    unsigned long long num;

    printf("Enter a number: ");
    scanf("%llu", &num);

    NumberSumPerfectSquares(num);

    getch();
}

void NumberSumPerfectSquares(unsigned long long num)
{
    for (int i = 1; i <= (int)sqrt(num); ++i)
    {
        for (int j = i; j <= (int)sqrt(num); ++j)
        {
            if (i * i + j * j == num)
            {
                printf("%llu = %u^2 + %u^2\n", num, i, j);
            }
        }
    }
}