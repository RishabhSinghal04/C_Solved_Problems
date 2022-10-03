// A program to insert an element in an array of integers

#include <stdio.h>
#include <conio.h>

void inputArrayElements(short *, unsigned short);
void displayArrayElements(short *, unsigned short);
void insertElement(short *, unsigned short *);

void main()
{
    unsigned short n;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    short array_num[n];

    inputArrayElements(array_num, n);

    printf("Elements of array are:-\n");
    displayArrayElements(array_num, n);

    insertElement(array_num, &n);

    printf("Elements of array after insertion are:-\n");
    displayArrayElements(array_num, n);

    getch();
}

void inputArrayElements(short array[], unsigned short n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("Enter a number: ");
        scanf("%hd", &array[i]);
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
        array[*n + 1];
        position -= 1;

        for (int i = *n; i > position; --i)
        {
            array[i] = array[i - 1];
        }
        array[position] = element;
    }
    else
    {
        printf("\nOut of position\n");
    }
}