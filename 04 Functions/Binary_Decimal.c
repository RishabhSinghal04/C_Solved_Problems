#include <stdio.h>
#include <conio.h>
#include <math.h>

typedef unsigned long long ull;

ull toBinaryFormat(int);
int toDecimalFormat(ull);

void main()
{
    int num;
    ull bin_num;
    // To Binary Format
    printf("Enter a number in 'Decimal Format' :");
    scanf("%u",&num);
    printf("Binary Equivalent of %u is %llu",num, toBinaryFormat(num));
    // To Decimal Format
    printf("\nEnter a number in 'Binary Format' :");
    scanf("%llu",&bin_num);
    printf("Decimal Equivalent of %llu is %u",bin_num, toDecimalFormat(bin_num));
    getch();
}

ull toBinaryFormat(int num)
{
    ull binary_num=0;
    int i=1;
    while(num>0)
    {
        binary_num+=i*(num%2);
        i*=10;
        num/=2;
    }
    return binary_num;
}

int toDecimalFormat(ull bin_num)
{
    int num_len=(int)log10(bin_num);
    int num=0;
    for(int i=0;i<=num_len;i++)
    {
        num+=((bin_num%10)*(int)pow(2,i));
        bin_num/=10;
    }
    return num;
}