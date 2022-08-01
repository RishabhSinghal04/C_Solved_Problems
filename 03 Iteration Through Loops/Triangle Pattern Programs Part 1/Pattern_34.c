/*
1
1 2 3
4 3 2 1
1 2 3 4 5
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
        for(int j=1;j<=i;j++)
        {
            if(i%2==1)
                printf("%d ",j);
            else
                printf("%d ",i-j+1);
        }
        printf("\n");
    }
    getch();
}