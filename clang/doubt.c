#include<stdio.h>
int main()
{
    char ch;
    printf("enter character ");
    scanf("%c",&ch);
    ((ch>=65 && ch<=90)||(ch>=97 && ch<=122))?printf("True\n"):printf("False\n");
    return 0;
}