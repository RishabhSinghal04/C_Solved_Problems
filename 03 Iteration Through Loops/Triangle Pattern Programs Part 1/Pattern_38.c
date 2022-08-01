/*
1
2 1 2
3 2 1 2 3
4 3 2 1 2 3 4
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
            if (j<=i)
                printf("%d ",i-j+1);
            else
                printf("%d ",j-i+1);
        }
        printf("\n");
    }
    getch();
}