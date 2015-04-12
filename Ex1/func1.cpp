#include<iostream>
using namespace std;
int square(int n)
{
  int n2=n*n;
  return n2;
}
int main()
{
 int a=5;
 double ans;
 ans=square(a);
 cout<<"\nThe square of "<<a<<" is "<<ans<<endl;
}


