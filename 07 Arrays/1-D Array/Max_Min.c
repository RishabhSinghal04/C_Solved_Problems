// A program to find the smallest and the largest integer present in array using recursion

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

/**
 * @brief  Function to initialize array elements
 * @param  *: array
 * @param  short: one less than size of array
 * @retval None
 */
void initializeArrayElements(short *, unsigned short);

/**
 * @brief  Function to display array elements
 * @param  *: array
 * @param  short: one less than size of array
 * @retval None
 */
void displayArrayElements(short *, unsigned short);

/**
 * @brief  Function to find the smallest integer
 * @param  *: array
 * @param  short: one less than size of array
 * @retval None
 */
short minInteger(short *, unsigned short);

/**
 * @brief  Function to find the largest integer
 * @param  *: array
 * @param  short: one less than size of array
 * @retval None
 */
short maxInteger(short *, unsigned short);

short min(short, short);
short max(short, short);

void main()
{
    unsigned short n;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    short array_num[n];

    initializeArrayElements(array_num, n - 1);

    printf("Elements of array are:-\n");
    displayArrayElements(array_num, n - 1);

    printf("\nSmallest Integer is %hd\nLargest Integer is %hd", minInteger(array_num, n - 1), maxInteger(array_num, n - 1));

    getch();
}

void initializeArrayElements(short array[], unsigned short n)
{
    short min = -1000, max = 1000;

    srand(time(NULL));

    if (n == 0)
    {
        array[0] = rand() % (max - min + 1) + min;
        return;
    }

    initializeArrayElements(array, n - 1);
    array[n] = rand() % (max - min + 1) + min;
}

void displayArrayElements(short array[], unsigned short n)
{
    if (n == 0)
    {
        printf("%hd", array[0]);
        return;
    }

    displayArrayElements(array, n - 1);
    printf(", %hd", array[n]);
}

short minInteger(short array[], unsigned short n)
{
    if (n == 0)
    {
        return array[0];
    }

    return min(array[n], minInteger(array, n - 1));
}

short maxInteger(short array[], unsigned short n)
{
    if (n == 0)
    {
        return array[0];
    }

    return max(array[n], maxInteger(array, n - 1));
}

short min(short num1, short num2)
{
    return (num1 < num2) ? num1 : num2;
}

short max(short num1, short num2)
{
    return (num1 > num2) ? num1 : num2;
}