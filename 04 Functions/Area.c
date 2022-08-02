#include <stdio.h>
#include <conio.h>
#include <math.h>

float area_square(float side)
{
    return side*side;
}
float area_rectangle(float length, float breadth)
{
    return length*breadth;
}
float area_triangle(float a, float b, float c)
{
    float s=(a+b+c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

void main()
{
    unsigned short ch_num;
    float a, b, c, length, breadth, side, s=0.0;
    printf(" Press '1' for Area of Square \n Press '2' for Area of Rectangle \n Press '3' for Area of Triangle");
    printf("\n Press '0' to exit");
    do
    {
        printf("\n Enter your choice: ");
        scanf("%d",&ch_num);
        switch (ch_num)
        {
            case 0:
                printf(" E X I T");
                printf("\n Press any key....");
                break;

            case 1:
                printf("\n Enter length of a side of a square:");
                scanf("%f",&side);
                printf(" Area of square is %f unit(s)",area_square(side));
                break;

            case 2:
                printf("\n Enter length and breadth of a rectangle: ");
                scanf("%f %f",&length, &breadth);
                printf(" Area of rectangle is %f unit(s)",area_rectangle(length, breadth));
                break;

            case 3:
                printf("\n Enter three(3) sides of a triangle: ");
                scanf("%f %f %f",&a, &b, &c);
                printf(" Area of triangle is %f unit(s)",area_triangle(a, b, c));
                break;

            default:
                printf(" I N V A L I D ");
                break;
        }
    }
    while(ch_num!=0);
    getch();
}