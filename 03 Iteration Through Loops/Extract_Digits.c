/**
Write a program to input any number n and using only for loop print its sum of digits, product of even digits and count of odd digits from n.
**/

#include <stdio.h>
#include <conio.h>

void main()
{
    int num, temp, sum_digits = 0, product_digits = 1, count_even_digits = 0, count_odd_digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    for (; temp > 0; temp /= 10)
    {
        sum_digits += (temp % 10);
        product_digits *= (temp % 10);

        if ((temp % 10) % 2 == 0)
        {
            count_even_digits++;
        }
        else
        {
            count_odd_digits++;
        }
    }

    printf("Sum of digits is %d\nProduct of digits is %d\nCount of even digits is %d\nCount of odd digits is %d", sum_digits, product_digits, count_even_digits, count_odd_digits);

    getch();
}