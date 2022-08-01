/*
Tim Sort is an Hybrid Sorting Algorithm which comprise Merge and Insertion Sorts.
An array is divided into subarrays and using Insertion Sort subarrays are sorted.
Then subarrays are merged into an array which is sorted.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int size, run = 32;

void printArray(int *);

void InsertionSort(int *, int, int);

void Merge(int *, int, int, int);

void TimSort(int *, int);

void main()
{
    clock_t t1, t2;
    float time_taken;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int *num = malloc(size * sizeof(int)), max = 10000, min = -10000;
    srand(time(NULL));

    for (int i = 0; i < size; i++)
        num[i] = (rand() % (max - min + 1)) + min;
    
    printArray(num);

    printf("\nPress any key....\n");
    getch();

    t1 = clock();

    TimSort(num, size);

    t2 = clock();

    printf("\nArray after sorting is:-\n");
    printArray(num);

    time_taken = (float)(t2 - t1) / CLOCKS_PER_SEC;
    printf("\nTime taken to sort array is %fs\n", time_taken);

    printf("\nPress any key....");
    getch();
}

void printArray(int num[])
{
    printf("[ %5d", num[0]);

    for (int i = 1; i < size; i++)
        printf(",%5d", num[i]);

    printf(" ]\n");
}

void TimSort(int num[], int size)
{
    for (int i = 0; i < size; i += run)
        InsertionSort(num, i, __min(i + run - 1, size - 1));

    for (int i = run; i < size; i *= 2)
    {
        for (int start = 0; start < size; start += (2 * i))
        {
            int mid = start + i - 1;
            int end = __min((start + (2 * i) - 1), size - 1);
            if (mid < end)
                Merge(num, start, mid, end);
        }
    }
}

void InsertionSort(int num[], int start, int end)
{
    for (int i = start + 1; i <= end; i++)
    {
        int k = num[i], j = i - 1;

        while (j >= start && num[j] > k)
        {
            num[j + 1] = num[j];
            j--;
        }
        num[j + 1] = k;
    }
}

void Merge(int num[], int start, int mid, int end)
{
    int size1 = mid - start + 1, size2 = end - mid;
    int *temp1 = malloc(size1 * sizeof(int));
    int *temp2 = malloc(size2 * sizeof(int));

    for (int i = 0; i < size1; i++)
        temp1[i] = num[start + i];

    for (int i = 0; i < size2; i++)
        temp2[i] = num[mid + i + 1];

    int i = 0, j = 0, k = start;
    while (i < size1 && j < size2)
    {
        if (temp1[i] < temp2[j])
        {
            num[k] = temp1[i];
            i++;
            k++;
        }
        else
        {
            num[k] = temp2[j];
            j++;
            k++;
        }
    }
    while (i < size1)
    {
        num[k] = temp1[i];
        i++;
        k++;
    }
    while (j < size2)
    {
        num[k] = temp2[j];
        j++;
        k++;
    }
}