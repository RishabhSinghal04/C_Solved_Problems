#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

typedef long long ll;

bool haveSameDigits(ll, ll);

void main()
{
    ll n1,n2;
    printf("Enter two(2) numbers: ");
    scanf("%lld %lld",&n1, &n2);
    if(haveSameDigits(n1, n2))
        printf("Have same digits");
    else
        printf("Do not have same digits");
    getch();
}

bool haveSameDigits(ll n1, ll n2)
{
    for (ll i = n1; i > 0; i/=10)
    {
        int c1=0, c2=0;
        for (ll j = n1; j > 0 ; j/=10)
        {
            if(i%10==j%10)
                c1++;
        }
        for (ll j = n2; j > 0; j/=10)
        {
            if(i%10==j%10)
                c2++;
        }
        if(c1!=c2)
            return false;
    }
    return true;
}