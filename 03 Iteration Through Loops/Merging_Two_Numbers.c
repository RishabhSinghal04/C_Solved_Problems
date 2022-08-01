/**
Write program to input an integer nl and another integer n2. 
Merge n2 after n1 and store number M. 
Print n1, n2 and merged number M.

Example : Input : nl = 24, n2 = 567 Output : M= 24567
**/
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int n1, n2, M = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    // Let n1 = 12 and n2 = 0; => (int)log10(n2....) = 0 {Since n2 == 0}; => pow(10.0, 1 + 0) = 10
    M = n1 * (int)(pow(10.0, 1 + (int)log10((n2 == 0) ? 1 : n2)) + 1e-9) + n2;

    printf("New number after merging %d and %d is %d", n1, n2, M);

    getch();
}