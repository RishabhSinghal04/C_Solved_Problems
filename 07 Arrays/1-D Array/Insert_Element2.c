// A program to insert an element in an array of integers using recursion

#include <stdio.h>
#include <conio.h>

void inputArrayElements(short *, unsigned short);
void displayArrayElements(short *, unsigned short);
void insertElement(short *, unsigned short *);
void insertionProcess(short *, unsigned short, unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    short array_num[n];

    inputArrayElements(array_num, n - 1);

    printf("Elements of array are:-\n");
    displayArrayElements(array_num, n - 1);

    insertElement(array_num, &n);

    printf("Elements of array after insertion are:-\n");
    displayArrayElements(array_num, n - 1);

    getch();
}

void inputArrayElements(short array[], unsigned short n)
{
    if (n == 0)
    {
        printf("Enter a number: ");
        scanf("%hd", &array[0]);
        return;
    }

    inputArrayElements(array, n - 1);
    printf("Enter a number: ");
    scanf("%hd", &array[n]);
}

void displayArrayElements(short array[], unsigned short n)
{
    if (n == 0)
    {
        printf("%hd", array[0]);
        return;
    }

    displayArrayElements(array, n - 1);
    printf(", %hd", array[n]);
}

void insertElement(short array[], unsigned short *n)
{
    short element;
    unsigned short position;

    printf("\nEnter a number to be inserted: ");
    scanf("%hd", &element);

    printf("\nEnter position: ");
    scanf("%hu", &position);

    if (position > 0 && position < *n + 1)
    {
        *n += 1;
        unsigned short temp = *n;
        array[*n + 1];
        position -= 1;

        insertionProcess(array, temp - 1, position);
        // for (int i = *n; i > position; --i)
        // {
        //     array[i] = array[i - 1];
        // }
        array[position] = element;
    }
    else
    {
        printf("\nOut of position\n");
    }
}

void insertionProcess(short array[], unsigned short n, unsigned short pos)
{
    if (n <= pos + 1)
    {
        array[n] = array[n - 1];
        return;
    }

    array[n] = array[n - 1];
    insertionProcess(array, n - 1, pos);
}