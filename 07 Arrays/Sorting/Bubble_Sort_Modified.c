#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int size;

void BubbleSort(int *);
void printArray(int *);

void main()
{
    clock_t t1, t2;
    float time_taken;

    printf("Enter size of array: ");
    scanf("%d", &size);

    // Taking random numbers from 1000 to -1000 as input
    int num[size], max = 10000, min = -10000;
    srand(time(NULL));

    for (int i = 0; i < size; i++)
        num[i] = (rand() % (max - min + 1)) + min;

    printArray(num);

    printf("\nPress any key....\n");
    getch();

    t1 = clock();
    BubbleSort(num);
    t2 = clock();

    printf("\nArray after sorting is:-\n");
    printArray(num);

    time_taken = (float)(t2 - t1) / CLOCKS_PER_SEC;
    printf("\nTime taken to sort array is %fs\n", time_taken);

    printf("\nPress any key....\n");
    getch();
}

void printArray(int num[size])
{ // Printing array elements as [1,2,34,4,7,....,sizeth element]
    printf("Array is [ %5d", num[0]);
    for (int i = 1; i < size; i++)
        printf(", %5d", num[i]);
    printf(" ]\n");
}

void BubbleSort(int num[size])
{ // Bubble Sort Code
    int flag, temp;
    for (int i = 0; i < size; i++)
    {
        flag = 1;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (num[j] > num[j + 1])
            { // Swapping process
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
                flag = 0;
            }
        }
        if (flag == 1)
            break;
    }
}