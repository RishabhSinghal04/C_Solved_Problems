// S = 1 + (1 x 2) + 2 + (1 x 2 x 3) .... 9 + (1 x 2 x 3 x 4 x .... x 10)

#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned sum = 3, product = 1;
    printf("1 + (1 x 2)");

    for (int i = 2; i < 10; ++i)
    {
        printf(" + %u + (1", i);
        product = 1;

        for (int j = 2; j <= i + 1; ++j)
        {
            product *= j;
            printf(" x %u", j);
        }
        
        sum = sum + i + product;
        printf(")");
    }

    printf(" = %u", sum);

    getch();
}