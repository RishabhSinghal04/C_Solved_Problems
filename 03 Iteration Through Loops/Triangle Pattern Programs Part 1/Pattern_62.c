/*
        1
      2 1    
    3 2 1
  4 3 2 1
5 4 3 2 1
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter row limit: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int k=i;k<n;k++)
            printf("  ");
        for(int j=i;j>=1;j--)
            printf("%d ",j);
        printf("\n");
    }
    getch();
}