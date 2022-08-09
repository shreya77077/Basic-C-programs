#include<stdio.h>
void arraymaxmin(int a[50],int n);
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
    arraymaxmin(a,n);
    return 0;

}
void arraymaxmin(int a[50],int n)
{
    int i,max,min;
    max=a[0];
    min=a[0];
     for(i=1;i<n;i++)
     {
        if( a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
        printf("\n max =%d",max);
        printf("\n min=%d",min);
     }
}
