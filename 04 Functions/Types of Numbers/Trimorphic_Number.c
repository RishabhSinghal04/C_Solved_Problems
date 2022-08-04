/**
A number 'n' is called trimorphic if n^3 ends in 'n'. For example 49^3, = 117649, is trimorphic.
Not all trimorphic numbers are automorphic.
**/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

bool isTrimorphicNumber(unsigned int);

void main()
{
    unsigned int num;

    printf("Enter a number: ");
    scanf("%u", &num);

    isTrimorphicNumber(num) ? printf("%u is a Trimorphic Number", num) : printf("%u is not a Trimorphic Number", num);

    getch();
}

bool isTrimorphicNumber(unsigned int num)
{
    // 49 * 49 * 49 = 117649 % 10^(number of digits in num(49)) = 117649 % 10^2 = 49
    return (num == (num * num * num) % (int)(pow(10, (int)log10(num) + 1) + 1e-9)) ? true : false;
}