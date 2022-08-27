/**
A Cullen number is a number of the form (n × 2^n) + 1.
Currently, the only known Cullen primes are those with n = 1, 141, 4713, 5795, 6611, 18496, 32292, 32469, 59656, 90825, 262419, 361275, and 481899.
**/

#include <stdio.h>
#include <conio.h>
#include <math.h>

long double CullenNumber(unsigned short);

void main()
{
    unsigned short n;

    printf("Enter value of 'n' [(n X 2^n) + 1]: ");
    scanf("%hu", &n);

    (n < 48) ? printf("Cullen number is %.0Lf", CullenNumber(n)) : printf("Cullen number is %.0LE", CullenNumber(n));

    getch();
}

long double CullenNumber(unsigned short n)
{
    return n * (pow(2, n) + 1e-9) + 1;
}