
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int r, c;
int **array2D;

void getArraySize(int **);
void getArrayElements(int **);
void showArray(int **);

void main()
{
    getArraySize(array2D);
    array2D = malloc(r  * sizeof(int *));

    getArrayElements(array2D);

    printf("\nThe matrix formed is:-\n");
    showArray(array2D);

    free(array2D);
    getch();
}

void getArraySize(int **array2D)
{
    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);
}

void getArrayElements(int **array2D)
{
    for (int i = 0; i < r; i++)
    {
        array2D[i] = malloc(c  * sizeof(int *));
        
        for (int j = 0; j < c; j++)
        {
            printf("Enter a%d%d : ", i + 1, j + 1);
            scanf("%d", &array2D[i][j]);
        }
    }
}

void showArray(int **array2D)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%5d  ", array2D[i][j]);
        }
        printf("\n");
    }
}