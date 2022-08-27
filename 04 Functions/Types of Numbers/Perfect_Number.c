/**
A perfect number is a whole number that is equal to the sum of all its factors except itself.
For example, 6 is a perfect number because its factors, 1, 2, and 3 add to give 6.
The next smallest is 28 (the sum of 1 + 2 + 4 + 7 + 14).
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool isPerfectNumber(unsigned long);

void main()
{
    unsigned long num;

    printf("Enter a number: ");
    scanf("%u", &num);

    isPerfectNumber(num) ? printf("%lu is a Perfect Number", num) : printf("%lu is not a Perfect Number", num);

    getch();
}

bool isPerfectNumber(unsigned long num)
{
    unsigned long long sum_divisors = 0;

    for (long i = 1; i <= num / 2; ++i)
    {
        if (num % i == 0)
        {
            sum_divisors += i;
        }
    }

    return (sum_divisors == num) ? true : false;
}