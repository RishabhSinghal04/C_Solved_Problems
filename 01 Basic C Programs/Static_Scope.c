#include <stdio.h>
#include <conio.h>

int a, b;

void print()
{
    printf("%d %d", a, b);
}

int fun1()
{
    int a, c;
    a = 0;
    b = 1;
    c = 2;
    return c;
}

void fun2()
{
    int b;
    a = 3;
    b = 4;
    print();
}

void main()
{
    printf("Enter a character: ");
    getchar();
    
    a = fun1();
    fun2();
    getch();
}