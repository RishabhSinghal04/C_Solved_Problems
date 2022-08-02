/*
        5
      4 5    
    3 4 5
  2 3 4 5
1 2 3 4 5
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
            printf("%d ",j);
        printf("\n");
    }
    getch();
}