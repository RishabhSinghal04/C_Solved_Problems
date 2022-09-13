
#include <stdio.h>
#include <conio.h>

/**
 * @param  short: number of rows
 * @param  short: number of rows
 * @retval None
 */
void pattern11(unsigned short, unsigned short);

void printSpace(unsigned short);
void printAsterisk(unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of rows: ");
    scanf("%hu", &n);

    pattern11(n, n);

    getch();
}

void pattern11(unsigned short n, unsigned short num_rows)
{
    if (n == 0)
    {
        printAsterisk(2 * num_rows + 1);
        return;
    }

    // To print upper part of rhombus
    printSpace(n);
    printAsterisk(2 * (num_rows - n) + 1);

    pattern11(n - 1, num_rows);

    // TO print lower part of rhombus
    printSpace(n);
    printAsterisk(2 * (num_rows - n) + 1);
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
        printf("\n");
        return;
    }

    printf("* ");
    printAsterisk(n - 1);
}