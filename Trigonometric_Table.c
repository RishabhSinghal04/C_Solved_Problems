
#include <stdio.h>
#include <conio.h>

void main()
{
    char pi = 227, infinity = 236, root = 251, degree = 248;
    
    printf("\n\n    T  R  I  G  O  N  O  M  E  T  R  I  C       T  A  B  L  E   \n\n");

    printf("\t\t 0 \t\t 30%c \t\t 45%c \t\t 60%c \t\t 90%c \n", degree, degree, degree, degree);
    printf("\t\t   \t\t %c/6 \t\t %c/4 \t\t %c/3 \t\t %c/2 \n\n", pi, pi, pi, pi);

    // sine
    printf("sin \t\t 0 \t\t 1/2 \t\t 1/%c2 \t\t %c3/2 \t\t  1 \n\n", root, root);

    // cosine
    printf("cos \t\t 1 \t\t %c3/2 \t\t 1/%c2 \t\t 1/2 \t\t  0 \n\n", root, root);

    // tangent
    printf("tan \t\t 0 \t\t 1/%c3 \t\t 1 \t\t %c3 \t\t  %c \n\n", root, root, infinity);

    // cotangent
    printf("cot \t\t %c \t\t %c3 \t\t 1 \t\t 1/%c3 \t\t  0 \n\n", infinity, root, root);

    // secant
    printf("sec \t\t 1 \t\t 2 \t\t %c2 \t\t 2/%c3 \t\t  %c \n\n", root, root, infinity);

    // cosecant
    printf("cosec \t\t %c \t\t 2/%c \t\t %c2 \t\t 2 \t\t  1 \n\n", infinity, root, root);

    getch();
}