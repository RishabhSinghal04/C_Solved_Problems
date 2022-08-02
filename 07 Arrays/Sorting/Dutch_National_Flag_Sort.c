
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int size;

void printArray(int *);
void DNF_Sort(int *);

void main()
{
    printf("Enter size of array: ");
    scanf("%d", &size);

    int *num = malloc(size * sizeof(int)), min = 0, max = 2;

    srand(time(NULL));

    for (int i = 0; i < size; i++)
        num[i] = (rand() % (max - min + 1)) + min;

    printArray(num);
    DNF_Sort(num);

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

void DNF_Sort(int num[])
{
    int start = 0, mid = 0, end = size - 1, temp;

    while (mid <= end)
    {
        if (num[mid] == 0)
        {
            temp = num[mid];
            num[mid] = num[start];
            num[start] = temp;

            start++;
            mid++;
        }
        else if (num[mid] == 1)
        {
            mid++;
        }
        else
        {
            temp = num[mid];
            num[mid] = num[end];
            num[end] = temp;

            end--;
        }
    }
}