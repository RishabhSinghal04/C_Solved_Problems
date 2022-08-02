/* A program to print the area of a rectangle
    Given its length and breadth by the user in 'float' only */
#include <stdio.h>
#include <conio.h>
void main()
{
    float length, breadth;
    printf("\t  To Calculate Area of a Rectangle");
    printf("\nEnter length of a rectangle: ");
    scanf("%f",&length);
    printf("\nEnter breadth of a rectangle: ");
    scanf("%f",&breadth);
    //Area of the rectangle with length 'x' and breadth 'y' is x*y
    printf("\nArea of the rectangle with length '%f' and breadth '%f' is %f unit square",length ,breadth ,length*breadth);
    getch();
}