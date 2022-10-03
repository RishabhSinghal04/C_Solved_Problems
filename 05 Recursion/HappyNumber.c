// A program to check whether a number is a happy number or not

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

bool isHappyNumber(unsigned long long);

unsigned short IterationDigits(unsigned long long);
unsigned short SumSquareDigits(unsigned long long);

void main()
{
    unsigned long long num;

    printf("Enter a number: ");
    scanf("%llu", &num);

    isHappyNumber(num) ? printf("%llu is a Happy Number", num) : printf("%llu is not a Happy Number", num);

    getch();
}

bool isHappyNumber(unsigned long long num)
{
    return (num == 1 || num == 7) ? true : ((IterationDigits(num) == 1) ? true : false);
}

unsigned short IterationDigits(unsigned long long num)
{
    if (num < 10)
    {
        return num;
    }

    num = SumSquareDigits(num);
    IterationDigits(num);
}

unsigned short SumSquareDigits(unsigned long long num)
{
    if (num == 0)
    {
        return 0;
    }
    return (num % 10) * (num % 10) + SumSquareDigits(num / 10);
}