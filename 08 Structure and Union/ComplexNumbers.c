// A program to add two complex numbers

#include <stdio.h>
#include <conio.h>

// typedef struct complexNumber to cmplxNumber
typedef struct complexNumber
{
    float realPart, imagPart;
} cmplxNumber;

/**
 * @brief Function to add two complex numbers
 * @param  float: 1st complex number
 * @param  float: 2nd complex number
 * @return  sum of both complex numbers
 */
cmplxNumber addComplexNumbers(cmplxNumber, cmplxNumber);

void main()
{
    cmplxNumber cmplxNum1, cmplxNum2, sum_num;

    printf("First Number\n");
    printf("Enter real part: ");
    scanf("%f", &cmplxNum1.realPart);
    printf("Enter imaginary part: ");
    scanf(" %f", &cmplxNum1.imagPart);

    printf("Second Number\n");
    printf("Enter real part: ");
    scanf("%f", &cmplxNum2.realPart);
    printf("Enter imaginary part: ");
    scanf("%f", &cmplxNum2.imagPart);

    sum_num = addComplexNumbers(cmplxNum1, cmplxNum2);
    // cmplxNum1: real and imaginary part of 1st complex number
    // cmplxNum2: real and imaginary part of 2nd complex number

    printf("Sum of %.1f + %.1fi and %.1f + %.1fi is %.1f + %.1fi", cmplxNum1.realPart, cmplxNum1.imagPart, cmplxNum2.realPart, cmplxNum2.imagPart, sum_num.realPart, sum_num.imagPart);

    getch();
}

struct complexNumber addComplexNumbers(cmplxNumber cmplxNum1, cmplxNumber cmplxNum2)
{
    struct complexNumber sum_num;

    sum_num.realPart = cmplxNum1.realPart + cmplxNum2.realPart;
    sum_num.imagPart = cmplxNum1.imagPart + cmplxNum2.imagPart;

    return sum_num;
}