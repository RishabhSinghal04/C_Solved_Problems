// A program to print natural numbers in ascending and descending orders.

#include <stdio.h>
#include <conio.h>

void printAscendingOrder(unsigned short n);
void printDescendingOrder(unsigned short n);

void main()
{
    unsigned short n;

    printf("Enter range: ");
    scanf("%hu", &n);

    printAscendingOrder(n);

    printf("\n");

    printDescendingOrder(n);

    getch();
}

void printAscendingOrder(unsigned short n)
{
    if (n <= 1)
    {
        printf("%hu", n);
        return;
    }

    printAscendingOrder(n - 1);
    printf(", %hu", n);
}

void printDescendingOrder(unsigned short n)
{
    if (n <= 1)
    {
        printf("%hu", n);
        return;
    }
    
    printf("%hu, ", n);
    printDescendingOrder(n - 1);
}