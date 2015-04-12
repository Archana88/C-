#include<iostream>
#include<math.h>
using namespace std;
void unit_vector(double*u,int n,double*e)
{
 double c=0;
for(int i=0;i<n;i++)
  {
    c+=u[i]*u[i];
  }

for(int i=0;i<n;i++)
  {
    e[i]=u[i]/sqrt(c);
}
for(int i=0;i<n;i++)
    {
  cout<<e[i]<<endl;
    }
}
 

 int main()
 {
double*e=new double(3);
double*a=new double(3);
  a[0]=1;
  a[1]=2;
  a[2]=3;

  unit_vector(a,3,e);
 }
