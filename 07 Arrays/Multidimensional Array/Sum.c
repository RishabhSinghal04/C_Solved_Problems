// A program to calculate the sum of two matrices

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void getMatrixElements(int **, unsigned short, unsigned short);
void displayMatrix(int **, unsigned short, unsigned short);

/**
 * @brief  Function to calculate sum of two matrices
 * @param  **: 1st Matrix
 * @param  **: 2nd Matrix
 * @param  short: number of rows of 1st matrix
 * @param  short: number of columns of 1st matrix
 * @param  short: number of rows of 2nd matrix
 * @param  short: number of columns of 2nd mstrix
 * @retval None
 */
void sumTwoMatrices(int **, int **, unsigned short, unsigned short, unsigned short, unsigned short);

void main()
{
    unsigned short nRows, nColumns, nRows2, nColumns2;
    int **array_num, **array_num2;

    // rows and columns of 1st matrix
    printf("-- Matrix 1 --\n");
    printf("Enter number of rows: ");
    scanf("%hu", &nRows);
    printf("Enter number of columns: ");
    scanf("%hu", &nColumns);

    array_num = (int **)calloc(nRows, sizeof(int *));
    for (int i = 0; i < nRows; ++i)
    {
        array_num[i] = (int *)calloc(nColumns, sizeof(int));
    }
    getMatrixElements(array_num, nRows, nColumns);

    // rows and columns of 2nd matrix
    printf("-- Matrix 2 --\n");
    printf("Enter number of rows: ");
    scanf("%hu", &nRows2);
    printf("Enter number of columns: ");
    scanf("%hu", &nColumns2);

    array_num2 = (int **)calloc(nRows2, sizeof(int *));
    for (int i = 0; i < nRows2; ++i)
    {
        array_num2[i] = (int *)calloc(nColumns2, sizeof(int));
    }
    getMatrixElements(array_num2, nRows2, nColumns2);

    // Display both matrices
    printf("\n1st Matrix:-\n");
    displayMatrix(array_num, nRows, nColumns);
    printf("\n2nd Matrix:-\n");
    displayMatrix(array_num2, nRows2, nColumns2);

    // Calculate sum of both matrices , i.e., Sum_Matrix = Matrix_1 + Matrix_2
    sumTwoMatrices(array_num, array_num2, nRows, nColumns, nRows2, nColumns2);

    free(array_num);
    free(array_num2);
    getch();
}

void getMatrixElements(int **array, unsigned short nRows, unsigned short nColumns)
{
    int max = 10, min = -10;
    srand(time(NULL));
    free(array);
    // printf("Enter matrix elements:-\n");
    for (int i = 0; i < nRows; ++i)
    {
        for (int j = 0; j < nColumns; ++j)
        {
            array[i][j] = rand() % (max - min + 1) + min;
            /* printf("Enter A%u%u: ", i + 1, j + 1);
            scanf("%d", &array[i][j]); */
        }
    }
}

void displayMatrix(int **array, unsigned short nRows, unsigned short nColumns)
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

void sumTwoMatrices(int **matrix1, int **matrix2, unsigned short nRows, unsigned short nColumns, unsigned short nRows2, unsigned short nColumns2)
{
    if (!(nRows == nRows2 || nColumns == nColumns2))
    {
        printf("Cannot calculate sum of matrices\nSince matrices are of differnet order");
        return;
    }

    int **sumMatrix = (int **)calloc(nRows, sizeof(int *));
    printf("\nSum of both matrices is:-\n");

    for (int i = 0; i < nRows; ++i)
    {
        sumMatrix[i] = (int *)calloc(nColumns, sizeof(int));

        for (int j = 0; j < nColumns; ++j)
        {
            printf("%4d ", sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }
    free(sumMatrix);
}