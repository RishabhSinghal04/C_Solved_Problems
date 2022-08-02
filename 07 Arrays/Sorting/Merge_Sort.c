/*
Let 'A' be the array with elements [37, 69, 54, 20, 48, 90, 65]

1. Divide the array into 2 almost equal parts
    then we have [37, 69, 54, 20] and [48, 90, 65].
2. Repeat step 1 until we have [37] ,[69] ,....,[65].
3. Compare them [37] < [69] , [54] > [20] sort it and so on.
4. Merge them [37,69], [20,54] and so on.
5. Again compare them and merge them until 'A' is sorted i.e. [20, 37, 48, 54, 65, 69, 90].

    [37, 69, 54, 20, 48, 90, 65]
                  /\
                 /  \
    [37, 69, 54, 20] [48, 90, 65]
           /\             /\
          /  \           /  \
    [37, 69][54, 20] [48, 90][65]
       /\      /\       /\      |
      /  \    /  \     /  \     |
    [37][69] [54][20] [48][90]  |
      \  /     \  /     \  /    |
       \/       \/       \/     |
    [37, 69] [20, 54] [48, 90]  |
           \  /             \  /
            \/               \/
    [20, 37, 54, 69]    [48, 65, 90]
                    \  /
                     \/
        [20, 37, 48, 54, 65, 69, 90]
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int size;

void merge(int *, int, int, int);

void MergeSort(int *, int, int);

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

    MergeSort(num, 0, size - 1);

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

void MergeSort(int num[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;

        MergeSort(num, start, mid);
        MergeSort(num, mid + 1, end);

        merge(num, start, mid, end);
    }
}

void merge(int num[], int start, int mid, int end)
{
    int size1 = mid - start + 1, size2 = end - mid;
    int *temp1 = malloc(size1 * sizeof(int)), *temp2 = malloc(size2 * sizeof(int));

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