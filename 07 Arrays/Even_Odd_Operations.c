/** A program to arrange even and odd elements **/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

short int size;
int *array_num;

void getArraySize(int *);
void getArrayElements(int *);
void showArray(int *);
void leftEven_rightOdd(int *);
void sumEvenOddNum(int *);

void main()
{
    getArraySize(array_num);

    array_num = calloc(size, sizeof(int *));

    getArrayElements(array_num);

    printf("\nFollowing are the array elements:-\n");
    showArray(array_num);

    leftEven_rightOdd(array_num);
    printf("\n");

    sumEvenOddNum(array_num);

    free(array_num);

    getch();
}

void getArraySize(int array_num[])
{
    printf("Enter total number of elements: ");
    scanf("%hu", &size);
}

void getArrayElements(int array_num[])
{
    if (size <= 20)
    {
        printf("Enter %hu numbers:-\n", size);
        for (int i = 0; i < size; i++)
        {
            printf("Enter a number: ");
            scanf("%d", &array_num[i]);
        }
    }
    else // if number of elements are more than 20 then it will generate random numbers
    {
        int max = 10000, min = 0;

        srand(time(NULL));

        for (int i = 0; i < size; i++)
        {
            array_num[i] = (rand() % (max - min + 1)) + min;
        }
    }
}

// Process to arrange even numbers on left and odd numbers on right
void leftEven_rightOdd(int array_num[])
{
    int *temp_even, *temp_odd, *resutant_array;
    temp_even = calloc(size, sizeof(int *));
    temp_odd = calloc(size, sizeof(int *));
    resutant_array = calloc(size, sizeof(int *));

    int ec = 0, oc = 0;

    for (int i = 0; i < size; i++)
    {
        if (array_num[i] % 2 == 0)
        {
            temp_even[ec] = array_num[i];
            ec++;
        }
        else
        {
            temp_odd[oc] = array_num[i];
            oc++;
        }
    }

    int j = 0;

    for (int i = 0; i < size; i++)
    {
        if (i < ec)
        {
            resutant_array[i] = temp_even[i];
        }
        else
        {
            resutant_array[i] = temp_odd[j];
            j++;
        }
    }

    printf("\nArray after arranging even numbers to left and odd numbers to right is:-\n");
    showArray(resutant_array);
    free(resutant_array);
}

// Process to calculate sum of even and odd numbers
void sumEvenOddNum(int array_num[])
{
    long long sum_even_num = 0LL, sum_odd_num = 0LL;

    for (int i = 0; i < size; i++)
    {
        if (array_num[i] % 2 == 0)
        {
            sum_even_num += array_num[i];
        }
        else
        {
            sum_odd_num += array_num[i];
        }
    }

    printf("\nThe sum of even numbers of ");
    showArray(array_num);
    printf(" is %d\n", sum_even_num);

    printf("\nThe sum of odd numbers of ");
    showArray(array_num);
    printf(" is %d\n", sum_odd_num);
}

// Display array elements horizontally in square brackets([])
void showArray(int array_num[])
{
    printf("[ %5d,", array_num[0]);

    for (int i = 1; i < size; i++)
    {
        printf(" %5d,", array_num[i]);
    }

    printf(" ]");
}