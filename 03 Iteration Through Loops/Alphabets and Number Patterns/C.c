#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=-n;i<=n;i++)
    {
        for(int j=-n+1;j<=n-1;j++)
        {
            if((i==-n || i==n) && j!=-n+1 || j==-n+1 && !(i==-n || i==n))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}