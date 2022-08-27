
#include <stdio.h>
#include <conio.h>

typedef unsigned long long ull;

ull factorial(unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of rows: ");
    scanf("%hu", &n);

    for (int i = 0; i <= n; ++i)
    {
        for (int k = i; k < n; ++k)
        {
            printf("    "); // Quad Space
        }
        for (int j = 0; j <= i; ++j)
        {
            printf("%4u    ", factorial(i) / (factorial(i - j) * factorial(j)));
        }
        printf("\n");
    }

    getch();
}

ull factorial(unsigned short num)
{
    ull fact_num = 1;

    for (int i = 1; i <= num; ++i)
    {
        fact_num *= i;
    }
    return fact_num;
}