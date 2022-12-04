// A program to check if a number is even or odd

#include <stdio.h>
#include <conio.h>

enum EvenOdd
{
    Even,
    Odd
};

void main()
{
    enum EvenOdd odd_even;
    unsigned long long num;

    printf("Enter a number: ");
    scanf("%llu", &num);

    printf("0 : Even\t 1 : Odd\n");

    (num % 2 == 0) ? printf("%hu", odd_even) : printf("%hu", odd_even + 1);

    getch();
}