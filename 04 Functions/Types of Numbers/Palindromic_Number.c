/**
A palindrome is a number that reads the same backwards as forwards, such as 121, 363, 3883, 37973, to mention a few.
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool isPalindromicNumber(unsigned long long);

void main()
{
    unsigned long long num;

    printf("Enter a number: ");
    scanf("%llu", &num);

    isPalindromicNumber(num) ? printf("%llu is a Palindromic Number", num) : printf("%llu is not a Palindromic Number", num);

    getch();
}

bool isPalindromicNumber(unsigned long long num)
{
    unsigned long long reverse_num = 0, temp = num;

    while (temp > 0)
    {
        reverse_num = reverse_num * 10 + (temp % 10);
        temp /= 10;
    }

    return (reverse_num == num) ? true : false;
}