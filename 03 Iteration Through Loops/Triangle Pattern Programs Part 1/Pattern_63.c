/*
          2
       4  6    
    8 10 12
14 16 18 20

*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n,a=0;
    printf("Enter row limit: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int k=i;k<n;k++)
            printf("   ");  // Four Spaces
        for(int j=i;j>=1;j--)
            printf("%2d ",a+=2);
        printf("\n");
    }
    getch();
}