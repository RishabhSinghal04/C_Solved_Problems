/**
Relatively prime numbers are pairs of numbers that have no common factor other than one, or unity.
The numbers 2 and 7, 3 and 8, 11 and 27, etc., are all relatively prime.
Pairs of numbers satisfying this criteria are also referred to as co-prime numbers.
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool areCoPrimeNumbers(unsigned long long, unsigned long long);

void main()
{
    unsigned long long num1, num2;

    printf("Enter two numbers: ");
    scanf("%llu %llu", &num1, &num2);

    areCoPrimeNumbers(num1, num2) ? printf("%llu and %llu are Co-Prime Numbers", num1, num2) : printf("%llu and %llu are not Co-Prime Numbers", num1, num2);

    getch();
}

bool areCoPrimeNumbers(unsigned long long num1, unsigned long long num2)
{
    if ((num1 > 2 && num2 > 2) && (num1 % 2 == 0 && num2 % 2 == 0))
    {
        return false;
    }
    else
    {
        for (long i = 3; i <= ((num1 > num2) ? num1 / 2 : num2 / 2); i += 2)
        {
            if (num1 % i == 0 && num2 % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}