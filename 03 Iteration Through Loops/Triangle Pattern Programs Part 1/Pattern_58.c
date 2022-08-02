/*
        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5
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
        for(int j=1;j<=i;j++)
            printf("%d ",j);
        printf("\n");
    }
    getch();
}

/*  OR
void main()
{
    int a,n;
    printf("Enter row limit: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        a=i;
        for(int j=n;j>=1;j--)
        {
            if(i>=j)
                printf("%d",a++);
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}
*/