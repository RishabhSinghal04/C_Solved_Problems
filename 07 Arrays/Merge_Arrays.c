
#include <stdio.h>
#include <conio.h>

#define N1 10
#define N2 5

void getArrayElements(int, int *);
void showArray(int, int *);
void mergeArrays(int, int *, int *);

void main()
{
    int array_num1[N1], array_num2[N2];

    printf("\nEnter 10 numbers for 1st array:-\n");
    getArrayElements(N1, array_num1);

    printf("\nEnter 5 numbers for 2nd array:-\n");
    getArrayElements(N2, array_num2);

    printf("\nThe 1st array is as follows:-\n");
    showArray(N1, array_num1);

    printf("\nThe 2nd array is as follows:-\n");
    showArray(N2, array_num2);

    mergeArrays(N1 + N2, array_num1, array_num2);

    getch();
}

void getArrayElements(int N, int array_num[])
{
    for (int i = 0; i < N; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &array_num[i]);
    }
}

void showArray(int N, int array_num[])
{
    printf("\n[ %5d", array_num[0]);

    for (int i = 1; i < N; i++)
    {
        printf(", %5d", array_num[i]);
    }

    printf(" ]\n");
}

void mergeArrays(int N, int array_num1[], int array_num2[])
{
    int merge_array[N], j = 0;

    for (int i = 0; i < N; i++)
    {
        if (i < N1)
        {
            merge_array[i] = array_num1[i];
        }
        else
        {
            merge_array[i] = array_num2[j];
            j++;
        }
    }

    printf("\nAfter merging both the arrays the resultant array is:-\n");
    showArray(N1 + N2, merge_array);
}