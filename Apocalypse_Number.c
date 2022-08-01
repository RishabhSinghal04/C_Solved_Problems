#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

void main()
{
    int num;
    char str[100];
    printf("Enter a number as power of 2 (2^n): ");
    scanf("%d", &num);

    snprintf(str, 100, "%f", pow(2, num));
    printf("\n%s\n", str);

    if (strstr(str, "666"))
        printf("Apocalypse");
    else
        printf("Not Apolcalypse");
    getch();
}