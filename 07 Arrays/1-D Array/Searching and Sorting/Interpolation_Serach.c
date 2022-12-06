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
int InterpolationSearch(short *, unsigned short, short);

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

    index = InterpolationSearch(array_num, n, search_element);

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

int InterpolationSearch(short array[], unsigned short n, short search_element)
{
    unsigned short start = 0, end = n - 1;

    while (start <= end && search_element >= array[start] && search_element <= array[end])
    {
        unsigned short pos = start + ((start + end) / (array[end] - array[start])) * (search_element - array[start]);

        if (array[pos] == search_element)
        {
            return pos;
        }
        else if (search_element < array[pos])
        {
            end = pos - 1;
        }
        else
        {
            start = pos + 1;
        }
    }
    return -1;
}