/*
4
4 3
4 3 2
4 3 2 1
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
            printf("%d ",(n+1)-j);
        printf("\n");
    }
    getch();
}