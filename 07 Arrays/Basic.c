#include <stdio.h>
#include <conio.h>

#define N 10

void main()
{
    int num[N];
    printf("Enetr ten(10) numbers:- ");
    for(int i=0;i<10;i++)
        scanf("%d",&num[i]);
    printf("Following are the numbers:- ");
    for(int i=0;i<10;i++)
        printf("\n %d",num[i]);
    getch();
}