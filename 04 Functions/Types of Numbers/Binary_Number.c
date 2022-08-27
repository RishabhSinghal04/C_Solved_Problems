/**
Binary numbers are the numbers written in base 2.
Expressed by 0 and 1.
**/

#include <stdio.h>
#include <conio.h>

long long toBinaryNumber(short);

void main()
{
    short int num;

    printf("Enter a number: ");
    scanf("%hd", &num);

    printf("%hd in Binary form is %lld", num, toBinaryNumber(num));

    getch();
}

long long toBinaryNumber(short num)
{
    long long binary_num = 0, increment = 1;

    // Process to find Binary Number
    while (num != 0)
    {
        binary_num += ((num % 2) * increment);
        increment *= 10;
        num /= 2;
    }
    return binary_num;
}