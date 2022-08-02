/*  Fascinating Number: When a number( 3 digits or more ) is multiplied by 2 and 3, 
    and when both these products are concatenated with the original number, 
    then it results in all digits from 1 to 9 present exactly once. 
    There could be any number of zeros and are ignored.
    Example: 192 as 192 X 2 = 384 and 192 X 3 = 576 
    Concatenate 192, 384 and 576 ; the result is 192384576 */
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int num, num2, num3, length_num2, length_num3, count=0;
    long long temp;

    printf("Enter a number: ");
    scanf("%d",&num);

    num2=num*2;
    num3=num*3;

    length_num2=1+(int)log10(num2);
    length_num3=1+(int)log10(num3);
    
    double num_sum = num * pow(10,length_num2+length_num3) + num2 * pow(10,length_num3) + num3;

    printf("The new number after concatenation is %lld \n",(long long)num_sum);
    for(int i=1;i<=9;i++)
    {
        temp=num_sum;
        count=0;

        while(temp!=0)
        {
            if(temp%10==i)
                count++;
            temp/=10;
        }

        if(count>1)
        {
            printf("%d is not a Fascinating Number",num);
            break;
        }
    }

    if(count==1 || count==0)
        printf("%d is a Fascinating Number",num);

    getch();
}