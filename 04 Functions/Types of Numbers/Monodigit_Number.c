/**
Numbers consisting of a single repeating digit are often referred to as monodigits.
Examples are 22, 333333, 7777777777, 99999999999999999999 etc.
**/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

bool isMonodigitNumber(unsigned long long);

void main()
{
    unsigned long long num;

    printf("Enter a number: ");
    scanf("%llu", &num);

    isMonodigitNumber(num) ? printf("%llu is a Monodigit Number", num) : printf("%llu is not a Monodigit Number", num);

    getch();
}

bool isMonodigitNumber(unsigned long long num)
{
    unsigned long long temp = num / 10;

    while (temp > 0)
    {
        if (num % 10 != temp % 10)
        {
            return false;
        }
        temp /= 10;
    }
    return true;
}