// A program to find whether an integer is present in an array or not using binary search technique

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
 * @param  *: array
 * @param  short: size of array
 * @retval None
 */
void SelectionSortAscending(short *, unsigned short);

/**
 * @brief  Function to search an integer in an array
 * @note   array must be sorted
 * @param  *: array
 * @param  short: size of array
 * @param  short: search value
 * @retval integer
 */
int BinarySearch(short *, unsigned short, short);

void main()
{
    unsigned short n;
    short search_element;
    int index;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    short array_num[n];

    initializeArrayElements(array_num, n);
    SelectionSortAscending(array_num, n);

    printf("\nElements of array in ascending order are:-\n");
    displayArrayElements(array_num, n);

    printf("\nEnter search number: ");
    scanf("%hd", &search_element);

    index = BinarySearch(array_num, n, search_element);

    (index == -1) ? printf("\nSearch element %hd not found", search_element) : printf("\nSearch element %hd found at position %d", search_element, index + 1);

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

int BinarySearch(short array[], unsigned short n, short search_element)
{
    unsigned short left_bond = 0, right_bond = n - 1;

    while (left_bond <= right_bond)
    {
        unsigned short mid = (left_bond + right_bond) / 2;

        if (array[mid] == search_element)
        {
            return mid;
        }
        else if (search_element < array[mid])
        {
            right_bond = mid - 1;
        }
        else
        {
            left_bond = mid + 1;
        }
    }
    return -1;
}