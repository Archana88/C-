#include<iostream>
using namespace std;
int triangle(int n)
{
  for(int i = 1; i < n; i++)
{
for(int a = 0; a < i; a++)
{
cout << "*";
}
cout << "\n";
} 
}
int main()
{
  int n=5;
  cout<<triangle(n)<<endl;
}
