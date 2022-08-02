#include <stdio.h>
#include <conio.h>

typedef long long ll;

ll MaxAmongTwoNum(ll, ll);

void main()
{
    ll num1, num2;
    printf("Enter two(2) numbers: ");
    scanf("%lld %lld",&num1, &num2);
    printf("Maximum among two(2) numbers %lld and %lld is %lld",num1, num2, MaxAmongTwoNum(num1, num2));
    getch();
}

ll MaxAmongTwoNum(ll num1, ll num2)
{
    if(num1!=num2)
        return (num1>num2)?num1:num2;
    else
        return 0;
}