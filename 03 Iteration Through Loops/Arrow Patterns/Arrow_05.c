
#include <stdio.h>
#include <conio.h>

void main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || j==1 || i==j)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
 
    getch();
}