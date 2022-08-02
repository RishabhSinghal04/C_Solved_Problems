/*
4
3 3
2 2 2
1 1 1 1
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
            printf("%d ",(n+1)-i);
        printf("\n");
    }
    getch();
}