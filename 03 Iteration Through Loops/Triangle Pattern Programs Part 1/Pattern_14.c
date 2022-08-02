/*
2
2 4
2 4 6
2 4 6 8
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
            printf("%d ",j*2);
        printf("\n");
    }
    getch();
}