
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    long long int num;

    printf("Enter a number: ");
    scanf("%lld", &num);

    printf("\nThe lenght of %lld is %hu", num, (int)log10(num) + 1);

    getch();
}