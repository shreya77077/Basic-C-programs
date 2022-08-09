#include<stdio.h>
int main()
{
    int a[5],i,last,first;
    for(i=0;i<5;i++)
    {
        printf("enter the value of a [%d]:",i);
        scanf("%d",&a[i]);
    }
    last=a[0];
    first=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>last)
        last=a[i]
        if (a[i]<first)
        first=a[i]
    }
    printf("last%d",last);
    printf("first%d",first);


    
    
    return 0;

}