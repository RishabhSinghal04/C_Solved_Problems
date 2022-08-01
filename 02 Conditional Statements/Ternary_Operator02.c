// Print the greatest among three numbers using ternary operator
#include <stdio.h>
#include <conio.h>

void main()
{
    int num_1, num_2;
    printf("Enter two (2) numbers: ");
    scanf("%d %d",&num_1, &num_2);
    printf("The greatest number among %d and %d is %d",num_1, num_2, num_1>num_2?num_1:num_2);
    getch();
}