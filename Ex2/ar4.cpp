#include<iostream>
#include<math.h>
using namespace std;
void cross_prod(double*u,double*v,double*c)
{
  c[0]=(u[1]*v[2])-(u[2]*v[1]);
 c[1]=(u[2]*v[0])-(u[0]*v[2]);
 c[2]=(u[0]*v[1])-(u[1]*v[0]);
 cout<<c[0]<<"\n"<<c[1]<<"\n"<<c[2]<<endl;
}
int main()
{
double*c=new double(3);
double*u=new double(3);
  u[0]=sqrt(2);
  u[1]=sqrt(2);
  u[2]=0;
double*v=new double(3);
  v[0]=1;
  v[1]=sqrt(2);
  v[2]=-1;
  cross_prod(u,v,c);
}
