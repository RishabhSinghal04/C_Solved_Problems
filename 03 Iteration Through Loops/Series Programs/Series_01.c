//  1,2,3,4,5,6,7,8,9,10...........n.
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n;
    printf("Enter series limit: ");
    scanf("%d",&n);
    printf("1");
    for(i=2;i<=n;i++)
    {
        printf(" , %d",i);
    }
    getch();
}