#include<iostream>
using namespace std;
void factorial(int);
int main()
{
    int n;
    cout<<"Enter the value";
    cin>>n;
    factorial(n);
    return 0;

 
}
void factorial(int x)
{
    int f=1,i;
    for(i=1;i<=x;i++)
    {
        f=f*i;
    }
    cout<<"factorial="<<f<<"end";
}