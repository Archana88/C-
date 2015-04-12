#include<math.h>
#include<fstream>
#include<complex>
#include<iostream>

using namespace std;

void f(double *x,double *dx,double *param)
{
	double k=param[0],gamma=param[1],A=param[2];
	dx[0]=-k*x[0]*(1-x[1]);
	dx[1]=gamma*(A-(1+x[0])*x[1]);
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
   int N=2;
   double I0=exp(-0.5);
   double D0=0;
   double *x=new double[N];
   double *param=new double[3];
   double  tmin=0;
   double tmax=50;
   double Npt=256;
   double h=(tmax-tmin)/(Npt-1);
   double gamma=0.5;
   double k=1;
   double A=1.1;
   double wm=2.12*sqrt(2*gamma*k*(A-1));
   param[0]=k;
   param[1]=gamma;
   param[2]=A;
   x[0]=I0;
   x[1]=D0;
   ofstream file("classb.txt");
    for(int i=0;i<Npt;i++)
      {
        double t=tmin+i*h;
        midpt1step(f,x,N,h,param);
        file<<t<<" "<<x[0]<<" "<<x[1]<<" "<<I0*exp(-gamma*t/2)*cos(wm*t)<<endl;
      }
        double error=fabs(I0*exp(-gamma*tmin/2)*cos(wm*tmin+Npt*h)-x[N]);
        cout<<log(h)<<" "<<log(error)<<endl;
  }

