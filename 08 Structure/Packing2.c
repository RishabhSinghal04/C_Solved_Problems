// CPU cycles are wasted in Structure Packing but memory is saved

#include <stdio.h>
#include <conio.h>

struct packing
{
    char ch1, ch2;         // 1 byte + 1 byte = 2 bytes
    int num1, num2;        // 4 bytes each
} __attribute__((packed)); // Attribute to inform compiler to pack all members;
/*
64-bit CPU : 1 word = 8 bytes

| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 |       | 1 | 2 |
 ch1 ch2 [  3  num1  6  ][7 num2(2 CPU cycles) 2]

Total 10 bytes
*/
struct packing2
{
    char ch1, ch2;         // 1 byte + 1 byte = 2 bytes
    int num1, num2;        // 4 bytes each
} __attribute__((packed)); // Attribute to inform compiler to pack all members

struct packing3
{
    char ch1, ch2;  // 1 byte + 1 byte = 2 bytes
    int num1, num2; // 4 bytes each
};

void main()
{
    printf("Size of structure is %u bytes\n", sizeof(struct packing));
    printf("Size of structure 2 is %u bytes\n", sizeof(struct packing2));
    printf("Size of structure 3 is %u bytes\n", sizeof(struct packing3));

    getch();
}