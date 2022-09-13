
#include <stdio.h>
#include <conio.h>

/**
 * @brief  A function to print the required pattern
 * @param  short: number of rows
 * @param  short: number of rows
 * @retval None
 */
void pattern3(unsigned short, unsigned short);

/**
 * @brief  A function to print space
 * @param  short:
 * @param  short:
 * @retval None
 */
void printSpace(unsigned short);

/**
 * @brief  A function to print asterisk(*)
 * @param  short:
 * @retval None
 */
void printAsterisk(unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of rows: ");
    scanf("%hu", &n);

    pattern3(n, n);

    getch();
}

void pattern3(unsigned short n, unsigned short space)
{
    if (n == 0)
    {
        return;
    }

    pattern3(n - 1, space);
    printSpace(space - n);
    printAsterisk(n);
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