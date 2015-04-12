#include<iostream>
using namespace std;
double area(int w,int l)
{
  double x=w*l;
  return x;
}
int main()
{
  int w=25;
  int l=3;
  int area1;
  area1=area(w,l);
  cout<<" The area is "<<area1<<endl;
}
