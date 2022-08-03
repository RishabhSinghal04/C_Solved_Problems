/**
An almost perfect number is typically applied to the powers of 2.
Since the sum of the aliquot parts is 2 * n - 1 or just 1 short of being a perfect number.
It follows that any power of 2 is a deficient number.
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool isAlmostPerfectNumber(unsigned int n);

void main()
{
    unsigned int num;

    printf("Enter a number: ");
    scanf("%u", &num);

    isAlmostPerfectNumber(num) ? printf("%u is an Almost Perfect Number", num) : printf("%u is not an Almost Perfect Number", num);

    getch();
}

bool isAlmostPerfectNumber(unsigned int num)
{
    unsigned long sum_factors = 0;

    for (int i = 1; i <= num; (num % 2 != 0) ? i += 2 : ++i)
    {
        if (num % i == 0)
        {
            sum_factors += i;
        }
    }
    // Check whether the sum of factors of the number is equal to 2 * n - 1 or not and return accordingly
    return (sum_factors == 2 * num - 1) ? true : false;
}