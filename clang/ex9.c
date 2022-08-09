#include<stdio.h>
int main()
{
int a,b,n;
printf("Multiplication table" );
printf("\nenter the value of n=");
scanf("%d",&n);
for(n=1;n<=10;n++)
{

for(a=1;a<=10;a++)
{
    printf("\n%d\n",a*n);
}
printf("\n");
}
return 0;
}