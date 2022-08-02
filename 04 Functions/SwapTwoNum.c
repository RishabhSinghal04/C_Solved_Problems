#include <stdio.h>
#include <conio.h>

typedef long long ll;

void swapTwoNum(ll, ll);

void main()
{
    ll num1, num2;
    printf("Enter two(2) numbers: ");
    scanf("%lld %lld",&num1, &num2);
    swapTwoNum(num1, num2);
    getch();
}

void swapTwoNum(ll num1, ll num2)
{
    num1+=num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("Numbers after swapping are %d and %d",num1, num2);
}