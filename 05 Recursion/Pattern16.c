
#include <stdio.h>
#include <conio.h>

/**
 * @param  short: number of rows
 * @param  short: number of rows
 * @retval None
 */
void pattern16(unsigned short, unsigned short);

void printSpace(int);
void printAsterisk(unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of rows: ");
    scanf("%hu", &n);

    pattern16(n, n);

    getch();
}

void pattern16(unsigned short n, unsigned short space)
{
    if (n == 0)
    {
        printAsterisk(2 * space + 1);
        printf("\n");
        return;
    }

    // To print upper half part of the pattern
    printAsterisk(space + 1 - n);
    printSpace(2 * n - 1);
    printAsterisk(space + 1 - n);
    printf("\n");

    pattern16(n - 1, space);

    // To print lower half part of the pattern
    printAsterisk(space + 1 - n);
    printSpace(2 * n - 1);
    printAsterisk(space + 1 - n);
    printf("\n");
}

void printSpace(int space)
{
    if (space <= 0)
    {
        return;
    }

    printf("  ");
    printSpace(space - 1);
}

void printAsterisk(unsigned short n)
{
    if (n == 0)
    {
        return;
    }

    printf("* ");
    printAsterisk(n - 1);
}