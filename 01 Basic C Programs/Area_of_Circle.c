/* A program to calculate area of a circle
    Given its radius by the user in 'float' only */
#include <stdio.h>
#include <conio.h>
void main()
{
    float radius;
    printf("\t  To Calculate Area of a Circle");
    printf("\nEnter radius of a circle: ");
    scanf("%f",&radius);
    printf("Area of the circle with radius '%f' is '%f' unit square",radius ,3.14*(radius*radius));
    getch();
}