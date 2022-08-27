/**
A factorion is a natural number that equals of the sums of the factorials of its digits in a given base.
The only known decimal factorions are 1 = 1!, 2 = 2!, 145 = 1! + 4! + 5!, and 40585 = 4! + 0! + 5! + 8! + 5!.
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool isFactorion(unsigned long);
unsigned long long Factorial(unsigned long num);

void main()
{
    unsigned long num;

    printf("Enter a number: ");
    scanf("%lu", &num);

    isFactorion(num) ? printf("%lu is a Factorion", num) : printf("%lu is not a Factorion", num);

    getch();
}

unsigned long long Factorial(unsigned long num)
{
    unsigned long long factorial = 1;

    for (int i = 2; i <= num; ++i)
    {
        factorial *= i;
    }

    return factorial;
}

bool isFactorion(unsigned long num)
{
    unsigned long temp = num, sum_factorial_digits = 0;

    while (temp > 0)
    {
        sum_factorial_digits += Factorial(temp % 10);
        temp /= 10;
    }

    return (sum_factorial_digits == num) ? true : false;
}