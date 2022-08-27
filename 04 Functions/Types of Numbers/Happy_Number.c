/**
On iterating the process of summing the squares of the decimal digits of a number and if this process terminates in 1, then the original number is called a happy number.
For example 7 → (7^2) = 49 → (4^2 + 9^2) = 97 → (9^2 + 7^2) = 130 → (1^2 + 3^2 + 0^2) = 10 → (1^2 + 0^2) = 1
**/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

bool isHappyNumber(unsigned int);

void main()
{
    unsigned int num;

    printf("Enter a number: ");
    scanf("%u", &num);

    isHappyNumber(num) ? printf("%u is a Happy Number", num) : printf("%u is not a Happy Number", num);

    getch();
}

bool isHappyNumber(unsigned int num)
{
    if (num == 1 || num == 7)
    {
        return true;
    }

    unsigned long long sum_num = 0;

    while (num > 9)
    {
        while (num > 0)
        {
            sum_num += (int)(pow(num % 10, 2) + 1e-9);
            num /= 10;
        }

        num = sum_num;
        sum_num = 0;
    }

    return (num == 1) ? true : false;
}