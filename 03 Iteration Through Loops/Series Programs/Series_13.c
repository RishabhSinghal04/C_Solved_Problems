// S = a/2! - a/3! + a/4! - a/5! + .... + a/20!

#include <stdio.h>
#include <conio.h>

void main()
{
    int a;
    unsigned long long factorial = 1;
    float sum = 0.0f;

    printf("Enter the value of 'a': ");
    scanf("%d", &a);

    printf("%d/2!", a);
    sum += (a / 2.0);

    for (int i = 2; i < 20; ++i)
    {
        factorial = 1;

        // Calculate factorial of (i + 1)th term
        for (int j = 2; j <= i + 1; ++j)
        {
            factorial *= j;
        }

        // Terms at even positions
        if (i % 2 == 0)
        {
            printf(" - %d/%u!", a, i + 1);
            sum -= (a / (float)factorial);
        }
        // Terms at odd positions
        else
        {
            printf(" + %d/%u!", a, i+1);
            sum += (a / (float)factorial);
        }
    }

    printf(" = %f", sum);

    getch();
}