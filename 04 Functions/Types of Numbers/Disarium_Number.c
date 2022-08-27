/**
A disarium number is a number in which the sum of the digits to the power of their respective position is equal to the number itself.
(Position is counted from left to rigth starting from 1).
135 : 1^1 + 3^2 + 5^3 = 135
**/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

typedef unsigned long long ull;

bool isDisariumNumber(ull);

void main()
{
    ull num;

    printf("Enter a number: ");
    scanf("%llu", &num);

    isDisariumNumber(num) ? printf("%llu is a Disarium Number", num) : printf("%llu is a not Disarium Number", num);

    getch();
}

bool isDisariumNumber(ull num)
{
    unsigned short count = (short)log10(num) + 1;
    ull sum = 0, temp = num;

    while (temp > 0)
    {
        sum += (pow(temp % 10, count) + 1e-9);
        count--;
        temp /= 10;
    }

    return (sum == num) ? true : false;
}