#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

typedef long long ll;

bool isFactorian(ll);

void main()
{
    ll num;
    printf("Enter a number: ");
    scanf("%lld",&num);

    if(isFactorian(num))
        printf("%lld is a Factorian",num);
    else
        printf("%lld is not a Factorian",num);
    getch();
}

bool isFactorian(ll num)
{
    int sum_digit, factorial;
    ll temp=num;
    
    while(temp>0)
    {
        factorial=1;
        for(int i=1;i<=temp%10;i++)
            factorial*=i;
        
        sum_digit+=factorial;
        temp/=10;
    }
    if(num==sum_digit)
        return true;
    else
        return false;
}