#include<iostream>
#include<math.h>
#include<fstream>
#include<complex>

using namespace std;

double Zn_sq(complex<double>Z0,complex<double>c,int n)
{
  a=Z0*Z0+c;
  for(int i=1;i<n;i++)
   {
    a=a*a+c;
   }
  return norm(a);
}

double in_or_out(complex<double>c,int nmax)
{
  complex<double>Z0(0,0);
  int i=0;
  while(fabs(Z)<2&&i<nmax)
    {
      a=a*a+c;
      i++;
    }
  if(i=nmax)
   {
    return 0;
   } 
  else if(i!=nmax)
   {
    return i-1; 
   }
}

int main()
{
	complex<double>Z0(2,0);
	complex<double>c(0.25,0);
	int n=1000;
	ofstream EX2("mandel.txt");
	for(int i=1;i<n;i++)
	{
	EX2<<i<<" "<<Zn_sq(Z0,c,n)<<endl;
	}
}
