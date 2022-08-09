#include<stdio.h>
int main()
{
    int sal,pf,hr,totalsal;
    printf("  Enter salary  Rs   :  ");
    scanf("%d",&sal);
    pf= sal*0.1;
    printf("\n pf Rs %d",pf);
    if (sal>= 15000)
    {
        hr=5000;
    }
    else
    {
        hr=3000;
    }
    printf(" \n  House rent Rs %d\n",hr);
    totalsal= sal+pf+hr;
    printf(" \n Total Salary of an employ  =  Rs %d\n\n5",totalsal);
    return 0;
    
}