// A program to calculate base raised to the nth power.

#include <stdio.h>
#include <conio.h>

unsigned long long powerNumber(unsigned short, unsigned short);

void main()
{
    unsigned short base, exponent;

    printf("Enter base: ");
    scanf("%hu", &base);

    printf("Enter exponent: ");
    scanf("%hu", &exponent);

    (exponent > 10) ? printf("Exponent %hu is too big", exponent) : printf("Result of %hu ^ %hu is %llu", base, exponent, powerNumber(base, exponent));

    getch();
}

unsigned long long powerNumber(unsigned short base, unsigned short exponent)
{
    if (exponent == 0)
    {
        return 1;
    }

    return base * powerNumber(base, exponent - 1);
}