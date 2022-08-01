/*
           15
        14 13   
     12 11 10
   9  8  7  6
5  4  3  2  1
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n,a;
    printf("Enter row limit: ");
    scanf("%d",&n);
    a=(n*(n+1))/2;
    for(int i=1;i<=n;i++)
    {
        for(int k=i;k<n;k++)
            printf("    ");
        for(int j=1;j<=i;j++)
            printf("%3d ",a--);
        printf("\n");
    }
    getch();
}