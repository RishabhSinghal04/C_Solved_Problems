
#include <stdio.h>
#include <conio.h>

long double Superfactorial(unsigned short);
long double Factorial(unsigned short);

void main()
{
    unsigned short num;

    printf("Enter a number: ");
    scanf("%hu", &num);

    (num <= 10) ? printf("Superfactorial of %hu is %.0Lf", num, Superfactorial(num)) : printf("Superfactorial of %hu is %LE", num, Superfactorial(num));

    getch();
}

long double Superfactorial(unsigned short num)
{
    if (num == 2)
    {
        return num;
    }

    return num * Factorial(num - 1) * Superfactorial(num - 1);
}

long double Factorial(unsigned short num)
{
    if (num == 2)
    {
        return num;
    }

    return num * Factorial(num - 1);
}