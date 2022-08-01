
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef unsigned int ui;

ui size;
ui *array_num;

void assignArrayELements();
void showArray();
void PrimeFactor();

void main()
{
    printf("Enter size of array: ");
    scanf("%u", &size);

    array_num = calloc(size + 1, sizeof(ui));

    PrimeFactor();

    free(array_num);
    getch();
}

void PrimeFactor()
{
    // lpf: Lowest Prime Factor      hpf: Highest Prime Factor
    ui *hpf = calloc(size + 1, sizeof(ui)), *lpf = calloc(size + 1, sizeof(ui));

    for (int i = 2; i <= size; ++i)
    {
        if (array_num[i] == 0)
        {
            lpf[i] = hpf[i] = i;

            for (int j = i * 2; j <= size; j += i)
            {
                array_num[j] = 1;   // mark composite numbers
                hpf[j] = i;     // mark highest prime factor

                if (lpf[j] == 0)
                {
                    lpf[j] = i;     // mark lowest prime factor
                }
            }
        }
    }

    printf("\n   \t   Number \t Lowest Prime Factor \t Highest Prime Factor\n");

    for (int i = 0; i <= size; ++i)
    {
        printf("   \t   %5u  \t\t  %5u  \t\t  %5u\n", i, lpf[i], hpf[i]);
    }

    free(lpf);
    free(hpf);
}