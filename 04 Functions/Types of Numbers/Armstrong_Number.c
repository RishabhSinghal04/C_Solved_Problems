/**
A narcissistic number, also known as an Armstrong number or a plus perfect number, is an n-digit number equal to the sum of its digits raised to the nth power.
For instance, 371 is narcissistic because 3^3 + 7^3 + 1^3 = 371, and 9474 is narcissistic because 9^4 + 4^4 + 7^4 + 4^4 = 9474
**/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

bool isArmstrongNumber(unsigned long);

void main()
{
    unsigned long num;

    printf("Enter a number: ");
    scanf("%u", &num);

    isArmstrongNumber(num) ? printf("%u is an Armstrong Number", num) : printf("%u is not an Armstrong Number", num);

    getch();
}

bool isArmstrongNumber(unsigned long num)
{
    unsigned long temp = num, sum_num = 0;

    while (temp > 0)
    {
        sum_num += (int)(pow(temp % 10, (int)log10(num) + 1) + 1e-9);
        temp /= 10;
    }

    return (sum_num == num) ? true : false;
}