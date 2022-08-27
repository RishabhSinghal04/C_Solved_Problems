/**
A Fermat number is a number defined by the formula Fn = 22^n + 1 and named after Pierre Fermat who conjectured, wrongly, that all such numbers would be prime.
The first five Fermat numbers, F0 = 3, F1 = 5, F2 = 17, F3 = 257, and F4 = 65,537, are prime.
**/

#include <stdio.h>
#include <conio.h>
#include <math.h>

long double FermatNumber(unsigned short);

void main()
{
    unsigned short n;

    printf("Enter value of 2 raised to 2 raised to 'n' i.e. 2^2^n : ");
    scanf("%hu", &n);

    (n < 5) ? printf("Fermat number is %.0LF", FermatNumber(n)) : printf("Fermat number is %LE", FermatNumber(n));

    getch();
}

long double FermatNumber(unsigned short n)
{
    return (pow(2, pow(2, n) + 1e-9) + 1e-9) + 1;
}