
#include <stdio.h>
#include <conio.h>

void pattern2(unsigned short);
void printAsterisk(unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of rows: ");
    scanf("%hu", &n);

    pattern2(n);

    getch();
}

void pattern2(unsigned short n)
{
    if (n == 0)
    {
        return;
    }

    printAsterisk(n);
    pattern2(n - 1);
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