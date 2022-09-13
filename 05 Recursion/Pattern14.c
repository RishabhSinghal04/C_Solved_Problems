
#include <stdio.h>
#include <conio.h>

void pattern14(unsigned short);
void printAsterisk(unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of rows: ");
    scanf("%hu", &n);

    pattern14(n);

    getch();
}

void pattern14(unsigned short n)
{
    if (n == 0)
    {
        return;
    }

    printAsterisk(n); // To print upper part
    pattern14(n - 1);
    printAsterisk(n); // To print lower part
}

void printAsterisk(unsigned short n)
{
    if (n == 0)
    {
        printf("\n");
        return;
    }

    printf("* ");
    printAsterisk(n - 1);
}