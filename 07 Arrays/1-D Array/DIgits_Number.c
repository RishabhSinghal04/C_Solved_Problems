// A program to print digits of a number in ascending order without repetition.

#include <stdio.h>
#include <conio.h>

void initializeArray(short *);
void initializeDigits(unsigned long long);
void displayArray(short *);

void main()
{
    unsigned long long num;

    printf("Enter a number: ");
    scanf("%lld", &num);

    printf("Digits in ascending order without repetition : ");
    initializeDigits(num);

    getch();
}

void initializeArray(short array_num[])
{
    for (int i = 0; i <= 10; ++i)
    {
        array_num[i] = -1;
    }
}

void initializeDigits(unsigned long long num)
{
    short array_num[10];

    initializeArray(array_num);

    while (num > 0)
    {
        array_num[num % 10] = num % 10;
        num /= 10;
    }

    displayArray(array_num);
}

void displayArray(short array[])
{
    if (array[0] > -1)
    {
        printf("%hu ", array[0]);
    }

    for (int i = 0; i <= 10; ++i)
    {
        if (array[i] > -1)
        {
            printf("%hu ", array[i]);
        }
    }
}