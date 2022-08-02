/*
1 1 1 1
2 2 2
3 3
4
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter row limt: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
            printf("%d ",i);
        printf("\n");
    }
    getch();
}