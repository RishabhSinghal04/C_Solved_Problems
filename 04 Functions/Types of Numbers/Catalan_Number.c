/**
The specific Catalan numbers are 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796 and so on deriving from:-
C(n) = (2n)! / (n + 1)(n!)^2
**/

#include <stdio.h>
#include <conio.h>

typedef unsigned long long ull;

ull CatalanNumber(short);

void main()
{
    unsigned short num;

    printf("Enter a position(1 to 10) in numeric form: ");
    scanf("%hu", &num);

    printf("Catalan Number at position %hu is %llu", num, CatalanNumber(num));

    getch();
}

ull CatalanNumber(short num_pos)
{
    ull ctln_num = 0, factorial_1 = 1, factorial_2 = 1;

    for (int i = 1; i <= 2 * num_pos; ++i)
    {
        factorial_1 *= i;
    }

    for (int i = 1; i <= num_pos; ++i)
    {
        factorial_2 *= i;
    }

    return factorial_1 / ((num_pos + 1) * (factorial_2 * factorial_2));
}