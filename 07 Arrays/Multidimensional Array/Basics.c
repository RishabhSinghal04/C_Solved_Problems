// A program to initialize and display 2D array elements

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

/**
 * @brief  Function to initialize integers in an array
 * @param  **: 2D array
 * @param  short: number of rows
 * @param  short: number of columns
 * @retval None
 */
void initialize2DArray(int **, unsigned short, unsigned short);

/**
 * @brief  Function to display array elements
 * @param  **: 2D array
 * @param  short: number of rows
 * @param  short: number of columns
 * @retval None
 */
void display2DArray(int **, unsigned short, unsigned short);

void main()
{
    unsigned short nRows, nColumns;
    int **array_num;

    printf("Enter number of rows: ");
    scanf("%hu", &nRows);

    printf("Enter number of columns: ");
    scanf("%hu", &nColumns);

    // Process to create the structure of a matrix of 'nRows' and 'nColumns'
    array_num = (int **)calloc(nRows, sizeof(int *));

    for (int i = 0; i < nRows; ++i)
    {
        array_num[i] = (int *)calloc(nColumns, sizeof(int));
    }

    initialize2DArray(array_num, nRows, nColumns);

    printf("\nElements of 2D array are:-\n");
    display2DArray(array_num, nRows, nColumns);

    free(array_num);

    getch();
}

void initialize2DArray(int **array, unsigned short nRows, unsigned short nColumns)
{
    int min = -100, max = 100;
    srand(time(NULL));

    for (int i = 0; i < nRows; ++i)
    {
        for (int j = 0; j < nColumns; ++j)
        {
            array[i][j] = rand() % (max - min + 1) + min;
        }
    }
}

void display2DArray(int **array, unsigned short nRows, unsigned short nColumns)
{
    for (int i = 0; i < nRows; ++i)
    {
        for (int j = 0; j < nColumns; ++j)
        {
            printf("%4d  ", array[i][j]);
        }
        printf("\n");
    }
}