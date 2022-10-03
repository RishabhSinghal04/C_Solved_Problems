// A program to sort array elements in ascending and descending order using Bubble sort technique (recursive approach)

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

/**
 * @brief  Function to initialize array elements with random values
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
 * @brief  Function to copy elements of an array
 * @param  *: array that has elements
 * @param  *: array in which elements need to be copied
 * @param  short: one less than size of array
 * @retval None
 */
void copyArrayElements(short *, short *, unsigned short);

/**
 * @brief  Function to sort array elements in ascending order
 * @param  *: array
 * @param  short: one less than size of array
 * @param  short: pass constant 0
 * @retval None
 */
void recursiveBubbleSortAscending(short *, unsigned short, unsigned short);

/**
 * @brief  Function to sort array elements in descending order
 * @param  *: array
 * @param  short: one less than size of array
 * @param  short: pass constant 0
 * @retval None
 */
void recursiveBubbleSortDescending(short *, unsigned short, unsigned short);

bool swapArrayElementMin(short *, unsigned short, unsigned short, bool);
bool swapArrayElementMax(short *, unsigned short, unsigned short, bool);

void main()
{
    unsigned short n;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    short array_num_first[n], array_num_second[n];

    initializeArrayElements(array_num_first, n - 1);
    copyArrayElements(array_num_first, array_num_second, n - 1);

    printf("\nElements of array are:-\n");
    displayArrayElements(array_num_first, n - 1);

    recursiveBubbleSortAscending(array_num_first, n - 1, 0);

    printf("\n\nElements of array in ascending order:-\n");
    displayArrayElements(array_num_first, n - 1);

    recursiveBubbleSortDescending(array_num_second, n - 1, 0);

    printf("\n\nElements of array in descending order:-\n");
    displayArrayElements(array_num_second, n - 1);

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

void copyArrayElements(short first_array[], short second_array[], unsigned short n)
{
    if(n == 0)
    {
        second_array[n] = first_array[n];
        return;
    }

    copyArrayElements(first_array, second_array, n - 1);
    second_array[n] = first_array[n];
}

void recursiveBubbleSortAscending(short array[], unsigned short n, unsigned short index)
{
    bool is_sorted = true;

    if (index == n)
    {
        return;
    }

    is_sorted = swapArrayElementMin(array, 0, n - index, is_sorted);

    // If the array is not sorted
    if (!is_sorted)
    {
        recursiveBubbleSortAscending(array, n, index + 1);
    }
}

void recursiveBubbleSortDescending(short array[], unsigned short n, unsigned short index)
{
    bool is_sorted = true;

    if (index == n)
    {
        return;
    }

    is_sorted = swapArrayElementMax(array, 0, n - index, is_sorted);

    // If the array is not sorted
    if (!is_sorted)
    {
        recursiveBubbleSortDescending(array, n, index + 1);
    }
}

bool swapArrayElementMin(short array[], unsigned short index, unsigned short n, bool is_sorted)
{
    if (index == n)
    {
        return is_sorted;
    }

    short temp;

    if (array[index + 1] < array[index])
    {
        temp = array[index + 1];
        array[index + 1] = array[index];
        array[index] = temp;
        is_sorted = false;
    }
    return swapArrayElementMin(array, index + 1, n, is_sorted);
}

bool swapArrayElementMax(short array[], unsigned short index, unsigned short n, bool is_sorted)
{
    if (index == n)
    {
        return is_sorted;
    }

    short temp;

    if (array[index + 1] > array[index])
    {
        temp = array[index + 1];
        array[index + 1] = array[index];
        array[index] = temp;
        is_sorted = false;
    }
    return swapArrayElementMax(array, index + 1, n, is_sorted);
}