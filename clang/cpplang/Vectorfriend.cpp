#include<iostream>
using namespace std;
class VectorB;
class VectorA
{
    private:
    int a[5];
    public:
    
    void read()
    {
    int i;
    cout<<"enter the values of a\n";
    for(i=0;i<5;i++)
    {
        cin>>a;
    }
    }
    friend void sum(VectorA ob1,VectorB ob2);
};  
class VectorB
{
    int a[5];
    friend void sum(VectorA ob1,VectorB ob2);
    public:
    
    void read()
    {
    int i;
    cout<<"enter the value of vector\n";
    for(i=0;i<5;i++)
    {
        cin>>a;
    }
    }
} ;
void sum(VectorA ob1,VectorB ob2)
{
  int i;
  for(i=0;i<5;i++)
  {
      a[i]=ob1.a[i]+ob2.a[i]
  }

}
int main()
{
   VectorA ob1;
   VectorB ob2;
   ob1.read();
   ob2.read();
   sum(ob1,ob2);
   return 0;

} 
