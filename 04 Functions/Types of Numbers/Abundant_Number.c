/**
An abundant is a number that is smaller than the sum of its aliquot parts (proper divisors).
Twelve is the smallest abundant number – the sum of its aliquot parts is 1 + 2 + 3 + 4 + 6 = 16 – followed by 18, 20, 24, and 30.
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool isAbundantNumber(unsigned int);

void main()
{
    unsigned int num;

    printf("Enter a number: ");
    scanf("%u", &num);

    isAbundantNumber(num) ? printf("%u is an Abundant Number", num) : printf("%u is not an Abundant Number", num);

    getch();
}

bool isAbundantNumber(unsigned int num)
{
    unsigned long sum_divisors = 0;

    for (int i = 1; i <= num / 2; (num % 2 != 0) ? i += 2 : ++i)
    {
        if (num % i == 0)
        {
            sum_divisors += i;
        }
    }
    return (sum_divisors > num) ? true : false;
}