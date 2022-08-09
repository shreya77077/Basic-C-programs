#include<stdio.h>
void arrayevenodd(int a[50],int n);
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
    arrayevenodd(a,n);
}
void arrayevenodd(int a[50],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("\n even\n");
        }
        else
        printf("\n odd\n");
    }
    
}