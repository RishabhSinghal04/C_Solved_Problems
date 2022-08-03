
#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(int i=-n;i<=n;i++)
    {
        for(int j=1;j<=n+2;j++)
        {
            if( (i==-n && j!=1) || 
                (i==n && j!=n+2) ||
                (i==0 && !(j==1 || j==n+2)) ||
                (j==1 && (i>-n && i<0)) || 
                (j==n+2 && (i>0 && i<n)) )
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    getch();
}