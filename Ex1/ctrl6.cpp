#include<iostream>
using namespace std;
double fact(int n)
{
  double m=1;
  for(int i=1;i<=n;i++)
    {
      m=m*i;
    }
  return m;
}
int main()
{
  int n=4;
  cout<<"The factorial of "<<n<<" is "<<fact(n)<<endl;

}
