#include <stdio.h>
#include <conio.h>

typedef unsigned long long ull;

ull Factorial(int);

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%u",&num);
    printf("Factorial of %u is %llu",num, Factorial(num));
    getch();
}

ull Factorial(int num)
{
    ull factorial=1;
    for(int i=1;i<=num;i++)
        factorial*=i;
    return factorial;
}