// A program to sort array elements in ascending and descending order using seletion sort technique

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
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
 * @note
 * @param  *: array
 * @param  short: size of array
 * @retval None
 */
void SelectionSortAscending(short *, unsigned short);

/**
 * @brief  Function to sort array elements in descending order
 * @note
 * @param  *: array
 * @param  short: size of array
 * @retval None
 */
void SelectionSortDescending(short *, unsigned short);

/**
 * @brief  Function to print all distinct elements in an array
 * @param  *: array
 * @param  short: size of array
 * @retval None
 */
void DistinctElements(short *, unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    short array_num[n];

    initializeArrayElements(array_num, n);

    printf("\nElements of array are:-\n");
    displayArrayElements(array_num, n);

    SelectionSortAscending(array_num, n);

    printf("\n\nElements of array in ascending order:-\n");
    displayArrayElements(array_num, n);

    printf("\nUnique elements in array are:-\n");
    DistinctElements(array_num, n);

    getch();
}

void initializeArrayElements(short array[], unsigned short n)
{
    short min = -10, max = 10;

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

void SelectionSortAscending(short array[], unsigned short n)
{
    short temp;
    int index;

    for (int i = 0; i < n - 1; ++i)
    {
        index = i;

        for (int j = i + 1; j < n; ++j)
        {
            if (array[j] < array[index])
            {
                index = j;
            }
        }

        if (i != index)
        {
            temp = array[i];
            array[i] = array[index];
            array[index] = temp;
        }
    }
}

void SelectionSortDescending(short array[], unsigned short n)
{
    short temp;
    int index;

    for (int i = 0; i < n - 1; ++i)
    {
        index = i;

        for (int j = i + 1; j < n; ++j)
        {
            if (array[j] > array[index])
            {
                index = j;
            }
        }

        if (i != index)
        {
            temp = array[i];
            array[i] = array[index];
            array[index] = temp;
        }
    }
}

void DistinctElements(short array[], unsigned short n)
{
    for (int i = 0; i < n; ++i)
    {
        while (array[i] == array[i + 1] && i < n - 1)
        {
            i++;
        }
        printf("%hd\n", array[i]);
    }
}