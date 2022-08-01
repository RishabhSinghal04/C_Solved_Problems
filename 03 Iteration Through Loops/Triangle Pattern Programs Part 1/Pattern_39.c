/*
0
4 0 4
3 4 0 4 3
2 3 4 0 4 3 2
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i*2;j++)
        {
            if (j<i)
                printf("%d ",n+j-i);
            else if (j==i)
                printf("0 ");
            else
                printf("%d ",n-j+i);
        }
        printf("\n");
    }
    getch();
}