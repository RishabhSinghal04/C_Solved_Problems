// A program to sort array elements in ascending and descending order using bubble sort technique

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

/**
 * @brief  Function to initialize array elements with random values
 * @param  *: array
 * @param  short: size of array
 * @retval None
 */
void initializeArrayElements(short *, unsigned short);

/**
 * @brief  Function to display array elements
 * @param  *: array
 * @param  short: size of array
 * @retval None
 */
void displayArrayElements(short *, unsigned short);

/**
 * @brief  Function to sort array elements in ascending order
 * @param  *: array
 * @param  short: size of array
 * @retval None
 */
void BubbleSortAscending(short *, unsigned short);

/**
 * @brief  Function to sort array elements in descending order
 * @param  *: array
 * @param  short: size of array
 * @retval None
 */
void BubbleSortDescending(short *, unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    short array_num[n];

    initializeArrayElements(array_num, n);

    printf("\nElements of array are:-\n");
    displayArrayElements(array_num, n);

    BubbleSortAscending(array_num, n);

    printf("\n\nElements of array in ascending order:-\n");
    displayArrayElements(array_num, n);

    BubbleSortDescending(array_num, n);

    printf("\n\nElements of array in descending order:-\n");
    displayArrayElements(array_num, n);

    getch();
}

void initializeArrayElements(short array[], unsigned short n)
{
    short min = -1000, max = 1000;

    srand(time(NULL));

    for (int i = 0; i < n; ++i)
    {
        array[i] = rand() % (max - min + 1) + min;
    }
}

void displayArrayElements(short array[], unsigned short n)
{
    printf("%hd", array[0]);

    for (int i = 1; i < n; ++i)
    {
        printf(", %hd", array[i]);
    }
}

void BubbleSortAscending(short array[], unsigned short n)
{
    bool is_sorted = true;
    short temp;

    for (int i = 0; i < n; ++i)
    {
        is_sorted = true;

        for (int j = 0; j < n - i - 1; ++j)
        {
            if (array[j + 1] < array[j])
            {
                temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
                is_sorted = false;
            }
        }
        if(is_sorted)
        {
            return;
        }
    }
}

void BubbleSortDescending(short array[], unsigned short n)
{
    bool is_sorted = true;
    short temp;

    for (int i = 0; i < n; ++i)
    {
        is_sorted = true;

        for (int j = 0; j < n - i - 1; ++j)
        {
            if (array[j + 1] > array[j])
            {
                temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
                is_sorted = false;
            }
        }
        if(is_sorted)
        {
            return;
        }
    }
}