#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool isHappyNumber(int);

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(isHappyNumber(num))
        printf("%d is a Happy Number",num);
    else
        printf("%d is not a Happy Number",num);
    getch();
}

bool isHappyNumber(int num)
{
    int sum_digit;
    long long temp=num*num;
    while(temp>9)
    {
        sum_digit=0;
        while(temp>0)
        {
            sum_digit+=(temp%10)*(temp%10);
            temp/=10;
        }
        temp=sum_digit;
    }
    if(sum_digit==1)
        return true;
    else
        return false;
}