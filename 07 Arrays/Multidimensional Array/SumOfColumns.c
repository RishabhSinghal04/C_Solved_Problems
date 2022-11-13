// A program to print the sum of elements in each column

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

static void initialize2DArray(int **, unsigned short, unsigned short);
static void display2DArray(int **, unsigned short, unsigned short);
static void displaySumColumns(int **, unsigned short, unsigned short);

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

    printf("\nSum of elements of each column:-\n");
    displaySumColumns(array_num, nRows, nColumns);

    free(array_num);
 
    getch();
}

static void initialize2DArray(int **array, unsigned short nRows, unsigned short nColumns)
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

static void display2DArray(int **array, unsigned short nRows, unsigned short nColumns)
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

static void displaySumColumns(int **array, unsigned short nRows, unsigned short nColumns)
{
    int sum_column = 0;

    for (int j = 0; j < nColumns; ++j)
    {
        for (int i = 0; i < nRows; ++i)
        {
            sum_column += array[i][j];
        }
        printf("Column %u: %d\n", j + 1, sum_column);
        sum_column = 0;
    }
}