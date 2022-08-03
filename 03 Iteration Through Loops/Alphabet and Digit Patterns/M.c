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
        for (int j = -n; j <= n; j++)
        {
            if(j==-n || j==n || i==-abs(j))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}