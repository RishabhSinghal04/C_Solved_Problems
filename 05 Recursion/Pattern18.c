
#include <stdio.h>
#include <conio.h>

/**
 * @param  short: number of rows
 * @param  short: number of rows
 * @retval None
 */
void pattern18(unsigned short, unsigned short);

void printSpace(unsigned short);
void printAsterisk(unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of rows: ");
    scanf("%hu", &n);

    pattern18(n, n);

    getch();
}

void pattern18(unsigned short n, unsigned short space)
{
    if (n == 0)
    {
        printSpace(space - n);
        printAsterisk(1);
        printf("\n");
        return;
    }

    // To print upper half part of the pattern
    printSpace(space - n);
    printAsterisk(2 * n + 1);
    printf("\n");

    pattern18(n - 1, space);

    // To print lower half part of the pattern
    printSpace(space - n);
    printAsterisk(2 * n + 1);
    printf("\n");
}

void printSpace(unsigned short space)
{
    if (space == 0)
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