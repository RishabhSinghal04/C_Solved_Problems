
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    printf("Numbers");

    for (float i = 0.0; i <= 1.0; i += 0.1)
    {
        printf("\t  %.1f", i);
    }

    for (float i = 0.0; i < 10.0; i += 1.0)
    {
        printf("\n\n  %.1f", i);

        for (float j = 0.0; j < 1.0; j += 0.1)
        {
            printf("\t  %.2f", sqrtf(i + j));
        }
    }

    getch();
}