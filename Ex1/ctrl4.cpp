#include<iostream>
using namespace std;

double sum(int n)
{
  int a=0;
  for(int i=1;i<=n;i++)
    {
      a=a+i;
    }
 return a;
}

int main()
{
  int n=5;
  cout<<"The sum is "<<sum(n)<<endl;
}
