/**
A least deficient number N has been defined as one where the sum of all of its factors/divisors is equal to one less than twice the number or s(N) = 2N - 1.
All the powers of 2 are least deficient numbers.
Example : 16 -> 1 + 2 + 4 + 8 + 16 = 31 which is one less than 2 X 16.
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool isLeastDeficientNumber(unsigned long);

void main()
{
    unsigned long num;

    printf("Enter a number: ");
    scanf("%lu", &num);

    isLeastDeficientNumber(num) ? printf("%lu is a Least Deficient Number", num) : printf("%lu is not a Least Deficient Number", num);

    getch();
}

bool isLeastDeficientNumber(unsigned long num)
{
    unsigned long long sum_divisors = 0;

    for (int i = 1; i <= num; (num % 2 != 0) ? i += 2 : ++i)
    {
        if (num % i == 0)
        {
            sum_divisors += i;
        }
    }

    return (sum_divisors == 2 * num - 1) ? true : false;
}