/**
1, 3, 6, 10, ... are triangular numbers.
10 -> 1 + 2 + 3 + 4 = 10.

The nth triangular number is n(n + 1)/2.
Every integer is the sum of at most three triangular numbers.
Every even triangular number is a perfect number.

If T is a triangular number, 8T + 1 is a perfect square and 9T + 1 is another triangular number.
Certain triangular numbers are also squares, but no triangular number can be a third, fourth or fifth power, nor can one end in 2, 4, 7, or 9.
**/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

bool isTriangularNumber(unsigned long);

void main()
{
    unsigned long num;

    printf("Enter a number: ");
    scanf("%lu", &num);

    isTriangularNumber(num) ? printf("%lu is a Triangular Number", num) : printf("%lu is not a Triangular Number", num);

    getch();
}

bool isTriangularNumber(unsigned long num)
{
    /*
    ~ Using quadratic equation ax^2 + bx + c = 0
    ~ Sum of 'n' natural numbers is n(n + 1)/2 = N => n^2 + n - 2*N = 0
    ~ On comparing, we get : a = 1, b = 1 and c = -2*N
    ~ Since 'a' and 'b' are both 1, use 1 as a constant in place of 'a' and 'b'.
    */
    long long c = -2 * (long long)num;
    float root1 = 0.0f, root2 = 0.0f, D = 0.0f;

    D = 1 - (4.0 * c); // Discriminant (D) = b^2 - 4ac

    if (D < 0)
    {
        return false;
    }

    root1 = (-1 + sqrt(D)) / 2.0;
    root2 = (-1 - sqrt(D)) / 2.0;

    if (root1 > 0 && floor(root1) == root1)
    {
        return true;
    }
    if (root2 > 0 && floor(root2) == root2)
    {
        return true;
    }

    return false;
}