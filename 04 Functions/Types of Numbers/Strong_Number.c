/**
A number is called a Strong Number if the sum of factorial of it's digits is equal to that number.
145 -> 1! + 4! + 5! = 1 + 24 + 120 = 145 which is a Strong Number.
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool isStrongNumber(unsigned long);
unsigned long long Factorial(unsigned short);

void main()
{
    unsigned long num;

    printf("Enter a number: ");
    scanf("%lu", &num);

    isStrongNumber(num) ? printf("%lu is a Strong Number", num) : printf("%lu is not a Strong Number", num);

    getch();
}

bool isStrongNumber(unsigned long num)
{
    unsigned long temp = num, sum_digits = 0;

    while (temp > 0)
    {
        sum_digits += Factorial(temp % 10);
        temp /= 10;
    }

    return (sum_digits == num) ? true : false;
}

unsigned long long Factorial(unsigned short num)
{
    unsigned long long factorial = 1;

    for (short i = 2; i <= num; ++i)
    {
        factorial *= i;
    }

    return factorial;
}