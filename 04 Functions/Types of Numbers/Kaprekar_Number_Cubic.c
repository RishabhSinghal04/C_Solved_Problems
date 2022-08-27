/**
Kaprekar numbers can also be defined by higher powers.
For example, 45^3 = 91125, and 9 + 11 + 25 = 45.
The first ten numbers with this property are: 1, 8, 10, 45, 297, 2322, 2728, 4445, 4544, and 4949.
**/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

bool isCubicKaprekarNumber(unsigned short);

void main()
{
    unsigned short num;

    printf("Enter a number: ");
    scanf("%hu", &num);

    isCubicKaprekarNumber(num) ? printf("%hu is a Kaprekar Number (Cubic)", num) : printf("%hu is not a Kaprekar Number (Cubic)", num);

    getch();
}

bool isCubicKaprekarNumber(unsigned short num)
{
    unsigned long long cube_num = pow(num, 3) + 1e-9;
    unsigned int sum_digits = 0, num_digits = (short)log10(num) + 1;

    while (cube_num > 0)
    {
        sum_digits += (cube_num % (int)(pow(10, num_digits) + 1e-9));
        cube_num /= (int)(pow(10, num_digits) + 1e-9);
    }

    return (sum_digits == num) ? true : false;
}