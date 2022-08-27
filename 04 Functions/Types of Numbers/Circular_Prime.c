/**
A circular prime number is one that remains a prime number after repeatedly relocating the first digit of the number to the end of the number.
For example, 197, 971 and 719 are all prime numbers.
Similarly, 1193, 1931, 9311 and 3119 are all prime numbers.
Other numbers that satisfy the definition are 11, 13, 37, 79, 113, 199 and 337.
**/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

typedef unsigned long ul;

bool isPrimeNumber(ul);
bool isCircularPrimeNumber(ul);

void main()
{
    ul num;

    printf("Enter a number: ");
    scanf("%lu", &num);

    // First check for Prime Number and then check for Circular Prime Number
    isPrimeNumber(num) ? (isCircularPrimeNumber(num) ? printf("%lu is a Circular Prime Number", num) : printf("%lu is only a Prime Number", num)) : printf("%lu is not a Prime Number", num);

    getch();
}

bool isPrimeNumber(ul num)
{
    // Process to check Prime Number
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
        for (int i = 5; i * i <= num; i += 6)
        {
            if (num % i == 0 || num % (i + 2) == 0)
            {
                return false;
            }
        }
    }
    return true;
}

bool isCircularPrimeNumber(ul num)
{
    unsigned short result = 1, first_digit, num_digits = (short)log10(num) + 1; // Store total number of digits in 'num'.
    ul temp = num;

    // Process to check Circular Prime Number
    for (int i = 1; i < num_digits; ++i)
    {
        first_digit = temp / (long)(pow(10, num_digits - 1) + 1e-9);
        temp = temp % (long)(pow(10, num_digits - 1) + 1e-9);

        if (!isPrimeNumber(temp))
        {
            result = 0;
            break;
        }
    }
    return (result == 1) ? true : false;
}