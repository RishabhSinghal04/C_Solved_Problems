/**
Write a program to accept an integer to find out and print the difference between the greatest smallest digits present the number.
**/
#include <stdio.h>
#include <conio.h>

void main()
{
    int num, max_digit = 0, min_digit = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    min_digit = num % 10;
    temp = num;

    while (temp > 0)
    {
        if (temp % 10 < min_digit)
        {
            min_digit = temp % 10;
        }
        else if (temp % 10 > max_digit)
        {
            max_digit = temp % 10;
        }
        temp /= 10;
    }

    printf("Difference between the greatest digit[ %d ] and the smallest digit[ %d ] of %d is %d", max_digit, min_digit, num, max_digit - min_digit);

    getch();
}