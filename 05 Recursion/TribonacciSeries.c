#include <stdio.h>
#include <conio.h>

void displayTribonacciSeries(unsigned short);
void TribonacciSeries(unsigned short);

unsigned long long nthTermTribonacciSeries(unsigned short);

void main()
{
    unsigned short n;

    printf("Enter series limit: ");
    scanf("%hu", &n);

    displayTribonacciSeries(n);
    n = 0;

    printf("\nEnter index of a term: ");
    scanf("%hu", &n);

    printf("%llu is at index %hu", nthTermTribonacciSeries(n), n);

    getch();
}

void displayTribonacciSeries(unsigned short n)
{
    printf("0, 0, 1");
    TribonacciSeries(n - 3);
}

void TribonacciSeries(unsigned short n)
{
    if (n == 0)
    {
        return;
    }
    TribonacciSeries(n - 1);

    static int first_term = 0, second_term = 0, third_term = 1, res_term = 0;

    res_term = first_term + second_term + third_term;
    first_term = second_term;
    second_term = third_term;
    third_term = res_term;

    printf(", %u", res_term);
}

unsigned long long nthTermTribonacciSeries(unsigned short n)
{
    if (n <= 2)
    {
        return 0;
    }
    if(n == 3)
    {
        return 1;
    }
    return nthTermTribonacciSeries(n - 1) + nthTermTribonacciSeries(n - 2) + nthTermTribonacciSeries(n - 3);
}
