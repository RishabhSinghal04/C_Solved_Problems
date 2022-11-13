// A program to print the sum of elements in each row

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void initialize2DArray(int **, unsigned short, unsigned short);
void display2DArray(int **, unsigned short, unsigned short);
void displaySumRow(int **, unsigned short, unsigned short);

void main()
{
    unsigned short nRows, nColumns;
    int **array_num;

    printf("Enter number of rows: ");
    scanf("%hu", &nRows);

    printf("Enter number of columns: ");
    scanf("%hu", &nColumns);

    // Process to create the structure of a matrix of nRows and nColumns
    for (int i = 0; i < nRows; ++i)
    {
        array_num[i] = (int *)calloc(nColumns, sizeof(int));
    }

    initialize2DArray(array_num, nRows, nColumns);

    printf("\nArray in matrix form is:-\n");
    display2DArray(array_num, nRows, nColumns);

    printf("\nSum of elements of each row:-\n");
    displaySumRow(array_num, nRows, nColumns);

    free(array_num);
    getch();
}

void initialize2DArray(int **array, unsigned short nRows, unsigned short nColumns)
{
    short min = -100, max = 100;
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
            printf("%4d ", array[i][j]);
        }
        printf("\n");
    }
}

void displaySumRow(int **array, unsigned short nRows, unsigned short nColumns)
{
    int sum_row = 0;

    for (int i = 0; i < nRows; ++i)
    {
        for (int j = 0; j < nColumns; ++j)
        {
            sum_row += array[i][j];
        }
        printf("Row %u: %d\n", i + 1, sum_row);
        sum_row = 0;
    }
}