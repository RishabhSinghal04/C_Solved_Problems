/* A program to calculate area of a square
    Given its side length by the user in 'float' only */
#include <stdio.h>
#include <conio.h>
void main()
{
    float side;
    printf("\t  To Calculate Area of a Square");
    printf("\nEnter lenght of a side of a square: ");
    scanf("%f",&side);
    printf("\nArea of the square with length of a side '%f' is %f unit square",side ,side*side);
    getch();
}
