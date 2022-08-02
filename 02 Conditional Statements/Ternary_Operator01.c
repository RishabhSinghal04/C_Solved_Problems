// Print the greatest among three numbers using ternary operator
#include <stdio.h>
#include <conio.h>

void main()
{
    int num_1, num_2, num_3;
    printf("Enter three (3) numbers: ");
    scanf("%d %d %d",&num_1, &num_2, &num_3);
    printf("The greatest number amongst %d, %d and %d ",num_1, num_2, num_3);
    printf("is %d",(num_1>num_2)?( (num_1>num_3)?num_1:num_3 ):((num_2>num_3)?num_2:num_3) );
    getch();
}