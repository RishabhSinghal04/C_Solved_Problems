/*
4
3 4
2 3 4
1 2 3 4
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        for(int j=i;j<=n;j++)
            printf("%d ",j);
        printf("\n");
    }
    getch();
}