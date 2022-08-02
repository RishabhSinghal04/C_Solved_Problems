#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for (int i=-n;i<=n;i++)
    {
        for (int j = 1; j <= n+2; j++)
        {
            if(j==1 || j-abs(i)==2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}