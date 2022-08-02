#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    long long num;
    short flag=0;
    printf("Enter a number: ");
    scanf("%lld",&num);
    for(int i=1;i<=cbrt(num);i++)
    {
        if(i==cbrt(num))
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("%lld is a Perfect Cube",num);
    else
        printf("%lld is not a Perfect Cube",num);
    getch();
}