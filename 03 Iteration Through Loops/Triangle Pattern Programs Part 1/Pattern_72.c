/*
* * * * *
  * * * *
    * * *
      * *
        *
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
            printf(" ");
        for(int j=i;j<=n;j++)
            printf("*");
        printf("\n");
    }
    getch();
}

/*  OR
  for(int i=n;i>=1;i--)
    {
      for(int j=n;j>=1;j--)
      {
        if(i>=j)
          printf("*");
        else
          printf(" ");
      }
      printf("\n");
    }
*/