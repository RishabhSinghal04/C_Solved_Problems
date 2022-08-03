/**
An automorphic number, also known as an automorph, is a number 'n' whose square ends in 'n'.
For instance 5 is automorphic, because 5^2 = 25, which ends in 5.
**/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

bool isAutomorphicNumber(unsigned int);

void main()
{
    unsigned int num;

    printf("Enter a number: ");
    scanf("%u", &num);

    isAutomorphicNumber(num) ? printf("%u is an Automorphic Number", num) : printf("%u is not an Automorphic Number", num);

    getch();
}

bool isAutomorphicNumber(unsigned int num)
{
    // 25 * 25 = 625 % 10^(length of 25) = 625 % 10^2 = 25
    return (num == (num * num) % (int)(pow(10, (int)log10(num) + 1) + 1e-9)) ? true : false;
}