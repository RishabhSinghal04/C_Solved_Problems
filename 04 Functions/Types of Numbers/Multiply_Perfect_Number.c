/**
They are numbers where the sum, sa(N), of its aliquot parts (proper divisors) is a multiple of the number itself or sa(N) = kN.

For example, the prime factorization of 120 is 2^3(3^1)5^1 which leads to 120 having 16 factors/divisors, namely, 1, 2, 3, 4, 5, 6, 8, 10, 12, 15, 20, 24, 30, 40, 60, and 120, the sum of which is 360 or 3 times 120.

Another is 672, the prime factorization of which is 2^5(3^1)7^1 which leads to 672 having 24 factors/divisors, namely 1, 2, 3, 4, 6, 7, 8, 12, 14, 16, 21, 24, 28, 32, 42, 48, 56, 84, 96, 168, 224, 336 and 672, the sum of which is 2016 or 3 times 672.
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool isMultiplyPerfectNumber(unsigned long);

void main()
{
    unsigned long num;

    printf("Enter a number: ");
    scanf("%lu", &num);

    isMultiplyPerfectNumber(num) ? printf("%lu is a Multiply Perfect Number", num) : printf("%lu is not a Multiply Perfect Number", num);

    getch();
}

bool isMultiplyPerfectNumber(unsigned long num)
{
    unsigned long long sum_divisors = 0;

    for (long i = 1; i <= num; ++i)
    {
        if (num % i == 0)
        {
            sum_divisors += i;
        }
    }

    return (sum_divisors % num == 0) ? true : false;
}