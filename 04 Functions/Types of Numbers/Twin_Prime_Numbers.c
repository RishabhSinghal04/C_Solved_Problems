/**
Two prime numbers differing by 2 are called twin primes.
Examples are 3 - 5, 5 - 7, 11 - 13, 17 - 19, 659 - 661, 2687 - 2689, and 1000000009649 - 1000000009651, etc.
**/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

bool isPrimeNumber(unsigned long long);
bool areTwinPrimeNumbers(unsigned long long, unsigned long long);

void main()
{
    unsigned long long num1, num2;

    printf("Enter two numbers: ");
    scanf("%llu %llu", &num1, &num2);

    areTwinPrimeNumbers(num1, num2) ? printf("%llu and %llu are Twin Prime Numbers", num1, num2) : printf("%llu and %llu are not Twin Prime Numbers", num1, num2);

    getch();
}

bool areTwinPrimeNumbers(unsigned long long num1, unsigned long long num2)
{
    return (isPrimeNumber(num1) && isPrimeNumber(num2) && abs(num2 - num1) == 2) ? true : false;
}

bool isPrimeNumber(unsigned long long num)
{
    if (num < 2)
    {
        return false;
    }
    else if (num < 4 || num == 5 || num == 7)
    {
        return true;
    }
    else if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0)
    {
        return false;
    }
    else
    {
        for (int i = 11; i * i <= num; i += 6)
        {
            if (num % i == 0 || num % (i + 2) == 0)
            {
                return false;
            }
        }
        return true;
    }
}