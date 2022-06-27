
Assignment 2-B
Ramya Balachandran IITM
•
Feb 9, 2021 (Edited Feb 9, 2021)
37.5/50
37.5 points out of possible 50
Due Feb 12, 2021, 6:00 PM

Assignment 2-B
Google Docs

IncomeTax Calculation_ Examples.pdf
PDF
Class comments
Your work
Graded

EE20B100_date.c
C

EE20B100_sum_bits.c
C

EE20B100_tax.c
C
Private comments
int main()
{
    int ai;
    float Tax, Final_tax,Surcharge;
    printf("please enter your annual income:");
    scanf("%d",&ai);
    if (ai<=250000){
        Tax = 0;
        printf("Income Tax before Health and Educational Cess is %f \n", Tax);
    }
    else if(250001<=ai && ai<=500000)
    {
        ai=ai-250000;
        Tax=0.05*ai;
        printf("Income Tax before Health and Educational Cess is %f \n", Tax);
    }
    else if(500001<=ai && ai<=1000000)
    {
        ai=ai-500000;
        Tax=0.2*ai;
        Tax=Tax+12500;
        printf("Income Tax before Health and Educational Cess is %f \n", Tax);
        
    }
    else if(1000001<=ai && ai<= 5000000)
    {
        ai = ai - 1000000;
        Tax = 0.3*ai;
        Tax = Tax+112500;
        printf("Income Tax before Health and Educational Cess is %f \n", Tax);
    }    
    else if(5000001<=ai && ai<=10000000)
    {
        ai=ai-1000000;
        Tax= 0.3*ai;
        Tax = Tax+112500;
        Surcharge = 0.1*Tax;
        Tax = Surcharge + Tax;
        printf("Income Tax before Health and Educational Cess is %f \n", Tax);
    }
    else{
        ai=ai-1000000;
        Tax= 0.3*ai;
        Tax = Tax+112500;
        Surcharge = 0.15*Tax;
        Tax = Surcharge + Tax;
       printf("Income Tax before Health and Educational Cess is %f \n", Tax);
        
    }
    
    Final_tax = Tax+0.04*Tax;
    printf("Final tax is %f", Final_tax);
    return 0;
}
