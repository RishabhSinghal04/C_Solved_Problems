#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

bool isFugralNumber(long long);

void main()
{
    long long num;

    printf("Enter a number: ");
    scanf("%lld",&num);

    if(isFugralNumber(num))
        printf("%lld is a Fugral Number",num);
    else
        printf("%lld is not a Fugral Number",num);

    getch();
}

bool isFugralNumber(long long number)
{
    int len_num=1+(int)log10(number), temp=number, count=0, factor_len;

    for(int i = 2; i <= (temp/2)+1; i++)
    {
        long long num_pow=1;
        while(temp%i==0)
        {
           // printf("%d\n",i);
            num_pow*=i;
            temp/=i;
            count++;
        }
        if(num_pow==number)
        {
            factor_len=1+(int)log10(i);
            if(len_num>(1+(int)log10(count))+factor_len)
                return true;
            else
                return false;
        }
    }
    return false;
}