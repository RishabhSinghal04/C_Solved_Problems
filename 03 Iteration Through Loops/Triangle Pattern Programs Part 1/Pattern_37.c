/*
1
1 2 3
1 2 3 4 5
1 2 3 4 5 6 7
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
            printf("%d ",j);
        printf("\n");
    }
    getch();
}