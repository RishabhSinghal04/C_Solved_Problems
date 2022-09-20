// A program to print digits of a number in ascending order.

#include <stdio.h>
#include <conio.h>

void initializeArray(short *);
void initializeDigits(unsigned long long);
void displayArray(short *, unsigned short *);

void main()
{
    unsigned long long num;

    printf("Enter a number: ");
    scanf("%lld", &num);

    printf("Digits in ascending order with repetition : ");
    initializeDigits(num);

    getch();
}

void initializeArray(short array_num[])
{
    // Initialize every element with -1
    for (int i = 0; i <= 10; ++i)
    {
        array_num[i] = -1;
    }
}

void initializeDigits(unsigned long long num)
{
    short array_num[10];
    unsigned short count_elements[10] = {0};

    initializeArray(array_num);

    while (num > 0)
    {
        array_num[num % 10] = num % 10;

        // Count frequency of each digit
        if (array_num[num % 10] == num % 10)
        {
            count_elements[num % 10]++;
        }

        num /= 10;
    }

    displayArray(array_num, count_elements);
}

void displayArray(short array[], unsigned short count_array[])
{
    // To display 1st element in array
    if (array[0] > -1)
    {
        for (int j = 1; j <= count_array[0]; ++j)
        {
            printf("%hu ", array[0]);
        }
    }

    // To display next elements in array
    for (int i = 1; i <= 10; ++i)
    {
        if (array[i] > -1)
        {
            for (int j = 1; j <= count_array[i]; ++j)
            {
                printf("%hu ", array[i]);
            }
        }
    }
}