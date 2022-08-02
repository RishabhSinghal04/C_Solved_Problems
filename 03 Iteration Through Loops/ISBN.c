/** 
International Standard Book Number (ISBN) is a unique numeric book identifier which is printed on every book. 
The ISBN is based upon a 10 digit code.
The ISBN The ISBN is legal if:-

1 x digit_1 + 2 x digit_2 + 3 x digit_3 + 4 x digit_4 + 5 x digit_5 + 6 x digit_6 + 7 x digit_7 + 8 x digit_8 + 9 x digit_9 + 10 x digit_10 is divisible 11.
An ISBN 1401601499

1x1 + 2x4 + 3x0 + 4x1 + 5x6 + 6x0 + 7x1 + 8x4 + 9x9 + 10x9 = 253 which is divisible by 11.

Divisible by 11, output the message, "Legal" 
Not divisible by 11, output the message, "Illegal"
**/
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    unsigned long ISBN_code, temp;
    int count = 10, sum = 0;

    printf("Enter a ISBN code: ");
    scanf("%lu", &ISBN_code);

    if ((long)log10(ISBN_code) + 1 == 10)
    {
        temp = ISBN_code;

        while (temp > 0)
        {
            sum = sum + ((temp % 10) * count);
            temp /= 10;
            count--;
        }

        if (sum % 11 == 0)
        {
            printf("%lu is a valid ISBN code", ISBN_code);
        }
        else
        {
            printf("%lu is not a valid ISBN code", ISBN_code);
        }
    }
    else
    {
        printf("%lu is an illegal ISBN code", ISBN_code);
    }
    getch();
}