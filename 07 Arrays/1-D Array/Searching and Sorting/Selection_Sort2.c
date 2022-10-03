// A program to sort array elements in ascending and descending order using seletion sort technique (Recursive Approach)

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

/**
 * @brief  Function to sort array elements in ascending order
 * @note
 * @param  *: array
 * @param  short: one less than size of array
 * @param  short: pass constant 0
 * @retval None
 */
void recursiveSelectionSortAscending(short *, unsigned short, unsigned short);

/**
 * @brief  Function to sort array elements in descending order
 * @note
 * @param  *: array
 * @param  short: one less than size of array
 * @param  short: pass constant 0
 * @retval None
 */
void recursiveSelectionSortDescending(short *, unsigned short, unsigned short);

/**
 * @brief  Function to find the index of the smallest integer
 * @note   
 * @param  *: array
 * @param  short: lower index
 * @param  short: upper index
 * @retval 
 */
unsigned short minIntegerIndex(short *, unsigned short, unsigned short);

/**
 * @brief  Function to find the index of the largest integer
 * @note   
 * @param  *: array
 * @param  short: lower index
 * @param  short: upper index
 * @retval 
 */
unsigned short maxIntegerIndex(short *, unsigned short, unsigned short);

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

    recursiveSelectionSortAscending(array_num_first, n - 1, 0);

    printf("\n\nElements of array in ascending order:-\n");
    displayArrayElements(array_num_first, n - 1);

    recursiveSelectionSortDescending(array_num_second, n - 1, 0);

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

void recursiveSelectionSortAscending(short array[], unsigned short n, unsigned short index)
{
    short temp;

    if (index == n)
    {
        return;
    }

    unsigned short i = minIntegerIndex(array, index, n);

    if (i != index)
    {
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }

    recursiveSelectionSortAscending(array, n, index + 1);
}

void recursiveSelectionSortDescending(short array[], unsigned short n, unsigned short index)
{
    short temp;

    if (index == n)
    {
        return;
    }

    unsigned short i = maxIntegerIndex(array, index, n);

    if (i != index)
    {
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }

    recursiveSelectionSortDescending(array, n, index + 1);
}

unsigned short minIntegerIndex(short array[], unsigned short i, unsigned short j)
{
    if (i == j)
    {
        return i;
    }

    unsigned short k = minIntegerIndex(array, i + 1, j);

    return (array[i] < array[k]) ? i : k;
}

unsigned short maxIntegerIndex(short array[], unsigned short i, unsigned short j)
{
    if (i == j)
    {
        return i;
    }

    unsigned short k = maxIntegerIndex(array, i + 1, j);

    return (array[i] > array[k]) ? i : k;
}