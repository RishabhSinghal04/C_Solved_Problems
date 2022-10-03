// A program to sort array elements in ascending and descending order using insertion sort technique

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
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

void recursiveInsertionSortAscending(short *, unsigned short);
void recursiveInsertionSortDescending(short *, unsigned short);

short minIntegerIndex(short *, short, short);
short maxIntegerIndex(short *, short, short);

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

    recursiveInsertionSortAscending(array_num_first, n - 1);

    printf("\n\nElements of array in ascending order:-\n");
    displayArrayElements(array_num_first, n - 1);

    recursiveInsertionSortDescending(array_num_second, n - 1);

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
        array[n] = rand() % (max - min + 1) + min;
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

void recursiveInsertionSortAscending(short array[], unsigned short n)
{
    if (n == 0)
    {
        return;
    }
    recursiveInsertionSortAscending(array, n - 1);

    short temp = array[n], index = minIntegerIndex(array, n - 1, array[n]);
    array[index + 1] = temp;
}

void recursiveInsertionSortDescending(short array[], unsigned short n)
{
    if (n == 0)
    {
        return;
    }
    recursiveInsertionSortDescending(array, n - 1);

    short temp = array[n], index = maxIntegerIndex(array, n - 1, array[n]);
    array[index + 1] = temp;
}

short minIntegerIndex(short array[], short index, short temp)
{
    if (index >= 0 && array[index] > temp)
    {
        array[index + 1] = array[index];
        return minIntegerIndex(array, index - 1, temp);
    }
    else
    {
        return index;
    }
}

short maxIntegerIndex(short array[], short index, short temp)
{
    if (index >= 0 && array[index] < temp)
    {
        array[index + 1] = array[index];
        return maxIntegerIndex(array, index - 1, temp);
    }
    else
    {
        return index;
    }
}