#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=-n;i<=n;i++)
    {
        for(int j=-n;j<=n;j++)
        {
            if(i==-n || i==n || j==-n || j==n || i+j==0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}