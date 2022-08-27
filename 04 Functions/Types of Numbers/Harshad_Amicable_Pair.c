/**
A Harshad amicable pair is an amicable pair (m, n) such that both m and n are Harshad numbers. 
For example, 2620 and 2924 are a Harshad amicable pair because 2620 is divisible by 2 + 6 + 2 + 0 = 10 and 2924 is divisible by 2 + 9 + 2 + 4 = 17 (2924/17 = 172). 
There are 192 Harshad amicable pairs in first 5,000 amicable pairs
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool isHarshadNumber(unsigned long long);

void main()
{
    unsigned long long num1, num2;

    printf("Enter two number: ");
    scanf("%llu %llu", &num1, &num2);

    (isHarshadNumber(num1) && isHarshadNumber(num2)) ? printf("%llu and %llu are a Harshad Amicable Pair", num1, num2) : printf("%llu and %llu are not a Harshad Amicable Pair", num1, num2);

    getch();
}

bool isHarshadNumber(unsigned long long num)
{
    unsigned long long temp = num;
    unsigned int sum_digits = 0;

    while (temp > 0)
    {
        sum_digits += (temp % 10);
        temp /= 10;
    }

    return (num % sum_digits == 0) ? true : false;
}