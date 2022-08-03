/**
A number n is called tri-automorphic if 3n2 ends in n.
For example 667 is tri-automorphic because 3 × 667^2 = 1334667, ends in 667.
**/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

bool isTriAutomorphicNumber(unsigned int);

void main()
{
    unsigned int num;

    printf("Enter a number: ");
    scanf("%u", &num);

    isTriAutomorphicNumber(num) ? printf("%u is a Tri-Automorphic Number", num) : printf("%u is not a Tri-Automorphic Number", num);

    getch();
}

bool isTriAutomorphicNumber(unsigned int num)
{
    // 25 * 25 = 625 % 10^(length of 25) = 625 % 10^2 = 25
    return (num == (3 * (num * num)) % (int)(pow(10, (int)log10(num) + 1) + 1e-9)) ? true : false;
}