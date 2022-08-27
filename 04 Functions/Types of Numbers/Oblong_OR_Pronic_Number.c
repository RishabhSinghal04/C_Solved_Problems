/**
An oblong number is any number that is the product of two consecutive integers.
Oblong numbers are also known as pronic numbers.
The first few of them are: 0, 2, 6, 12, 20, and 30
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool isPronicNumber(unsigned long long);

void main()
{
    unsigned long long num;

    printf("Enter a number: ");
    scanf("%llu", &num);

    isPronicNumber(num) ? printf("%llu is a Pronic or an Oblong Number", num) : printf("%llu is not a Pronic or an Oblong Number", num);

    getch();
}

bool isPronicNumber(unsigned long long num)
{
    if (num == 0 || num == 2)
    {
        return true;
    }
    else
    {
        for (long i = 2; i < num / 2; ++i)
        {
            if (i * (i + 1) == num)
            {
                return true;
            }
        }
        return false;
    }
}