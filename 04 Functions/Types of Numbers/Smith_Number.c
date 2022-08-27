/**
A Smith number is a composite number, the sum of whose digits equals the sum of the digits of its prime factors.

4937775 = 3 × 5 × 5 × 65837
666 = 2 x 3 x 3 x 37, sum of digits of 666 is 18 and sum of prime factor digits is 18. Hence Smith Number.

Trivially, all prime numbers have this property, so they are excluded.
The Smith numbers less than 1000 are:-
4, 22, 27, 58, 85, 94, 121, 166, 202, 265, 274, 319, 346, 355, 378, 382, 391, 438, 454, 483, 517, 526, 535, 562, 576, 588, 627, 634, 636, 645, 648, 654, 663, 666, 690, 706, 728, 729, 762, 778, 825, 852, 861, 895, 913, 915, 922, 958, and 985
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool isSmithNumber(unsigned long long);

void main()
{
    unsigned long long num;

    printf("Enter a number: ");
    scanf("%llu", &num);

    isSmithNumber(num) ? printf("%llu is a Smith Number", num) : printf("%llu is not a Smith Number", num);

    getch();
}

bool isSmithNumber(unsigned long long num)
{
    unsigned short sum_digits = 0, sum_digits_prime_factor = 0;
    unsigned int temp_prime;
    unsigned long long temp = num;

    // Process to obtain sum of digits
    while (temp > 0)
    {
        sum_digits += (temp % 10);
        temp /= 10;
    }

    // Process to obtain sum of digits of prime factors of num
    for (int i = 2; i <= num; ++i)
    {
        while (num % i == 0)
        {
            if (i < 10) // Prime factor is less than 10
            {
                sum_digits_prime_factor += i;
            }
            else    // Prime factor is greater than 10
            {
                temp_prime = i;

                // Process to obtain sum of digits of prime factor
                while (temp_prime > 0)
                {
                    sum_digits_prime_factor += (temp_prime % 10);
                    temp_prime /= 10;
                }
            }
            num /= i;
        }
    }
    return (sum_digits == sum_digits_prime_factor) ? true : false;
}