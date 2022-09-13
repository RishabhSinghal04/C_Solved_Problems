
#include <stdio.h>
#include <conio.h>

void pattern6(unsigned short);
void printAsterisk(unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of rows: ");
    scanf("%hu", &n);

    pattern6(n);

    getch();
}

void pattern6(unsigned short n)
{
    static short count;

    if (count == n)
    {
        return;
    }

    printAsterisk(n);
    count++;
    pattern6(n);
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