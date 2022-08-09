#include<stdio.h>
int main()
{
  int a,b,c;
  int *p1,*p2,*p3;
  printf("enter the three numbers");
  scanf("%d %d %d",&a,&b,&c);
  p1=&a;
  p2=&b;
  p3=&c;

  if(*p1>=*p2&& *p1>=*p3)
  {
    printf("greater is p1 %d",*p1);

  }
  if(*p2>=*p1&& *p2>=*p3)
  {
    printf("greater is p2 %d",*p2);

  }
  if(*p3>=*p1&& *p3>=*p2)
  {
    printf("greater is   p3 %d",*p3);

  }
  return 0;
}
  
