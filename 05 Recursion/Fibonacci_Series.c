#include <stdio.h>
#include <conio.h>

int fibonacci(int);

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%u",&num);
    for(int i=0;i<=num;i++)
        printf("%u  ",fibonacci(i));
    getch();
}

int fibonacci(int num)
{
    if(num<=1)
        return num;
    else
        return fibonacci(num-1)+fibonacci(num-2);
}