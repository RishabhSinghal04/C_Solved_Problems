/*
A
2 2
C C C
4 4 4 4
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%2==1)
                printf("%c ",i+64);
            else
                printf("%d ",i);
        }
        printf("\n");
    }
    getch();
}