#include<iostream>
using namespace std;


void f(int count)
{
  if(count==20) return; 
  cout<<count<< " ";
  count++;
  f(count);
}

int main()
{
  int count=0;
  f(count);
}








