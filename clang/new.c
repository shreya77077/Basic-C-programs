#include<stdio.h>
void no(int);
int main()
{
    int n;
    printf("enter value\n");
    scanf("%d",&n);
    no(n);
    
    
    return 0;
}
void no(int n)
{
    int a,sum=0;
    for(a=1;a<=n;a++)
    {
        printf("\n%d",a);
        sum=sum+a;
        

    }
    
}
