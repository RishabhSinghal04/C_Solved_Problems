// A program to merge two arrays

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
 * @brief  Function to merge two arrays
 * @param  *: 1st array
 * @param  *: 2nd array
 * @param  short: size of 1st array
 * @param  short: size of 2nd array
 * @retval None
 */
void mergeArrays(int *, int *, unsigned short, unsigned short);

/**
 * @brief  Function to print array elements
 * @param  *: array
 * @param int: size of array
 * @retval None
 */
void displayArrayElements(int *, int);

void main()
{
    unsigned short n1, n2;

    printf("Enter number of integers in first array: ");
    scanf("%hu", &n1);

    printf("Enter number of integers in second array: ");
    scanf("%hu", &n2);

    int array_num1[n1], array_num2[n2];

    initializeArrayElements(array_num1, n1);
    initializeArrayElements(array_num2, n2);

    printf("Array 1 :-\n");
    displayArrayElements(array_num1, n1);

    printf("Array 2 :-\n");
    displayArrayElements(array_num2, n2);

    printf("\nArrays after merging are:-\n");

    mergeArrays(array_num1, array_num2, n1, n2);

    getch();
}

void initializeArrayElements(int array_num[], unsigned short n)
{
    int max = 10000, min = -10000;

    // Assign random integers in both arrays
    srand(time(NULL));

    for (int i = 0; i < n; ++i)
    {
        array_num[i] = (rand() % (max - min + 1) + min);
    }
}

void mergeArrays(int array1[], int array2[], unsigned short n1, unsigned short n2)
{
    int merge_array[n1 + n2], index2 = 0;

    // Process to merge arrays
    for (int i = 0; i < n1 + n2; ++i)
    {
        // Merge elements of 1st array
        if (i < n1)
        {
            merge_array[i] = array1[i];
        }
        // Merge elements of 2nd array
        else
        {
            merge_array[i] = array2[index2];
            index2++;
        }
    }
    displayArrayElements(merge_array, n1 + n2);
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