/*
1
2 4
1 3 5
2 4 6 8
1 3 5 7 9
*/
#include <stdio.h>
#include <windows.h>

void main()
{
    int n,a;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        a=(i%2==0)?2:1;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a);
            a+=2;
        }
        printf("\n");
    }
    system("pause");
}