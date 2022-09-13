
#include <stdio.h>
#include <conio.h>

void pattern10(unsigned short);

/**
 * @brief  to print upper part of rhombus
 * @note
 * @param  short: number of rows
 * @param  short: number of rows
 * @retval None
 */
void upperPart(unsigned short, unsigned short);

/**
 * @brief  to print lower part of rhombus
 * @note
 * @param  short: number of rows
 * @param  short: number of rows
 * @retval None
 */
void lowerPart(unsigned short, unsigned short);

void printSpace(unsigned short);
void printAsterisk(unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of rows: ");
    scanf("%hu", &n);

    pattern10(n);

    getch();
}

void pattern10(unsigned short n)
{
    upperPart(n, n);
    lowerPart(n - 1, n - 1);
}

void upperPart(unsigned short n, unsigned short space)
{
    if (n == 0)
    {
        return;
    }

    upperPart(n - 1, space);
    printSpace(space - n);
    printAsterisk(n);
}

void lowerPart(unsigned short n, unsigned short space)
{
    if (n == 0)
    {
        return;
    }

    printSpace(space + 1 - n);
    printAsterisk(n);
    lowerPart(n - 1, space);
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