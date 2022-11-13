// A program to represent a number as the sum of two adjacent array elements

#include <stdio.h>
#include <conio.h>

void initializeArray(short *, unsigned short);
void displayArray(short *, unsigned short);
void NumberSumTwoAdjacentElements(short *, unsigned short, short);

void main()
{
    unsigned short n;
    short num;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    short array_num[n];

    initializeArray(array_num, n);

    printf("Elemets of array are:-\n");
    displayArray(array_num, n);

    printf("\nEnter a number: ");
    scanf("%hd", &num);

    NumberSumTwoAdjacentElements(array_num, n, num);

    getch();
}

void initializeArray(short array[], unsigned short n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("Enter a number: ");
        scanf("%hd", &array[i]);
    }
}

void displayArray(short array[], unsigned short n)
{
    printf("%hd", array[0]);

    for (int i = 1; i < n; ++i)
    {
        printf(", %hd", array[i]);
    }
}

void NumberSumTwoAdjacentElements(short array[], unsigned short n, short num)
{
    short flag = 0;

    for (int i = 0; i < n; ++i)
    {
        if (array[i] + array[i + 1] == num)
        {
            printf("%hd + %hd = %hd", array[i], array[i + 1], num);
            flag = 1;
            break;
        }
    }

    if (array[0] + array[n - 1] == n)
    {
        printf("%hd + %hd = %hd", array[0], array[n - 1], num);
        flag = 1;
    }
    if(flag == 0)
    {
        printf("\nNo Result");
    }
}