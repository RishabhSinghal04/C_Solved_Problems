
#include <stdio.h>
#include <conio.h>

/**
 * @param  short: number of rows
 * @param  short: number of rows
 * @retval None
 */
void pattern7(unsigned short, unsigned short);
void printSpace(unsigned short);
void printAsterisk(unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of rows: ");
    scanf("%hu", &n);

    pattern7(n, n);

    getch();
}

void pattern7(unsigned short n, unsigned short space)
{
    if (n == 0)
    {
        return;
    }

    pattern7(n - 1, space);
    printSpace(space - n);

    if (n == space)
    {
        for (short i = 1; i <= n; ++i)
        {
            (i == n) ? printf("*") : printf("* ");
        }
    }
    else
    {
        printAsterisk(2 * n - 1);
    }
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
    for (short i = 1; i <= n; ++i)
    {
        if (i == n)
        {
            printf("*\n");
        }
        else if (i == 1)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
}