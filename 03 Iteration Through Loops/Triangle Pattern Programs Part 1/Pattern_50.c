/*
# @ # @
# @ #
# @
#
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter row limt: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            if(j%2==0)
                printf("@ ");
            else
                printf("# ");
        }
        printf("\n");
    }
    getch();
}