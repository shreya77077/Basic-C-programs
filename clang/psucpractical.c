#include<stdio.h>
#include<string.h>
int main()
{
  char a[20];
  int x,c=0;
  printf("Enter a string");
  gets(a);
  printf("entered string is %s",a);
  for(x=0;x<strlen(a);x++)
  {
    if(a[x]=='a'||a[x]=='e'||a[x]=='i'||a[x]=='o'||a[x]=='u'||a[x]=='A'||a[x]=='E'||a[x]=='I'||a[x]=='O'||a[x]=='U')
  {
  c=c+1;
  }
}
printf("\n number of vowels=%d",c);

  return 0;
}  










// #include<stdio.h>
// int main()
// { 
//   int a[5],i,max,min;
//   max=min=a[0];
  
//   for(i=0;i<5;i++)
//   {
//     printf("Enter the values");
//     scanf("%d",&a[i]);
//   }
//   for(i=0;i<5;i++)
//   {
//     printf("%d",a[i]);
//   }
//   for(i=0;i<5;i++)
//   {
//     //sum=sum+a[i];
//     if(a[i]>max)
//     {
//       max = a[i];
//     }
//     if(a[i]<min)
//     {
//       min=a[i];
//     }
//   }
//   //printf("\n sum=%d",sum);
//   //avg= (sum)/5;
//   //printf("\n avg=%0.2f",avg);
//   printf("\n max%d",max);
//   printf("\n min%d\n",min);
//   return 0;
// }



















