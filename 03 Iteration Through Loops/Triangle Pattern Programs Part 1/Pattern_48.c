/*
1 2 3 4
1 2 3
1 2
1
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int a,n;
    printf("Enter row limt: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        a=1;
        for(int j=i;j<=n;j++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    getch();
}