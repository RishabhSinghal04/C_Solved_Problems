/**A factorial is represented in following form :

    n! =(n) x (n-1) x (n-2) x ..... x (1)	(N-factorial)

So, successive multipliers (n - 1, n - 2, ..... ) decrement by 1 in factorial.
If the successive multipliers decrement by more than 1 say 2 or 3 etc ., then this type of factorial is known as multi-factorial.
e.g. n!! = (n) x (n-2) x (n-4) x ..... x (1,2) (N double-factorial)
    n!!! = (n) x (n-3) x (n-6) x ..... x (1,2,3) (N triple-factorial)

Write a program to obtain value of n and factor and calculate multi-factorial accordingly.
Sample Data :-
Enter a number : 6
Enter a factor : 2
Multifactorial (factor = 2) for 6 is 48
**/

#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int num, factor, product = 1;

    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Enter a factor: ");
    scanf("%u", &factor);

    product = num;

    printf("%u", num);

    for(int i=1; i<=factor; ++i, printf("!"));
    
    printf(" = %u", product);

    for (int i = num - factor; i > 0; i -= factor)
    {
        product *= i;
        printf(" x (%u - %u)", num, i);
    }

    printf(" = %u\n", product);
    printf("Multifactorial of %u is %u\n", num, product);

    getch();
}