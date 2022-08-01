/*
array=[10,2,44,52,31,78,5]
{X: wrong}

1.  (10<2) X : [2,10,44,52,31,78,5]
    (10<44) :  [2,10,44,52,31,78,5]
    (44<55) :  [2,10,44,52,31,78,5]
    (52<31)X : [2,10,44,31,52,78,5]
    (52<78) :  [2,10,44,31,52,78,5]
    (78<5) X : [2,10,44,31,52,5,78]

2.  (10<44) : [2,10,44,31,52,5,78]
    (44<31)X : [2,10,31,44,52,5,78]
    (44<52) : [2,10,31,44,52,5,78]
    (52<5) X : [2,10,31,44,5,52,78]
    (52<78) : [2,10,31,44,5,52,78]

3.  (31<44) : [2,10,31,44,5,52,78]
    (44<5) X : [2,10,31,5,44,52,78]
and so on.
*/

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
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (num[j] > num[j + 1])
            { // Swapping process
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
}