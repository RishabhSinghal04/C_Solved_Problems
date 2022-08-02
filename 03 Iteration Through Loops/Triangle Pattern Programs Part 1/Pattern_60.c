/*
        5
      4 4    
    3 3 3
  2 2 2 2
1 1 1 1 1
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter row limit: ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        for(int k=1;k<i;k++)
            printf("  ");
        for(int j=i;j<=n;j++)
            printf("%d ",i);
        printf("\n");
    }
    getch();
}