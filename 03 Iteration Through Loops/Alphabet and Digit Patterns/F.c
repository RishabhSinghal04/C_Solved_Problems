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
            if(j==-n+1 || i==-n || (i==0 && j!=n-1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}