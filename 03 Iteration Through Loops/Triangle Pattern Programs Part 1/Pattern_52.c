/*
4 4 4 4
3 3 3
2 2
1
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter row limt: ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
            printf("%d ",i);
        printf("\n");
    }
    getch();
}