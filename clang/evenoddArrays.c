#include<stdio.h>
int main()
{
    int a[5],i;
    
    for (i=0;i<5;i++)
    {
        printf("enter the value of a [%d]:",i);
        scanf("%d",&a[i]);
        

    }
    for(i=0;i<5;i++)
    {
    if(a[i]%2==0)
    {
        printf("\nIt is even no.\n");
    }
    else
    {
        printf("\nIt is odd no.\n");
    }
    }
    return 0;
}