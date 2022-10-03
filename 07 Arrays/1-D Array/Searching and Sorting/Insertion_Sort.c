// A program to sort array elements in ascending and descending order using insertion sort technique

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

void InsertionSortAscending(short *, unsigned short);
void InsertionSortDescending(short *, unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    short array_num[n];

    initializeArrayElements(array_num, n);

    printf("\nElements of array are:-\n");
    displayArrayElements(array_num, n);

    InsertionSortAscending(array_num, n);

    printf("\n\nElements of array in ascending order:-\n");
    displayArrayElements(array_num, n);

    InsertionSortDescending(array_num, n);

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

void InsertionSortAscending(short array[], unsigned short n)
{
    short temp, index;

    for(int i=1; i<n; ++i)
    {
        temp = array[i];
        index = i - 1;

        while (index >= 0 && array[index] > temp)
        {
            array[index + 1] = array[index];
            index--;
        }
        array[index + 1] = temp;
    }
}

void InsertionSortDescending(short array[], unsigned short n)
{
    short temp, index;

    for(int i=1; i<n; ++i)
    {
        temp = array[i];
        index = i - 1;

        while (index >= 0 && array[index] < temp)
        {
            array[index + 1] = array[index];
            index--;
        }
        array[index + 1] = temp;
    }
}