#include<stdio.h>
int main()
{
  float num1,num2,c;
  char x;

  
  printf("\nSelect arithematic operation +,-,*,/");
  scanf("%c",&x);
  printf("Enter the no.1");
  scanf("%f",&num1);
  printf("\nEnter the no.2");
  scanf("%f",&num2);


  switch(x)
  {

  case '+':
  {
    c=num1+num2;
    printf("\nsum %0.2f",c);
    break;
  }

  case '-':
  {
    c=num1-num2;
    printf("\nsubtraction %0.2f",c);
    break;
  }
  case '*':
  {
    c=num1*num2;
    printf("\nMultiplication %0.2f",c);
    break;
  }
  case '/':
  {
    c=num1/num2;
    printf("\nDivision%0.2f",c);
    break;
  }
  default:
  {
    printf("wrong input");
  }
  }

  return 0;

}