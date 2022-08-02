/**
The superfactorial of a +ve integer n is the product of the first n factorials.
Superfactorial of 4 is 1! x 2! x 3! x 4! = 288.
**/
#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned short int num;
    long double superfactorial = 1.0L, factorial = 1.0L;

    printf("Enter a number: ");
    scanf("%u", &num);

    for (int i = 2; i <= num; ++i)
    {
        factorial = 1.0;

        for (int j = 2; j <= i; ++j)
        {
            factorial *= j;
        }

        superfactorial *= factorial;
    }

    printf("Superfactorial of %u is %Lf", num, superfactorial);

    getch();
}