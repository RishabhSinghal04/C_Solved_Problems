/*
0
0 1
0 1 1
0 1 1 2
0 1 1 2 3
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, first_term=0, second_term=1, third_term=0;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            first_term = second_term;
            second_term = third_term;
            printf("%d ",third_term);
            third_term = first_term + second_term;
        }
        first_term=0;
        second_term=1;
        third_term=0;
        printf("\n");
    }
    getch();
}