#include<stdio.h>
void array(int a[50],int n);
int main()
{
    int a[50],i,n;

    printf("enter the no.of elements");
    scanf("%d",&n);
    printf("enter the value of array=\n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    array(a,n);
    

    return 0;

}
void array(int a[50],int n)
{
    int i;
    printf("\n Value of array=\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    printf("\n");

}