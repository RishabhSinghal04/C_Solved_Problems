
#include <stdio.h>
#include <conio.h>

void pattern1(unsigned short);
void printAsterisk(unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of rows: ");
    scanf("%hu", &n);

    pattern1(n);

    getch();
}

void pattern1(unsigned short n)
{
    if (n == 0)
    {
        return;
    }

    pattern1(n - 1);
    printAsterisk(n);
}

void printAsterisk(unsigned short n)
{
    if (n == 0)
    {
        printf("\n");
        return;
    }

    printf("*");
    printAsterisk(n - 1);
}