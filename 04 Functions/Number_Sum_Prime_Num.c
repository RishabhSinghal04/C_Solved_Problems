/**
Express a number as the sum of two Prime Numbers.
24 : 5 + 19 = 24, 7 + 17 = 24 and 11 + 13 = 24
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool isPrimeNumber(unsigned long long);
void NumberSumTwoPrimeNumbers(unsigned long long);

void main()
{
    unsigned long long num;

    printf("Enter a number: ");
    scanf("%llu", &num);

    NumberSumTwoPrimeNumbers(num);

    getch();
}

bool isPrimeNumber(unsigned long long num)
{
    if (num <= 1)
    {
        return false;
    }
    else if (num < 4)
    {
        return true;
    }
    else if (num % 2 == 0 || num % 3 == 0)
    {
        return false;
    }
    else
    {
        for (long i = 5; i * i <= num; i += 6)
        {
            if (num % i == 0 || num % (i + 2) == 0)
            {
                return false;
            }
        }
    }
    return true;
}

void NumberSumTwoPrimeNumbers(unsigned long long num)
{
    for (long i = 1; i <= num / 2; ++i)
    {
        if (isPrimeNumber(i) && isPrimeNumber(num - i))
        {
            if (i + (num - i) == num)
            {
                printf("%lu + %lu = %llu\n", i, num - i, num);
            }
        }
    }
}