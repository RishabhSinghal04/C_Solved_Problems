/**
A Smith number is a composite number, the sum of whose digits equals the sum of the digits of its prime factors. 
The name stems from a phone call in 1984 by the mathematician Albert Wilansky to his brother-in-law, called Smith, during which Wilansky noticed that the phone number, 4937775, obeyed the condition just mentioned. 

Specifically: 4937775 = 3 × 5 × 5 × 65837
 
Trivially, all prime numbers have this property, so they are excluded. 
The Smith numbers less than 1000 are:
4, 22, 27, 58, 85, 94, 121, 166, 202, 265, 274, 319, 346, 355, 378, 382, 391, 438, 454, 483, 517, 526, 535, 562, 576, 588, 627, 634, 636, 645, 648, 654, 663, 666, 690, 706, 728, 729, 762, 778, 825, 852, 861, 895, 913, 915, 922, 958, and 985.
In 1987, Wayne McDaniel proved that there are infinitely many Smiths.
**/

#include <stdio.h>
#include <conio.h>

void main()
{
    int num, sum_digit = 0, sum_prime_factor_digit = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits of %d is: ", num);

    temp = num;
    while (temp != 0)
    {
        sum_digit += (temp % 10);
        printf(" + %d", temp % 10);
        temp /= 10;
    }
    printf("= %d", sum_digit);

    printf("\nPrime Factors of %d are: ", num);
    temp = num;

    int prime_factor = 2;
    while (temp > 1)
    {
        while (temp % prime_factor == 0)
        {
            printf("%d ", prime_factor);

            int temp_2 = prime_factor;
            while (temp_2 != 0)
            {
                sum_prime_factor_digit += (temp_2 % 10);
                temp_2 /= 10;
            }
            temp /= prime_factor;
        }
        prime_factor++;
    }

    printf("\nSum of digits of prime factors of %d is %u\n", num, sum_prime_factor_digit);

    if (sum_digit == sum_prime_factor_digit)
        printf("\n'%d' is a Smith Number", num);
    else
        printf("\n'%d' is a not Smith Number", num);
    getch();
}