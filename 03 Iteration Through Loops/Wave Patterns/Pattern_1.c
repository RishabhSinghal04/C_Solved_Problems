
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    unsigned int wave_height, wave_length, temp;

    printf("Enter number of rows: ");
    scanf("%u", &wave_height);

    printf("Enter number of columns: ");
    scanf("%u", &wave_length);

    temp = wave_height - 1;

    for (int i = 1; i <= wave_height; ++i)
    {
        for (int j = 0; j <= (wave_height - 1) * wave_length * 2; ++j)
        {
            // Left Part                                         // Right Part
            if (j % ((wave_height - 1) * 2) == wave_height - i || j % ((wave_height - 1) * 2) == temp)
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