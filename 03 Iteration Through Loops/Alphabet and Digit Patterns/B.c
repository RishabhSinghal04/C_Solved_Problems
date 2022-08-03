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
            if(j==-n+1)     // Complete Left Vertical Line
                printf("*");
            else if((i==-n || i==n || i==0) && j<n-1)   // Upper, middle and lower sides leaving their right most stars
                printf("*");
            else if(j==n-1 && !(i==-n || i==0 || i==n)) // Right Vertical Line except at upper, middle and lower
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}