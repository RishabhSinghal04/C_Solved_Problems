// A program to add two distances ,i.e. in feet and inch.

#include <stdio.h>
#include <conio.h>

struct distance
{
    unsigned int feet;
    float inch;
};

void main()
{
    struct distance dist1, dist2, sum_distance;

    printf("First Distance\n");
    printf("Enter feet: ");
    scanf("%u", &dist1.feet);
    printf("Enter inch: ");
    scanf("%f", &dist1.inch);

    printf("Second Distance\n");
    printf("Enter feet: ");
    scanf("%u", &dist2.feet);
    printf("Enter inch: ");
    scanf("%f", &dist2.inch);

    sum_distance.feet = dist1.feet + dist2.feet;
    sum_distance.inch = dist1.inch + dist2.inch;

    while (sum_distance.inch > 11.99)
    {
        sum_distance.feet++;
        sum_distance.inch -= 12.0;
    }

    printf("Sum of distances is %u\' %.1f\"", sum_distance.feet, sum_distance.inch);

    getch();
}