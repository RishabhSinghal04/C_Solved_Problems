// A program to find GCD (or HCF) and LCM of two or more than two numbers

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void initializeArrayElements(unsigned short *, unsigned short);
void displayArrayElements(unsigned short *, unsigned short);

unsigned short GCD_Array(unsigned short *, unsigned short);
unsigned long long LCM();

unsigned short GCD(unsigned short, unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    if (n > 1)
    {
        unsigned short array_num[n];

        initializeArrayElements(array_num, n);

        printf("\nElements of array are:-\n");
        displayArrayElements(array_num, n);

        printf("\nHCF or GCD of all array element is %hu", GCD_Array(array_num, n));
    }
    else
    {
        printf("Size of array is too small");
    }
    getch();
}

void initializeArrayElements(unsigned short array[], unsigned short n)
{
    srand(time(NULL));

    for (int i = 0; i < n; ++i)
    {
        array[i] = rand() % 100;
    }
}

void displayArrayElements(unsigned short array[], unsigned short n)
{
    printf("%hu", array[0]);

    for (int i = 1; i < n; ++i)
    {
        printf(", %hu", array[i]);
    }
}

unsigned short GCD_Array(unsigned short array[], unsigned short n)
{
    unsigned short hcf = array[0];

    for (int i = 1; i < n; ++i)
    {
        hcf = GCD(hcf, array[i]);

        if (hcf == 1)
        {
            return 1;
        }
    }
    return hcf;
}

unsigned short GCD(unsigned short num1, unsigned short num2)
{
    if (num2 == 0)
    {
        return num1;
    }

    return GCD(num2, num1 % num2);
}