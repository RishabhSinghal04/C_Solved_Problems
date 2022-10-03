// A program to check whether an integer is present in array or not using linear search technique

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
 * @brief  Function to search an integer in an array
 * @param  *: array
 * @param  short: size of array
 * @param  short: search element (integer)
 * @retval Index of search element if found else -1
 */
int LinearSearch(short *, unsigned short, short);


void main()
{
    unsigned short n;
    short search_element;
    int index;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    short array_num[n];

    initializeArrayElements(array_num, n);

    printf("\nElements of array are:-\n");
    displayArrayElements(array_num, n);

    printf("\nEnter search number: ");
    scanf("%hd", &search_element);

    index = LinearSearch(array_num, n, search_element);

    if(index != -1)
    {
        printf("\nSearch element %hd found at position %d\n", search_element, index + 1);
    }
    else
    {
        printf("\nSearch element %hd not found\n", search_element);
    }

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

int LinearSearch(short array[], unsigned short n, short search_element)
{
    for(int i=0; i<n; ++i)
    {
        if(array[i] == search_element)
        {
            return i;
        }
    }
    return -1;
}