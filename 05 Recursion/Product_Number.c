// A program to calculate product of two numbers

#include <stdio.h>
#include <conio.h>

long long productNumbers(short, short);

void main()
{
    short num1, num2, min_num = 0, max_num = 0;

    printf("Enter two numbers: ");
    scanf("%hd %hd", &num1, &num2);

    min_num = (num1 < num2) ? num1 : num2;
    max_num = (num1 > num2) ? num1 : num2;

    printf("Product of %hd and %hd is %lld", num1, num2, productNumbers(min_num, max_num));

    getch();
}

long long productNumbers(short num1, short num2)
{
    if (num1 == 1)
    {
        return num2;
    }

    return num2 + productNumbers(num1 - 1, num2);
}