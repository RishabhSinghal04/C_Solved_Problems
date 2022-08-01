/*
           1
       4   9    
   16 25  36
49 64 81 100

*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n,a=1;
    printf("Enter row limit: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int k=i;k<n;k++)
            printf("    ");
        for(int j=1;j<=i;j++)
        {
            printf("%3d ",a*a);
            a++;
        }
        printf("\n");
    }
    getch();
}