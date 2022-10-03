// A program to find whether an integer is present in an array or not using binary search technique (recursive approach)

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
 * @brief  Function to sort array elements in ascending order
 * @note
 * @param  *: array
 * @param  short: one less than size of array
 * @param  short: pass constant 0
 * @retval None
 */
void recursiveSelectionSortAscending(short *, unsigned short, unsigned short);

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
 * @brief  Function to search an integer in an array
 * @note   array must be sorted
 * @param  *: array
 * @param  short: size of array
 * @param  short: search element
 * @retval integer
 */
int recursiveBinarySearch(short *, unsigned short, short);

/**
 * @param  *: array
 * @param  short: left bond
 * @param  short: right bond
 * @param  short: search element
 * @retval integer
 */
int BinarySearchProcess(short *, unsigned short, unsigned short, short);

void main()
{
    unsigned short n;
    short search_element;
    int index;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    short array_num[n];

    initializeArrayElements(array_num, n);
    recursiveSelectionSortAscending(array_num, n - 1, 0);

    printf("\nElements of array in ascending order are:-\n");
    displayArrayElements(array_num, n);

    printf("\nEnter search number: ");
    scanf("%hd", &search_element);

    index = recursiveBinarySearch(array_num, n, search_element);

    (index == -1) ? printf("\nSearch element %hd not found", search_element) : printf("\nSearch element %hd found at position %d", search_element, index + 1);

    getch();

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

unsigned short minIntegerIndex(short array[], unsigned short i, unsigned short j)
{
    if (i == j)
    {
        return i;
    }

    unsigned short k = minIntegerIndex(array, i + 1, j);

    return (array[i] < array[k]) ? i : k;
}

int recursiveBinarySearch(short array[], unsigned short n, short search_element)
{
    unsigned short left_bond = 0, right_bond = n - 1;
    return BinarySearchProcess(array, left_bond, right_bond, search_element);
}

int BinarySearchProcess(short array[], unsigned short left_bond, unsigned short right_bond, short search_element)
{
    if (left_bond <= right_bond)
    {
        unsigned short mid = (left_bond + right_bond) / 2;

        if (array[mid] == search_element)
        {
            return mid;
        }
        else if (search_element > array[mid])
        {
            BinarySearchProcess(array, mid + 1, right_bond, search_element);
        }
        else
        {
            BinarySearchProcess(array, left_bond, mid - 1, search_element);
        }
    }
    else
    {
        return -1;
    }
}