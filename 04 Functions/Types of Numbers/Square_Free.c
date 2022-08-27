/**
A positive integer 'n' is a square free integer if it is product of different primes.
42 -> 1, 2, 3, 6, 7, 21, 42 and none are perfect square except 1.
45 -> 1, 3, 5, 9, nine is a perfect square which divides 45. Hence 45 is not a square free number.
**/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

bool isSquareFree(unsigned long long);

void main()
{
    unsigned long long num;

    printf("Enter a number: ");
    scanf("%llu", &num);

    isSquareFree(num) ? printf("%llu is a Square Free Number", num) : printf("%llu is not a Square Free Number", num);

    getch();
}

bool isSquareFree(unsigned long long num)
{
    if (num % 2 == 0)
    {
        num /= 2;

        if (num % 2 == 0)
        {
            return false;
        }
    }
    else
    {
        for (int i = 3; i * i <= num; i += 2)
        {
            if (num % i == 0)
            {
                num /= i;

                if (num % i == 0)
                {
                    return false;
                }
            }
        }
        return true;
    }
}