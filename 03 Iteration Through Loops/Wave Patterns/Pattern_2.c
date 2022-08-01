
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    unsigned int row, column, temp;

    printf("Enter number of rows: ");
    scanf("%u", &row);

    printf("Enter number of columns: ");
    scanf("%u", &column);

    temp = row - 1;

    for (int i = 1; i <= row; ++i)
    {
        for (int j = 0; j <= (row - 1) * column * 2; ++j)
        {
            if (j % ((row - 1) * 2) == row - i || i == row || j % ((row - 1) * 2) == temp)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        temp++;
    }

    getch();
}