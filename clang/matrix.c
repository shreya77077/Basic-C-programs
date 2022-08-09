#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter the value=");
            scanf("%d",&a[i][j]);
        }

    }
    
    
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d",a[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
              sum=sum+a[i];
            }
            
        }
        printf("sum=%d",sum);
    
    return 0;
}