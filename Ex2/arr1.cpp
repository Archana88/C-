#include<iostream>
using namespace std;
void print_vect(double*a,int n)
{
  for(int i=0;i<n;i++)
    {
  cout<<a[i]<<endl;
    }
}
int main()
{
  double*a=new double(3);
  a[0]=1;
  a[1]=2;
  a[2]=3;
  print_vect(a,3);
}
