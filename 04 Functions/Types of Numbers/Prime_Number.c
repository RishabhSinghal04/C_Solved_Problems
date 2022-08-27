/**
Numbers that have only two factors, 1 and the number itself.
2 : 1, 2
29 : 1, 29
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool isPrimeNumber(unsigned long long);

void main()
{
    unsigned long long num;

    printf("Enter a number: ");
    scanf("%llu", &num);

    isPrimeNumber(num) ? printf("%llu is a Prime Number", num) : printf("%llu is not a Prime Number", num);

    getch();
}

bool isPrimeNumber(unsigned long long num)
{
    if (num < 2)
    {
        return false;
    }
    else if (num < 4 || num == 5 || num == 7)
    {
        return true;
    }
    else if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0)
    {
        return false;
    }
    else
    {
        for (long i = 11; i * i <= num; i += 6)
        {
            if (num % i == 0 || num % (i + 2) == 0)
            {
                return false;
            }
        }
        return true;
    }
}