// 1+3+5+7+9+11+13+15+17+19+21+23....+n
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n,sum=1;
    printf("Enter series limit: ");
    scanf("%d",&n);
    printf("1");
    for(i=2;i<=n;i++)
    {
        sum+=(i*2)-1;
        printf(" + %d",(i*2)-1);
    }
    printf(" = %d",sum);
    getch();
}