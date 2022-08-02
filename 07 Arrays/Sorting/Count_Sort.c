/*
Let 'A' be the array with elements [7, 9, 8, 6, 1, 0, 2, 4, 0, 7, 10]
Total number of elements in 'A' are 11
Maximum number in 'A' is 10
So we create another array of size 10 + 1 i.e. max num + 1

Let 'B' be the array of size 10 + 1
Initialize it with 0.

Now, B is [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

Now, we will count the frequency of each element in A
Then we will place the count of frequency of each element in B according to its index like:-
  the frequency of #0 and #7 is 2 and rest have 1
  so at index 0 and 7 (in B) we have #2 and so on
Now, B is [2, 1, 1, 0, 1, 0, 1, 2, 1, 1, 1]

At index 0 we have 2 so write 0 twice in A at indeces 0 and 1
Similarly, at index 1 we have 1 so write it ones in A at index 2 and so on for other numbers.

A after sorting is [0, 0, 1, 2, 4, 6, 7, 7, 8, 9, 10]
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int size;

void CountSort(int *);

void printArray(int *);

void main()
{
    clock_t t1, t2;
    float time_taken;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int *num = malloc(size * sizeof(int)), max = 10000, min = 0;
    srand(time(NULL));

    for (int i = 0; i < size; i++)
        num[i] = (rand() % (max - min + 1)) + min;

    printArray(num);

    printf("\nPress any key....\n");
    getch();

    t1 = clock();

    CountSort(num);

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

void CountSort(int num[])
{
    int k = num[0];
    for (int i = 1; i < size; i++)
        k = (num[i] > k) ? num[i] : k;

    int *count = (int *)calloc((k + 1), sizeof(int));

    for (int i = 0; i < size; i++)
        count[num[i]]++;

    int i = 0, j = 0;
    while (i <= k)
    {
        if (count[i] > 0)
        {
            num[j] = i;
            j++;
            count[i]--;
        }
        else
            i++;
    }
}