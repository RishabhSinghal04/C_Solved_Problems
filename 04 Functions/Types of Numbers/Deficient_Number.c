/**
Deficient numbers, dN, are numbers where the sum of its aliquot parts (proper divisors), sa(N), is less than the number itself sa(N) < N.
16 = 1 + 2 + 4 + 8 = 14 which is less than 16
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

typedef unsigned long long ull;

bool isDeficientNumber(ull);

void main()
{
    ull num;

    printf("Enter a number: ");
    scanf("%llu", &num);

    isDeficientNumber(num) ? printf("%llu is a Deficient Number", num) : printf("%llu is not a Deficient Number", num);

    getch();
}

bool isDeficientNumber(ull num)
{
    ull sum_divisors = 0;

    for (int i = 1; i <= num / 2; (num % 2 != 0) ? i += 2 : ++i)
    {
        if (num % i == 0)
        {
            sum_divisors += i;
        }
    }
    
    return (sum_divisors < num) ? true : false;
}