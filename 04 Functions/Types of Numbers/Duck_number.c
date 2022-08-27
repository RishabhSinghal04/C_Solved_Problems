/**
A number that has atleast one digit 0 (zero) is called a Duck Number.
102, 1002, 20504, 40004 are few Duck Numbers.
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool isDuckNumber(unsigned long long);

void main()
{
    unsigned long long num;

    printf("Enter a number: ");
    scanf("%llu", &num);

    isDuckNumber(num) ? printf("%llu is a Duck Number", num) : printf("%llu is a not Duck Number", num);

    getch();
}

bool isDuckNumber(unsigned long long num)
{
    bool flag = false;

    while (num > 0)
    {
        if (num % 10 == 0)
        {
            flag = true;
            break;
        }
        num /= 10;
    }

    return flag;
}