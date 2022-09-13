
#include <stdio.h>
#include <conio.h>

/**
 * @brief  A function to print the required pattern
 * @param  short: number of rows
 * @param  short: number of rows
 * @retval None
 */
void pattern5(unsigned short, unsigned short);

void printSpace(unsigned short);

void printAsterisk(unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of rows: ");
    scanf("%hu", &n);

    pattern5(n, n);

    getch();
}

void pattern5(unsigned short n, unsigned short space)
{
    if (n == 0)
    {
        return;
    }

    pattern5(n - 1, space);
    printSpace(space - n);
    printAsterisk((n - 1) * 2 + 1);
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
        printf("\n");
        return;
    }

    printf("*");
    printAsterisk(n - 1);
}