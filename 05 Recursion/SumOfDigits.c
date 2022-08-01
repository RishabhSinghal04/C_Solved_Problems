#include <stdio.h>
#include <conio.h>

typedef unsigned long long ull;

int sum_digit=0;

int sumOfDigits(ull);

void main()
{
    ull num;
    printf("Enter a number: ");
    scanf("%llu",&num);
    printf("Sum of digits of %llu is %u",num, sumOfDigits(num));
    getch();
}

int sumOfDigits(ull num)
{
    if(num!=0)
    {
        sum_digit+=num%10;
        sumOfDigits(num/10);
    }
    return sum_digit;
}