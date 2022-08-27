/**
The digital root of a number is the single digit that results from the continuous summation of the digits of the number and the numbers resulting from each summation.

For example, consider the number 7935.
~ The summation of its digits is 24.
~ The summation of 2 and  4 is 6, the digital root of 7935.
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

typedef unsigned long long ull;

unsigned int DigitalRoot(ull);

void main()
{
    ull num;

    printf("Enter a number: ");
    scanf("%llu", &num);

    printf("The digital root of %llu is %u", num, DigitalRoot(num));

    getch();
}

unsigned int DigitalRoot(ull num)
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