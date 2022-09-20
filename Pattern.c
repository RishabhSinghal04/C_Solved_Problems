
#include <stdio.h>
#include <conio.h>

void pattern();

void main()
{
    pattern();

    getch();
}

void pattern()
{
    unsigned short a = 1;

    for (short i = 1; i <= 13; ++i)
    {
        for (short j = 1; j <= 28; ++j)
        {
            if (i % 4 == 1)
            {
                printf("-");
            }
            else if (j % 9 == 1)
            {
                printf("|");
            }
            else if (i % 2 == 1 && (j == 5 || j == 15 || j == 24))
            {
                printf("%hu", a);
                a++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}