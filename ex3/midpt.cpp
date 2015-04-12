#include<math.h>
#include<fstream>
#include<complex>
#include<iostream>

using namespace std;

void f(double*x,double*dx,double*param)
{
	double w0=param[0],gamma=param[1];
	dx[0]=x[1];
	dx[1]=-w0*w0*x[0]-gamma*x[1];
}

void midpt1step(void(*f)(double*,double*,double*),double*xinit,int N,double h,double *param)
{
	double* a1=new double[N];
	double* a2=new double[N];
	double* xnew=new double[N];
	f(xinit,a1,param);
	for(int i=0;i<N;i++)
		{
		  xnew[i]=xinit[i]+h/2*a1[i];
		  f(xnew,a2,param);	
	for(int i=0;i<N;i++)
		  xinit[i]+=h*a2[i];
                  
		}
}


int main ()
  {
   int N=3;
   double xinit=M_PI/3;
   double *x=new double[N];
   double *param=new double[2];
   double vinit=0;
   double  tmin=0;
   double tmax=10;
   double Npt=256;
   double h=(tmax-tmin)/(Npt-1);
   double gamma=0;
   double w0=1;
   param[0]=w0;
   param[1]=gamma;
   x[0]=xinit;
   x[1]=vinit;
   ofstream file("midpt.txt");
    for(int i=0;i<Npt;i++)
      {
        double t=tmin+i*h;
        midpt1step(f,x,N,h,param);
        file<<t<<" "<<x[0]<<" "<<x[1]<<" "<<xinit*cos(w0*t)<<endl;
        
      }
        double error=fabs(xinit*cos(w0*tmin+Npt*h)-x[N]);
        cout<<log(h)<<" "<<log(error)<<endl;
  }

