// A program to insert and delete an element in a sorted array

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

void initializeArrayElements(short *, unsigned short);
void displayArrayElements(short *, unsigned short);
void SelectionSortAscending(short *, unsigned short);
int insertElement(short *, short, unsigned short);
int deleteElement(short *, short, unsigned short);
int searchElement(short *, short, unsigned short);

void main()
{
    short element, flag;
    unsigned short n;
    int index;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    short array_num[n];

    initializeArrayElements(array_num, n);

    printf("Elements of array are:-\n");
    displayArrayElements(array_num, n);

    SelectionSortAscending(array_num, n);

    printf("\nElements of array in ascending order are:-\n");
    displayArrayElements(array_num, n);

    printf("\nEnter an integer to be inserted in sorted array: ");
    scanf("%hd", &element);

    index = insertElement(array_num, element, n);

    if (index == -1)
    {
        printf("\nSize limit reached\nCannot insert element\n");
    }
    else
    {
        n += 1;
        printf("\n%hd inserted at postion %u", element, index + 1);
        printf("\nArray after insertion of %hd is:-\n", element);
        displayArrayElements(array_num, n);
    }

    printf("\nEnter an integer to be removed from sorted array: ");
    scanf("%hd", &element);

    index = deleteElement(array_num, element, n);

    if (index == -1)
    {
        printf("\nDeletion Not Successful\n");
    }
    else
    {
        n -= 1;
        printf("\n%hd removed from position %hu", element, index + 1);
        printf("\nArray after removal of %hd is:-\n", element);
        displayArrayElements(array_num, n);
    }

    getch();
}

void initializeArrayElements(short array[], unsigned short n)
{
    short min = -1000, max = 1000;
    srand(time(NULL));

    for (int i = 0; i < n; ++i)
    {
        array[i] = rand() % (max - min + 1) + min;
    }
}

void displayArrayElements(short array[], unsigned short n)
{
    printf("%hd", array[0]);

    for (int i = 1; i < n; ++i)
    {
        printf(", %hd", array[i]);
    }
}

void SelectionSortAscending(short array[], unsigned short n)
{
    short temp;
    int index;

    for (int i = 0; i < n - 1; ++i)
    {
        index = i;

        for (int j = i + 1; j < n; ++j)
        {
            if (array[j] < array[index])
            {
                index = j;
            }
        }

        if (i != index)
        {
            temp = array[i];
            array[i] = array[index];
            array[index] = temp;
        }
    }
}

int insertElement(short array[], short element, unsigned short n)
{
    if (n + 1 > USHRT_MAX)
    {
        return -1;
    }

    if (element < array[0])
    {
        for (int i = n; i > 0; --i)
        {
            array[i] = array[i - 1];
        }

        array[0] = element;
        return 0;
    }

    for (int i = n - 1; i >= 0; --i)
    {
        if (array[i] > element)
        {
            array[i + 1] = array[i];
        }
        else
        {
            array[i + 1] = element;
            return i + 1;
        }
    }
}

int deleteElement(short array[], short element, unsigned short n)
{
    int position = searchElement(array, element, n);

    if (position == -1) // Element not found
    {
        return position;
    }

    // Element found
    if(element == array[n - 1])
    {
        array[n - 2];
        return position;
    }
    for (int i = position; i < n - 1; ++i)
    {
        array[i] = array[i + 1];
    }
    return position;
}

int searchElement(short array[], short element, unsigned short n)
{
    int start = 0, end = n - 1, mid;

    while (start <= end)
    {
        mid = (start + end) / 2;

        if (element == array[mid])
        {
            return mid;
        }
        else if (element == array[start])
        {
            return start;
        }
        else if (element == array[end])
        {
            return end;
        }
        else if (element < array[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}