/* Some basic operations on two(2) matrices */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int r1, c1, r2, c2;
int **matrix1, **matrix2;

void getMatrixSize(int **, int **);        // get number of rows and columns of matrices
void getMatrixElements(int **, int **);    // get the elements of matrices
void matrixAddition(int **, int **);       // add matrices
void matrixSubtraction(int **, int **);    // subtract matrices
void matrixMultiplication(int **, int **); // multiply matrices
void showMatrix(int **, int, int);         // show, display or print a matrix

void main()
{
    getMatrixSize(matrix1, matrix2);

    matrix1 = malloc(r1 * sizeof(int *));
    matrix2 = malloc(r2 * sizeof(int *));

    getMatrixElements(matrix1, matrix2);

    printf("\nThe given matrices are:-\n");

    printf("\n 1st Matrix :-\n");
    showMatrix(matrix1, r1, c1);

    printf("\n 2nd Matrix :-\n");
    showMatrix(matrix2, r2, c2);

    if (r1 == r2 && c1 == c2)
    {
        matrixAddition(matrix1, matrix2);
        matrixSubtraction(matrix1, matrix2);
    }
    else
    {
        printf("\n----- Matrices are not define for addition and subtraction -----\n");
    }

    //(c1==r2)?matrixMultiplication(matrix1, matrix2):printf("\n----- Cannot multiply the matrices due to unequal coloums of first(1st) matrix and rows of second(2nd) matrix -----\n");
    //  OR
    if (c1 == r2)
    {
        matrixMultiplication(matrix1, matrix2);
    }
    else
    {
        printf("\n----- Cannot multiply the matrices beacuse coloums of first(1st) matrix are not equal to the rows of second(2nd) matrix -----\n");
    }

    free(matrix1);
    free(matrix2);

    getch();
}

void getMatrixSize(int **matrix1, int **matrix2)
{
    // size of 1st matrix
    printf("\n\t First(1st) Matrix \n");
    printf("Enter number of rows: ");
    scanf("%u", &r1);
    printf("Enter number of columns: ");
    scanf("%u", &c1);

    // size of 2nd matrix
    printf("\n\t Second(2nd) Matrix \n");
    printf("Enter number of rows: ");
    scanf("%u", &r2);
    printf("Enter number of columns: ");
    scanf("%u", &c2);
}

void getMatrixElements(int **matrix1, int **matrix2)
{
    // Elements for 1st matrix
    printf("\nEnter the elements(integers) for 1st matrix :-\n");
    for (int i = 0; i < r1; i++)
    {
        matrix1[i] = malloc(c1 * sizeof(int *));
        for (int j = 0; j < c1; j++)
        {
            printf("Enter a%u%u : ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Elements for 2nd matrix
    printf("\nEnter the elements(integers) for 2nd matrix :-\n");
    for (int i = 0; i < r2; i++)
    {
        matrix2[i] = malloc(c2 * sizeof(int *));
        for (int j = 0; j < c2; j++)
        {
            printf("Enter a%u%u : ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }
}

void matrixAddition(int **matrix1, int **matrix2)
{
    int **resultant_matrix = malloc(r1 * sizeof(int *));

    for (int i = 0; i < r1; i++)
    {
        resultant_matrix[i] = malloc(c1 * sizeof(int *));
        for (int j = 0; j < c1; j++)
        {
            resultant_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("\n Addition of the two(2) matrices is:-\n");
    showMatrix(resultant_matrix, r1, c1);
    free(resultant_matrix);
}

void matrixSubtraction(int **matrix1, int **matrix2)
{
    int **resultant_matrix = malloc(r1 * sizeof(int *));

    for (int i = 0; i < r1; i++)
    {
        resultant_matrix[i] = malloc(c1 * sizeof(int *));
        for (int j = 0; j < c1; j++)
        {
            resultant_matrix[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    printf("\n Subtraction of the two(2) matrices is:-\n");
    showMatrix(resultant_matrix, r1, c1);
    free(resultant_matrix);
}

void matrixMultiplication(int **matrix1, int **matrix2)
{
    int **resultant_matrix = malloc(r1 * sizeof(int *));
    int sum_elements = 0;

    for (int i = 0; i < r1; i++)
    {
        resultant_matrix[i] = malloc(c2 * sizeof(int));

        for (int j = 0; j < c1; j++)
        {
            for (int k = 0; k < r2; k++)
            {
                sum_elements += (matrix1[i][k] * matrix2[k][j]);
            }
            resultant_matrix[i][j] = sum_elements;
            sum_elements = 0;
        }
    }

    printf("\n Multiplication of the two(2) matrices is:-\n");
    showMatrix(resultant_matrix, r1, c2);
    free(resultant_matrix);
}

void showMatrix(int **matrix, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%5d  ", matrix[i][j]);
        }
        printf("\n");
    }
}