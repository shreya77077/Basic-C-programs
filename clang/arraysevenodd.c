#include<stdio.h>
int main()
{
    int a[5],i,sum;
    float avg;
    
    
    for (i=0;i<5;i++)
    {
        printf("enter the value of a [%d]:",i);
        scanf("%d",&a[i]);
        

    }
    printf("\n Entered values are:\n");

    for(i=5;i>=0;i--)
    {
      printf(" %d \n",a[i]);
      
    }
    for(i=0;i<5;i++)
    {
    if(a[i]%2==0)
    {
        printf("\nIt is even no.");
    }
    else
    {
        printf("\nIt is odd no.");
    }
    }
    return 0;
}