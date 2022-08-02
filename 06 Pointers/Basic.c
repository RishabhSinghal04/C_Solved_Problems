#include <stdio.h>
#include <conio.h>

void main()
{
    int n1, *n2;
    printf("Enter a number: ");
    scanf("%d",&n1);
    n2=&n1;
    printf("Address of %d in memory is %d",n1,n2);
    getch();
}