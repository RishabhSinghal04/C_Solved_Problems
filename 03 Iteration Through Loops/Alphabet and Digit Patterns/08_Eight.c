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
            if(i==-n || i==n || i==0 || j==-n || j==n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}