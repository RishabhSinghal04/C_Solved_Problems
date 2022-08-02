#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool isUglyNumber(long long);

void main()
{
    long long num;
    printf("Enter a number: ");
    scanf("%lld",&num);
    if(isUglyNumber(num))
        printf("%lld is an Ugly Number",num);
    else
        printf("%lld is not an Ugly Number",num);
    getch();
}

bool isUglyNumber(long long num)
{
    while(num%2==0)
        num/=2;
    while(num%3==0)
        num/=3;
    while(num%5==0)
        num/=5;
    if(num==1)
        return true;
    else
        return false;
    return true;
}