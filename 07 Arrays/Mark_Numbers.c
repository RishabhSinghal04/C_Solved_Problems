
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int size;
int *array_num;

void assignArrayElements();
void markArrayElements();
void showArray();

void main()
{
    printf("Enter array size: ");
    scanf("%u", &size);

    array_num = calloc(size + 1, sizeof(int));

    assignArrayElements();
    showArray();
    markArrayElements();

    free(array_num);
    getch();
}

void assignArrayElements()
{
    for (int i = 0; i <= size; i++)
    {
        array_num[i] = i;
    }
}

void markArrayElements()
{
    for (int i = 2; i <= size; i++)
    {
        if (array_num[i] == i)
        {
            for (int j = i * i; j <= size; j += i)
            {
                if (array_num[j] == j)
                {
                    array_num[j] = i;
                }
            }
        }
    }

    printf("\n(Smallest factor leaving 1)\n");
    printf("\n\t  Number \tSmallest Factor\n");

    for (int i = 0; i <= size; i++)
    {
        printf("\t%7u \t %7u\n", i, array_num[i]);
    }
}

void showArray()
{
    printf("[ %7u", array_num[0]);

    for (int i = 1; i <= size; i++)
    {
        printf(", %7u", array_num[i]);
    }
    printf(" ]");
}