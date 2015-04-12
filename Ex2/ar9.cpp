#include<iostream>
#include<math.h>
using namespace std;
void soln(double a,double b,double c,double*root)
{
  double d;
  d=(pow(b,2)-(4*a*c));
  if(d>=0)
    {
  root[0]=((-b)+sqrt(d))/(2*a);
  root[1]=((-b)-sqrt(d))/(2*a);
  cout<<root[0]<<" "<<root[1]<<endl;
    }
  else
    {
root[0]=(-b)/(2*a);
root[1]=sqrt((4*a*c)-pow(b,2))/(2*a);
 cout<<root[0]<<"+i"<<root[1]<<endl;
 cout<<root[0]<<"-i"<<root[1]<<endl;
}
}

int main()
{
  double a=1,b=3,c=4;
  double*root=new double[2];
  soln(a,b,c,root);
 }
