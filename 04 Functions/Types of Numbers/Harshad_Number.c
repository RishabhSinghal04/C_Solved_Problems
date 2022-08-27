/**
A Harshad number is a number that is divisible by the sum of its own digits.
For example, 1729 is a Harshad number because 1 + 7 + 2 + 9 = 19 and 1729 = 19 × 91.
Harshad numbers are also known as Niven numbers/
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool isHarshadNumber(unsigned long long);

void main()
{
    unsigned long long num;

    printf("Enter a number: ");
    scanf("%llu", &num);

    isHarshadNumber(num) ? printf("%llu is a Harshad Number", num) : printf("%llu is not a Harshad Number", num);

    getch();
}

bool isHarshadNumber(unsigned long long num)
{
    unsigned long long temp = num;
    unsigned int sum_digits = 0;

    while (temp > 0)
    {
        sum_digits += (temp % 10);
        temp /= 10;
    }

    return (num % sum_digits == 0) ? true : false;
}