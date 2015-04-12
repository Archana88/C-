#include<iostream>
#include<math.h>
#include<fstream>

using namespace std;

double f(double x)
{
	return x+cos(x);
}

double trap_integrate(double xmax,double xmin,int n,double(*f)(double))
{
	double dx=(xmax-xmin)/(n-1);
	double I=0;
	for(int i=0;i<n;i++)
	{
		double x1=xmin+i*dx;
		double x2=xmin+(i+1)*dx;
		I+=dx*(f(x1)+f(x2))/2;
	}
	return I;
}

int main()
{
	double x;
	int n=100;
	double xmin=0;
	double xmax=M_PI;
	double dx=(xmax-xmin)/(n-1);
	ofstream myfile1("integ.txt");
	for(int i=0;i<n;i++)
	{
		double x=xmin+i*dx;
		myfile1<<x<<" "<<f(x)<<endl;
	}	
	cout<<trap_integrate(xmax,xmin,n,f)<<endl;
}
