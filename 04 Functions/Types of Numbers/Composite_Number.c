/**
The numbers that have more than two factors (which are not prime).
4, 6, 8, 9, 10, 100, 250 etc.
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

typedef unsigned long long ull;

bool isCompositeNumber(ull);

void main()
{
    ull num;

    printf("Enter a number: ");
    scanf("%llu", &num);

    isCompositeNumber(num) ? printf("%llu is a Composite Number", num) : printf("%llu is not a Composite Number", num);

    getch();
}

bool isCompositeNumber(ull num)
{
    if (num <= 1)
    {
        return true;
    }
    else if (num < 4)
    {
        return false;
    }
    else if (num % 2 == 0 || num % 3 == 0)
    {
        return true;
    }
    else
    {
        for (int i = 5; i * i <= num; i += 6)
        {
            if (num % i == 0 || num % (i + 2) == 0)
            {
                return true;
            }
        }
    }
    return false;
}