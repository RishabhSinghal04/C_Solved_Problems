// A program to print sum of diagonal elements of a matrix

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

static void initialize2DArray(int **, unsigned short, unsigned short);
static void display2DArray(int **, unsigned short, unsigned short);
static int SumOfLeftDiagonal(int **, unsigned short, unsigned short);
static int SumOfRightDiagonal(int **, unsigned short, unsigned short);

void main()
{
    unsigned short nRows, nColumns;
    int **array_num;

    printf("Enter number of rows: ");
    scanf("%hu", &nRows);

    printf("Enter number of columns: ");
    scanf("%hu", &nColumns);

    for (int i = 0; i < nRows; ++i)
    {
        array_num[i] = (int *)calloc(nColumns, sizeof(int));
    }

    initialize2DArray(array_num, nRows, nColumns);

    printf("\nMatrix is:-\n");
    display2DArray(array_num, nRows, nColumns);

    if (nRows == nColumns)
    {
        printf("\nSum of elements of left diagonal is %d", SumOfLeftDiagonal(array_num, nRows, nColumns));
        printf("\nSum of elements of right diagonal is %d", SumOfRightDiagonal(array_num, nRows, nColumns));
    }
    else
    {
        printf("\nNot a square matrix");
    }

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

static int SumOfLeftDiagonal(int **array, unsigned short nRows, unsigned short nColumns)
{
    int sum_diagonal = 0;

    for (int i = 0; i < nRows; ++i)
    {

        sum_diagonal += array[i][i];
    }
    return sum_diagonal;
}

static int SumOfRightDiagonal(int **array, unsigned short nRows, unsigned short nColumns)
{
    int sum_diagonal = 0, j = nColumns - 1;

    for (int i = 0; i < nRows; ++i)
    {
        sum_diagonal += array[i][j];
        j--;
    }
    return sum_diagonal;
}