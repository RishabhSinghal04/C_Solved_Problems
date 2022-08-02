#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

typedef long long ll;

bool isNivenNumber(ll);

void main()
{
    ll num;
    printf("Enter a number: ");
    scanf("%lld",&num);

    if(isNivenNumber(num))
        printf("%lld is a Niven Number",num);
    else
        printf("%lld is not a Niven Number",num);
    getch();
}

bool isNivenNumber(ll num)
{
    int sum_digit;
    ll temp=num;
    
    while(temp>0)
    {
        sum_digit+=(temp%10);
        temp/=10;
    }
    if(num%sum_digit==0)
        return true;
    else
        return false;
}