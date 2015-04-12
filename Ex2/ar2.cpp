#include<iostream>
#include<math.h>
using namespace std;
double scal_prod(double*a,double*b,int n)
{
double c=0;
    for(int i=0;i<n;i++)
      {
    c=(a[i]*b[i])+c;
      }
return c;
}

int main()
{
double*a=new double(2);
  a[0]=sqrt(2);
  a[1]=sqrt(2);
double*b=new double(2);
  b[0]=sqrt(2);
  b[1]=-sqrt(2);
cout<<scal_prod(a,b,2)<<endl;
}
