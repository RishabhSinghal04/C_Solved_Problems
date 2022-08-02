
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int a, b, c;
    float d = 0.0f;

    printf("Enter values of the quadratic equation variables 'a', 'b' and 'c':-\n('a' is not equal to 0)\n");
    scanf("%d %d%d", &a, &b, &c);

    if (a == 0)
    {
        printf("I N V A L I D");
        goto TERMINATE;
    }

    d = (float)(b * b - 4 * a * c);

    if (d > 0)
    {
        printf("Roots are real and different\n");
        printf("%f\n%f", (float)(-b + sqrtf(d)) / (2 * a), (float)(-b - sqrtf(d)) / (2 * a));
    }
    else if (d < 0)
    {
        printf("Roots are complex\n");
        printf("%f + i%f\n%f - i%f", -(float)b / (2 * a), sqrtf(d) / (2 * a), -(float)b / (2 * a), sqrtf(d) / (2 * a));
    }
    else
    {
        printf("Roots are real and same\n");
        printf("%f", -(float)b / (2 * a));
    }

TERMINATE:
    getch();
}