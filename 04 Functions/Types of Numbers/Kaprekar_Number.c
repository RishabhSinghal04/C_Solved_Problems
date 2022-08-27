/**
Take a positive whole number n that has d number of digits.
Take the square n and separate the result into two pieces: a right-hand piece that has d digits and a left-hand piece that has either d or d-1 digits.
Add these two pieces together.
If the result is n, then n is a Kaprekar number.

Examples are 9 (9^2 = 81, 8 + 1 = 9), 45 (45^2 = 2025, 20 + 25 = 45), and 297 (297^2 = 88209, 88 + 209 = 297).
The first 20 Kaprekar numbers according to this definition are 1, 9, 45, 55, 99, 297, 703, 999, 2223, 2728, 4950, 5050, 7272, 7777, 9999, 17344, 22222, 77778, 82656, 95121, and 99999.
**/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

bool isKaprekarNumber(unsigned int);

void main()
{
    unsigned int num;

    printf("Enter a number: ");
    scanf("%u", &num);

    isKaprekarNumber(num) ? printf("%u is a Kaprekar Number", num) : printf("%u is not a Kaprekar Number", num);

    getch();
}

bool isKaprekarNumber(unsigned int num)
{
    unsigned long long pow_num = num * num; // Square of the number
    unsigned short num_digits = (short)log10(num) + 1;  // Number of digits in 'num'

    // Extract right and left parts from the square of the number
    // 45 * 45 = 2025 -> 2025 % 100 = 25 and 2025 / 100 = 20 -> 20 + 25 = 45
    unsigned long right_part = pow_num % (long)(pow(10, num_digits) + 1e-9), left_part = pow_num / (long)(pow(10, num_digits) + 1e-9);

    return (right_part + left_part == num) ? true : false;
}