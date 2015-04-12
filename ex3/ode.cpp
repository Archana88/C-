#include<iostream>
#include<math.h>
#include<fstream>
#include<complex>

using namespace std;

double f(double x)
{
  return -x;
}

double euler_1d(double(*f)(double),double x,int h)
{
  return (x+h*f(x));
}


int main ()
{
   double  tmin=0;
   double tmax=2;
   double N=100;
   double h=(tmax-tmin)/(N-1);
   double x0=1;
   double x=x0;
   ofstream file("ode.txt");
    for(int i=0;i<N;i++)
      {
        double t=tmin+i*h;
        x=euler_1d(f,x,h);
        file<<t<<" "<<x<<" "<<exp(-t)<<endl;
      }
}

