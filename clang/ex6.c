#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter the value of a\n");
    scanf("%d",&a);
    if (a>=90)
    printf("\n A+\n");
    else
    if (a>=80)
    printf("\n A\n");
    else
    if (a>=70)
    printf("\n B\n");
    else
    if (a>=60)
    printf("\n C\n");
    else
    if (a>=50)
    printf("\n D\n");
    else
    if (a>=40)
    printf("\n Fail \n");
    return 0;
    
}