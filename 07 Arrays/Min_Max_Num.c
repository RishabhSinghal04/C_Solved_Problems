
#include <stdio.h>
#include <conio.h>

#define N 10

int array_num[N];

void getArrayElements();
void showArray();
void numMaxMin();

void main()
{
    getArrayElements();
    showArray();

    numMaxMin();


    getch();
}

void getArrayElements()
{
    printf("\nEnter %u numbers:-\n", N);

    for (int i = 0; i < N; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &array_num[i]);
    }
}

void numMaxMin()
{
    int max, min;
    if (array_num[0] < array_num[1])
    {
        min = array_num[0];
        max = array_num[1];
    }
    else
    {
        min = array_num[1];
        max = array_num[0];
    }
    for (int i = 2; i < N; ++i)
    {
        if(array_num[i]<min)
        {
            min = array_num[i];
        }
        if(array_num[i]>max)
        {
            max = array_num[i];
        }
    }
    printf("\nMaximum number is %d", max);
    printf("\nMinimum number is %d", min);
}

void showArray()
{
    printf("[ %5d", array_num[0]);

    for (int i = 1; i < N; i++)
    {
        printf(", %5d", array_num[i]);
    }

    printf("]");
}