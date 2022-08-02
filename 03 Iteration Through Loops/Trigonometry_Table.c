
#include <stdio.h>
#include <conio.h>
#include <math.h>

#define IN_DEG 3.14159f / 180.0f

void main()
{
    printf("\t\t ***** Trigonometric Table *****\n");

    printf("Angles");

    for (int i = 0; i <= 90; i += 15)
    {
        printf("\t  %u", i);
    }

    printf("\nFunctions");

    // Sine Function
    printf("\n\n sin");
    for (int i = 0; i <= 90; i += 15)
    {
        printf("\t %.2f", sin(i * IN_DEG));
    }

    // Cosine Function
    printf("\n\n cos");
    for (int i = 0; i <= 90; i += 15)
    {
        printf("\t %.2f", cos(i * IN_DEG));
    }

    // Tangent Function
    printf("\n\n tan");
    for (int i = 0; i <= 90; i += 15)
    {
        printf("\t %.2f", tan(i * IN_DEG));
    }

    // Cotangent Function
    printf("\n\n cot");
    for (int i = 0; i <= 90; i += 15)
    {
        printf("\t %.2f", 1 / (tan(i * IN_DEG)));
    }

    // Secant Function
    printf("\n\n sec");
    for (int i = 0; i <= 90; i += 15)
    {
        printf("\t %.2f", 1 / (cos(i * IN_DEG)));
    }

    // Cosecant Function
    printf("\n\n cosec");
    for (int i = 0; i <= 90; i += 15)
    {
        printf("\t %.2f", 1 / (sin(i * IN_DEG)));
    }

    getch();
}