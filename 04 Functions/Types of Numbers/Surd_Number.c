/**
A number is said to be Surd if its square root, cube root, etc are not integers. 
For example, 9 is not a Surd Number as square root of 9 is 3, but 5 is Surd as square root of 5 is not an integer. 
Similarly 8 is not a Surd Number as cube root of 8 is 2, but 7 is.
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool isSurdNumber(unsigned long long);

void main()
{
    unsigned long long num;

    printf("Enter a number: ");
    scanf("%llu", &num);

    isSurdNumber(num) ? printf("%llu is a Surd Number", num) : printf("%llu is not a Surd Number", num);

    getch();
}

bool isSurdNumber(unsigned long long num)
{
    unsigned int temp = 0;
    if (num == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) // square root, cube root .....
    {
        temp = i;
        while (temp < num)
        {
            temp *= i; // Multiply roots
        }
        if (temp == num)
        {
            return false;
        }
    }
    return true;
}