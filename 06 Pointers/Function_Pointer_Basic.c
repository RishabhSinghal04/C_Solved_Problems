#include <stdio.h>
#include <conio.h>

int sum(int ,int);

void main()
{
    int (*fptr)(int, int);  // Declaring a function pointer
    int a,b;

    printf("Enter two(2) numbers: ");
    scanf("%d %d",&a, &b);

    fptr=&sum; // Creating a function pointer 
    printf("Sum is %d",(*fptr)(a,b));   // Referencing a function pointer
    getch();
}

int sum(int a, int b)
{
    return a+b;
}