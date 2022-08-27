/**
For fourth powers, the sequence begins 1, 7, 45, 55, 67, (100), 433, 4950, 5050, 38212, 65068.
Notice that 45 is a Kaprekar number for second, third, and fourth powers (45^4 = 4100625, and 4 + 10 + 06 + 25 = 45). 
The only number in all three Kaprekar sequences, up to at least 400000.
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

    isCubicKaprekarNumber(num) ? printf("%hu is a Kaprekar Number (Quartic)", num) : printf("%hu is not a Kaprekar Number (Quartic)", num);

    getch();
}

bool isCubicKaprekarNumber(unsigned short num)
{
    unsigned long long cube_num = pow(num, 4) + 1e-9;
    unsigned int sum_digits = 0, num_digits = (short)log10(num) + 1;

    while (cube_num > 0)
    {
        sum_digits += (cube_num % (int)(pow(10, num_digits) + 1e-9));
        cube_num /= (int)(pow(10, num_digits) + 1e-9);
    }

    return (sum_digits == num) ? true : false;
}