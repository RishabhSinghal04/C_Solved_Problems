// A program to find the number of digits in a given number

#include <stdio.h>
#include <conio.h>

unsigned short Number_Digits(unsigned long long);

void main()
{
    unsigned long long num;

    printf("Enter a number: ");
    scanf("%llu", &num);

    printf("Number of digits in %llu are %llu", num, Number_Digits(num));

    getch();
}

unsigned short Number_Digits(unsigned long long num)
{
    if (num == 0)
    {
        return 0;
    }

    return 1 + Number_Digits(num / 10);
}