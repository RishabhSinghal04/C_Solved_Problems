#include <stdio.h>
#include <conio.h>

typedef long long ll;

ll maxAmonngThreeNum(ll, ll, ll);

void main()
{
    ll num1, num2, num3;
    printf("Enter three(3) numbers: ");
    scanf("%lld %lld %lld",&num1, &num2, &num3);
    printf("Maximum among three(3) numbers %lld, %lld and %lld is %lld",num1, num2, num3, maxAmonngThreeNum(num1, num2, num3));
    getch();
}

ll maxAmonngThreeNum(ll n1, ll n2, ll n3)
{
    if(n1==n2 && n1==n3)
        return 0;
    else
        return (n1>n2)?(n1>n3?n1:n3):(n2>n3?n2:n3);
}