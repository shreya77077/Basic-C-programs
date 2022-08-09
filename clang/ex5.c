#include<stdio.h>
int main()
{
    int Pr,Qyt,Amt;
    float disc,net ;
    printf("enter price  :  ");
    scanf("%d",&Pr);
    printf("\n enter qyt  :  ");
    scanf("%d",&Qyt);
    Amt=Pr*Qyt;
    printf("\n amount =%d Rs \n",Amt);
    if (Amt >=500)
    {
        disc=Amt*0.1;
    }
     
    else 
    {
        disc=0;
        printf("\n u do not get discount !!!!");
    }
     

    printf("\n discount = %.2f\n ",disc);
    net= Amt-disc;
    printf("\n Net Rs.  %.2f",net);
    return 0;
}