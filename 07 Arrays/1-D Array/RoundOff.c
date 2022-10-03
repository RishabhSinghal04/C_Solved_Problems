// A program to print round off values of those real numbers whose fractional part is greater than or equal to 5.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void RoundOff(float *, unsigned short);
void initializeArrayElements(float *, unsigned short);
void displayArrayElements(float *, unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    float array_num[n];

    initializeArrayElements(array_num, n);

    printf("\nElements of array are:-\n");
    displayArrayElements(array_num, n);

    RoundOff(array_num, n);

    printf("\nElements after round off are:-\n");
    displayArrayElements(array_num, n);

    getch();
}

void initializeArrayElements(float array[], unsigned short n)
{
    srand(time(NULL));

    for (int i = 0; i < n; ++i)
    {
        array[i] = ((float)rand() / (float)RAND_MAX) * 100;
    }
}

void RoundOff(float array[], unsigned short n)
{
    for (int i = 0; i < n; ++i)
    {
        if (array[i] - (int)array[i] >= 0.5)
        {
            array[i] = ceil(array[i]);
        }
    }
}

void displayArrayElements(float array[], unsigned short n)
{
    printf("%.2f", array[0]);

    for (int i = 1; i < n; ++i)
    {
        printf(", %.2f", array[i]);
    }
}