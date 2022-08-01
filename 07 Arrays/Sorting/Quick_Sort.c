/*
Let 'A' be the array with elements [37, 28, 69, 54, 20, 48, 90, 65]

1. Now we take an element from A as pivot. Let the pivot be 37.
2. Shift elements smaller than pivot i.e. 37 to its left and greater than pivot to its right i.e.
[28, 20] [37] [69, 54, 20, 48, 90, 65].
3. Now we take 28 as pivot in first and 69 in second and repeat step 2.
4. Repeat steps 1 and 2 until one element is left.

         i->                    <-j
    [37, 28, 69, 54, 20, 48, 90, 65]
                  /\ (pivot = 37)
                 /  \
           [28,20]   [69, 54, 48, 90, 65]
               /\ (pivot = 28) /\ (pivot = 69)
              /  \            /  \
            [20] []  [54, 48, 65] [90]
                         /\ (pivot =54)
                        /  \
                     [48]  [65]
    [20, 28,37, 48, 54, 65, 69,90]
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int size;

int partition(int *, int, int);

void QuickSort(int *, int, int);

void printArray(int *);

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

    QuickSort(num, 0, size - 1);

    t2 = clock();

    printf("\nArray after sorting is:-\n");
    printArray(num);

    time_taken = (float)(t2 - t1) / CLOCKS_PER_SEC;
    printf("\nTime taken to sort array is %fs\n", time_taken);

    printf("\nPress any key....\n");
    getch();
}

void printArray(int num[])
{
    printf("[ %5d", num[0]);

    for (int i = 1; i < size; i++)
        printf(", %5d", num[i]);

    printf("]\n");
}

void QuickSort(int num[], int start, int end)
{
    if (start < end)
    {
        int pivot = partition(num, start, end);

        QuickSort(num, start, pivot - 1);
        QuickSort(num, pivot + 1, end);
    }
}

int partition(int num[], int start, int end)
{
    int i = start + 1, j = end, temp;
    int pivot = num[start];

    do
    {
        while (num[i] <= pivot)
            i++;
        while (num[j] > pivot)
            j--;

        if (i < j)
        {
            temp = num[i];
            num[i] = num[j];
            num[j] = temp;
        }
    } while (i < j);

    temp = num[start];
    num[start] = num[j];
    num[j] = temp;

    return j;
}