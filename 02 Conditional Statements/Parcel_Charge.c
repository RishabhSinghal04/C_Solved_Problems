/* A courier company charges for an 'Ordinary mail' and an 'Express mail' based on the weight of the parcel as per the tariff given below:-
    Weight               Ordinary Mail       Express Mail
    upto 100g              Rs. 50              Rs.80
    upto 500g              Rs.40/100g          Rs.70/100g
    501g and above         Rs.35/100g          Rs.65/100g
    WAP to accept the weight of a parcel and type of mail and calculate and print charge. */
#include <stdio.h>
#include <conio.h>

void main()
{
    char mail_type;
    int parcel_weight;
    float charge=0.0f;

    printf("Enter 'E' or 'e' for 'Express Mail' \n \t OR \n Enter 'O' or 'o' for 'Ordinary Mail' ");
    printf("\nEnter your choice: ");
    scanf("%c",&mail_type);
    printf("\nEnter parcel weight in grams: ");
    scanf("%d",&parcel_weight);

    if(mail_type=='E' || mail_type=='e')
    {
        if(parcel_weight<=100)
        charge=80;
        else if(parcel_weight>100 && parcel_weight<=500)
        charge=(parcel_weight-100)*0.70 + 80;
        else
        charge=(parcel_weight-500)*0.65 + (400*0.70) + 80;  // (700-500)*0.65 + 280 + 80 = 490
    }
    else if(mail_type=='O' || mail_type=='o')
    {
        if(parcel_weight<=100)
        charge=50;
        else if(parcel_weight>100 && parcel_weight<=500)
        charge=(parcel_weight-100)*0.40 + 50;
        else
        charge=(parcel_weight-500)*0.35 + (400*0.40) + 50;   // (700-500)*0.35 = 70 + 160 +50 = 280
    }
    else
    printf("\nInvalid");
    
    printf("\nCharge is Rs.%f",charge);
    getch();
}
// 100g = Rs.50     200g = Rs.90    300g = Rs.130   400g = Rs.170   500g = Rs.210   600g = Rs.245   700g = Rs.280 and so on.