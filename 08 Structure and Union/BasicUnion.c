
#include <stdio.h>
#include <conio.h>

union basic
{
    int n1, n2;
    char ch;
    float n;
};

void main()
{
    union basic b;

    printf("Size of union basic is %u", sizeof(b));

    printf("\nAddress of 'n1'(int) is %p", &b.n1);
    printf("\nAddress of 'n2'(int) is %p", &b.n2);
    printf("\nAddress of 'ch'(char) is %p", &b.ch);
    printf("\nAddress of 'n'(float) is %p", &b.n);

    b.n1 = 65;
    printf("\nValue of 'n1' is %d", b.n1);
    printf("\nValue of 'ch' is %c", b.ch);

    b.n2 = 90;
    printf("\nValue of 'n2' is %d", b.n2);
    printf("\nValue of 'n1'(after) is %d", b.n1);
    printf("\nValue of 'ch'(after) is %c", b.ch);

    getch();
}