/*
Sorting array elements in wave form.
Let 'A' be the array with elements [1, 3, 4, 7, 5, 6, 2]

A[0]>=A[1]<=A[2]>=A[3]<=A[4]>=A[5] and so on

A[0]    A[2]    A[4]    A[6]
    A[1]    A[3]    A[5]

i.e. A=[3, 1, 7, 4, 6, 2, 5]
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int size;

void printArray(int *);
void WaveSort(int *);
void swap(int *, int, int);

void main()
{
    printf("Enter size of array: ");
    scanf("%d", &size);

    int *num = malloc(size * sizeof(int)), min = -1000, max = 1000;

    srand(time(NULL));

    for (int i = 0; i < size; i++)
        num[i] = (rand() % (max - min + 1)) + min;

    printArray(num);
    WaveSort(num);

    printf("\nArray after sorting is:-\n");
    printArray(num);

    getch();
}

void printArray(int num[])
{
    printf("[ %d", num[0]);

    for (int i = 1; i < size; i++)
        printf(", %d", num[i]);

    printf(" ]");
}

void WaveSort(int num[])
{
    for (int i = 1; i < size; i += 2)
    {
        if (num[i] > num[i - 1])
            swap(num, i, i - 1);

        if (num[i] > num[i + 1])
            swap(num, i, i + 1);
    }
}

void swap(int num[], int var1, int var2)
{
    int temp = num[var1];
    num[var1] = num[var2];
    num[var2] = temp;
}