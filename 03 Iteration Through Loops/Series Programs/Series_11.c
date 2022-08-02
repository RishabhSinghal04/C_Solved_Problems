// S = (1 x 2) + (2 x 3) + .... + (19 x 20)
#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int sum = 2;

    printf("(1 x 2)");

    for (int i = 2; i < 20; ++i)
    {
        sum = sum + (i * (i + 1));

        printf(" + (%u x %u)", i, i + 1);
    }

    printf(" = %u", sum);

    getch();
}