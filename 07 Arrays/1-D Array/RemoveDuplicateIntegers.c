// A program to remove duplicate integers present in an array

#include <stdio.h>
#include <conio.h>

#define N 10

void inputArrayElements(int *);
void BubbleSort(int *);
unsigned short RemoveDuplicateIntegers(int *);

/**
 * @brief  Function to print array elements
 * @param  *: array
 * @param  short: size of array
 * @retval None
 */
void displayArrayElements(int *, unsigned short n);

void main()
{
    int array_num[N];

    inputArrayElements(array_num);

    printf("Array:-\n");
    displayArrayElements(array_num, N);

    printf("\nArray after removing duplicate elements:-\n");
    displayArrayElements(array_num, RemoveDuplicateIntegers(array_num));

    getch();
}

void inputArrayElements(int array[])
{
    for (int i = 0; i < N; ++i)
    {
        printf("Enter a number: ");
        scanf("%d", &array[i]);
    }
}

void BubbleSort(int num[])
{
    int flag, temp;

    for (int i = 0; i < N; ++i)
    {
        flag = 1;
        for (int j = 0; j < N - i - 1; ++j)
        {
            if (num[j] > num[j + 1])
            {
                // Swapping process
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

unsigned short RemoveDuplicateIntegers(int array[])
{
    BubbleSort(array); // To sort the given array

    unsigned short index = 0;

    for (int i = 0; i < N - 1; ++i)
    {
        if (array[i] != array[i + 1])
        {
            array[index] = array[i];
            index++;
        }
    }
    array[index] = array[N - 1]; // Assign last integer

    return ++index; // Return the size of the resultant array
}

void displayArrayElements(int array[], unsigned short n)
{
    printf("%d", array[0]);

    for (int i = 1; i < n; ++i)
    {
        printf(", %d", array[i]);
    }
}