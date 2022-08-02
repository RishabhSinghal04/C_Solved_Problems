#include <stdio.h>
#include <conio.h>

typedef unsigned long long ull;

ull factorial(int);

void main()
{
    ull num;
    printf("Enter a number: ");
    scanf("%u",&num);
    printf("Factorial of %u is %llu",num, factorial(num));
    getch();
}

ull factorial(int num)
{
    if(num<=1)
        return 1;
    else
        return num*factorial(num-1);
}