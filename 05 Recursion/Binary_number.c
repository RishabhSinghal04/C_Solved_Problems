// A program to convert decimal number (base 10) into binary number (base 2)

#include <stdio.h>
#include <conio.h>

/**
 * @brief  A function to convert decimal number (base 10) into binary number (base 2)
 * @param  short:
 * @param  int: 1
 * @retval unsigned long long
 */
unsigned long long toBinaryNumber(unsigned short, unsigned int);

void main()
{
    unsigned short num;

    printf("Enter a number: ");
    scanf("%hu", &num);

    printf("Binary equivalent of %hu is %llu", num, toBinaryNumber(num, 1));

    getch();
}

unsigned long long toBinaryNumber(unsigned short num, unsigned int i)
{
    if (num == 0)
    {
        return 0;
    }
    return (num % 2) * i + toBinaryNumber(num / 2, i * 10);
}