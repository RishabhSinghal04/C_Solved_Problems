
#include <stdio.h>
#include <conio.h>

/**
 * @param  short: number of rows
 * @param  short: number of rows
 * @retval None
 */
void pattern8(unsigned short, unsigned short);
void printSpace(unsigned short);
void printAsterisk(unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of rows: ");
    scanf("%hu", &n);

    pattern8(n, n);

    getch();
}

void pattern8(unsigned short n, unsigned short space)
{
    if (n == 0)
    {
        return;
    }

    pattern8(n - 1, space);
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

    printf("* ");
    printAsterisk(n - 1);
}