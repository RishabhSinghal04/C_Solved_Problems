// Program to display the maximum range and size(in bytes) of data types
#include <stdio.h>
#include <conio.h>
#include <limits.h>
#include <float.h>

void main()
{
    printf("\n***** Program to display the maximum range of data types *****");

    // Character data type
    printf("\n Size of char in bytes : %u",sizeof(char));
    printf("\n signed char or char : %hhi", SCHAR_MAX);
    printf("\n unsigned char : %hhu", UCHAR_MAX);

    // Integer data types
    printf("\n");
    
    // Short Int
    printf("\n Size of short int in bytes : %u",sizeof(short));
    printf("\n short int : %hd", SHRT_MAX);
    printf("\n unsigned short int : %hu", USHRT_MAX);

    // Int
    printf("\n Size of int in bytes : %u",sizeof(int));
    printf("\n int : %d", INT_MAX);
    printf("\n unsigned int : %u", UINT_MAX);

    // Long Int
    printf("\n Size of long int in bytes : %u",sizeof(long));
    printf("\n long int : %ld", LONG_MAX);
    printf("\n unsigned Long : %lu", ULONG_MAX);

    // Long Long Int
    printf("\n Size of long long int in bytes : %u",sizeof(long long));
    printf("\n long long int : %lld", LLONG_MAX);
    printf("\n unsigned long long int : %llu", ULLONG_MAX);

    // Floating-point data types
    printf("\n");

    // Float
    printf("\n Size of float in bytes : %u",sizeof(float));
    printf("\n float : %f", FLT_MAX);

    // Double
    printf("\n Size of double in bytes : %u",sizeof(double));
    printf("\n double : %lf", DBL_MAX);

    // Long Double
    printf("\n Size of long double in bytes : %u",sizeof(long double));
    printf("\n long double : %Lf", LDBL_MAX);
    getch();
}