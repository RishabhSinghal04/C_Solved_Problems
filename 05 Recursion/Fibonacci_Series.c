#include <stdio.h>
#include <conio.h>

void displayFibonacciSeries(unsigned short);
void DisplayFibonacciSeries(unsigned short);

unsigned long nthTermFibonacciSeries(unsigned short);

void main()
{
    unsigned short n;

    printf("Enter series limit: ");
    scanf("%u", &n);

    displayFibonacciSeries(n);
    n = 0;

    printf("\nEnter index of a term: ");
    scanf("%hu", &n);

    printf("\nTerm at position %hu in fibonacci series is %lu", n, nthTermFibonacciSeries(n - 1));

    getch();
}

void displayFibonacciSeries(unsigned short n)
{
    printf("0, 1");                // printf first two terms
    DisplayFibonacciSeries(n - 2); // print rest of the terms
}

void DisplayFibonacciSeries(unsigned short n)
{
    if (n == 0)
    {
        return;
    }

    DisplayFibonacciSeries(n - 1);

    static int first_term = 0, second_term = 1, res_term = 0;
    res_term = first_term + second_term;
    first_term = second_term;
    second_term = res_term;

    printf(", %u", res_term);
}

unsigned long nthTermFibonacciSeries(unsigned short n)
{
    if (n <= 1)
    {
        return n;
    }
    return nthTermFibonacciSeries(n - 1) + nthTermFibonacciSeries(n - 2);
}