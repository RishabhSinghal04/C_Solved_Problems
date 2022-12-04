// Memeory is wasted in structure padding but CPU cycles are saved

#include <stdio.h>
#include <conio.h>

struct padding
{
    char ch1, ch2;  // 1 byte + 1 byte = 2 bytes
    int num1, num2; // 4 bytes each
};
/*
64-bit CPU : 1 word = 8 bytes

| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 |    | 1 | 2 | 3 | 4 |
 ch1 ch2 [  3  num1  6  ][empty]      [     num2    ]

Total 12 bytes
*/

void main()
{
    printf("\nSize of structure is %u bytes", sizeof(struct padding));

    getch();
}