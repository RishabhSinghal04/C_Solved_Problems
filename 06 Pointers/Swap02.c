#include <stdio.h>
#include <conio.h>

void swap (int *a, int *b);

void main()
{
    int m,n;
    printf("Enter two numbers: ");
    scanf("%d %d",&m, &n);
    printf("m is %d, n is %d\n", m, n);
    swap(&m, &n);
    printf("m is %d, n is %d\n", m, n);
    getch();
}

void swap (int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}