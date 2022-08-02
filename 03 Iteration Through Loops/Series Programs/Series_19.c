// S = (1 + 2)/(1 x 2) + (1 + 2 + 3)/(1 x 2 x 3) + .... + (1 + 2 + 3 + .... + n)/(1 x 2 x 3 x.... x n).

#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n, sum_numerator = 0, product = 1;
    float sum = 0;

    printf("Enter series limit: ");
    scanf("%u", &n);

    printf("3/2");
    sum = (1.0 + 2.0) / (1.0 * 2.0);

    for (int i = 2; i <= n; ++i)
    {
        sum_numerator = 0;
        product = 1;

        for (int j = 1; j <= i + 1; ++j)
        {
            sum_numerator += j;
            product *= j;
        }

        printf(" + %u/%u", sum_numerator, product);
        sum += (sum_numerator/(float)product);
    }

    printf(" = %f", sum);

    getch();
}