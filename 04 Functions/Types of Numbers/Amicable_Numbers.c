/**
Amicable numbers are pairs of numbers, also known as friendly numbers, each of whose aliquot parts add to give the other number.
(An aliquot part is any divisor that doesn't include the number itself).

The smallest amicable numbers are 220 and 284.
(Aliquot parts 1, 2, 4, 5, 10, 11, 20, 22, 44, 55, and 110, with a sum of 284)
(Aliquot parts 1, 2, 4, 71, and 142, with a sum of 220).
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool areAmicableNumbers(unsigned int, unsigned int);

void main()
{
    unsigned int num1, num2;

    printf("Enter two(2) numbers: ");
    scanf("%u %u", &num1, &num2);

    areAmicableNumbers(num1, num2) ? printf("%u and %u are Amicable Numbers", num1, num2) : printf("%u and %u are not Amicable Numbers", num1, num2);

    getch();
}

bool areAmicableNumbers(unsigned int num1, unsigned int num2)
{
    unsigned long sum_divisors1 = 0, sum_divisors2 = 0;

    // Sum of aliquot parts of 1st number
    for (int i = 1; i <= num1 / 2; (num1 % 2 != 0) ? i += 2 : ++i)
    {
        if (num1 % i == 0)
        {
            sum_divisors1 += i;
        }
    }

    // Sum of aliquot parts of 2nd number
    for (int i = 1; i <= num2 / 2; (num2 % 2 != 0) ? i += 2 : ++i)
    {
        if (num2 % i == 0)
        {
            sum_divisors2 += i;
        }
    }

    return (sum_divisors1 == num2 && sum_divisors2 == num1) ? true : false;
}