#include <stdio.h>
#include <conio.h>

void max(int , int, int*);

void main()
{
    int a, b, m;
    printf("Enetr two(2) number: ");
    scanf("%d %d",&a, &b);
    max(a, b, &m);
    printf("Maximum number among %d and %d is %d",a, b, m);
    getch();
}

void max(int a, int b, int *m)
{
    *m=(a>b)?a:b;
}