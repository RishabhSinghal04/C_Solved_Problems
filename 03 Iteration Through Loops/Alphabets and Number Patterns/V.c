
#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n*2-1;j++)
        {
            if(i==j || j==n*2-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    getch();
}