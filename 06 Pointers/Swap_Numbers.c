#include <stdio.h>
#include <conio.h>

void swap(int *x, int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}

void main()
{
    int a,b, *x, *y;
    printf("Enter two(2) numbers: ");
    scanf("%d %d",&a, &b);
    x=&a;
    y=&b;
    swap(&x, &y);
    printf("Numbers after swapping are: %d %d",*x,*y);
    getch();
}