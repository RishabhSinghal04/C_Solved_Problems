//Calculate the factorail of a positive number.
#include <stdio.h>
#include <conio.h>

void main()
{
    long double factorial = 1.0L;
    unsigned int num;

    printf("Enter a number: ");
    scanf("%u", &num);

    for (int i = 1; i <= num; ++i)
    {
        factorial *= i;
    }

    (num < 26) ? printf("Factorial of %u is %Lf", num, factorial) : printf("Factorial of %u is %LE", num, factorial);

    getch();
}