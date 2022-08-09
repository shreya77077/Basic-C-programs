#include<iostream>
using namespace std;
int factorial(int);
int main()
{
    int n,x,sum=0,a;
    cout<<"enter the value:";
    cin>>n;
    for(a=1;a<=n;a++)
    {
        x=factorial(a);
        sum=sum+x;
    }
    cout<<"sum of factorial upto"<<n<<"is"<<sum;
    return 0;
}
int factorial (int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}