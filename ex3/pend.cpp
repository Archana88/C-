#include<iostream>
#include<math.h>
#include<fstream>
#include<complex>

using namespace std;

void f(double *x,double *dx,double w0)
{
dx[0]=x[1];
dx[1]=-w0*w0*x[0];
}

void euler1d(void(*f)(double*,double*,double),double*x,double *xnew,int N,double h,double w0)
{
double *dx=new double[N];
f(x,dx,w0);
for(int i=0;i<N;i++)
{
  xnew[i]=x[i]+h*dx[i];
}
}

int main ()
  {
   int N=1;
   double xinit=M_PI/3;
   double *x=new double[N];
   double *xnew=new double[N];
   double vinit=0;
   double  tmin=0;
   double tmax=10;
   double Npt=100;
   double h=(tmax-tmin)/(Npt-1);
   double w0=1;
   x[0]=xinit;
   x[1]=vinit;
   ofstream file("pend.txt");
    for(int i=0;i<Npt;i++)
      {
        double t=tmin+i*h;
        euler1d(f,x,xnew,N,h,w0);
        file<<t<<" "<<xnew[0]<<" "<<xnew[1]<<" "<<xinit*cos(w0*t)<<endl;
         for(int j=0;j<N;j++)
         {
              x[j]=xnew[j];
         }
      }
  }

