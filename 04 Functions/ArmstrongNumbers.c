#include <stdio.h>
#include <conio.h>

long long cube(int);
void printArmstrongNumbers();

void main()
{
    printf("Armstrong Numbers from 10 to 999 are :-\n");
    printArmstrongNumbers();
    getch();
}

long long cube(int num)
{
    return num*num*num;
}

void printArmstrongNumbers()
{
    int sum_digit=0, temp;
    for(int i=10;i<1000;i++)
    {
        temp=i;
        sum_digit=0;
        while(temp>0)
        {
            sum_digit+=cube(temp%10);
            temp/=10;
        }
        if(sum_digit==i)
            printf("%d\n",i);
    }
}