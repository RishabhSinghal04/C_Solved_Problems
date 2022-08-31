/**
A number is called a Tech Number if the given number has an even number of digits and the number can be divided exactly into two parts from the middle.
After equally dividing the number, sum up the numbers and find the square of the sum.
If the number is equal to the square of the sum, the given number is a Tech Number.

N = 2025 -> 20 + 25 = 45 -> (45)^2 = 2025. Hence 2025 is a Tech Number.
N = 81 -> 8 + 1 = 9 -> 9^2 = 81 which is a tech number.
**/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

bool isTechNumber(unsigned long);

void main()
{
    unsigned long num;

    printf("Enter a number: ");
    scanf("%lu", &num);

    isTechNumber(num) ? printf("%lu is a Tech Number", num) : printf("%lu is not a Tech Number", num);

    getch();
}

bool isTechNumber(unsigned long num)
{
    short num_digits = (short)log10(num) + 1; // To store number of digits in num

    if (num_digits % 2 != 0) // num does not have even number of digits
    {
        return false;
    }

    // To store remainder(right part of num) and quotient(left part of num)
    unsigned int right_part_num = num % (int)(pow(10, num_digits / 2) + 1e-9), left_part_num = num / (int)(pow(10, num_digits / 2) + 1e-9);

    // Square of sum of left part of num and right part of num equal to(==) num
    return ((unsigned long long)(pow(left_part_num + right_part_num, 2) + 1e-9) == num) ? true : false;
}