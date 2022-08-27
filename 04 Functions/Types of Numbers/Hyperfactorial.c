/**
A hyperfactorial is a number such as 108, which is equal to 3^3 × 2^2 × 1^1.
In general, the n-th hyperfactorial H(n) is given by

H(n) = n^n X (n-1)^(n-1) ... 3^3 X 2^2 X 1^1

The first eight hyperfactorials are 1, 4, 108, 27648, 86400000, 4031078400000, 3319766398771200000, and 55696437941726556979200000.

**/

#include <stdio.h>
#include <conio.h>
#include <math.h>

void printHyperFactorial(unsigned short);

void main()
{
    unsigned short n;

    printf("Enter limit: ");
    scanf("%hu", &n);

    printf("Hyperfactorials in the given range are:-");
    printHyperFactorial(n);

    getch();
}

void printHyperFactorial(unsigned short n)
{
    long double hyperfactorial = 1;

    for (int i = 1; i <= n; ++i)
    {
        hyperfactorial = 1;

        for (int j = 2; j <= i; ++j)
        {
            hyperfactorial *= pow(j, j);
        }

        (i < 9) ? printf("\nHyperfactorial of %u is %.0Lf", i, hyperfactorial) : printf("\nHyperfactorial of %u is %LE", i, hyperfactorial);
    }
}