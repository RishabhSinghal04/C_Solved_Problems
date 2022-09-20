// A program to arrange even elements to right and odd elements to left in an array

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

/**
 * @brief  Function to assign random integers in sn array
 * @param  *: array
 * @param  short: size of array
 * @retval None
 */
void initializeArrayElements(int *, unsigned short);

/**
 * @brief  Function to arrange odd elements to left and even elements to right
 * @param  *: array
 * @param  short: size of array
 * @retval None
 */
void arrangeOddEvenElements(int *, unsigned short);

/**
 * @brief  Function to print array elements
 * @param  *: array
 * @param int: size of array
 * @retval None
 */
void displayArrayElements(int *, int);

void main()
{
    unsigned short n;

    printf("Enter number of integers in an array: ");
    scanf("%hu", &n);

    int array_num[n];

    initializeArrayElements(array_num, n);

    printf("Array 1 :-\n");
    displayArrayElements(array_num, n);

    arrangeOddEvenElements(array_num, n);

    printf("\nArray after arranging odd elements to left and even elements to right is:-\n");
    displayArrayElements(array_num, n);

    getch();
}

void initializeArrayElements(int array_num[], unsigned short n)
{
    int max = 100, min = 0;

    // Assign random integers in both arrays
    srand(time(NULL));

    for (int i = 0; i < n; ++i)
    {
        array_num[i] = (rand() % (max - min + 1) + min);
    }
}

void arrangeOddEvenElements(int array[], unsigned short n)
{
    int resultant_array[n];
    int first_index = 0, last_index = n - 1;

    for (int i = 0; i < n; ++i)
    {
        if (array[i] % 2 == 0)
        {
            resultant_array[last_index] = array[i];
            last_index--;
        }
        else
        {
            resultant_array[first_index] = array[i];
            first_index++;
        }
    }
    
    for (int i = 0; i < n; ++i)
    {
        array[i] = resultant_array[i];
    }
}

void displayArrayElements(int array[], int n)
{
    printf("%d", array[0]);

    for (int i = 1; i < n; ++i)
    {
        printf(", %d", array[i]);
    }

    printf("\n");
}