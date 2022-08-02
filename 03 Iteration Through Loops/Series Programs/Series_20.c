// S = 2/3 + 4/5 + 8/7 + 16/9 + ....

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    unsigned int n;
    float sum = 0.0f;

    printf("Enter series limit: ");
    scanf("%u", &n);

    printf("2/3");
    sum += 2.0 / 3.0;

    for (int i = 2; i <= n; ++i)
    {
        printf(" + %u/%u", (int)(pow(2, i) + 1e-9), i * 2 + 1);
        sum = sum + pow(2.0, i) / (i * 2 + 1);
    }

    printf(" = %f", sum);

    getch();
}