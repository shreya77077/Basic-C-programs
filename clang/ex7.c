#include<stdio.h>
int main()
{
    
int a,c,n;
printf("enter the value of n=");
scanf("%d",&n);
a=1;
c=0;
for(n=1;n<=100;n++)
{
while(a<=n)
{
    if(n%a==0)
    {
        printf("%d",a);
        c=c+1;
    }
  a=a+1;
}
if (c<=2)
{
    printf("\n Prime no.");
}
else
{
    printf("\n Composite no.");
}
printf("\n");
}
    
    return 0;

}