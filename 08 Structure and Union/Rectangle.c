// A program to display all coordinates and find the area of a rectangle using structure

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

struct Coordinates
{
    short x, y;
};

struct Rectangle
{
    struct Coordinates topLeft, topRight, bottomRight, bottomLeft;
};

void inputCoordinates(struct Rectangle *);
void findRemainingCoordinates(struct Rectangle *);
void displayAllCoordinates(struct Rectangle *);
unsigned int calculateArea(struct Rectangle *);

bool checkCoordinates(struct Rectangle *);

void main()
{
    struct Rectangle point;
    printf("RECTANGLE\n");

    inputCoordinates(&point);
    if (checkCoordinates(&point))
    {
        findRemainingCoordinates(&point);

        printf("\nCoordinates of the rectangle are:-\n");
        displayAllCoordinates(&point);

        printf("\nArea of the rectangle is %u square units", calculateArea(&point));
    }
    else
    {
        printf("INVALID");
    }

    getch();
}

void inputCoordinates(struct Rectangle *point)
{
    printf("Enter coordinates of top-left corner: ");
    scanf("%d %d", &point->topLeft.x, &point->topLeft.y);

    printf("Enter coordinates of bottom-right corner: ");
    scanf("%d %d", &point->bottomRight.x, &point->bottomRight.y);
}

bool checkCoordinates(struct Rectangle *point)
{
    return ((point->bottomRight.x > point->topLeft.x) && (point->topLeft.y > point->bottomRight.y)) ? true : false;
}

void findRemainingCoordinates(struct Rectangle *point)
{
    point->topRight.x = point->bottomRight.x;
    point->topRight.y = point->topLeft.y;
    point->bottomLeft.x = point->topLeft.x;
    point->bottomLeft.y = point->bottomRight.y;
}

void displayAllCoordinates(struct Rectangle *point)
{
    printf("Coordinates of top-left corner are (%d, %d)\n", point->topLeft.x, point->topLeft.y);
    printf("Coordinates of top-right corner are (%d, %d)\n", point->topRight.x, point->topRight.y);
    printf("Coordinates of bottom-right corner are (%d, %d)\n", point->bottomRight.x, point->bottomRight.y);
    printf("Coordinates of bottom-left corner are (%d, %d)\n", point->bottomLeft.x, point->bottomLeft.y);
}

unsigned int calculateArea(struct Rectangle *point)
{
    unsigned int length, breadth;

    length = point->topRight.x - point->topLeft.x;
    breadth = point->topRight.y - point->bottomRight.y;

    return length * breadth;
}