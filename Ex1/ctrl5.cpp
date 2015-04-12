#include<iostream>
using namespace std;
double power(double a,int n)
{
  double m=1;
  for(int i=1;i<=n;i++)
    {
      m=a*m;
    }
  return m;
}
int main()
{
  int a=2,n=3;
  cout<<"The power is "<<power(a,n)<<endl;
}
