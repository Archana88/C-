#include<iostream>
#include<math.h>

using namespace std;

void print_matrix(double*a,int n,int m)
{
	for(int i=0;i<m;i++)
	  {
	for(int j=0;j<n;j++)
	   {
	    cout<<a[j+i*n]<<" ";
	   }
	  cout<<"\n";
	  }
}

int main()
{
  int n=2,m=3;
  double*a=new double(6);
  a[0]=1;
  a[1]=2;
  a[2]=3;
  a[3]=4;
  a[4]=5;
  a[5]=6;
  print_matrix(a,2,3);
}
