#include <stdio.h>
#include <conio.h>

typedef unsigned long long ull;

int count=0;

int CountDigits(ull);

void main()
{
    ull num;
    printf("Enter a number: ");
    scanf("%llu",&num);
    printf("Number of digits in %llu are/is %u",num, CountDigits(num));
    getch();
}

int CountDigits(ull num)
{
    if(num!=0)
    {
        count++;
        CountDigits(num/10);
    }
    return count;
}