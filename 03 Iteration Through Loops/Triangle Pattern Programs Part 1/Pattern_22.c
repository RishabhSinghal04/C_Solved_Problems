/*
1
2 4
3 6 9
4 8 12 16
5 10 15 20 25
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
            printf("%2d ",i*j);
        printf("\n");
    }
    getch();
}