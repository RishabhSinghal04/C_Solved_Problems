
#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n*4-3);j++)
        {
            if(i==j || i+j==n*2 || j-i==n*2-2 || i+j==n*4-2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    getch();
}