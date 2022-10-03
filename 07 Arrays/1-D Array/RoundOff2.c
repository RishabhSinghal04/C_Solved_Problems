// A program to print round off values of those real numbers whose fractional part is greater than or equal to 5.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/**
 * @brief  Function to round off values of those real numbers whose fractional part is greater than or equal to 5.
 * @param  *: array
 * @param  short: one less than size of array
 * @retval None
 */
void RoundOff(float *, unsigned short);

/**
 * @brief  Function to initialize array elements
 * @param  *: array
 * @param  short: one less than size of array
 * @retval None
 */
void initializeArrayElements(float *, unsigned short);

/**
 * @brief  Function to display array elements
 * @param  *: array
 * @param  short: one less than size of array
 * @retval None
 */
void displayArrayElements(float *, unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    float array_num[n];

    initializeArrayElements(array_num, n - 1);

    printf("\nElements of array are:-\n");
    displayArrayElements(array_num, n - 1);

    RoundOff(array_num, n);

    printf("\nElements after round off are:-\n");
    displayArrayElements(array_num, n - 1);

    getch();
}

void initializeArrayElements(float array[], unsigned short n)
{
    if (n == 0)
    {
        array[0] = ((float)rand() / (float)RAND_MAX) * 100;
        return;
    }

    srand(time(NULL));
    initializeArrayElements(array, n - 1);

    array[n] = ((float)rand() / (float)RAND_MAX) * 100;
}

void RoundOff(float array[], unsigned short n)
{
    if (n == 0)
    {
        if (array[0] - (int)array[0] >= 0.5)
        {
            array[0] = ceil(array[0]);
        }
        return;
    }

    if (array[n] - (int)array[n] >= 0.5)
    {
        array[n] = ceil(array[n]);
    }
    RoundOff(array, n - 1);
}

void displayArrayElements(float array[], unsigned short n)
{
    if (n == 0)
    {
        printf("%.2f", array[0]);
        return;
    }

    displayArrayElements(array, n - 1);
    printf(", %.2f", array[n]);
}