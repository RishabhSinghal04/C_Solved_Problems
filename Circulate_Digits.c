/**
Circulate the digits of a number
Let n = 1234
n1 = 2341
n2 = 3412
n3 = 4123
n = 1234
**/

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    unsigned long num, temp;
    short int num_digits = 0, first_digit = 0;

    printf("Enter a number: ");
    scanf("%lu", &num);

    num_digits = (int)log10(num) + 1; // To find the number of digits in 'num'
    temp = num;

    printf("%lu\n", num);

    for (int i = 1; i < num_digits; ++i)
    {
        // Extract first digit
        first_digit = temp / ((long)(pow(10, num_digits - 1) + 1e-9));

        // Extract remaing digits and multiply by 10 then add the extracted first digit
        temp = temp % ((long)(pow(10, num_digits - 1) + 1e-9)) * 10 + first_digit;

        printf("%lu\n", temp);
    }

    getch();
}