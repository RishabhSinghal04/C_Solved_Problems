#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(int i=-n;i<=n+(n/2);i++)
    {
        for(int j=-n+1;j<=n+1-(n/2);j++)
        {
            if( (((i==-n && !(j==-n+1 || j==2)) || 
                (i==n-1 && j!=-n+1)) && j<=2) || 
                ((j==-n+1 && !(i==-n || i==n-1)) || 
                (j==2 && i!=-n)) && i<n )
                printf("* ");
            else if(i-j==n-3 && i>=n/2)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    
    getch();
}