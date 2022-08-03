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
            if(j==1 && i!=-n)   // Left vertical line leaving 1st coloumn blank
                printf("* ");
            else if( !(j==1 || j==n+2) && i==-n)    // Uppermost row leaving 1st and last coloumns blank
                printf("*");
            else if(j==n+2 && i!=-n && i<0)   // Upperhalf right vertical line leaving 1st coloumn blank
                printf("* ");
            else if(i==0 && j!=n+2) // Middle row leaving last coloumn blank
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}