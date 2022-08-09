#include<stdio.h>
int main()
{
    int r;
    float pi,area;
    pi=3.14;
    printf("Enter Radius");
    scanf("%d",&r);
    r=3;
    area=pi*r*r;
    printf("\nArea=%f ",area);
    return 0;
}