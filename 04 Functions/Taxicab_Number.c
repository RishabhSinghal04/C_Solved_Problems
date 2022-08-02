/* Express a number as a sum of two cubic numbers */
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

typedef long long ll;

bool isTaxicabNumber(ll);

void main()
{
    ll num;
    printf("Enter a number: ");
    scanf("%lld",&num);
    if(isTaxicabNumber(num))
        printf("%lld is a Taxicab Number",num);
    else
        printf("%lld is not a Taxicab Number",num);
    getch();
}

bool isTaxicabNumber(ll num)
{
    int count=0, flag=0;
    for(int i=1;i<=cbrt(num);i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i*i*i+j*j*j==num)
            {
                printf("%d^3 + %d^3 = %lld \n",i, j, num);
                count++;
                flag=1;
            }
        }
    }
    return (flag==1 && count >=2)?true:false;
}