/**
We call a number a product perfect number if the product of all its divisors, other than itself, is equal to the number.
For example, 10 and 21 are product perfect numbers since 1 x 2 x 5 = 10 and 1 x 3 x 7 = 21, whereas 25 is not, since the product of its divisors, 1 x 5 = 5 is too small.
All the product perfect numbers between 2-60, which are: 6,8,10,14,15,21,22,26,27,28,33,34,35,38,39,44,45,46,51,52,55,57,58.
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool isProdectPerfect(unsigned long long);

void main()
{
    unsigned long long num;

    printf("Enter a number: ");
    scanf("%llu", &num);

    isProdectPerfect(num) ? printf("%llu is a Product Perfect Number", num) : printf("%llu is not a Product Perfect Number", num);

    getch();
}

bool isProdectPerfect(unsigned long long num)
{
    unsigned long product_divisors = 1;

    for (int i = 1; i <= num / 2; (num % 2 != 0) ? i += 2 : ++i)
    {
        if (num % i == 0)
        {
            product_divisors *= i;
        }
    }

    return (product_divisors == num) ? true : false;
}