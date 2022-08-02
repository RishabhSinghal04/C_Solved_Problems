/**
Write a program to input two integers n and p. 
Find and print n raised to the power p without using pow( ) function.
**/

#include <stdio.h>
#include <conio.h>

void main()
{
    int n,p,n_pow=1;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter power: ");
    scanf("%d", &p);

    for(int i=1; i<=p; ++i)
    {
        n_pow *= n;
    }

    printf("Result is %d", n_pow);

    getch();
}