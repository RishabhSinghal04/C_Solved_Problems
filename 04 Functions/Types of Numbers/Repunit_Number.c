/**
A repunit number is one consisting of a continuous string of "n" ones in a specific base.
11,111 and 111,111,111,111 are simple examples.
Repunits in base 10 with n = 2, 19, 23, 317, and 1031 are prime numbers
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool isRepunitNumber(unsigned long long, unsigned short);

void main()
{
    unsigned int num, base;

    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Enter a base: ");
    scanf("%u", &base);

    isRepunitNumber(num, base) ? printf("%llu is a Repunit Number", num) : printf("%llu is not a Repunit Number", num);

    getch();
}

bool isRepunitNumber(unsigned long long num, unsigned short base)
{
    while (num > 0)
    {
        if (num % base == 1)
        {
            num /= base;
        }
        else
        {
            return false;
        }
    }
    return true;
}