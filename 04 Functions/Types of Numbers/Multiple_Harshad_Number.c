/**
A Multiple Harshad number is a Harshad number that, when divided by the sum of its digits, produces another Harshad number.
6804 -> 6 + 8 + 0 + 4 = 18 -> 6804 / 18 = 378
    378 -> 3 + 7 + 8 = 18 -> 378 / 18 = 21
       21 -> 2 + 1 = 3 -> 21 / 3 = 7
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool isMultipleHarshadNumber(unsigned long long);

void main()
{
    unsigned long long num;

    printf("Enter a number: ");
    scanf("%llu", &num);

    isMultipleHarshadNumber(num) ? printf("%llu is a Multiple Harshad Number", num) : printf("%llu is not a Multiple Harshad Number", num);

    getch();
}

bool isMultipleHarshadNumber(unsigned long long num)
{
    unsigned long long temp = num, sum_digits = 0;

    while (temp > 9)
    {
        sum_digits = 0;

        // Process to find sum of digits of an integer
        while (temp > 0)
        {
            sum_digits += (temp % 10);
            temp /= 10;
        }

        // Process to store quotient when number is divisible by its sum of digits
        if (num % sum_digits == 0)
        {
            num /= sum_digits;
            temp = num;
        }
        else
        {
            return false;
        }
    }
    return true;
}