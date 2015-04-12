#include<iostream>
using namespace std;
double absolute(double x)
{
  double y;
  if(x<0)
    y=-x;
  else 
	 y=x;
 return y;
}
int main()
{
  double a=-5;
  double ans;
  ans=absolute(a);
  cout<<"The absolute value of "<<a<<" is "<<ans<<endl;
}
