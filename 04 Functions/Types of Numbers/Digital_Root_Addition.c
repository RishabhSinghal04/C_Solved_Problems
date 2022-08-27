/**
Digital roots are used to check addition and multiplication by means of a method called casting out nines.

For example, check the summation of 378 and 942.
~ The DR of 378 is 9, 3 + 7 + 8 = 18, 1 + 8 = 9.
~ The DR of 942 is 6, 9 + 4 + 2 = 15, 1 + 5 = 6.
~ Adding 9 and 6 produces 15, the DR of 15 is 6, 1 + 5 = 6.
~ The summation of 378 and 942 is 1320 and the DR of 1320 is 6.
~ With the two final DR's are equal, the addition is correct.
**/

#include <stdio.h>
#include <conio.h>

typedef unsigned long ul;

unsigned int DigitalRoot(ul);

void main()
{
    ul num_1, num_2;
    unsigned int sum_DR_nums = 0;

    printf("Enter two numbers: ");
    scanf("%lu %lu", &num_1, &num_2);

    sum_DR_nums = DigitalRoot(num_1) + DigitalRoot(num_2);

    if (sum_DR_nums > 9)
    {
        sum_DR_nums = DigitalRoot(sum_DR_nums);
    }

    sum_DR_nums == DigitalRoot(num_1 + num_2) ? printf("Addition of %lu and %lu is correct", num_1, num_2) : printf("Addition of %lu and %lu is incorrect", num_1, num_2);

    getch();
}

unsigned int DigitalRoot(ul num)
{
    unsigned int sum_digits = 0;

    while (num > 9)
    {
        sum_digits = 0;

        // Process to get the sum of digits of a number
        while (num > 0)
        {
            sum_digits += (num % 10);
            num /= 10;
        }

        num = sum_digits;
    }
    return sum_digits;
}