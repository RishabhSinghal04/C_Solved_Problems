
#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(int i=n;i>=1;i--)
    {
        for(int j=n*2;j>=1;j--)
        {
            if(j>n*2-i || j<=i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n*2;j++)
        {
            if(j>n*2-i || j<=i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    getch();
}