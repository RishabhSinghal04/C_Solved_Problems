
#include <stdio.h>
#include <conio.h>

/**
 * @param  short: number of rows
 * @param  short: number of rows
 * @retval None
 */
void pattern12(unsigned short, unsigned short);

void printSpace(unsigned short);
void printAsterisk(unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of rows: ");
    scanf("%hu", &n);

    pattern12(n, n);

    getch();
}

void pattern12(unsigned short n, unsigned short space)
{
    if (n == 0)
    {
        return;
    }

    printAsterisk(n);
    printSpace(2 * (space - n) + 1);
    printAsterisk(n);
    printf("\n");

    pattern12(n - 1, space);
}

void printSpace(unsigned short space)
{
    if (space == 0)
    {
        return;
    }

    printf(" ");
    printSpace(space - 1);
}

void printAsterisk(unsigned short n)
{
    if (n == 0)
    {
        return;
    }

    printf("*");
    printAsterisk(n - 1);
}
