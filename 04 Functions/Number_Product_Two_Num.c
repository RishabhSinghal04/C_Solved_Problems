/**
Express a number as the product of two numbers.
20 = 1 X 20, 2 X 10, 4 X 5
**/

#include <stdio.h>
#include <conio.h>

void NumberProductTwoNumbers(unsigned long long);

void main()
{
    unsigned long long num;

    printf("Enter a number: ");
    scanf("%llu", &num);

    NumberProductTwoNumbers(num);

    getch();
}

void NumberProductTwoNumbers(unsigned long long num)
{
    for (int i = 1; i <= num / i; ++i)
    {
        if (num % i == 0)
        {
            if (i * (num / i) == num)
            {
                printf("%u X %u = %llu\n", i, num / i, num);
            }
        }
    }
}