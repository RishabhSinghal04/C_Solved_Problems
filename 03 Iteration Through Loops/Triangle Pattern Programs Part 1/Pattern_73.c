/*
1 2 3 4 5
  1 2 3 4
    1 2 3
      1 2
        1
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
        for(int k=1;k<i;k++)
            printf("   ");
        for(int j=i;j<=n;j++)
            printf("%2d ",j+1-i);
        printf("\n");
    }
    getch();
}