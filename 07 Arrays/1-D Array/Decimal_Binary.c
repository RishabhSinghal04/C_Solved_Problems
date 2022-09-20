// A program to convert decimal number into binary number

#include <stdio.h>
#include <conio.h>

#define N 100 // Define the size of array which stores binary digits i.e. 0 and 1

void toBinary(unsigned long long);
void displayArrayElements(unsigned short *, unsigned short);

void main()
{
    short array_binary[N];
    unsigned long long num;

    printf("Enter a number: ");
    scanf("%llu", &num);

    printf("%llu in Binary Format is ", num);
    toBinary(num);

    getch();
}

void toBinary(unsigned long long num)
{
    unsigned short index = 0;
    unsigned short array[N];

    while (num != 0)
    {
        array[index] = num % 2;
        index++;
        num /= 2;
    }

    displayArrayElements(array, index);
}

void displayArrayElements(unsigned short array[], unsigned short n)
{
    for (int i = n - 1; i >= 0; --i)
    {
        printf("%hu", array[i]);
    }
}