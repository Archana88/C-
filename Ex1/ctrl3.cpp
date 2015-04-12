#include<iostream>
using namespace std;
int large(int a,int b)
{
  if(a>b)
    return a;
else
return b;
}
int main()
{
int a=20,b=50;
cout<<"The largest is "<<large(a,b)<<endl;
}
