
#include <stdio.h>
#include <conio.h>

/**
 * @param  short: number of rows
 * @param  short: number of rows
 * @retval None
 */
void pattern9(unsigned short, unsigned short);
void printSpace(unsigned short);
void printAsterisk(unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of rows: ");
    scanf("%hu", &n);

    pattern9(n, n);

    getch();
}

void pattern9(unsigned short n, unsigned short space)
{
    if (n == 0)
    {
        return;
    }

    printSpace(space - n);
    printAsterisk(2 * n - 1);
    pattern9(n - 1, space);
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

void printSpace(unsigned short space)
{
    if (space == 0)
    {
        return;
    }

    printf("  ");
    printSpace(space - 1);
}