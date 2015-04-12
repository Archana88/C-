#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;
double fresnelperp(double n1,double n2,double x)
{
  return (n1*cos(x))-(n2*cos(x))/(n1*cos(x))+(n2*cos(x));
}

double fresnelpar(double n1,double n2,double x)
{
  return (n2*cos(x))-(n1*cos(x))/(n2*cos(x))+(n1*cos(x));
}

int main()
{
  double n1=1,n2=1.5;
int n=200;
double thetamin=0;
double thetamax=M_PI/2;
double dtheta=(thetamax-thetamin)/(n-1);
ofstream myfile1("fresnelperp.txt");
ofstream myfile2("fresnelpar.txt");
for(int i=0;i<n;i++)
{
double theta=thetamin+i*dtheta;
 myfile1<<x<<" "<<fresnelperp(n1,n2,theta)<<endl;
 myfile2<<x<<" "<<fresnelpar(n1,n2,theta)<<endl;
}
}
