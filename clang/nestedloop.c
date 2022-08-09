#include<stdio.h>
int main()
{
    int a[2],i,sum;
    float avg;
    
    sum=0;
    avg=0;
    for (i=0;i<3;i++)
    {
        printf("enter the value of a [%d]:",i);
        scanf("%d",&a[i]);
        

    }
    printf("\n Entered values are:\n");

    for(i=2;i>=0;i--)
    {
      printf(" %d \n",a[i]);
      
    }
    for(i=0;i<3;i++)
    {
        //printf("%d\n",a[i]);
        sum=sum+a[i];
    }
    printf("\n sum=%d\n",sum);

    
        avg=sum/3;
    
    printf("\n avg=%0.2f\n",avg);

    return 0;
}