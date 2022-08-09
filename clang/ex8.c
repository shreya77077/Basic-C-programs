#include<stdio.h>
int main()
{
    int un,amt,rs;
    printf("enter no.of units=");
    scanf("%d",&un);
    
    if (un<=100)
    {
        rs=3*un;
        printf("cost %d",rs);
    }
    
    else if(100<un<300)
    {
        rs=4*un;
        printf("cost=%d",rs);

    }
    else if (un>=300)
    {
        rs=5*un;
        printf("cost %d",rs);
    }

    

    
               
return 0;

    
    

}