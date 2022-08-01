#include <stdio.h>
#include <conio.h>

int start, end;

void Even(int);
void Odd(int);

void main()
{
    printf("Enter range from start to end \n");
    scanf("%d %d",&start, &end);
    if(start%2==0)
    {
        printf("\n All even numbers in the given range (%d to %d) are ",start, end);
        Even(start);
        printf("\n All odd numbers in the given range (%d to %d) are ",start, end);
        Odd(start+1);
    }
    else
    {
        printf("\n All odd numbers in the given range (%d to %d) are ",start, end);
        Odd(start);
        printf("\n All even numbers in the given range (%d to %d) are ",start, end);
        Even(start+1);
    }
    getch();
}

void Even(int start)
{
    if(start>end)
        return;
    else
    {
        printf("%d ",start);
        Even(start+2);
    }
}

void Odd(int start)
{
    if(start>end)
        return;
    else
    {
        printf("%d ",start);
        Odd(start+2);
    }
}