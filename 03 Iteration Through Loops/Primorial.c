/**
Primorial (P#) is defined to be the product of prime numbers less than or equal to P

3# = 2 x 3 = 6
5# = 2 x 3 x 5 = 30
13# = 2 x 3 x 5 x 7 x 11 x 13 = 30030

This is also called p-prime factorial.

Write a program to input a number and print its primordial.

Sample Data :-
Enter a number : 3
3# = 2 x 3 = 6
Enter a number : 13
13# = 2 x 3 x 5 x 7 x 11 x 13 = 30030
**/

#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int num, flag = 1;
    unsigned long long product = 2;

    printf("Enter a number: ");
    scanf("%u", &num);

    printf("%u# = %u", num, product);

    for (int i = 3; i <= num; ++i)
    {
        flag = 1;

        for (int j = 2; j * j <= i; ++j)
        {
            if (i % j == 0)
            {
                flag = 0;
            }
        }

        if (flag == 1)
        {
            product *= i;
            printf(" x %u", i);
        }
    }

    printf(" = %llu", product);

    getch();
}