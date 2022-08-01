
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int size;

void printArray(int *);
void CountSort(int *, int);
void RadixSort(int *);

int maxNum(int *);

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

    RadixSort(num);

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
        printf(", %5d", num[i]);

    printf("]\n");
}

void RadixSort(int num[])
{
    int max_num = maxNum(num);

    for (int i = 1; max_num / i > 0; i *= 10)
        CountSort(num, i);
}

void CountSort(int num[], int div)
{
    int *output = malloc(size * sizeof(int) + 1);
    int count[10] = {0};

    for (int i = 0; i < size; i++)
        count[(num[i] / div) % 10]++;

    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = size - 1; i >= 0; i--)
    {
        output[count[(num[i] / div) % 10] - 1] = num[i];
        count[(num[i] / div) % 10]--;
    }

    for (int i = 0; i < size; i++)
        num[i] = output[i];
}

int maxNum(int num[])
{
    int max = num[0];

    for (int i = 1; i < size; i++)
    {
        if (max < num[i])
            max = num[i];
    }
    return max;
}