
#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n, num = 0, temp, remainder = 0, place_value = 1, term_count = 0;
    unsigned long long bin_num = 0;

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = 1; i <= n; ++i)
    {
        while (term_count < n)
        {
            temp = ++num;

            while (temp > 0) // Process to convert decimal number into equivalent binary number
            {
                remainder = temp % 2;
                temp /= 2;
                bin_num += (remainder * place_value);
                place_value *= 10;
            }

            printf("%8llu ", bin_num); // Print Binary Number
            
            term_count++;   // Next term of the pattern
            bin_num = 0;
            place_value = 1;
        }

        printf("\n");
        term_count = 0;
    }

    getch();
}