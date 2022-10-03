// A program to search an integer in an array using linear search technique (recursive approach)

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

int recursiveLinearSearch(short *, unsigned short, short);

void main()
{
    unsigned short n;
    short search_element;
    int index;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    short array_num[n];

    initializeArrayElements(array_num, n - 1);

    printf("\nElements of array are:-\n");
    displayArrayElements(array_num, n - 1);

    printf("\nEnter search number: ");
    scanf("%hd", &search_element);

    index = recursiveLinearSearch(array_num, n - 1, search_element);

    (index == -1) ? printf("\nSearch element %hd not found", search_element) : printf("\nSeach element %hd found at position %d", search_element, index + 1);

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

int recursiveLinearSearch(short array[], unsigned short n, short search_element)
{
    if (n == 0)
    {
        return (array[n] == search_element) ? n : -1; // If search element found at index 0 then return 'n' else return -1
    }

    // Return index of serach element if found
    if (array[n] == search_element)
    {
        return n;
    }

    recursiveLinearSearch(array, n - 1, search_element);
}